#include "XMPPTagHandler.h"
#include "utils/MyLogger.h"
#include <string>
#include "pugixml/pugixml.hpp"
#include "constant/MessageType.h"
#include <sstream>
#include <iostream>
#include <boost/lexical_cast.hpp>
#include "proxy/ProxyRegister.h"
#include "Config.h"
#include "proxy/MsgWaitServiceProxy.h"
#include "proxy/PushServiceProxy.h"
#include  "proxy/SocketServiceProxy.h"
#include "utils/XmlUtils.h"
#include "utils/TalkSchemaValidater.h"
#include    "constant/ResultCode.h"
#include    "ice_src/Utils.h"
#include "xmpp/JID.h"

using namespace std;
using namespace mtalk::constant;
using namespace mtalk::utils;
using namespace mtalk::proxy;
using namespace pugi;

namespace mtalk{
	namespace endpoint2{

		XMPPTagHandler::XMPPTagHandler(/*boost::shared_ptr<mtalk::xmpp::XMPPProcessor> xmppProcessorPtr*/)
		{
			socketServiceProxyPtr_ = MY_INSTANCE(ProxyRegister).getProxy<SocketServiceProxy>("socketProxy");
			if(!socketServiceProxyPtr_){
			}
		}
		
		void XMPPTagHandler::messaged(const boost::shared_ptr<mtalk::net::Connection> SSPtr, tagparser::xml_document_ptr& doc){
			
			stringstream os;
			pugi::xml_node body = doc->first_child();
			string msgDecode = body.first_element_by_path("body/text").child_value();
			os.str("");
			body.print(os, "\t", pugi::format_raw);
			string str = os.str();
			LOG_TRACE("XMPPTagHandler::messaged => begin  xml_document = "<<str);
			string name = body.name();


			if(name != "stream:stream"){
				//校验schema
				TalkSchemaValidater::validate(str);
			}
			LOG_DEBUG("XMPPTagHandler::messaged accept request = "<<str);



			if(name=="stream:stream"){
				SSPtr->setAttribute("status", "slect_auth");
				string cAppId = body.attribute("c_appid").value();
				string online_deploy = body.attribute("online_deploy").value();
				string v = body.attribute("v").value();
				string to = body.attribute("to").value();
				if(to != "talk.sixin.com"){
					to = "talk.m.renren.com";
				}
				if(!v.empty()){
					SSPtr->setAttribute("v",v);
				}else{
					SSPtr->setAttribute("v","0");
				}

				string lang = body.attribute("xml:lang").value();
				SSPtr->setAttribute("xml:lang",lang);

				if(!online_deploy.empty()){
					SSPtr->setAttribute("online_deploy",online_deploy);
				}else{
					SSPtr->setAttribute("online_deploy","false");
				}
				string c_fromid = body.attribute("c_fromid").value();
				if(!c_fromid.empty())
					SSPtr->setAttribute("c_fromid",c_fromid);

				string c_version = body.attribute("c_version").value();
				if(!c_version.empty())
					SSPtr->setAttribute("c_version", c_version);

				if(!cAppId.empty())
					SSPtr->setAttribute("c_appid",cAppId);
			
				if(!to.empty()){
					SSPtr->setAttribute("serverDomain",to);
				}

				stringstream os;
				os<<"<?xml version='1.0'?>"
					<<"<stream:stream from='talk.m.renren.com'"
					<<" xmlns='jabber:client'"
					<<" xmlns:stream='http://etherx.jabber.org/streams'"
					<<" version='1.0'>"
					<<"<stream:features>"
					<<"<mechanisms xmlns='urn:ietf:params:xml:ns:xmpp-sasl'>"
					<<"<mechanism>SECRET_KEY</mechanism>"
					<<"<mechanism>MAS_SECRET_KEY</mechanism>"
					<<"</mechanisms>"
					<<"</stream:features>";

				SSPtr->write(os.str());
				return;
			}else if(name=="close"){
				com::xiaonei::wap::talk::Result result =socketServiceProxyPtr_->sendV1(SSPtr->getAttribute("sessionId"), "<presence type='unavailable'/>");
				SSPtr->write("</stream:stream>");
				SSPtr->setAttribute("alive","false");
				SSPtr->close();
				return;

			}else if(name == "auth" && SSPtr->getAttribute("status")=="slect_auth"){
				string cAppid=SSPtr->getAttribute("c_appid");
				string v=SSPtr->getAttribute("v");
				string online_deploy=SSPtr->getAttribute("online_deploy");
				string c_fromid = SSPtr->getAttribute("c_fromid");
				string c_version = SSPtr->getAttribute("c_version");
				string to = SSPtr->getAttribute("serverDomain");
				string lang = SSPtr->getAttribute("xml:lang");

				body.append_attribute("c_appid").set_value(cAppid.c_str());	
				body.append_attribute("v").set_value(v.c_str());	
				body.append_attribute("online_deploy").set_value(online_deploy.c_str());	
				body.append_attribute("c_fromid").set_value(c_fromid.c_str());	
				body.append_attribute("c_version").set_value(c_version.c_str());	
				body.append_attribute("to").set_value(to.c_str());	
				body.append_attribute("xml:lang").set_value(lang.c_str());	
				

			
				xml_node node_auth = body.first_child();
				string authStr = node_auth.value();
				if(authStr.empty()){
					SSPtr->write(generateErr("userId empty"));
					return ;
				}

				long userId;
				try{
					userId = boost::lexical_cast<long>(authStr.c_str());
				}catch(std::exception& e){
					SSPtr->write(generateErr("userId formed error"));
					return ;
				}

				
	
				mtalk::xmpp::JID  from(SSPtr->getAttribute("serverDomain"));
				string domain = from.getEndpoint();
				long userSixinId = 0 ;

				if(strcmp(domain.c_str(),"talk.sixin.com") == 0){
					userSixinId = userId ;	
				}else{
					//原有2.0用户添加人人id属性
					body.append_attribute("renren_id").set_value(authStr.c_str());
					userSixinId = protocolChangerPtr_->getSixinIdByRenRenId(userId);
					if(userSixinId == -1){
						LOG_ERROR("XMPPTagHandler::messaged => failue userId = "<<userId<<" can not found bound sixinId");
						SSPtr->write(generateErr("can not found bound sixinId"));
						SSPtr->close();
						return ;
					}
				}

				string userSixinIdStr = boost::lexical_cast<string>(userSixinId) ;
				SSPtr->setAttribute("userSixinId", userSixinIdStr);
				SSPtr->setAttribute("userId", authStr);
					
				LOG_DEBUG("XMPPTagHandler::messaged auth authStr  userId = "<<userId <<" userSixinId = "<<userSixinId);

				//发送auth 到talk 创建session 带上附加属性 	
				body.first_child().set_value(userSixinIdStr.c_str());
				stringstream  authos;
				body.print(authos, "\t", pugi::format_raw);
				string  authXmlstring = authos.str();	
				/**

					 Domain conversion

				 */
				com::xiaonei::wap::talk::Result result = socketServiceProxyPtr_->createSessionV1(userSixinId, SSPtr->getId(), authXmlstring);



				if(result.code == ResultCode::SESSION_CREATE_SUCCESS){
					xml_document doc ;
					doc.load(result.msg.c_str());
					xml_node node = doc.first_child();
					string session = node.attribute("sid").value();
					SSPtr->setAttribute("sessionId", session);
					LOG_DEBUG("create success  userId =" << userId);
					SSPtr->setAttribute("status", "auth");
					LOG_DEBUG("XMPPTagHandler::messaged auth return to clinet  = "<<result.msg <<"userId = "<<userId);
					xml_document doc1;
					doc1.load(result.msg.c_str());
					xml_node node1 = doc1.first_child();
					node1.remove_attribute("sid");
					stringstream os;
					node1.print(os, "\t", pugi::format_raw);
					SSPtr->write(os.str());
				}else{
					string response = generateInternalErr(result.msg);
					SSPtr->write(response);
					SSPtr->setAttribute("alive","false");
					SSPtr->close();
				}
			}else if(name == "response" && SSPtr->getAttribute("status") == "auth"){
				LOG_DEBUG("response ");
				
				LOG_DEBUG("XMPPTagHandler::messaged response  = userId = " << SSPtr->getAttribute("userId"));
				//发送认证字符串
				com::xiaonei::wap::talk::Result result = socketServiceProxyPtr_->updateV1(SSPtr->getAttribute("sessionId"), os.str());
				if(result.code == ResultCode::AUTH_FAILURE){
					SSPtr->setAttribute("alive","false");
					//LOG_DEBUG("XMPPTagHandler  close connection ");
                    stringstream os;
                    os<<"<stream:error type='authFailue'>\n"
                        <<"<text xmlns='urn:ietf:params:xml:ns:xmpp-streams' xml:lang='en'>\n"
                        <<"auth failure"
                        <<"\n</text>\n"
                        <<"</stream:error>\n"
                        <<"</stream:stream>\n ";
                    SSPtr->write(os.str());
					SSPtr->close();
					return ;
				}else if(result.code !=  ResultCode::OK){
					string response = generateInternalErr(result.msg);
					SSPtr->write(response);
					SSPtr->setAttribute("alive","false");
					SSPtr->close();
					return ;
				}
				LOG_DEBUG("XMPPTagHandler::messaged response success "<<SSPtr->getAttribute("userId"));
				SSPtr->setAttribute("status", "qualified");
				SSPtr->setAttribute("alive","true");
				return ;
			} else if(SSPtr->getAttribute("status") == "qualified"){
				//发送聊天内容
				

				
				//if(name == "message"){
				//	string from = body.attribute("from").value();
				//	string to = body.attribute("to").value();
				//	string chatType = body.attribute("type").value();
				//	string bodyType = body.child("body").attribute("type").value();	
				//	if(bodyType == "text"){
				//		string text = body.first_element_by_path("body/text").first_child().value();
				//		LOG_ACTION("IN|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<text);
				//	}else if (bodyType == "image"){
				//		LOG_ACTION("IN|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<"image");
				//	}else if(bodyType == "voice"){
				//		LOG_ACTION("IN|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<"voice");
				//	}else if(bodyType == "expression"){
				//		LOG_ACTION("IN|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<"expression");
				//	}else {
				//		LOG_ACTION("IN|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<"unknow");
				//	}			
				//}
		
				//if(name == "ack"){
				//	string msgkey = body.attribute("msgkey").value();
				//	LOG_ACTION("IN|ACK|"<<SSPtr->getAttribute("userId")<<"|"<<msgkey);
				//}
				writeLog(SSPtr, body);

				string domain = SSPtr->getAttribute("serverDomain");
				if(domain.empty()) {
				    domain = "talk.m.renren.com";
				}

				string savedSixinId = SSPtr->getAttribute("userSixinId");
				long userSixinId = 0 ;
				if(!savedSixinId.empty()){
						try{
								userSixinId = boost::lexical_cast<long>(savedSixinId);
						}catch(...){
						}
				}

				if(protocolChangerPtr_->changToSixin(domain,body,userSixinId) == -1){
						LOG_ERROR("XMPPTagHandler::messaged => failue  protocol change failure");
						SSPtr->write(generateErr("protocol change failure"));
						return ;

				}
				stringstream os ;
				body.print(os, "\t", pugi::format_raw);
				string xmlMessageString = os.str();
				com::xiaonei::wap::talk::Result result = socketServiceProxyPtr_->sendV1(SSPtr->getAttribute("sessionId"), os.str());
				if(result.code == ResultCode::SESSION_NOT_FOUND ||
								result.code == ResultCode::SESSION_CLOSE){ string response = generateErr("Session not found");
						SSPtr->setAttribute("alive","false");
						SSPtr->write(response);
						SSPtr->setAttribute("alive","false");
						SSPtr->close();
				}else if(result.code == ResultCode::AUTH_FORBIDDEN){
						string response = generateErr("auth forbidden");
						SSPtr->write(response);
						SSPtr->setAttribute("alive","false");
						SSPtr->close();
				}else if( result.code == ResultCode::OK){
					if(!result.msg.empty()){
						SSPtr->write(result.msg);
					}
				} else if(result.code != ResultCode::OK){
						string response = generateInternalErr(result.msg);
						//SSPtr->setAttribute("alive","false");
						SSPtr->write(response);
				}
				return ;
			}else{
				LOG_INFO("XMPPTagHandler::request error uid = "<<SSPtr->getAttribute("userId"));
				string result = generateErr("request error");
				SSPtr->write(result);
			}

		}

		std::string XMPPTagHandler::generateErr(const std::string& errMsg){
				stringstream os;
				os<<"<stream:error>\n"
						<<"<xml-not-well-formed xmlns='urn:ietf:params:xml:ns:xmpp-streams'/>\n"
						<<"<text xmlns='urn:ietf:params:xml:ns:xmpp-streams' xml:lang='en'>\n"
						<<errMsg
						<<"\n</text>\n"
						<<"</stream:error>\n"
						<<"</stream:stream>\n ";
				return os.str();
		}

		std::string XMPPTagHandler::generateInternalErr(const std::string& errMsg){
				stringstream os;
				os<<"<stream:error type='internalErr'>";
				os<<"<text xmlns='urn:ietf:params:xml:ns:xmpp-streams' xml:lang='en'>\n";
				os<<"internal(";
				os<<errMsg;
				os<<")";
				os<<"\n</text>\n";
				os<<"</stream:error>\n";
				return os.str();
		}

		void XMPPTagHandler::writeLog(mtalk::net::ConnectionPtr SSPtr, const pugi::xml_node body){
				string name = body.name();
				if(name == "message"){
						string from = body.attribute("from").value();
						string to = body.attribute("to").value();
						string chatType = body.attribute("type").value();
						string bodyType = body.child("body").attribute("type").value();
						string id = body.attribute("id").value();
						if(bodyType == "text"){
								string text = body.first_element_by_path("body/text").first_child().value();
								LOG_ACTION("IN|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<
												SSPtr->getAttribute("c_appid")<<"|"<<SSPtr->getAttribute("c_version")<<"|"<<id<<"|"<<text);
						}else if (bodyType == "image"){
								LOG_ACTION("IN|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<
												SSPtr->getAttribute("c_appid")<<"|"<<SSPtr->getAttribute("c_version")<<"|"<<id<<"|"<<"image");
						}else if(bodyType == "voice"){
								LOG_ACTION("IN|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<
												SSPtr->getAttribute("c_appid")<<"|"<<SSPtr->getAttribute("c_version")<<"|"<<id<<"|"<<"voice");
						}else if(bodyType == "expression"){
								LOG_ACTION("IN|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<
												SSPtr->getAttribute("c_appid")<<"|"<<SSPtr->getAttribute("c_version")<<"|"<<id<<"|"<<"expression");
						}else {
								LOG_ACTION("IN|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<
												SSPtr->getAttribute("c_appid")<<"|"<<SSPtr->getAttribute("c_version")<<"|"<<id<<"|"<<"unknow");
						}
				}

				if(name == "ack"){
						string msgkey = body.attribute("msgkey").value();
						LOG_ACTION("IN|ACK|"<<SSPtr->getAttribute("userId")<<"|"<<msgkey<<"|"<<
										SSPtr->getAttribute("c_appid")<<"|"<<SSPtr->getAttribute("c_version"));
				}


		}


}
}
