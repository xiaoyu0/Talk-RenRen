#include <limits.h>
#include <iostream>
#include <algorithm>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/lexical_cast.hpp>
#include "EndpointServer2.h"
#include "SocketIoHandler.h"
#include "utils/TimeUtils.h"
#include "utils/IpAddr.hpp"
#include "utils/TalkSchemaValidater.h"
#include "proxy/ProxyRegister.h"
#include "Config.h"
#include <ostream>

#include "pugixml/pugixml.hpp"
#include "protocolChanger/ProtocolChanger.h"
using namespace std;
using namespace boost::asio;
using namespace pugi;
using namespace mtalk::utils;
using namespace mtalk::net;
using namespace mtalk::proxy;
using namespace mtalk::zk;


namespace mtalk{
	namespace endpoint2{

		EndpointServer2::EndpointServer2() :
			isPause_(false),
			asioServerPtr_(new AsioServer),
			zkManagerPtr_(new ZKManager()){
				LOG_INFO("EndpointServer2::EndpointServer2 => Created");
			}

		void EndpointServer2::init(int id, short port, short sslport ,const std::string& sslcertFile,std::string& sslkeyFile,std::string& ssldhFile,  short servicePort, const string& domain, const string& zkServers){
			id_ = id;
			port_ = port;
			domain_ = domain;

			zkManagerPtr_->init(zkServers);

			socketServiceProxyPtr_ = boost::shared_ptr<SocketServiceProxy>(new SocketServiceProxy());
			zkManagerPtr_->addListener(socketServiceProxyPtr_->getZKPath(), socketServiceProxyPtr_);
			MY_INSTANCE(ProxyRegister).registerProxy("socketProxy", socketServiceProxyPtr_);

			boost::shared_ptr<EndpointServer2ZKListener> endpointServer2ZKListenerPtr(new EndpointServer2ZKListener(ZK_ENDPOINT_PATH, id, servicePort));
			zkManagerPtr_->addListener(endpointServer2ZKListenerPtr->getNodePath(), endpointServer2ZKListenerPtr);


			LOG_INFO("TalkServer::init => init accountBindServiceProxy");
			boost::shared_ptr<BindServiceProxy>
				accountBindServiceProxyPtr(new BindServiceProxy());
			MY_INSTANCE(ProxyRegister).registerProxy("accountBindServiceProxy", accountBindServiceProxyPtr);
			zkManagerPtr_->addListener(accountBindServiceProxyPtr->getZKPath(), accountBindServiceProxyPtr);



			asioServerPtr_->setPort(port);
			//asioServerPtr_->setSSLInfo(sslport,sslcertFile,sslkeyFile,ssldhFile);   //ssl port 
			asioServerPtr_->setId(id);
			ioHandlerPtr_ = boost::shared_ptr<IoHandler>(new SocketIoHandler);
			asioServerPtr_->setIoHandler(ioHandlerPtr_);

			protocolChangerPtr_.reset(new protocolChang::ProtocolChanger());
			xmppTagHandlerPtr_.reset(new XMPPTagHandler);
			xmppTagHandlerPtr_->setProtocolChangerPtr(protocolChangerPtr_);
			LOG_INFO("EndpointServer2::init => finish");
		}



		void EndpointServer2::start(){
			asioServerPtr_->bind();

			LOG_INFO("EndpointServer2::start => finish");
		}

		void EndpointServer2::stop(){
			asioServerPtr_->unbind();
			LOG_INFO("EndpointServer2::stop => finish");
		}

		void EndpointServer2::pause(){
			LOG_INFO("EndpointServer2::pause => begin");
			//检测到已经暂停直接返回，不用等待锁
			if(isPause_)
				return;
			ScopedLock lock(pauseMutex_);
			if(isPause_)
				return;
			isPause_ = true;
			asioServerPtr_->clearAllConnection();
			LOG_INFO("EndpointServer2::pause => finish clear all connection");
		}

		void EndpointServer2::resume(){
			LOG_INFO("EndpointServer2::resume => begin");
			//检测到已经恢复直接返回，不用等待锁
			if(!isPause_)
				return;
			ScopedLock lock(pauseMutex_);
			if(!isPause_)
				return;
			isPause_ = false;
			LOG_INFO("EndpointServer2::resume => finish");
		}

		void EndpointServer2::delTagparser(long  connectionId){
			tagParserManager_.remove(connectionId);
		}

		bool EndpointServer2::acceptRequest(const string& request, ConnectionPtr connectionPtr){
			LOG_DEBUG("EndpointServer2::acceptRequest => begin cid = "<<connectionPtr->getId() <<"msg = "<<request);

			tagparser::TagParserPtr tagParserPtr = tagParserManager_.getTagParser(connectionPtr->getId());

			if(!tagParserPtr){
				tagParserPtr.reset(new tagparser::TagParser(xmppTagHandlerPtr_));
				tagParserManager_.add(connectionPtr->getId(), tagParserPtr);
			}
			if(request == " "){
				string heartbeatStr = "<heartbeat/>";
				tagParserPtr->feed(connectionPtr, heartbeatStr);
				return 1 ;
			}

			if(!tagParserPtr->feed(connectionPtr, request) && (connectionPtr->getAttribute("alive") == "true")){
				LOG_DEBUG("EndpointServer2::acceptRequest => tagParser error cid = "<<connectionPtr->getId()<< " msg = "<<request);
				stringstream os;
				os<<"<stream:error>\n"
					<<"<xml-not-well-formed xmlns='urn:ietf:params:xml:ns:xmpp-streams'/>\n"
					<<"<text xmlns='urn:ietf:params:xml:ns:xmpp-streams' xml:lang='en'>\n"
					<<"socket xml parse(tagparser) error"
					<<"\n</text>\n"
					<<"</stream:error>\n"
					<<"</stream:stream>\n ";
				connectionPtr->write(os.str());
			}

			return 1;


			//	if(xxx->feed(connectionPtr, request)){
			//		return 1;
			//	}else{
			//close connection session
			//	}

			//
			//		if(isPause_){
			//			return false;
			//		}
			//		try{
			//			bool result = true;
			//			streamHandlerPtr->handler(request, connectionPtr);
			//			return result;
			//		} catch (exception& e) {
			//			LOG_ERROR("EndpointServer2::acceptRequest => error : " << e.what());
			//		} catch (...) {
			//			LOG_ERROR("EndpointServer2::acceptRequest => unkonw error");
			//		}
			//		return false;
		}

		void EndpointServer2::deliverMsg(const long connectionId, const string& msg){
			
			TalkSchemaValidater::validate(msg);

			ConnectionPtr connectionPtr = asioServerPtr_->getConnection(connectionId);

			LOG_DEBUG("EndpointServer2::deliverMsg => begin : cid = " << connectionId << " msg = [" << msg<<"]");
			if(!connectionPtr){
				LOG_WARN("EndpointServer2::deliverMsg => failure ( connection not found ) : cid = " << connectionId << " msg = " << msg);
				return ;
			}



			xml_document doc;
			xml_parse_result xmlResult = doc.load(msg.c_str());

			if(!xmlResult || !doc.first_child()){
				LOG_DEBUG("EndpointServer2::deliverMsg => success : cid = " << connectionId << " msg = [" << msg<<"]");
				connectionPtr->write(msg);
				return ;
			}

			xml_node node = doc.first_child();

			if( -1  == protocolChangerPtr_->changBack(connectionPtr->getAttribute("serverDomain"),node)){
				return ;
			}
			stringstream os ;
			node.print(os,"\t", pugi::format_raw);

			connectionPtr->write(os.str());
			LOG_DEBUG("EndpointServer2::deliverMsg => success : cid = " << connectionId << " msg = [" << (os.str())<<"]");
		}

		bool EndpointServer2::notifySent(mtalk::net::ConnectionPtr connectionPtr, long userId, string msg){
			xml_document doc;
			xml_parse_result xmlResult = doc.load(msg.c_str());
			xml_node node=doc.first_child();
			string nodeName = node.name();
			LOG_DEBUG("EndpointServer2::notifySent => success :  msg = " << "[" <<msg<<"]");
			if(nodeName == "message"){
				string from = node.attribute("from").value();
				string to = node.attribute("to").value();
				string chatType = node.attribute("type").value();
				string bodyType = node.child("body").attribute("type").value();	
				string msgkey  = node.attribute("msgkey").value();
				string id = node.attribute("id").value();
				if(bodyType == "text"){
					string text = node.first_element_by_path("body/text").first_child().value();
					LOG_ACTION("OUT|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<msgkey<<"|"<<
									connectionPtr->getAttribute("c_appid")<<"|"<<connectionPtr->getAttribute("c_version")<<"|"<<id<<"|"<<text);
				}else if (bodyType == "image"){
						LOG_ACTION("OUT|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<msgkey<<"|"<<
										connectionPtr->getAttribute("c_appid")<<"|"<<connectionPtr->getAttribute("c_version")<<"|"<<id<<"|"<<"image");
				}else if(bodyType == "voice"){
						LOG_ACTION("OUT|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<msgkey<<"|"<<
										connectionPtr->getAttribute("c_appid")<<"|"<<connectionPtr->getAttribute("c_version")<<"|"<<id<<"|"<<"voice");
				}else if(bodyType == "expression"){
						LOG_ACTION("OUT|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<msgkey<<"|"<<
										connectionPtr->getAttribute("c_appid")<<"|"<<connectionPtr->getAttribute("c_version")<<"|"<<id<<"|"<<"expression");
				}else {
						LOG_ACTION("OUT|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<msgkey<<"|"<<
										connectionPtr->getAttribute("c_appid")<<"|"<<connectionPtr->getAttribute("c_version")<<"|"<<id<<"|"<<"unknow");
				}

			}
			return 0;
		}

		EndpointServer2ZKListener::EndpointServer2ZKListener(const string& path, const int serverId, const short serverPort) :
			path_(path),
			serverId_(serverId),
			serverPort_(serverPort){

				nodeName_ = "server-" + boost::lexical_cast<string>(serverId_);
				nodePath_ = path_ + "/" + nodeName_;
				string ipAddr = MyUtil::IpAddr::inner();
				nodeAddress_ = ipAddr + ':' + boost::lexical_cast<string>(serverPort_);
			}

		void EndpointServer2ZKListener::zkHandle(boost::shared_ptr<ZKManager> zkManagerPtr, const std::string& path, const ZKEventType event){
			switch(event){
				case ZK_CHILD_CHANGED :
					LOG_INFO("EndpointServer2ZKListener::zkHanlde => path [" << path << "] children changed, skip this event");
					break;
				case ZK_SESSION_EXPIRED :
					LOG_INFO("EndpointServer2ZKListener::zkHanlde => path [" << path << "] session expired, start update");
					registerServer(zkManagerPtr);
					LOG_INFO("EndpointServer2ZKListener::zkHanlde => path [" << path << "] listener update finish");
					break;
				case ZK_LISTENER_INIT :
					LOG_INFO("EndpointServer2ZKListener::zkHanlde => path [" << path << "] listener init, start update");
					registerServer(zkManagerPtr);
					LOG_INFO("EndpointServer2ZKListener::zkHanlde => path [" << path << "] listener update finish");
					break;
			};
		}

		string EndpointServer2ZKListener::getNodePath() const{
			return nodePath_;
		}

		void EndpointServer2ZKListener::updateConfig(boost::shared_ptr<ZKManager> zkManagerPtr){
		}

		void EndpointServer2ZKListener::registerServer(boost::shared_ptr<ZKManager> zkManagerPtr){
			LOG_INFO("EndpointServer2ZKListener::registerServer => begin : path = " << nodePath_ << " address = " << nodeAddress_);
			zkManagerPtr->createNode(path_, nodeName_, nodeAddress_);
		}

	};
};
