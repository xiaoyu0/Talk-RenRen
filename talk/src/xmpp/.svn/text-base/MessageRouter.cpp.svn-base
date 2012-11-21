#include "MessageRouter.h"
#include "ChatMessageProcessHandler.h"
#include  "JID.h"
#include  <string>
#include  <sstream>
#include <proxy/MucServiceProxy.h>
#include <proxy/RouterProxy.h>
#include <proxy/OfflineMsgServiceProxy.h>
//#include <proxy/FaceBookServiceProxy.h>
#include <proxy/ProxyRegister.h>
#include  <iostream>
#include "constant/MessageType.h"
//#include "antispam_client.h"
#include "utils/EmojiFilter.h"
#include "talk/TalkServer.h"
#include "utils/Url.h"
#include "utils/EmojiFilter.h"
#include "utils/XmlUtils.h"
#include <boost/algorithm/string.hpp>
#include "user_passport_client.h"

using namespace std;
using namespace boost;
using namespace mtalk::im;
using namespace mtalk::proxy;
using namespace xce::antispam;
using namespace xce::client;
using namespace mtalk::constant;
using namespace pugi;
using namespace mtalk::talk;
using namespace mtalk::utils;

namespace mtalk{
	namespace xmpp{

		MessageRouter::MessageRouter(boost::shared_ptr<IMGateForPhoneAdapter> imGateForPhoneAdapterPtr):
			chatHandlerPtr_(new ChatMessageProcessHandler(imGateForPhoneAdapterPtr)){
			}

		ProcessResult MessageRouter::route(mtalk::talk::SessionPtr sessionPtr, const pugi::xml_node& node){

            std::string toStr = node.attribute("to").value();
            std::string fromStr = node.attribute("from").value();
            JID from(fromStr);
            JID to(toStr);

            if(to.getEndpoint() == "muc.m.renren.com"){

                long fromid = from.getUserId();
                //判断是否是合法用户，是否被冻结
                //-----------begin----------------
#ifndef INTERNATIONAL  
                long from_renren_id =0;
                from_renren_id = changer.getRenRenIdBySiXinId(fromid);
                if(from_renren_id != -1){

                    int userStatus = 0;
                    int userSafeStatus = 0;
                    try {
                        userSafeStatus = UserPassportClient::GetUserSafeStatus((int)from_renren_id); 
                        userStatus = UserPassportClient::GetUserStatus((int)from_renren_id);
                    } catch (...){

                        userStatus = 0;
                        userSafeStatus = 0;

                        LOG_WARN("Muc checkStatus exception fromid="<<from_renren_id);
                   }
                    LOG_DEBUG("Muc checkStatus formid = "<<from_renren_id<<"|status = |"<<userSafeStatus<<"|"<<userStatus);
                    if(userSafeStatus != 0 || userStatus == 6 || userStatus == 7){ //非法用户，被冻结了

                        ProcessResult result;									 
                        LOG_WARN("Muc checkStatus account is forbidden to send message userid =|"<<from_renren_id<<"|");
                        result.setCode(ProcessResult::ERROR);
                        result.setMsg("<error>talk(to muc) internal error</error>");
                        return result;
                    }
                }
#endif //-------------end ------------------
                string sessionid = sessionPtr->getSessionId();											
				stringstream ss;
				node.print(ss,"\t",pugi::format_raw);
				string message = ss.str();
				LOG_DEBUG("MessageRoute::route  forward muc message msg = "<<message);	
				ProcessResult result;									 
				//推给muc服务器ok
				bool forward = MY_INSTANCE(ProxyRegister).getProxy<MucServiceProxy>("mucProxy")->forwardMessage(fromid,sessionid,message);
				// 如果forward成功，返回ok，否则返回error

				string bodyType = node.child("body").attribute("type").value();	
				if(!bodyType.empty()){
					string 	bodyTypeE ="GROUP_" + bodyType;
					string context;				
					//	LOG_ACTION(bodyType<<"|"<<from.getUserId()<<"|"<<to.getUserId()<<"|"<<sessionPtr->getCAppId()<<"|"<<sessionPtr->getCFromId()<<"|"<<sessionPtr->getCVersion()<<"|0"<<"|0");
					if(bodyType == "text"){
						string text = node.first_element_by_path("body/text").first_child().value();
						LOG_TALK_ACTION(bodyTypeE<<"|"<<from.getUserId()<<"|"<<to.getUserId()<<"|"<<sessionPtr->getCAppId()<<"|"<<sessionPtr->getSessionId()<<"|"<<text);
						context = text;
						replace_all(context, "|", "");
						replace_all(context, "\n", "");
					}else if (bodyType == "image"){
						LOG_TALK_ACTION(bodyTypeE<<"|"<<from.getUserId()<<"|"<<to.getUserId()<<"|"<<sessionPtr->getCAppId()<<"|"<<sessionPtr->getSessionId()<<"|image");
					}else if(bodyType == "voice"){
						LOG_TALK_ACTION(bodyTypeE<<"|"<<from.getUserId()<<"|"<<to.getUserId()<<"|"<<sessionPtr->getCAppId()<<"|"<<sessionPtr->getSessionId()<<"|voice");
					}else if(bodyType == "expression"){
						LOG_TALK_ACTION(bodyTypeE<<"|"<<from.getUserId()<<"|"<<to.getUserId()<<"|"<<sessionPtr->getCAppId()<<"|"<<sessionPtr->getSessionId()<<"|expression");
					}else {
						LOG_TALK_ACTION(bodyTypeE<<"|"<<from.getUserId()<<"|"<<to.getUserId()<<"|"<<sessionPtr->getCAppId()<<"|"<<sessionPtr->getSessionId()<<"|unknow");
					}

					LOG_MUC_ACTION(bodyType<<"|"<<from.getUserId()<<"|"<<to.getUserId()<<"|"<<sessionPtr->getCAppId()<<"|"<<sessionPtr->getCFromId()<<"|"<<sessionPtr->getCVersion()<<"|0"<<"|0|" << from.getEndpoint() << "|" << to.getEndpoint() << "|" <<  context << "|");
					RLOG_MUC_ACTION(bodyType<<"|"<<from.getUserId()<<"|"<<to.getUserId()<<"|"<<sessionPtr->getCAppId()<<"|"<<sessionPtr->getCFromId()<<"|"<<sessionPtr->getCVersion()<<"|0"<<"|0|" << from.getEndpoint() << "|" << to.getEndpoint() << "|" <<  context << "|");
				}

				//time|text|fromUserId|toRoomId|appId|fromId|version|0|0 
				if(forward){
					result.setCode(ProcessResult::OK);
					result.setMsg("<success/>");
					return result;
				}else {
					result.setCode(ProcessResult::ERROR);
					result.setMsg("<error>talk(to muc) internal error</error>");
					return result;
				}

			}

			//单聊信息
			if(to.getEndpoint() == "talk.sixin.com" || to.getEndpoint() == "renren.sixin.com" || to.getEndpoint() == "talk.m.renren.com" ||to.getEndpoint() ==""){

				LOG_DEBUG("MessageRoute::route chat message");	
				string msgType = node.attribute("type").value();
				if(msgType == "chat" || msgType == "personal" || msgType == "entity"){
					return chatHandlerPtr_->handler(sessionPtr, node);
				}
				ProcessResult result(ProcessResult::ERROR, "type not support");
				return result;

			} else{

				long fromid = from.getUserId();
				long toid = to.getUserId();
				stringstream ss;
				node.print(ss,"\t",pugi::format_raw);
				string message=ss.str();
				string router=to.getRouter();
				//std::cout<<router<<std::endl;
				LOG_DEBUG("MessageRoute::route  forward "<< to.getEndpoint()<<" message msg = "<<message);	
				router.append("ServiceProxy");
				ProcessResult result;									 

				bool forward = 0;

				LOG_DEBUG("MessageRoute::route  forward "<< router<<"message msg = "<<message);	
				if(MY_INSTANCE(ProxyRegister).getProxy<RouterServiceProxy>(router).get()!=0){

					LOG_DEBUG("MessageRoute::get RouterServiceProxy and  forward "<< router<<" message msg = "<<message);	

					forward = MY_INSTANCE(ProxyRegister).getProxy<RouterServiceProxy>(router)->forwardMessage(fromid,toid,message);

				}
				// 如果forward成功，返回ok，否则返回error
					string id = node.attribute("id").value();
					string type=node.attribute("type").value();
				if(forward){
					result.setCode(ProcessResult::OK);
					stringstream ss;
					ss<<"<success id='";
					ss<<id;
					ss << "' from='";
					ss << from.toString();
					ss << "' to='";
					ss << to.toString();
					ss<<"'  type='";
					ss<<type;
					ss<<"'/>";
					result.setMsg(ss.str());
					return result;
				}else {
					result.setCode(ProcessResult::ERROR);
					stringstream s;
					s<<"<error id='";
					s<<id;
					s<<"'>fail to ";
					s<<to.getEndpoint();
					s<<" error</error>";
					result.setMsg(s.str());
					return result;
				}

			}

		}

	};
};
