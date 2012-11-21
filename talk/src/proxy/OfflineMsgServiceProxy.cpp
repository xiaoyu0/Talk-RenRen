#include <sstream>
#include "OfflineMsgServiceProxy.h"
#include "utils/MyLogger.h"
#include "Config.h"
#include "utils/TimeUtils.h"
#include    "utils/TimeUtils.h"
#include    "xmpp/JID.h"
#include    "pugixml/pugixml.hpp"
#include  "constant/MessageType.h"
#include  <boost/lexical_cast.hpp>

using namespace std;
using namespace mtalk::utils;
using namespace pugi;
using namespace mtalk::constant;
using namespace com::xiaonei::wap::talk::offline;

namespace mtalk{
	namespace proxy{

		OfflineMsgServiceProxy::OfflineMsgServiceProxy() :
			SimpleZKProxy<OfflineMsgServicePrx>("OfflineMsgIceService", ZK_OFFLINE_MSG_PATH, true, 50){
		}

		bool OfflineMsgServiceProxy::addOfflineMsg(const long fromId, const long toId, const string& msg, const int  msgType ,int supportToClientType ){

            LOG_W(fromId, "OfflineMsgServiceProxy::addOfflineMsg", msgType, msg);

			LOG_DEBUG("OfflineMsgServiceProxy::addOfflineMsg => begin  : fromId = " << fromId <<" toId = "<<toId
					<<" msgType = "<<msgType <<" supportToClientType = "<<supportToClientType<<" msg = "<<msg);

			MilliTimer tStart;
			if((supportToClientType > 3) || (supportToClientType <1) )
			{

				LOG_WARN("OfflineMsgServiceProxy::addOfflineMsg => ***get a supportToClientType != 2 or 3 " << fromId << " toId = " << toId);
				return 0;
			}
			ReadLock lock(mutex_);
			OfflineMsgServicePrx proxy = getProxy(toId);

			if(!proxy){
				LOG_ERROR("OfflineMsgServiceProxy::addOfflineMsg => get proxy failure : fromId = " << fromId << " toId = " << toId);
				return false;
			}

			string message = msg;

			if((msgType & MessageType::GROUP_CHAT) == MessageType::GROUP_CHAT){
				addGroupOfflineMsg(toId,  message);
			}
			else if((msgType & MessageType::SYSTEM) == MessageType::SYSTEM)    //system messsage add by zhougy.
			{
				try{
					OfflineMessage offlineMsg;
				         	
					if(fromId == 0)
					{   
					    offlineMsg.fromId =  1; 
					}
					else
					{
					   offlineMsg.fromId = fromId;
					}
					
					offlineMsg.toId = toId;
					offlineMsg.status = supportToClientType;
					offlineMsg.chatType = msgType | MessageType::OFFLINE;
					offlineMsg.message = message;

					proxy->saveSystemOfflineMessageV1(offlineMsg);     //send system message 
					LOG_INFO("saveSystemMessage|"<<fromId<<"|"<<toId<<"|"<<" "<<"|"<< 2);

					LOG_DEBUG("OfflineMsgServiceProxy::saveSystemOfflineMessage => : fromId = " << offlineMsg.fromId <<" toId = "<<toId
							<<" msgType = "<<msgType<<" msg = "<<msg);


				}catch (exception& e){
					LOG_ERROR("OfflineMsgServiceProxy::saveSystemOfflineMessageV1 => proxy invoke fail : fromId = " 
							<< fromId << " toId = " << toId << " type = " 
							<< msgType << " exception = " << e.what());
				} catch (...) {
					LOG_ERROR("OfflineMsgServiceProxy::saveSystemOfflineMessageV1 => proxy invoke fail : fromId = " 
							<< fromId << " toId = " << toId << " type = " 
							<< msgType << " unknown exception");
				}
			} else {		
				pugi::xml_document doc;
				pugi::xml_parse_result  result = doc.load(msg.c_str());
				if(!result){
					return 0 ;
				}
				time_t  t = time(NULL);
				string tStr = boost::lexical_cast<string>(t);
				tStr = tStr + "000";
				pugi::xml_node node = doc.first_child();
				string msgKey = node.attribute("msgkey").value();
				ostringstream os;
				node.print(os, "\t", pugi::format_raw);
				OfflineMessage offlineMsg;
				offlineMsg.fromId = fromId;
				offlineMsg.toId = toId;
				offlineMsg.status = supportToClientType;
				offlineMsg.chatType = msgType | MessageType::OFFLINE;
				offlineMsg.message = os.str();
				try{
					proxy->saveOfflineMessageV1(offlineMsg);
					LOG_INFO("saveChatMessage|"<<fromId<<"|"<<toId<<"|"<<msgKey<<"|"<< supportToClientType);
				} catch (exception& e){
					LOG_ERROR("OfflineMsgServiceProxy::addOfflineMsg => proxy invoke fail : fromId = " 
							<< fromId << " toId = " << toId << " type = " 
							<< msgType << " exception = " << e.what());
				} catch (...) {
					LOG_ERROR("OfflineMsgServiceProxy::addOfflineMsg => proxy invoke fail : fromId = " 
							<< fromId << " toId = " << toId << " type = " 
							<< msgType << " unknown exception");
				}
				LOG_TIME("OfflineMsgServiceProxy::addOfflineMessage|" << tStart.elapsed());
				LOG_DEBUG("OfflineMsgServiceProxy::addOfflineMsg => success : fromId = " << 
						fromId << " toId = " << toId << " msgType =" << offlineMsg.chatType <<"  supportToClientType = "<<supportToClientType<< " msg = [" << offlineMsg.message << "]");
			}
			return true;
		}


		void  OfflineMsgServiceProxy::notifyPushOfflineMessage(const string sessionId, const long userId,int supportType , int ClientType, const int limit){

            LOG_W(userId, "OfflineMsgServiceProxy::notifyPushOfflineMessage", -1, "");

			if(ClientType == 3){
				ClientType = 2;
			}
			MilliTimer tStart;
			LOG_DEBUG("OfflineMsgServiceProxy::notifyPushOfflineMessage => begin : userId = " << userId <<" supportType ="<<supportType<<" clientType ="<<ClientType );
			ReadLock lock(mutex_);
			OfflineMsgServicePrx proxy = getProxy(userId);

			if(!proxy){
				LOG_ERROR("OfflineMsgServiceProxy::notifyPushOfflineMessage=> get proxy failure : userId = " << userId);
				return ;
			}

			try{
				proxy->notifyPushOfflineMessageV1(sessionId, userId , supportType, ClientType, limit);
			} catch (exception& e) {
				LOG_ERROR("OfflineMsgServiceProxy::notifyPushOfflineMessage=> proxy = "<<proxy->ice_toString()<<"  error : " << e.what());
				return ;
			} catch (...) {
				LOG_ERROR("OfflineMsgServiceProxy::notifyPushOfflineMessage=> unkonw error");
				return ;
			}
			LOG_TIME("OfflineMsgServiceProxy::notifyPushOfflineMessage|" << tStart.elapsed());


		}

		void OfflineMsgServiceProxy::addGroupOfflineMsg(long toId ,string msg){

			LOG_DEBUG("OfflineMsgServiceProxy::addGroupOfflineMsg => begin : msg = " <<msg);
			pugi::xml_document doc;
			pugi::xml_parse_result  result = doc.load(msg.c_str());
			if((!result) && (!doc.first_child())){
				return ;//报文错误，直接返回
			}
			time_t  t = time(NULL);
			string tStr = boost::lexical_cast<string>(t); 
			tStr = tStr + "000";
			pugi::xml_node node = doc.first_child();

			string jidStr = node.attribute("from").value();
			string msgKey = node.attribute("msgkey").value();
			mtalk::xmpp::JID from(jidStr);
			long roomId = from.getUserId();//群id
			if(roomId == 0)
			{
				LOG_WARN("OfflineMsgServiceProxy::addGroupOfflineMsg error roomId= 0 : msg = " <<msg);
			}
			string fromstr = from.getSessionId();//get the fromId of user who send message to roomId.
			long fromId = 0;
			try{

				fromId = boost::lexical_cast<long>(fromstr);

			} catch (boost::bad_lexical_cast &){

				fromId = 0;

				LOG_WARN("OfflineMsgServiceProxy::addGroupOfflineMsg error fromId= 0 : msg = " <<msg);
			}
			int msgType = 0;
			xml_node body = node.child("body");
			if(body){
				const char_t* msgTypeStr = body.attribute("type").value();
				if(strcmp(msgTypeStr,"text") == 0){
					msgType = MessageType::CHAT;

				}else if(strcmp(msgTypeStr, "image") == 0){
					msgType = MessageType::IMAGE;

				}else if(strcmp(msgTypeStr, "voice") == 0){
					msgType = MessageType::VOICE;

				}else if(strcmp(msgTypeStr, "expression") == 0){
					msgType = MessageType::EXPRESSION;
				}else{
					msgType = MessageType::CHAT;	
				}
			}else{
				msgType = MessageType::CHAT;	
			}

			ostringstream os;
			node.print(os, "\t", pugi::format_raw);
			msg = os.str();

			GroupOfflineMessage groupOfflineMessage;
			groupOfflineMessage.groupId = roomId;
			groupOfflineMessage.fromId = fromId;
			groupOfflineMessage.toId = toId;
			groupOfflineMessage.status = 2;
			groupOfflineMessage.chatType = msgType | MessageType::OFFLINE ;
			groupOfflineMessage.message = msg;

			OfflineMsgServicePrx proxy = getProxy(toId);
			try{
				proxy->saveGroupOfflineMessageV1(groupOfflineMessage);
				LOG_INFO("saveGroupMessage|"<<from.getUserId()<<"|"<<fromId<<"|"<<toId<<"|"<<msgKey<<"|"<<msgType<<"|"<< 2);
			}catch(exception& e){
				LOG_ERROR("OfflineMsgServiceProxy::addGroupOfflineMsg => proxy invoke fail : roomId = "<< 
						roomId<< " fromId = " << fromId << " toId = " << toId << " type = " 
						<< msgType << " exception = " << e.what());
			}catch(...) {
				LOG_ERROR("OfflineMsgServiceProxy::addGroupOfflineMsg => proxy invoke fail : roomId = "<< 
						roomId<< " fromId = " << fromId << " toId = " << toId << " type = " 
						<< msgType << " unknown exception");
			}

			LOG_DEBUG("OfflineMsgServiceProxy::addGroupOfflineMsg => success : roomId = " << roomId <<"fromId = "<<fromId <<" toId = " << toId << " msgType ="<<groupOfflineMessage.chatType << " msg = [" << groupOfflineMessage.message << "]");

		}

		void OfflineMsgServiceProxy::deleteOfflineMessage(long msgKey,long userId,int clientType){

            LOG_W(userId, "OfflineMsgServiceProxy::deleteOfflineMessage", -1, "");

			ReadLock lock(mutex_);
			OfflineMsgServicePrx proxy = getProxy(userId);

			if(!proxy){
                LOG_W_IN(std::string("get_proxy_fail"));
				LOG_ERROR("OfflineMsgServiceProxy::deleteOfflineMessage => get proxy failure : userId = " << userId);
				return ;
			}

			try{
				proxy->deleteOfflineMessage(msgKey, userId, clientType);
				LOG_INFO("notifyOfflineSentSucess|"<<userId<<"||"<<msgKey<<"|"<<clientType);
			} catch (exception& e) {
				LOG_ERROR("OfflineMsgServiceProxy::deleteOfflineMessage=> proxy = "<<proxy->ice_toString()<<"  error : " << e.what());
				return ;
			} catch (...) {
				LOG_ERROR("OfflineMsgServiceProxy::deleteOfflineMessage => unkonw error");
				return ;
			}

		}


	};
};
