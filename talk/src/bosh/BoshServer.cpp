#include <sstream>
#include <iostream>
#include <algorithm>
#include <boost/lexical_cast.hpp>
#include <boost/shared_ptr.hpp>
#include "BoshServer.h"
#include "utils/md5.h"
#include "BoshErrorBuilder.h"
#include "constant/ResultCode.h"
#include "constant/AuthType.h"
#include "utils/MyLock.h"
#include "utils/MyLogger.h" 
#include "xmpp/JID.h" 
#include "talk/TalkServer.h"
#include "proxy/ProxyRegister.h"
#include  "proxy/MsgWaitServiceProxy.h"
#include <vector>
#include <time.h>
#include "utils/TimeUtils.h"

using namespace std;
using namespace pugi;
using namespace mtalk::constant;
using namespace mtalk::utils;
using namespace mtalk::talk;
using namespace mtalk::proxy;

namespace mtalk{
namespace bosh{

	BoshServer::BoshServer() :
		isStarted_(false){
		LOG_INFO("BoshServer::BoshServer => created");
	}

	SessionPtr BoshServer::getSession(const string& sessionId){
		return sessionManagerPtr_->getSession(sessionId);
	}

	void BoshServer::start(){
		LOG_INFO("BoshServer::start => started");
	}

	void BoshServer::stop(){
		LOG_INFO("BoshServer::stop => stoped");
	}

	void BoshServer::notifyEndpointPause(){
		endpointServiceProxyPtr_->pause();
		LOG_INFO("BoshServer::notifyEndpointPause => finish");
	}

	void BoshServer::notifyEndpointResume(){
		endpointServiceProxyPtr_->resume();
		LOG_INFO("BoshServer::notifyEndpointResume => finish");
	}

	bool BoshServer::init(const int serverIndex, const int serverCount, const string& domain){
		serverIndex_ = serverIndex;
		serverCount_ = serverCount;
		domain_ = domain;
		endpointServiceProxyPtr_ = MY_INSTANCE(ProxyRegister).getProxy<EndpointServiceProxy>("endpointProxy");
		LOG_INFO("BoshServer::init => init finish");
		return true;
	}

	com::xiaonei::wap::talk::Result BoshServer::updateSession(long connectionId, const string& msg){
		LOG_DEBUG("BoshServer::updateSession => begin : cid = " << connectionId << " msg = " << msg);
		xml_document doc;
		doc.load(msg.c_str());
		xml_node body = doc.first_child();
		string sessionId = body.attribute("sid").value();
		
		com::xiaonei::wap::talk::Result result;
		result.code = ResultCode::OK;
		boost::shared_ptr<bosh::BoshSession> sessionPtr =boost::dynamic_pointer_cast<bosh::BoshSession>( sessionManagerPtr_->getSession(sessionId));

		long rid = 0;
		try{
			rid = boost::lexical_cast<long>(body.attribute("rid").value());
		} catch(boost::bad_lexical_cast &){
		}
		

		if(!sessionPtr){
			result.code = ResultCode::SESSION_NOT_FOUND;
			result.msg = BoshErrorBuilder::itemNotFound("session not found");
			LOG_TRACE_ACTION( result.code<<" | "<<"00000000"<<" | "<<sessionId<<" | "<<"00000000"<<" | "<<rid);
			return result;
		}
		
		//对session加锁，保证同时只有一个线程在更新session
		ScopedLock lock(sessionPtr->selfMutex);

		result = sessionPtr->checkRid(rid);
		if(result.code != ResultCode::OK){
			//rid异常或者取到旧消息
			if(result.code == ResultCode::RID_TOO_LARGE){
		LOG_TRACE_ACTION( result.code<<" | "<<sessionPtr->getUserId()<<" | "<<sessionPtr->getSessionId()<<" | "<<sessionPtr->getCAppId()<<" | "<<rid);
				result.code=ResultCode::OK;
				return result;
			//	sessionPtr->close();
			}
		LOG_TRACE_ACTION( result.code<<" | "<<sessionPtr->getUserId()<<" | "<<sessionPtr->getSessionId()<<" | "<<sessionPtr->getCAppId()<<" | "<<rid);
			return result;
		}
		
		if(!sessionPtr->getAuth()){

			result = checkAuth(sessionPtr, body);
			if(result.code == ResultCode::AUTH_FAILURE){
				LOG_TRACE_ACTION( result.code<<" | "<<sessionPtr->getUserId()<<" | "<<sessionPtr->getSessionId()<<" | "<<sessionPtr->getCAppId()<<" | "<<rid);
				return result;
			}
		}

		if(result.code == ResultCode::OK && body.first_child()){
			result = requestHandlerPtr_->process(sessionPtr, body);
			LOG_TRACE_ACTION(result.code<<" | "<<sessionPtr->getUserId()<<" | "<<sessionPtr->getSessionId()<<" | "<<sessionPtr->getCAppId()<<" | "<<rid<<" | "<< msg);
		}
		if(result.code == ResultCode::AUTH_SUCCESS){
			for(size_t i = 0; i < sessionListeners_.size(); i++){
					sessionPtr->addSessionListener(sessionListeners_[i]);
					sessionListeners_[i]->sessionCreated(sessionPtr, body);
			}
			MilliTimer  getOfflineTime;
			MY_INSTANCE(TalkServer).notifyPushOfflineMsg(sessionPtr);	
			LOG_TIME(" BoshServer::updateSessionSuccess&getOfflineMsg |" << getOfflineTime.elapsed() );
		}

		if(result.code == ResultCode::OK){
			result = sessionPtr->updateConnection(rid, connectionId);
		} else {
			result.msg = sessionPtr->buildResponse(rid, result);
		}

		LOG_TRACE_ACTION( result.code<<" | "<<sessionPtr->getUserId()<<" | "<<sessionPtr->getSessionId()<<" | "<<sessionPtr->getCAppId()<<" | "<<rid);
		return result;
	}

	com::xiaonei::wap::talk::Result BoshServer::checkAuth(BoshSessionPtr sessionPtr, const pugi::xml_node body){
		com::xiaonei::wap::talk::Result result;
		result.code = ResultCode::OK;
		if(sessionPtr->getAuth()){
			return result;
		}
		for(xml_node node = body.first_child(); node; node = node.next_sibling()){
			if(strcmp(node.name(), "response") == 0){
				string md5str = node.child_value();
				if(md5str.empty()){
					LOG_INFO("response empty id = " << sessionPtr->getUserId());
					result.code = ResultCode::AUTH_FAILURE;
					result.msg = BoshErrorBuilder::authCheckFailure();
					sessionPtr->close();
					break;
				}
				//获取authType
				string authType = node.attribute("mechanism").value();
				if(strcmp(authType.c_str(), "MAS_SECRET_KEY") == 0) {
					sessionPtr->setAuthType(AuthType::MAS_SECRET_KEY); 
				}
				else {
					sessionPtr->setAuthType(AuthType::SECRET_KEY); 
				}

				string secretKey;				
				
				if(sessionPtr->getAuthType() == AuthType::MAS_SECRET_KEY) {
				 	secretKey = ttClient4MASPtr_->get(sessionPtr->getUserId());
				}
				else {
					//默认为转换过协议，取人人id来认证
					secretKey = ttClientPtr_->get(sessionPtr->getRenRenId());
				}

				LOG_DEBUG("BoshServer::checkAuth => authType = " << sessionPtr->getAuthType() << " prefix = " << sessionPtr->getAuthPrefix() << ", secretKey = " << secretKey 
							<< ", UserId = " << sessionPtr->getUserId() << ", RenRenId = " << sessionPtr->getRenRenId());
			
				if(secretKey.empty()){
					result.code = ResultCode::AUTH_FAILURE;
					result.msg = BoshErrorBuilder::authCheckFailure();
					sessionPtr->close();
					break;
				}
				string sourceStr = sessionPtr->getAuthPrefix() + secretKey;
				CMD5 md5;
				md5.GenerateMD5((unsigned char*)(sourceStr.c_str()), sourceStr.length());
				if( md5str == md5.ToString()){
					sessionPtr->setAuth(true);
					result.code = ResultCode::AUTH_SUCCESS;
					result.msg = "<success/>";
				} else {
				LOG_INFO("BoshServer::checkAuth => authType = " << sessionPtr->getAuthType() << " prefix = " << sessionPtr->getAuthPrefix() << ", secretKey = " << secretKey
				            << ", UserId = " << sessionPtr->getUserId() << ", RenRenId = " << sessionPtr->getRenRenId() <<"clientResponse = "<< md5str);
					result.code = ResultCode::AUTH_FAILURE;
					result.msg = BoshErrorBuilder::authCheckFailure();
					sessionPtr->close();
				}
				break;
			}
		}
		if(!sessionPtr->getAuth() && result.code != ResultCode::AUTH_FAILURE){
			result.code = ResultCode::AUTH_CHECK;
			ostringstream os;
			os << "<auth>" << sessionPtr->getAuthPrefix() << "</auth>";
			os << "<mechanisms xmlns='urn:ietf:params:xml:ns:xmpp-sasl'>";
			os << "<mechanism>SECRET_KEY</mechanism>" ;
			os << "<mechanism>MAS_SECRET_KEY</mechanism>" ;
			os << "</mechanisms>";
			result.msg = os.str();
		LOG_DEBUG("BoshServer::checkAuth => success  userId = "<<sessionPtr->getUserId());
		}
		return result;
	}

	com::xiaonei::wap::talk::Result BoshServer::sendMessage(long connectionId, const string& msg){
		LOG_DEBUG("BoshServer::sendMessage  => begin : cid = " << connectionId << " msg = " << msg);
		xml_document doc;
		doc.load(msg.c_str());
		xml_node body = doc.first_child();
		string sessionId = body.attribute("sid").value();
		
		com::xiaonei::wap::talk::Result result;
		result.code = ResultCode::OK;
		boost::shared_ptr<bosh::BoshSession> sessionPtr =boost::dynamic_pointer_cast<bosh::BoshSession>( sessionManagerPtr_->getSession(sessionId));
		if(!sessionPtr){
			result.code = ResultCode::SESSION_NOT_FOUND;
			result.msg = BoshErrorBuilder::itemNotFound("session not found");
			return result;
		} else if(!sessionPtr->getAuth()){
			result.code = ResultCode::AUTH_FORBIDDEN;
			result.msg = "<body><failure>auth forbidden</failure></body>";
			return result;
		}

		if(body.first_child()){
			result = requestHandlerPtr_->process(sessionPtr, body);
		} else {
			result.code = ResultCode::SEND_MSG_NOT_FOUND;
			result.msg = BoshErrorBuilder::itemNotFound("body has no child");
			return result;
		}
		if(result.code == ResultCode::SESSION_CLOSE){
			//client request close session
			if(result.msg.empty()){
				result.msg = "<body type='terminate'/>";
			} else {
				ostringstream os;
				os << "<body type='terminate'>" << result.msg << "</body>";
				result.msg = os.str();
			}
		} else if(result.code == ResultCode::OK){
			//process success without response
			result.code = ResultCode::SEND_SUCCESS;
			result.msg = "<body><success/></body>";
		} else{
			//process succes with response
			ostringstream os;
			os << "<body>" << result.msg << "</body>";
			result.msg = os.str();
		}

		return result;
	}
		
	com::xiaonei::wap::talk::Result BoshServer::createSession(long connectionId, const string& msg){
		LOG_DEBUG("BoshServer::createSession => begin : cid = " << connectionId << " msg = " << msg);
		xml_document doc;
		doc.load(msg.c_str());
		xml_node body = doc.first_child();
		
		com::xiaonei::wap::talk::Result result;
		result.code = ResultCode::OK;
		xml_attribute fromAttr = body.attribute("from");

		if(!fromAttr){
			result.code = ResultCode::FROM_NOT_FOUND;
			result.msg = BoshErrorBuilder::itemNotFound("from not found");
			return result;
		}

		long rid = 0;
		try{
			rid = boost::lexical_cast<long>(body.attribute("rid").value());
		} catch(boost::bad_lexical_cast &){
		}


		BoshSessionPtr sessionPtr = getNewSession(body);
		sessionPtr->setLastRequestId(rid);
		result.code = ResultCode::SESSION_CREATE_SUCCESS;
		result.msg = newSessionResponse(sessionPtr);
		LOG_TRACE_ACTION(" createSession | "<<sessionPtr->getUserId()<<" | "<<sessionPtr->getSessionId()<<" | "<<sessionPtr->getCAppId()<<" | "<<rid);
		return result;
	}

	BoshSessionPtr BoshServer::getNewSession(const pugi::xml_node& body){
		string fromStr = body.attribute("from").value();
		xmpp::JID from(fromStr);
		BoshSessionPtr sessionPtr = sessionManagerPtr_->getNewSession<bosh::BoshSession>(from.getUserId());
		string lang = body.attribute("xml:lang").value();
		lang = lang.length() < 5 ? "zh_CN" : lang;
		sessionPtr->setLang(lang);

		int hold = body.attribute("hold").as_int();
		sessionPtr->setHold(hold == 0 ? 1 : hold);

		
		sessionPtr->setMaxPause(30);
		sessionPtr->setMaxRequests(2);

		int cAppId = body.attribute("c_appid").as_int();
		sessionPtr->setCAppId(cAppId);
		int wait = body.attribute("wait").as_int();
		sessionPtr->setWait(min(wait, WAIT_TIME));
		int cFromId = body.attribute("c_fromid").as_int();
		sessionPtr->setCFromId(cFromId);

		string cVersion = body.attribute("c_version").value();
		sessionPtr->setCVersion(cVersion);

		long renrenId = body.attribute("renren_id").as_int();
		sessionPtr->setRenRenId(renrenId);
	
		int v = body.attribute("v").as_int();

		if(v == 8 && (strcmp(cVersion.c_str(), "2.1.1") == 0 || strcmp(cVersion.c_str(), "2.1.2") == 0) && cAppId == 169486){
			sessionPtr->setV(12);
		}else{
			sessionPtr->setV(v == 0 ? 1 : v);
		}

		string onlineDeploy = body.attribute("online_deploy").value();

		if(onlineDeploy == "true"){
			sessionPtr->setOnlineDeploy(true);
		} else {
			sessionPtr->setOnlineDeploy(false);
		}

		return sessionPtr;
	}

	string BoshServer::newSessionResponse(BoshSessionPtr sessionPtr){
		ostringstream os;
		os << "<body wait='" << sessionPtr->getWait() << "'"
			<< " inactivity='" << sessionPtr->getInactivityTimeout() << "'"
			<< " request='" << sessionPtr->getMaxRequests() << "'"
			<< " hold='" << sessionPtr->getHold() << "'"
			<< " sid='" << sessionPtr->getSessionId() << "'"
			<< " ack='" << sessionPtr->getLastRequestId() << "'"
			<< " maxpause='" << sessionPtr->getMaxPause() << "'"
			<< " from='" << domain_ << "'"
			<< " xmpp:version='1.0' authid='" << sessionPtr->getSessionId() << "'"
			<< " xmlns:xmpp='urn:xmpp:xbosh' xmlns:stream='http://etherx.jabber.org/streams'>"
			<< "<auth>" << sessionPtr->getAuthPrefix() << "</auth>"
			<< "<mechanisms xmlns='urn:ietf:params:xml:ns:xmpp-sasl'>"
			<< "<mechanism>SECRET_KEY</mechanism>"
			<< "<mechanism>MAS_SECRET_KEY</mechanism>"
			<< "</mechanisms>"
			<< "</body>";
		return os.str();
	}

	void BoshServer::deliverMsg(const long connectionId, const string& msg){
		LOG_DEBUG("BoshServer::deliverMsg => begin : cid = " << connectionId << " msg = " << msg);
		
		endpointServiceProxyPtr_->deliverMsg(connectionId, msg);
	}

	void BoshServer::addSessionListener(boost::shared_ptr<mtalk::talk::SessionListener> listenerPtr){
		sessionListeners_.push_back(listenerPtr);
	}

	void BoshServer::updateClusterInfo(int serverIndex, int serverCount){
		serverIndex_ = serverIndex;
		serverCount_ = serverCount;
	}
	
	void BoshServer::pushOfflineMessage(BoshSessionPtr session ,int supportType , int ClientType){
	}
};
};
