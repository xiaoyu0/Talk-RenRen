#include "UserBuffer.h"
#include "utils/MyLogger.h"
#include "bosh/BoshServer.h"
#include "constant/MessageType.h"
#include    "talk/TalkServer.h"

using namespace std;
using namespace mtalk::utils;
using namespace mtalk::talk;
using namespace mtalk::bosh;
using namespace mtalk::constant;

namespace mtalk{
namespace talk{

	UserBuffer::UserBuffer(long userId):
		userId_(userId){
		LOG_DEBUG("UserBuffer::UserBuffer => new user buffer : uid = " << userId);
	}
	
	UserBuffer::~UserBuffer(){
		LOG_DEBUG("UserBuffer::~UserBuffer => Destroy user buffer : uid = " << userId_);
	}

	void UserBuffer::addSession(const string& sessionId){
		sessionList_.push_back(sessionId);
	}

	void UserBuffer::addNewSession(const string& sessionId){
		sessionNewList_.push_back(sessionId);
	}

	string UserBuffer::addSession(const SessionPtr sessionPtr){
		string sessionId = sessionPtr->getSessionId();
		int clientType = sessionPtr->getSessionType();
		//私信3.0保证单点登录
		if(clientType == 3){

			if(!sessionNewList_.empty()){
					string oldSessionId = sessionNewList_.front();	
				//	talk::SessionPtr sessionPtr = MY_INSTANCE(BoshServer).getSession(oldSessionId); 
				//	stringstream os;
				//	os<<"<message type='alert'>";
				//	os<<"<action type='terminate' />";
				//	os<<"<body type='text'>";
				//	os<<"<text>";
				//	if(sessionPtr->getLang() == "en_US"){
				//			os<<"You have to terminate ,because your account login in another place";
				//	}else{
				//			os<<"你的帐号在另一终端登录，被强行退出。";
				//	}
				//	os<<"</text>";
				//	os<<"</body>";
				//	os<<"</message>";
				//	sessionPtr->deliver(sessionPtr->getUserId(), os.str(), MessageType::CHAT, 0);
				//	MY_INSTANCE(TalkServer).getSessionManager()->delSession(oldSessionId); 
				clearNewSession();
				addNewSession(sessionId);
				return oldSessionId; 
			}
			addNewSession(sessionId);
			return "" ;

		} else {
			addSession(sessionId);
			return "" ;

		}
	}


	void UserBuffer::clearNewSession(){

		sessionNewList_.clear();

	}
	list<string> UserBuffer::getNewSessionIdList(){

		return sessionNewList_;

	}

	list<string> UserBuffer::getSessionIdList(){
		list<std::string> sessionIdList;
		for (list<std::string>::iterator it = sessionList_.begin(); it != sessionList_.end(); it++ ){
			sessionIdList.push_back(*it);
		}
		for (list<std::string>::iterator it = sessionNewList_.begin(); it != sessionNewList_.end(); it++ ){
			sessionIdList.push_back(*it);
		}
		return sessionIdList;
	}

	bool UserBuffer::clear(const SessionPtr sessionPtr){
		if(sessionList_.empty() && sessionNewList_.empty())
			return true;

		//talk::SessionPtr sessionPtr = MY_INSTANCE(BoshServer).getSession(sessionId); 
		int clientType=sessionPtr->getSessionType();
		string sessionId = sessionPtr->getSessionId();

		if(clientType==3){
			if(sessionNewList_.front() == sessionId){

				sessionNewList_.clear();//清除3.0的session
			} 
		}else {
			for(list<string>::iterator it = sessionList_.begin(); it != sessionList_.end() ; ){
				if((*it) == sessionId){
					sessionList_.erase(it++);//清除2.0以下的session
				}
				else {it++;}
			}
		}

		if(sessionList_.empty() && sessionNewList_.empty()){
				return true ;
		}else{
				return false ;
		}
	}


	void UserBuffer::addType(int type){
		if (onlineTypeMap_.count(type)){
			onlineTypeMap_[type]++;
		}else{
			onlineTypeMap_.insert(pair<int, int>(type, 1));		
		}
		LOG_DEBUG("UserBuffer::addType ==> type = " << type << "  type num = " << onlineTypeMap_[type]);
	}

	bool UserBuffer::delType(int type){
		LOG_DEBUG("UserBuffer::delType ==> type = " << type);
		if (onlineTypeMap_.count(type)){
			if (--(onlineTypeMap_[type]) == 0){
				onlineTypeMap_.erase(type);
				return true;	
			}
			return false;
		}
		return true;
	}

	bool UserBuffer::hasOnlineType(){
		return !onlineTypeMap_.empty();
	}

	bool UserBuffer::hasOnlineType(int type){
		if (onlineTypeMap_.count(type)){
			return true;
		}
		return false;
	}





	void  UserBuffer::sendToOfflineMessageMap(long time , std::string msg){
		WriteLock lock(offlineMessageMapMutex_);	
		offlineMessageMap_.insert(std::multimap<long ,std::string>::value_type(time,msg));
	}
	vector<string> UserBuffer::getOfflineMessageSequence(){
		vector<string> msgSequence;
		WriteLock lock(offlineMessageMapMutex_);
		multimap<long , string>::iterator it = offlineMessageMap_.begin();
		for(; it!= offlineMessageMap_.end(); it++){
			msgSequence.push_back(it->second);
		}
		LOG_DEBUG("UserBuffer::getOfflineMessageSequence size =" << offlineMessageMap_.size() );
		offlineMessageMap_.clear();
		return msgSequence;
	}

};
};
