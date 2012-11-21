#include <ctime>
#include <limits.h>
#include <iostream>
#include <sstream>
#include <string>
#include <boost/lexical_cast.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>
#include "BoshSession.h"
#include "BoshServer.h"
#include "talk/SessionListener.h"
#include "BoshErrorBuilder.h"
#include "constant/ResultCode.h"
#include "utils/MyLogger.h"
#include "utils/MyLock.h"
#include "Config.h"
#include "utils/I18nTranslate.h"

#ifdef MSG_ACK_TIME_LOG
	#include <ctime>
#endif

using namespace std;
using namespace mtalk::constant;
using namespace mtalk::utils;
using namespace mtalk::utils::i18n;
using namespace mtalk::talk;

namespace mtalk{
namespace bosh{

	BoshSession::BoshSession(string sessionId)
		:Session(sessionId),
		hold_(1),
		isHolding_(false),
		inactivityTimeout_(1*60)
	{
		lastActivity_ = std::time(NULL);	

		LOG_DEBUG("BoshSession::BoshSession => Create BoshSession: sid : " << getSessionId() );
	}

	BoshSession::~BoshSession(){
		LOG_DEBUG("BoshSession::~BoshSession => Destroy session : sid = " << getSessionId() << " , uid = " << getUserId());
	}

	com::xiaonei::wap::talk::Result BoshSession::checkRid(const long rid){
			

		com::xiaonei::wap::talk::Result result;
		result.code = ResultCode::OK;
		if(rid == lastRequestId_ + hold_){
			if(!getAuth()){
				return result;
			}
			MessagePtr mp;
			//正常请求, 清除缓存中已经确认的消息
			{
				ScopedLock lock(sentMutex_);
				for(size_t i = 0; i < sentQueue_.size(); i++){
					mp = sentQueue_.front();
					if(mp->rid <= rid)
						sentQueue_.pop_front();
					//通知消息已经送达
					//std::vector<boost::shared_ptr<SessionListener> >& sessionListeners_=getSessionListeners();
					for(size_t i = 0; i < sessionListeners_.size(); i++){
						sessionListeners_[i]->messageSent(getUserId(), mp->nodeList , getSessionType());

					}
				}
			}
			//检查pending 队列，确定是否有待发送的消息。
			mp = makePendingMsg(rid);
			if(mp){
				holdRequestId_ = rid;
				result.code = ResultCode::PENDING_MSG_FOUND;
				result.msg = packageMsg(mp);
				lastRequestId_ = rid;
				{
					ScopedLock lock(sentMutex_);
					sentQueue_.push_back(mp);
				}
			}
			lastActivity_ = std::time(NULL);
			return result;
		} else if (rid <= lastRequestId_){
			MessagePtr mp;
			//收到重复请求
			{
				ScopedLock lock(sentMutex_);
				for(size_t i = 0; i < sentQueue_.size(); i++){
					mp = sentQueue_.front();
					if(mp->rid < rid){
						//清楚缓存中已经确认的消息
						sentQueue_.pop_front();
						//通知消息已经送达
					//	std::vector<boost::shared_ptr<SessionListener> >& sessionListeners_=getSessionListeners();
						for(size_t i = 0; i < sessionListeners_.size(); i++){
							sessionListeners_[i]->messageSent(getUserId(), mp->nodeList , getSessionType());
						}
					} else if (mp->rid == rid){
						//找到缓存的旧消息
						break;
					} else {
						//缓存已清除，返回异常
						break;
					}
				}
			}
			if(mp){
				//找到缓存旧消息，直接返回
				result.code = ResultCode::OLD_MSG_FOUND;
				result.msg = packageMsg(mp);
			} else {
				//未找到旧消息，返回
				result.code = ResultCode::OLD_MSG_NOT_FOUND;
				result.msg = BoshErrorBuilder::itemNotFound("rid is too small and old msg not found", false);
			}
			return result;
		} else {
			//rid 过大，可能是异常攻击
			result.code = ResultCode::RID_TOO_LARGE;
			result.msg = BoshErrorBuilder::itemNotFound("rid is too large");
			return result;
		}
	}

	com::xiaonei::wap::talk::Result BoshSession::updateConnection(const long rid, const long connectionId){
		com::xiaonei::wap::talk::Result result;
		result.code = ResultCode::OK;
		if(isHolding_ && holdRequestId_ == rid){
			responseEmpty();
			result.code = ResultCode::SAME_RID;
			ostringstream os;
			os << "<body ";
			os << " ack='" << rid << "'/>";
			result.msg = os.str();
		} else {
			setConnectionId(connectionId);
			isHolding_ = true;
			holdRequestId_ = rid;
		}
		return result;
	}

	string BoshSession::buildResponse(const long rid, const com::xiaonei::wap::talk::Result& result){
		ostringstream os;
		os << "<body ack='" << rid << "' >" 
			<< result.msg << "</body>";
		lastRequestId_ = rid;
		return os.str();
	}


	bool BoshSession::deliver(const long fromId, const string message, const MessageType::Type type, const long mid) { 
        return deliver(fromId, message, (int)type, mid);
    }

	bool BoshSession::deliver(const long fromId, const string message, const int type, const long mid){

        LOG_W(fromId, "BoshSession::deliver", type, message);

		// 国际化
		std::string i18nStr(message);
		if (pack(getLang(), i18nStr)){
            LOG_ERROR("BoshSession::response => I18nTranslate error msg=["<<message.c_str()<<"]");
            LOG_W(fromId, "I18n::pack", type, "error");
            return false;
        }

		MsgNodePtr nodePtr(new MsgNode());
		nodePtr->from = fromId;
		nodePtr->mid = mid;
		nodePtr->msg = i18nStr;
		nodePtr->type = type;
#ifdef MSG_ACK_TIME_LOG
		nodePtr->time = time(NULL);
		nodePtr->appId = cAppId_;
		nodePtr->fromId = cFromId_;
		nodePtr->version = cVersion_;
#endif
		{
			ScopedLock lock(pendingMutex_);
			pendingQueue_.push_back(nodePtr);
		}
		return checkAndResponse();
	}

	bool BoshSession::checkAndResponse(){
		if(!isHolding_)
			return false;
		MessagePtr mp = makePendingMsg(holdRequestId_);
		if(mp){
			string msgStr = packageMsg(mp);
			{
				ScopedLock lock(sentMutex_);
				sentQueue_.push_back(mp);
			}
			return response(msgStr);
		}
		return false;
	}

	inline MessagePtr BoshSession::makePendingMsg(long rid){
		MessagePtr mp;
		{
			ScopedLock lock(pendingMutex_);
			if(!pendingQueue_.empty()){
				for(deque<MsgNodePtr>::iterator it = pendingQueue_.begin(); it != pendingQueue_.end(); it++){

					if(!mp){
						mp = boost::make_shared<Message>();
						mp->rid = rid;
					}

					mp->nodeList.push_back(*it);
				}
				pendingQueue_.clear();
			} else {
				return mp;
			}
		}
		return mp;
	}

	inline string BoshSession::packageMsg(MessagePtr mp){
		ostringstream os;
		os << "<body ";
		os << " ack='" << mp->rid << "'>";
		os << mp->getAllMsg() << "</body>";
		if(mp->rid > lastRequestId_)
			lastRequestId_ = mp->rid;
		return os.str();
	}

	bool BoshSession::response(const string& message){
		LOG_DEBUG("BoshSession::response =>  begin : message = " << message);
		if(!isHolding_)
			return false;
		isHolding_ = false;
		lastActivity_ = std::time(NULL);
		lastRequestId_ = holdRequestId_;

		MY_INSTANCE(BoshServer).deliverMsg(getConnectionId(), message);
		return true;
	}

	void BoshSession::responseEmpty(){
		if(isHolding_){
			ostringstream os;
			os << "<body ";
			os << " ack='" << holdRequestId_ << "'/>";
			MessagePtr mp(new Message());
			mp->rid = holdRequestId_;
			{
				ScopedLock lock(sentMutex_);
				sentQueue_.push_back(mp);
			}
			LOG_DEBUG("BoshSession::responseEmpty= resp");
			response(os.str());
		}
	}

	void  BoshSession::close(bool notifyManagerDelete){
		responseEmpty();
		for(size_t i = 0; i < sessionListeners_.size(); i++){
			sessionListeners_[i]->sessionClosed(shared_from_this());
		}
		if(notifyManagerDelete){
			managerListenerPtr_->sessionClosed(shared_from_this());
		}
	}	

	bool  BoshSession::check(){
		time_t now = time(NULL);

		if(isHolding()){
			//检查等待期超时（wait）
			if(now - getLastActivity() > getWait()){
				ScopedLock lock(selfMutex);
				try {
					responseEmpty();
					LOG_TRACE_ACTION(" responseEmptyPackage | "<<getUserId()<<" | "<<sessionId_<<"|"<<getCAppId()<<" | "<<holdRequestId_)
						return 0;
				} catch (const Ice::Exception& e){
					LOG_ERROR("BoshSession::check => response empty error : what = " << e.what() << "\n" 
							<< " userId = " << getUserId()
							<< " sessionId = " << getSessionId()
							<< " connectionId = " << getConnectionId());
					return 0;
				}
			}
			return 0;
		} else {
			//检查不活跃期超时(activity)
			if(now - getLastActivity() > getInactivityTimeout()){
				LOG_TRACE_ACTION(" boshSessionTimeOut | "<<getUserId()<<" | "<<sessionId_<<"|"<<getCAppId()<<" | "<<lastRequestId_)
					close(false);
					return 1;

			} else {
				return 0;
			}
		}

	}
};
};
