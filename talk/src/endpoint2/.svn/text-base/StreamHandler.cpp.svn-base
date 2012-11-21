#include <boost/timer.hpp>
#include <iostream>
#include <sstream>
#include <string>
#include <string.h>
#include <boost/lexical_cast.hpp>
#include "StreamHandler.h"
#include "utils/MyLogger.h"
#include "EndpointServer2.h"
#include "constant/ResultCode.h"
#include "ice_src/Utils.h"
#include "pugixml/pugixml.hpp"
#include "utils/Base64Util.h"
#include "proxy/ProxyRegister.h"


using namespace mtalk::utils;
using namespace pugi;
using namespace mtalk::constant;
using namespace mtalk::proxy;
using namespace mtalk::net;
using namespace std;
using namespace HZP;

namespace mtalk{
	namespace endpoint2{

		StreamHandler::StreamHandler(){
			socketServiceProxyPtr_ = MY_INSTANCE(ProxyRegister).getProxy<SocketServiceProxy>("socketProxy");
		}
		StreamHandler::~StreamHandler(){
			LOG_DEBUG("StreamHandler::~StreamHandler => destory");
		}

		void StreamHandler::handler(const std::string& request, ConnectionPtr& connectionPtr){
			LOG_DEBUG("StreamHandler ::handler ==>  getRequest:\n" << request);
			/*
			   如果是首次请求 调用createSession
			   同时设置isFirstFlag=0;
			   通过返回值设置sessionId
			 */
			/*首次请求*/
			if(connectionPtr->getAttribute("sessionId").empty()){
				pugi::xml_document doc;
				doc.load(request.c_str());
				if(!doc){
					connectionPtr->write(generateErr("bad stream"));
					connectionPtr->close();
					return  ;
				}
				xml_node node = doc.first_child();
				string name=node.name();
				LOG_DEBUG("StreamHandler ::handler ==> nodeName" <<name );
				if(connectionPtr->getAttribute("caughtStream").empty()){
					if( name.compare("stream:stream")==0 ){

						string cAppId = node.attribute("c_appid").value();
						string online_deploy = node.attribute("online_deploy").value();
						string v = node.attribute("v").value();
						if(!v.empty()){
							connectionPtr->setAttribute("v",v);
						}else{
							connectionPtr->setAttribute("v","0");
						}

						if(!online_deploy.empty()){
							connectionPtr->setAttribute("online_deploy",online_deploy);
						}else{
							connectionPtr->setAttribute("online_deploy","false");
						}
						string c_fromid = node.attribute("c_fromid").value();
						if(!c_fromid.empty())
						connectionPtr->setAttribute("c_fromid",c_fromid);

							string c_version = node.attribute("c_version").value();
						if(!c_version.empty())
							connectionPtr->setAttribute("c_version", c_version);

						if(!cAppId.empty())
						  connectionPtr->setAttribute("c_appid",cAppId);

						connectionPtr->setAttribute("caughtStream","1");
						stringstream os;
						os<<"<?xml version='1.0'?>"
							<<" <stream:stream from='talk.xiaonei.com'"
							<<" xmlns='jabber:client'"
							<<" xmlns:stream='http://etherx.jabber.org/streams'"
							<<" version='1.0'>\r\n";
						os<<"<stream:features>"
							<<"<mechanisms xmlns='urn:ietf:params:xml:ns:xmpp-sasl'>"
							<<"<mechanism>SECRET_KEY</mechanism>"
							<<"</mechanisms>"
							<<"</stream:features>";
						connectionPtr->write(os.str());
						return ;
					}else{
						connectionPtr->write(generateErr("not found stream node"));
						connectionPtr->close();
						return ;
					}
				}else{
						if( name.compare("auth")==0){
								string mechanism=node.attribute("mechanism").value();

								if(mechanism!="SECRET_KEY"){
										connectionPtr->write(generateErr("do not support "));
										return ;
								}
						xml_node node_auth = node.first_child();
						string authStr=node_auth.value();
						if(authStr.empty()){
							connectionPtr->write(generateErr("userId empty"));
							return ;
						}
						long userId;
						try{
							userId = boost::lexical_cast<long>(authStr.c_str());
						}catch(exception& e){
							connectionPtr->write(generateErr("userId formed error"));
							return ;
						}
							connectionPtr->setAttribute("userId", authStr);
						LOG_DEBUG("StreamHandler ::handler ==> proxy creatSession  user:" <<userId );
						com::xiaonei::wap::talk::Result result = socketServiceProxyPtr_->createSession(userId, connectionPtr->getId(), request);
						LOG_DEBUG("StreamHandler::createSession => proxyPtrReturn code = " <<result.code <<" msg" <<result.msg);
						if(result.code== ResultCode::SESSION_CREATE_SUCCESS)
						{
								std::string sessionId = result.msg;
								connectionPtr->setAttribute("sessionId", sessionId);
								string cAppid=connectionPtr->getAttribute("c_appid");
								string v=connectionPtr->getAttribute("v");
								string online_deploy=connectionPtr->getAttribute("online_deploy");
								string c_fromid = connectionPtr->getAttribute("c_fromid");
								string c_version = connectionPtr->getAttribute("c_version");
								if(!cAppid.empty()){
								stringstream os;
								os<<"<bind  "<< "c_appid='"<< cAppid <<"' online_deploy='" 
												<<online_deploy << "' v='"<<v <<"'" <<" c_fromid = '"<<c_fromid <<"' c_version='"<<c_version <<"' />";
								LOG_DEBUG("StreamHandler::bind =>"<<os.str() );
								socketServiceProxyPtr_->transferStream(connectionPtr->getAttribute("sessionId"), connectionPtr->getId(), os.str());
								}

						}else{
								connectionPtr->write(generateErr("create session error"));
								LOG_DEBUG("StreamHandler::createSession return unexpecte ");
								connectionPtr->close();
								return  ;
						}
						

					}else {
						connectionPtr->write(generateErr("not found auth node"));
						return  ;
					}
				}
			}else{
				/*已知sessionId  调用TransferStream*/
				com::xiaonei::wap::talk::Result result = 
					socketServiceProxyPtr_->transferStream(connectionPtr->getAttribute("sessionId"), connectionPtr->getId(), request);

				LOG_DEBUG("StreamHandler::transferStream => proxyPtrReturn code = " <<result.code <<" msg" <<result.msg);
				if(result.code==ResultCode::SESSION_CLOSE || result.code==ResultCode::SESSION_NOT_FOUND ){
					LOG_DEBUG("StreamHandler::transfer return  close or not found");
					connectionPtr->write(generateErr("session close or not found"));
					connectionPtr->close();
				}else if(result.code==ResultCode::AUTH_FAILURE){
					LOG_DEBUG("StreamHandler::transfer return  auth failure");
					connectionPtr->write(generateErr("auth failure"));
					connectionPtr->close();
				}else if(result.code == ResultCode::PROXY_NOT_FOUND){
					connectionPtr->write(generateErr("Internal error"));
					connectionPtr->close();
				}
			}
		}

		std::string StreamHandler::generateErr(const std::string& errMsg){
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

	};
};


