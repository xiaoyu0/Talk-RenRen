#include <map>
#include <string>
#include "xmpp/JID.h"
#include <boost/lexical_cast.hpp>
#include "TalkServiceI.h"
#include "TalkServer.h"
#include "constant/MessageType.h"
#include "utils/MyLogger.h"
#include "utils/TimeUtils.h"
#include "utils/MsgTransform.h"
#include "utils/MessageTails.h"
#include "pugixml/pugixml.hpp"
#include "user_name_client.h"
#include "talk/FeedProcessor.h"
#include  <iostream>
#include  <boost/foreach.hpp>
using namespace xce::client;
using namespace mtalk::constant;
using namespace mtalk::utils;
using namespace mtalk::xmpp;
using namespace pugi;
using namespace std;
using namespace mtalk::im;

namespace mtalk{
	namespace talk{

		TalkServiceI::TalkServiceI(boost::shared_ptr<mtalk::im::IMGateForPhoneAdapter> imGateForPhoneAdapterPtr) :
			imGateForPhoneAdapterPtr_(imGateForPhoneAdapterPtr){
			}

		void TalkServiceI::push(Ice::Long fromId, Ice::Long toId, const std::string& msg, 
				const Ice::Int messageType, const Ice::Current& current){

            LOG_W(fromId, "TalkServiceI::push", messageType, msg);

			MilliTimer tStart;			
			MessageType::Type type = static_cast<MessageType::Type>(messageType);
			LOG_DEBUG("TalkServiceI::push => accept a push : fromId = " << fromId 
					<< " toId = " << toId << " msg = " << msg << " type = " << type);
			if(type == MessageType::NOTIFY){
				LOG_DEBUG("TalkServiceI::push NOTIFY "  );
				LOG_TALK_ACTION("TalkServiceI::push|"<< fromId << "|"<<toId <<"|NOTIFY");
				MY_INSTANCE(TalkServer).pushNotify(fromId, toId, msg, type);
				return ;
			}

			if (messageType & MessageType::FEED){
				LOG_TALK_ACTION("TalkServiceI::push|"<< fromId << "|"<<toId << "|FEED|"<<type);
				MY_INSTANCE(TalkServer).feedPush(fromId, toId, msg, type, -1); //这里应该用-1么
				return ;
			}

			LOG_TALK_ACTION("TalkServiceI::push|"<< fromId << "|"<<toId << "|CHAT|"<<type);
			MY_INSTANCE(TalkServer).push(fromId, toId, msg, type, -1);
		}

		void TalkServiceI::pushFeed(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int type, bool focus, const ::Ice::Current&current){

            LOG_W(fromId, "TalkServiceI::pushFeed", type, msg);

			LOG_DEBUG("TalkServiceI::pushFeed => accept a feed push : fromId = " << fromId << " toId = " << toId << " msg = " << msg << " type = " << type << "focus="<<focus);
			xml_document doc;
			xml_parse_result xmlResult = doc.load(msg.c_str());

			if(!xmlResult || !doc.first_child()){
				LOG_ERROR("processThread => xml error : " << xmlResult.description());
				return ;
			}

			xml_node feednode = doc.first_child();

			bool feedConditionsForSixin = MY_INSTANCE(FeedProcessor).feedForSixin(focus,type); 
			LOG_DEBUG("TalkServiceI::pushFeed ==> feed Str for push : " << msg);
			if(focus){
			
			LOG_TALK_ACTION("TalkServiceI::pushFeed|"<< fromId << "|"<<toId << "|FEED|"<< "FOCUS="<< focus);
			}
			MY_INSTANCE(TalkServer).feedPush(fromId, toId, msg, MessageType::IM_FEED,0, feedConditionsForSixin);
			return ;

		}

		void TalkServiceI::pushFeedBatch(::Ice::Long fromId, const ::com::xiaonei::wap::talk::Long2StrMap& msgMap, ::Ice::Int type, bool focus, const ::Ice::Current& current){

            LOG_W(fromId, "TalkServiceI::pushFeedBatch", -1, "");

			LOG_TALK_ACTION("TalkServiceI::pushFeedBatch|" << fromId <<"|" << msgMap.size() );
			map<long,string>::const_iterator it;
			for(it=msgMap.begin();it!=msgMap.end();it++){
				long toId=it->first;
				string msg=it->second;
				xml_document doc;
				xml_parse_result xmlResult = doc.load(msg.c_str());

				if(!xmlResult || !doc.first_child()){
					LOG_ERROR("processThread => xml error : " << xmlResult.description());
					return ;
				}

				int msgType;
				bool msgFocus;
				xml_node node = doc.first_child();
				xml_node feednode=node.child("feed");
				if(feednode.empty()){
				
					LOG_ERROR("processThread => xml error : " << xmlResult.description());
					return ;
				}

				msgType=feednode.attribute("type").as_int();	
				msgFocus=feednode.attribute("isfocus").as_bool();
				LOG_DEBUG("TalkServiceI::pushFeedBatch => accept a feed push : fromId = " << fromId << " toId = " << toId << " msg = " << msg << " type = " << msgType << "focus="<<msgFocus);
				pushFeed(fromId,toId,msg,msgType,msgFocus,current);

			} 
		}

		void TalkServiceI::pushOfflineFromIm(const ::com::xiaonei::wap::talk::OfflineItemList& offlineList, const ::com::xiaonei::wap::talk::Str2StrMap& str2strmap, const ::Ice::Current& current){
			::com::xiaonei::wap::talk::OfflineItemList::const_iterator it;
			for(it=offlineList.begin();it!=offlineList.end();it++){
				long fromId=it->fromId;
				long toId=it->toId;
				string msg=it->msg;	
                LOG_W(fromId, "TalkServiceI::pushOfflineFromIm", -1, msg);
				LOG_TALK_ACTION("TalkServiceI::pushOfflineFromIm |" << fromId << "|" << toId << "|" << " TEXT_OFFLINE");
				MY_INSTANCE(mtalk::talk::TalkServer).push(fromId, toId, msg, MessageType::TEXT_OFFLINE, -1);

			}
		}

		void TalkServiceI::pushStatFromIm(::Ice::Long fromId, const ::com::xiaonei::wap::talk::Long2StrMap& strmap, const ::com::xiaonei::wap::talk::Str2StrMap& str2str, const ::Ice::Current& current) {

            LOG_W(fromId, "TalkServiceI::pushStatFromIm", -1, "");
			map<long,string>::const_iterator it; for(it=strmap.begin();it!=strmap.end();it++){
				long toId = it->first;
				string msg = it->second; 
				LOG_DEBUG("TalkServiceI::pushStatFromIm => : fromId = " << fromId << " toId = " << toId << " msg = " << msg << " type =PRESENCE");
				MY_INSTANCE(mtalk::talk::TalkServer).push(fromId, toId, msg, MessageType::PRESENCE);
			}
		}

		void TalkServiceI::pushFromIm(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, 
											::Ice::Int messageType, ::Ice::Int userType, ::Ice::Long msgkey,
													const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Current& current){

            LOG_W(fromId, "TalkServiceI::pushFromIm", messageType, msg);

			LOG_DEBUG("TalkServiceI::pushFromIm => : fromId = " << fromId << " toId = " 
					<< toId << " msg = " << msg << " type = " 
					<< messageType << " userType= "<< userType <<" msgkey= " << msgkey);

			if(MessageType::CHAT==messageType){
				LOG_TALK_ACTION("TalkServiceI::pushFromIm|"<< fromId << "|"<<toId << "|CHAT");
				//MY_INSTANCE(mtalk::talk::TalkServer).notifyIM(toId, msgkey);
				MY_INSTANCE(mtalk::talk::TalkServer).push(fromId, toId, msg, MessageType::CHAT, msgkey);	
				return ;
			}else if(MessageType::PRESENCE==messageType){
				MY_INSTANCE(mtalk::talk::TalkServer).push(fromId, toId, msg, MessageType::PRESENCE);
				return ;
			}else if(MessageType::TEXT_OFFLINE==messageType){
				LOG_TALK_ACTION("TalkServiceI::pushFromIm|"<< fromId << "|"<<toId << "|TEXT_OFFLINE");
				MY_INSTANCE(mtalk::talk::TalkServer).push(fromId, toId, msg, MessageType::TEXT_OFFLINE, -1);
				return ;
			}else if(MessageType::NOTIFY==messageType){
			}	

		}

		void TalkServiceI::voicePush(Ice::Int fromId, Ice::Int toId, const std::string& msg, 
				const Ice::Int messageType, const Ice::Int appId, const Ice::Current& current){
			MilliTimer tStart;			

            LOG_W(fromId, "TalkServiceI::voicePush", messageType, msg);

			MessageType::Type type = static_cast<MessageType::Type>(messageType);
			LOG_DEBUG("TalkServiceI::voicePush => accept a voicePush : fromId = " << fromId 
					<< " toId = " << toId << " msg = " << msg << " type = " << type);

			pugi::xml_document doc;
			pugi::xml_parse_result xmlResult = doc.load(msg.c_str());

			if(!xmlResult || !doc.first_child()){
				LOG_ERROR("TalkServiceI::voicePush => read voice xmpp error : " << xmlResult.description());
			}

			JID from;
			pugi::xml_node node=doc.first_child();
			pugi::xml_attribute attr ;
			attr = node.attribute("from");
			if(attr){
				from.parser(attr.value());
			} else {
			}

			string fname(node.attribute("fname").value());

            #ifndef INTERNATIONAL
			if(fname.empty()){
				fname = UserNameClient::GetUserName(from.getUserId());
				node.append_attribute("fname").set_value(fname.c_str());
				LOG_DEBUG("此处添加fname : "<<fname);
				std::cout<<"添加名字 : "<<fname<<std::endl;
			}
            #endif

			node.append_attribute("fromCAppid").set_value(appId);


			string text = utils::MsgTransform::voice2text(doc.first_child());
			LOG_DEBUG("TalkServiceI::voicePush => voice2text : voice = [" << msg << "] text = [" << text << "]");

			

			stringstream os;
			long fromSixinId = changer_.getSixinIdByRenRenId(fromId);
			long toSixinId = changer_.getSixinIdByRenRenId(toId);
			if(fromSixinId == -1 || toSixinId == -1){
				return ;
			}

			if(!text.empty()){
				MessageTails::addTail(appId, type, text);

				string textMsg = text.append("  ");
				imGateForPhoneAdapterPtr_->sendMessage(fromSixinId, toSixinId, textMsg);

			}

			changer_.changToSixin("talk.m.renren.com",node);
			node.print(os, "\t", pugi::format_raw);

			voicePushV1(fromSixinId, toSixinId, os.str(), messageType, appId, current);
		}

		void TalkServiceI::voicePushV1(Ice::Long fromId, Ice::Long toId, const std::string& msg, 
				const Ice::Int messageType, const Ice::Int appId, const Ice::Current& current){
            LOG_W(fromId, "TalkServiceI::voicePushV1", messageType, msg);
			MessageType::Type type = static_cast<MessageType::Type>(messageType);
			LOG_DEBUG("TalkServiceI::voicePushV1 => accept a voicePush : fromId = " << fromId 
					<< " toId = " << toId << " msg = " << msg << " type = " << type);
			MY_INSTANCE(TalkServer).push(fromId, toId, msg, type, -1);
		}

		vector<int> TalkServiceI::getUsersOnlineStatSeq(const vector<long>& users, const Ice::Current& current){

			MilliTimer tStart;			

			LOG_DEBUG("TalkServiceI::getUsersOnlineStatSeq => size = " << users.size());

			vector<int> intVec = MY_INSTANCE(TalkServer).getLocalUsersOnlineStatSeq(users);

			LOG_TIME("TalkServiceI::getUsersOnlineStatSeq|" << users.size() << "|" << tStart.elapsed() );				
			return intVec;
		}

		map<int, int> TalkServiceI::getUsersOnlineStatMap(const vector<int>& users, const Ice::Current& current){

				LOG_DEBUG("TalkServiceI::getUsersOnlineStatMap  count =  "<<users.size());
				vector<long> userLIds;
				vector<int>::const_iterator iter = users.begin();
				for(; iter != users.end(); iter++){
						userLIds.push_back(long(*iter));
				}

				map<long, long> sixinIds;
				sixinIds = changer_.getSiXinIdSeqByRenRenIds(userLIds);

				vector<long> sixinUsers;
				map<long, long>::iterator sixinUserIdter = sixinIds.begin();
				for(; sixinUserIdter != sixinIds.end(); sixinUserIdter++){
						sixinUsers.push_back(sixinUserIdter->second);
				}

				map<long, int> sixinUsersStatMap;
				sixinUsersStatMap = getUsersOnlineStatMapV1(sixinUsers, current);

				map<int , int> result;
				for(iter = users.begin(); iter!= users.end(); iter++){
						map<long, long>::iterator index = sixinIds.find(*iter);
						if(index != sixinIds.end()){
								map<long,int>::iterator index1 = sixinUsersStatMap.find(index->second);
								if(index1 != sixinUsersStatMap.end()){
										result[*iter] = index1->second;
								}
						}
				}
				return result;

		}

		map<long, int> TalkServiceI::getUsersOnlineStatMapV1(const vector<long>& users, const Ice::Current& current){

			LOG_DEBUG("TalkServiceI::getUsersOnlineStatMap => size = " << users.size());
			MilliTimer tStart;			

			vector<int> statVector = MY_INSTANCE(TalkServer).getLocalUsersOnlineStatSeq(users);

			map<long, int> statMap;
			for(size_t i = 0; i < statVector.size(); ++i){
				statMap[users[i]] = statVector[i];
			}

			LOG_TIME("TalkServiceI::getUsersOnlineStatMap|" << users.size() << "|" << tStart.elapsed() );				
			return statMap;
		}

		int TalkServiceI::getUserOnlineStat(const int userId, const Ice::Current& current) {
			long sixinId = changer_.getSixinIdByRenRenId(userId);
			return getUserOnlineStatV1(sixinId, current);
		}

		int TalkServiceI::getUserOnlineStatV1(const long userId, const Ice::Current& current){
			MilliTimer tStart;			

			LOG_DEBUG("TalkServiceI::getUserOnlineStat => userId = " << userId);
			int stat = MY_INSTANCE(TalkServer).getUserOnlineStat(userId);

			LOG_TIME("TalkServiceI::getUserOnlineStat|" << tStart.elapsed() );				
			return stat;
		}

		void TalkServiceI::logout(const int userId, const string& sessionId, const Ice::Current& current) {
			long sixinId = changer_.getSixinIdByRenRenId(userId);
			logoutV1(sixinId, sessionId, current);	
		}

		void TalkServiceI::logoutV1(const long userId, const string& sessionId, const Ice::Current& current){
			MilliTimer tStart;			

			LOG_DEBUG("TalkServiceI::logout ==> userId" << userId);		
			MY_INSTANCE(TalkServer).logout(userId, sessionId);	

		}

		void TalkServiceI::uninstall(const long userId, const int pushDefinedTypeId, const Ice::Current& current){
			MilliTimer tStart;			
			int appId;
			switch (pushDefinedTypeId){
				case 1 : 
					appId = 153629; break; //iphone renren
				case 2 :
					appId = 169485; break; //iphone sixin
				case 3 :
					appId = 160590; break; //ipad renren
				case 4 :
					appId = 133767; break; //nokia renren
				case 6 :
					appId = 170979; break; //win7 sixin
				default :
					appId = 0;
			}

			LOG_DEBUG("TalkServiceI::uninstall ==> userId" << userId << " pushDefinedTypeId = " << pushDefinedTypeId << "appId = " << appId);
			if (appId != 0){
				MY_INSTANCE(TalkServer).uninstall(userId, appId);
			}
		}

		int	TalkServiceI::getUserOnlineTypebyTalk(const Ice::Long userId, const Ice::Current& current){
			MilliTimer tStart;			

			LOG_DEBUG("TalkServiceI::getUserOnlineTypebyTalk ==> userId = " << userId);
			int stat = MY_INSTANCE(TalkServer).getUserOnlineTypebyTalk(userId);

			return stat;
		}

		void TalkServiceI::type2Int(const vector<mtalk::constant::OnlineType::Type>& typeVec, vector<int>& intVec){
			vector<mtalk::constant::OnlineType::Type>::const_iterator it = typeVec.begin();

			for ( ; it != typeVec.end(); it++){
				intVec.push_back(static_cast<int>(*it));
			}
		}

		void TalkServiceI::distribute(::Ice::Long roomId, ::Ice::Long toId, const ::std::string& msg, bool isSave, const ::Ice::Current& Current){
			LOG_MUC("TalkServiceI::distribute msg =" << msg<<" roomId ="<<roomId<<" isSave ="<<isSave);
			MY_INSTANCE(TalkServer).distribute(roomId, toId, msg, isSave);

		}

		void TalkServiceI::MucReturn(const ::std::string& sessionId, const ::std::string& msg, bool isSave, const ::Ice::Current& Current){
			LOG_MUC("TalkServiceI::MucReturn msg =" << msg<<" sessionId ="<<sessionId<<" isSave ="<<isSave);
			MY_INSTANCE(TalkServer).MucReturn(sessionId, msg, isSave);
		}

		void TalkServiceI::pushMucOfflineV1(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& offlineMsgList, const ::Ice::Current& Current){
			LOG_INFO("TalkServiceI::pushMucOfflineV1|" << toId <<"|"<<offlineMsgList.size());
			MY_INSTANCE(TalkServer).pushMucOffline(sessionId, toId, offlineMsgList);
		}

		void TalkServiceI::pushOfflineV1(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& offlineMsgList, const ::Ice::Current& Current){
            LOG_W(toId, "TalkServiceI::pushOfflineV1", -1, "");
			LOG_INFO("TalkServiceI::pushOfflineV1 |"<< toId <<"|"<<offlineMsgList.size());
			MY_INSTANCE(TalkServer).pushOffline(sessionId, toId, offlineMsgList);
		}

		//add by zhougy.
		std::vector<string> TalkServiceI::ProtocolChangeMsg(std::string sessionId,std::vector<string> OfflineMsgList) {
			std::vector<string> offlineResultList;
			BOOST_FOREACH(string& msg, OfflineMsgList)
			{
				std::vector<string>  NoneMsgList;
				std::string message = msg;	
				xml_document doc;
				xml_parse_result xmlResult = doc.load(message.c_str());
				if(!xmlResult || !doc.first_child()){
					return NoneMsgList;
				}
				try{
					xml_node node = doc.first_child();
					changer_.changToSixin("talk.m.renren.com",node);
					ostringstream pos;	 
					node.print(pos, "\t", pugi::format_raw);
					offlineResultList.push_back(pos.str());
				}catch(std::exception &e){
					LOG_INFO("TalkServiceI::protocolChangeMsg has exception. error = "<<e.what());
					return NoneMsgList;
				}
			}
			return offlineResultList;
		}	



		void TalkServiceI::pushMucOfflineV1For2V(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& offlineMsgList, const ::Ice::Current& Current){
            LOG_W(toId, "TalkServiceI::pushMucOfflineV1For2V", -1, "");
			LOG_TALK_ACTION("TalkServiceI::pushMucOfflineV1For2V |" << toId <<" | "<<offlineMsgList.size());
			std::vector<string> ResultMsgList = ProtocolChangeMsg(sessionId, offlineMsgList);
			if(ResultMsgList.empty()){
				LOG_TALK_ACTION("TalkServiceI::pushMucOfflineV1For2V return ResultMsgList toId =" << toId <<" empty !");
				return;
			}
			long toSixinId = changer_.getSixinIdByRenRenId(toId);
			if(toSixinId == -1){
				return;
			}
			MY_INSTANCE(TalkServer).pushMucOffline(sessionId, toSixinId , ResultMsgList);
		}


		void TalkServiceI::pushOfflineV1For2V(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& offlineMsgList, const ::Ice::Current& Current){
			LOG_TALK_ACTION("TalkServiceI::pushOfflineV1For2V | " << toId <<" | "<<offlineMsgList.size());
            LOG_W(toId, "TalkServiceI::pushOfflineV1For2V", -1, "");
			std::vector<string> ResultMsgList = ProtocolChangeMsg(sessionId, offlineMsgList);
			if(ResultMsgList.empty()) {
				LOG_TALK_ACTION("TalkServiceI::pushOffline return ResultMsgList toId =" << toId <<" empty !");
				return;
			}

			long toSixinId = changer_.getSixinIdByRenRenId(toId);
			if(toSixinId == -1){
				return;
			}

			MY_INSTANCE(TalkServer).pushOffline(sessionId, toSixinId, ResultMsgList);
		}

		void  TalkServiceI::setLang(::Ice::Long userId, const ::std::string& language, const ::Ice::Current& Current){
			
				LOG_DEBUG("TalkServiceI::setLang ,userId = "<<userId<<"lang = "<< language);

				MY_INSTANCE(TalkServer).setLang(userId,language);

		}

	};
};


