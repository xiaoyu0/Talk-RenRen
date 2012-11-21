#include <sstream>
#include <iostream> 
#include <ctime>
#include <algorithm>
#include <boost/lexical_cast.hpp>
#include <boost/shared_ptr.hpp>
#include "SocketServer.h"
#include "utils/md5.h"
#include "bosh/BoshErrorBuilder.h"
#include "constant/ResultCode.h"
#include "constant/AuthType.h"
#include "utils/MyLock.h"
#include "utils/MyLogger.h"
#include "xmpp/JID.h"
#include "talk/TalkServer.h"
#include "utils/Singleton.h"
#include "utils/Base64Util.h"
#include "talk/SessionManager.h"
#include "SocketSession.h"
#include "Config.h"
#include "proxy/ProxyRegister.h"
#include "proxy/MsgWaitServiceProxy.h"

using namespace std;
using namespace pugi;
using namespace HZP;
using namespace mtalk::constant;
using namespace mtalk::utils;
using namespace mtalk::talk;
using namespace mtalk::bosh;
using namespace mtalk::proxy;

namespace mtalk{
	namespace socket{

		SocketServer::SocketServer() :
			isStarted_(false){

				LOG_INFO("SocketServer::SocketServer => created");
			}

		SessionPtr SocketServer::getSession(const string& sessionId){
			return sessionManagerPtr_->getSession(sessionId);
		}

		void SocketServer::start(){
			LOG_INFO("SocketServer::start => started");
		}

		void SocketServer::stop(){
			LOG_INFO("SocketServer::stop => stoped");
		}

		void SocketServer::notifyEndpointPause(){
			endpointServiceProxyPtr_->pause();
			LOG_INFO("SocketServer::notifyEndpointPause => finish");
		}

		void SocketServer::notifyEndpointResume(){
			endpointServiceProxyPtr_->resume();
			LOG_INFO("SocketServer::notifyEndpointResume => finish");
		}

		bool SocketServer::init(const int serverIndex, const int serverCount, const string& domain){
			endpointServiceProxyPtr_ = MY_INSTANCE(ProxyRegister).getProxy<EndpointServiceProxy>("endpointProxy");
			serverIndex_ = serverIndex;
			serverCount_ = serverCount;
			domain_ = domain;
			LOG_INFO("SocketServer::init => init finish");
			return true;
		}

		com::xiaonei::wap::talk::Result SocketServer::checkAuth(SessionPtr sessionPtr,const string& msg ){ 
			LOG_DEBUG("SocketServer::checkAuth => begin :  msg = " << msg);
			com::xiaonei::wap::talk::Result result;
			xml_document doc;
			pugi::xml_parse_result xmlResult = doc.load(msg.c_str());
			if(!xmlResult){
				result.code = ResultCode::AUTH_FAILURE;
				return result;
			}
			xml_node node = doc.first_child();
			string nodeName = node.name();
			if(nodeName == "bind"){
				int cAppId = node.attribute("c_appid").as_int();
				int v = node.attribute("v").as_int();
				string online_deploy = node.attribute("online_deploy").value();
				sessionPtr->setCAppId(cAppId);
				sessionPtr->setV(v == 0 ? 1 : v);
				bool onlineDeploy = (online_deploy=="true");
				sessionPtr->setOnlineDeploy(onlineDeploy);
				long c_fromid = node.attribute("c_fromid").as_int();
				sessionPtr->setCFromId(c_fromid); 
				string c_version = node.attribute("c_version").value();
				sessionPtr->setCVersion(c_version); 
				LOG_DEBUG("SocketServer::checkAuth => bind :  c_appid = " <<cAppId<<" v="<<v 
										<<" online_deploy="<<onlineDeploy <<" c_fromid"<<c_fromid<<" c_version" <<c_version );
				return result;
			}
			if(nodeName != "response"){
				result.code=ResultCode::AUTH_FAILURE;
				return result;
			}
		 	
			string md5str = node.first_child().value();
			string secretKey;
			
			if(sessionPtr->getAuthType() == AuthType::MAS_SECRET_KEY) {
				secretKey = ttClient4MASPtr_->get(sessionPtr->getUserId());
			}	
			else {
				secretKey = ttClientPtr_->get(sessionPtr->getRenRenId());
			}
		
			
			LOG_DEBUG("SocketServer::checkAuth => authType = " << sessionPtr->getAuthType() << ", secretKey = " << secretKey 	
							<< ", UserId = " << sessionPtr->getUserId() << ", RenRenId = " << sessionPtr->getRenRenId());
			string sourceStr = sessionPtr->getAuthPrefix() + secretKey;
			CMD5 md5;
			md5.GenerateMD5((unsigned char*)(sourceStr.c_str()), sourceStr.length());
			string md5StrAtServer = md5.ToString();
			if(!secretKey.empty() && md5str == md5StrAtServer){
				sessionPtr->setAuth(true);
				for(size_t i = 0; i < sessionListeners_.size(); i++){
					sessionPtr->addSessionListener(sessionListeners_[i]);
					sessionListeners_[i]->sessionCreated(sessionPtr, node);	
				}
                                
				result.code = ResultCode::AUTH_SUCCESS;

				LOG_DEBUG("SocketServer::checkAuth success => authType = " << sessionPtr->getAuthType() << ", secretKey = " << secretKey << ", md5str = "<<md5StrAtServer); 	
			}
			else {
				LOG_INFO("SocketServer::checkAuth failure => authType = " << sessionPtr->getAuthType() << ", secretKey = " << secretKey 	
						<< ", UserId = " << sessionPtr->getUserId() << ", RenRenId = " << sessionPtr->getRenRenId() 
						<< ", CAppId=" << sessionPtr->getCAppId() << ", md5strFromClient=" << md5str << ", prefix=" << sessionPtr->getAuthPrefix() 
						<< ", md5str = " << md5StrAtServer);
				result.code = ResultCode::AUTH_FAILURE;
				sessionPtr->close();
			}	


			return result;
		}

		com::xiaonei::wap::talk::Result SocketServer::transferStream(std::string sessionId, const string& msg){
			LOG_DEBUG("SocketServer::transferStream => begin : cid = " << sessionId << " msg = " << msg);
			com::xiaonei::wap::talk::Result result;
			SessionPtr sPtr = sessionManagerPtr_->getSession(sessionId);
			if(!sPtr){
				result.code = ResultCode::SESSION_NOT_FOUND;
				LOG_TRACE_ACTION(" sockSessionNotFound"<<" | "<<"00000000"<<" | "<<sessionId<<" | "<<"000000"<<" | "<<"000000");
				return result;
			}
			boost::shared_ptr<SocketSession> sessionPtr = boost::dynamic_pointer_cast<SocketSession>(sPtr);
			sessionPtr->setLastActivity(std::time(NULL));
			if(!sPtr->getAuth()){
				result = checkAuth(sPtr ,msg);
				if(result.code==ResultCode::AUTH_SUCCESS)
				  sessionPtr->initXMPPTagHandler(xmppTagHandlerPtr_);
				return result;
			}

			{
				ScopedLock lock(sessionPtr->selfMutex);
				if (sessionPtr->feed(msg)){
					result.code = ResultCode::OK;
					return result;
				}else {
					stringstream os;
					LOG_ERROR("SocketServer::transferStream => xml error msg = "<<msg);
					os<<"<stream:error>\n"
						<<"<xml-not-well-formed xmlns='urn:ietf:params:xml:ns:xmpp-streams'/>\n"
						<<"<text xmlns='urn:ietf:params:xml:ns:xmpp-streams' xml:lang='en'>\n"
						<<"bad formed"
						<<"\n</text>\n"
						<<"</stream:error>\n"
						<<"</stream:stream>\n ";
					deliverMsg(sessionPtr->getConnectionId(),os.str());
					sessionPtr->close();
					result.code=ResultCode::SESSION_CLOSE;
					return result;
				}
			}
		}

		com::xiaonei::wap::talk::Result SocketServer::createSession(long connectionId, const string& msg){
			LOG_DEBUG("SocketServer::createSession => begin : cid = " << connectionId << " msg = " << msg);
			com::xiaonei::wap::talk::Result result;
			xml_document doc;
			doc.load(msg.c_str());
			xml_node node = doc.first_child();
			string nodeName=node.name();
			xml_node node_auth = node.first_child();
			string authStr=node_auth.value();
			if(authStr.empty()){
				result.code=ResultCode::AUTH_FAILURE;
				return result;
			}
			long userId;
			try{
				userId = boost::lexical_cast<long>(authStr.c_str());
			}catch(exception& e){
				result.code=ResultCode::AUTH_FAILURE;
				return result ;
			}
			SocketSessionPtr sessionPtr = sessionManagerPtr_->getNewSession<SocketSession>(userId);
			if(!sessionPtr){
				LOG_ERROR("SocketServer::createSession => createSession error : cid = " );
				return result;
			}
            string lang = node.attribute("xml:lang").value();
            sessionPtr->setLang(lang.empty() ? "zh_cn" : lang);

			sessionPtr->setUserId(userId);
			sessionPtr->setAuth(false);
			sessionPtr->setConnectionId(connectionId);
			result.code = ResultCode::SESSION_CREATE_SUCCESS;
			result.msg=sessionPtr->getSessionId();
			stringstream os;
			os<<"<auth>"<<sessionPtr->getAuthPrefix()
				<<"</auth>";
			deliverMsg(connectionId, os.str());
			return result;
		}


		string SocketServer::newSessionResponse(SessionPtr sessionPtr){
			ostringstream os;
			os << "<body "<< " sid='" << sessionPtr->getSessionId() << "'"
				<< "</body>";
			return os.str();
		}


		com::xiaonei::wap::talk::Result SocketServer::createSessionV1(long connectionId, const std::string& msg){
			LOG_DEBUG("SocketServer::createSessionV1 => begin : cid = " << connectionId << " msg = " << msg);
			com::xiaonei::wap::talk::Result result;
			result.code = ResultCode::OK;
			xml_document doc;
			doc.load(msg.c_str());
			xml_node node = doc.first_child();
			xml_node node_auth = node.first_child();
			string authStr = node_auth.value();
			string authType = node.attribute("mechanism").value();

					
			long userId;
			try{
				userId = boost::lexical_cast<long>(authStr.c_str());
			}catch(exception& e){
				result.code=ResultCode::AUTH_FAILURE;
				return result ;
			}

			SocketSessionPtr sessionPtr = sessionManagerPtr_->getNewSession<SocketSession>(userId);
			if(!sessionPtr){
				LOG_ERROR("SocketServer::createSession => createSession error : cid = " );
				return result;
			}
			
			string lang = node.attribute("xml:lang").value();

			if(lang.size() < 4){
				sessionPtr->setLang("zh_CN");
			}else{
				sessionPtr->setLang(lang.empty() ? "zh_CN" : lang);
			}

			int cAppId = node.attribute("c_appid").as_int();
			int v = node.attribute("v").as_int();
			string online_deploy = node.attribute("online_deploy").value();
			sessionPtr->setCAppId(cAppId);
			sessionPtr->setV(v == 0 ? 1 : v);
			bool onlineDeploy = (online_deploy=="true");
			sessionPtr->setOnlineDeploy(onlineDeploy);
			int c_fromid = node.attribute("c_fromid").as_int();
			sessionPtr->setCFromId(c_fromid);
			string c_version = node.attribute("c_version").value();
			string domain = node.attribute("to").value();
			sessionPtr->setCVersion(c_version);
			sessionPtr->setUserId(userId);
			sessionPtr->setAuth(false);
			sessionPtr->setConnectionId(connectionId);
			sessionPtr->setDomain(domain);
			//
			if(strcmp(authType.c_str(), "MAS_SECRET_KEY") == 0) {
				sessionPtr->setAuthType(AuthType::MAS_SECRET_KEY);	
			}
			else {
				//默认为转换过协议，取人人id来认证
				long renrenId = node.attribute("renren_id").as_int();	
				sessionPtr->setRenRenId(renrenId);
				sessionPtr->setAuthType(AuthType::SECRET_KEY);	
			}


			stringstream os;
			os<<"<auth sid='"<<sessionPtr->getSessionId()<<"'>"<<sessionPtr->getAuthPrefix()
				<<"</auth>";
			
			result.code = ResultCode::SESSION_CREATE_SUCCESS;
			result.msg = os.str();
			LOG_TRACE_ACTION(" sockCreateSessionSucessV1"<<" | "<<sessionPtr->getUserId()<<" | "<<sessionPtr->getSessionId()<<" | "<<sessionPtr->getCAppId()<<" | "<<"000000");
			LOG_DEBUG("SocketServer::createSessionV1 => return : userId = " << userId << "result.code = "<<result.code<<" msg = " << result.msg);
			return result;
		}
		
		com::xiaonei::wap::talk::Result SocketServer::updateV1(std::string sessionId, const std::string& msg){
			com::xiaonei::wap::talk::Result result;	
			result.code = ResultCode::OK;
			result.msg = "";
			SessionPtr sPtr = sessionManagerPtr_->getSession(sessionId);
			if(!sPtr){
				LOG_DEBUG("SocketServer::updateV1 => sessionId not fount sid = "<<sessionId <<" msg ="<<msg)
					result.code = ResultCode::SESSION_NOT_FOUND;
				LOG_TRACE_ACTION(" sockSessionNotFound"<<" | "<<"00000000"<<" | "<<sessionId<<" | "<<"000000"<<" | "<<"000000");
				return result;
			}
			LOG_TRACE_ACTION(" sockUpdateV1"<<" | "<<sPtr->getUserId()<<" | "<<sPtr->getSessionId()<<" | "<<sPtr->getCAppId()<<" | "<<"000000");
			LOG_DEBUG("SocketServer::updateV1 => begin : sid = " << sessionId <<" usrId = "<<sPtr->getUserId()<< " msg = " << msg);
			result = checkAuth(sPtr, msg);
			if(result.code == ResultCode::AUTH_SUCCESS){
				result.code=ResultCode::OK;
				LOG_TRACE_ACTION(" sockauthSuccess"<<" | "<<sPtr->getUserId()<<" | "<<sPtr->getSessionId()<<" | "<<sPtr->getCAppId()<<" | "<<"000000");
				stringstream os;
				os<<"<success  sid='"<<sPtr->getSessionId()<<"'/>";
				deliverMsg(sPtr->getConnectionId(),os.str());
				MY_INSTANCE(TalkServer).notifyPushOfflineMsg(sPtr);

			}else{
				stringstream os;
				os<<"<stream:error type='authFailue'>\n"
					<<"<text xmlns='urn:ietf:params:xml:ns:xmpp-streams' xml:lang='en'>\n"
					<<"auth failure"
					<<"\n</text>\n"
					<<"</stream:error>\n"
					<<"</stream:stream>\n ";
				//deliverMsg(sPtr->getConnectionId(), os.str());

			}
			return result;
		}


		com::xiaonei::wap::talk::Result SocketServer::sendV1(std::string sessionId, const std::string& msg){
			com::xiaonei::wap::talk::Result result;	
			result.code = ResultCode::OK;

			xml_document doc;
			pugi::xml_parse_result xmlResult = doc.load(msg.c_str());
			if(!xmlResult){
				result.code=ResultCode::PARAM_ERROR;
				return result;
			LOG_DEBUG("SocketServer::sendV1 => xmlError : sid = " << sessionId <<" msg = " << msg);
			}
			xml_node node=doc.first_child();


			SessionPtr sPtr = sessionManagerPtr_->getSession(sessionId);
			if(!sPtr){ 
				LOG_DEBUG("SocketServer::sendV1 => sessionId not fount sid = "<<sessionId <<" msg ="<<msg);
				result.code = ResultCode::SESSION_NOT_FOUND;
				LOG_TRACE_ACTION(" sockSessionNotFound"<<" | "<<"00000000"<<" | "<<sessionId<<" | "<<"000000"<<" | "<<"000000");
				return result;
			}
			LOG_TRACE_ACTION(" sockSendV1"<<" | "<<sPtr->getUserId()<<" | "<<sPtr->getSessionId()<<" | "<<sPtr->getCAppId()<<" | "<<"000000");
			boost::shared_ptr<SocketSession> sessionPtr = boost::dynamic_pointer_cast<SocketSession>(sPtr);
			sessionPtr->setLastActivity(std::time(NULL));	

			if(!sPtr->getAuth()){
				result.code = ResultCode::AUTH_FORBIDDEN;
				return result;
			}

			if(strcmp(node.name(), "ack")==0){
				string msgkeyStr = node.attribute("msgkey").value();
				long mid = 0;
				try{
					mid = boost::lexical_cast<long>(msgkeyStr);
				}catch(...){
					return result;
				}
				if(mid == 0){
						return result;
				}
				notifySentV1(sPtr,mid);	
				return result;
			}

			if(strcmp(node.name(), "heartbeat")==0){
					if(sessionPtr->heartBeatCount() % 20  == 19){
							//暂时注释掉，android客户端收消息没有ack 定时推送用户流量受不了
							MY_INSTANCE(TalkServer).notifyPushOfflineMsg(sPtr);
					}else if(1/*sessionPtr->getCAppId() == 169486 || sessionPtr->getCAppId() == 208079*/){

						//	deliverMsg(sessionPtr->getConnectionId()," ");
						result.msg = " ";
					}
					sessionPtr->incHeartBeatCount();
					result.code = ResultCode::OK;
					return result;
			}

			LOG_DEBUG("SocketServer::sendV1 => begin : sid = " << sessionId <<" usrId = "<<sPtr->getUserId()<< " msg = " << msg);

			xmpp::ProcessResult processResult = xmppProcessorPtr_->process(sPtr, node);
			if(processResult.getCode() == xmpp::ProcessResult::OK){
					string msg(processResult.getMsg());
					xml_document doc;
					xml_parse_result xmlRe = doc.load(processResult.getMsg().c_str());
					if(xmlRe && doc.first_child()){
							xml_node  node = doc.first_child();
							if(strcmp(node.attribute("id").value(),"") != 0){
									node.set_name("message");
									stringstream os;
									node.print(os, "\t", pugi::format_raw);
						//			deliverMsg(sessionPtr->getConnectionId(),os.str());
									result.msg = os.str();
							}else{LOG_DEBUG("not found id");}
					}else{ LOG_DEBUG("parse error");}
			}else{
				//	deliverMsg(sessionPtr->getConnectionId(), processResult.getMsg());
					result.msg = processResult.getMsg();
			}
			return result;
		}

		void SocketServer::deliverMsg(const long connectionId, const string& msg){
			LOG_DEBUG("SocketServer::deliverMsg => begin : cid = " << connectionId << " msg = " << msg);
			endpointServiceProxyPtr_->deliverMsg(connectionId, msg);
		}

		void SocketServer::addSessionListener(boost::shared_ptr<mtalk::talk::SessionListener> listenerPtr){
			sessionListeners_.push_back(listenerPtr);
		}

		void SocketServer::updateClusterInfo(int serverIndex, int serverCount){
			serverIndex_ = serverIndex;
			serverCount_ = serverCount;
		}
		
		void SocketServer::notifySentV1(SessionPtr SSPtr, long mid){
			
		//	MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->delMessage(mid, SSPtr->getUserId() ,  SSPtr->getSessionType());
			MY_INSTANCE(TalkServer).NotifyMessageSent(SSPtr->getUserId(), mid, SSPtr->getSessionType());
		}
//		void SocketServer::notifySent(string msg){
//			xml_document doc;
//			xml_parse_result xmlResult = doc.load(msg.c_str());
//			xml_node node=doc.first_child();
//			xmpp::JID to (node.attribute("to").value());
//			string mid_str = node.attribute("msgkey").value();
//			string type_str = node.child("body").attribute("type").value();
//			LOG_DEBUG("SocketServer::notifySent => invoke NotifyMsgSent mid=" <<mid_str<<" msgType ="<<type_str   );
//			MsgNodePtr mp(new MsgNode);
//			long mid = 0;
//			try {
//				mid =boost::lexical_cast<long>(mid_str.c_str());
//				LOG_DEBUG("SocketServer::notifySent =>  NotifyMsgSent mid=" <<mid );
//
//			}catch(...){
//				LOG_DEBUG("SocketServer::notifySent =>lexical_cast exception  NotifyMsgSent mid=" <<mid );
//				return ;
//			}
//
//			mp->mid=mid;
//
//			if(type_str=="image"){
//
//				mp->type=MessageType::IMAGE;
//			}else if(type_str == "voice"){
//
//				mp->type=MessageType::VOICE;
//			}else if(type_str == "text"){
//
//				mp->type=MessageType::CHAT;
//			}else if(type_str == "expression"){
//
//				mp->type = MessageType::EXPRESSION;
//			}else {
//				return ;
//			}
//
//			mp->msg=msg;
//			LOG_DEBUG("SocketServer::notifySent => invoke NotifyMsgSent userId=" <<to.getUserId() <<"  msgKey="<<mid <<" msgType"<<type_str   );
//			MY_INSTANCE(talk::TalkServer).NotifyMessageSent(to.getUserId(), mp);
//		}
//
		void SocketServer::pushOfflineMessage(long userId ,int supportType , int ClientType){
		}
	};
};
