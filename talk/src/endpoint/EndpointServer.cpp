#include <limits.h>
#include <iostream>
#include <algorithm>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>
#include "EndpointServer.h"
#include "HttpRequest.h"
#include "HttpIoHandler.h"
#include "utils/TimeUtils.h"
#include "utils/IpAddr.hpp"
#include "proxy/ProxyRegister.h"
#include "proxy/BindServiceProxy.h"
#include "Config.h"
#include "protocolChanger/ProtocolChanger.h"
#include "xmpp/JID.h"
#include <sstream>
#include <string>


using namespace std;
using namespace boost::asio;
using namespace pugi;
using namespace mtalk::xmpp;
using namespace mtalk::utils;
using namespace mtalk::net;
using namespace mtalk::zk;
using namespace mtalk::proxy;

namespace mtalk{
    namespace endpoint{

        EndpointServer::EndpointServer() :
            isPause_(false),
            asioServerPtr_(new AsioServer()),
            zkManagerPtr_(new ZKManager()){

                LOG_INFO("EndpointServer::EndpointServer => Created");
            }

        void EndpointServer::addRequestHandler(const string uri, boost::shared_ptr<HttpRequestHandler> httpRequestHandlerPtr){
            if(uri.empty()){
                return;
            }
            handlerMap_[uri] = httpRequestHandlerPtr;
        }

        void EndpointServer::init(int id, short port, short servicePort, const string& domain, const string& zkServers){
            id_ = id;
            port_ = port;
            domain_ = domain;

            zkManagerPtr_->init(zkServers);

            boshServiceProxyPtr_ = boost::make_shared<BoshServiceProxy>();
            zkManagerPtr_->addListener(boshServiceProxyPtr_->getZKPath(), boshServiceProxyPtr_);
            MY_INSTANCE(ProxyRegister).registerProxy("boshProxy", boshServiceProxyPtr_);

            boost::shared_ptr<EndpointServerZKListener> endpointServerZKListenerPtr(new EndpointServerZKListener(ZK_ENDPOINT_PATH, id, servicePort));
            zkManagerPtr_->addListener(endpointServerZKListenerPtr->getNodePath(), endpointServerZKListenerPtr);

            asioServerPtr_->setPort(port);
            asioServerPtr_->setId(id_);
            ioHandlerPtr_ = boost::make_shared<HttpIoHandler>();
            asioServerPtr_->setIoHandler(ioHandlerPtr_);

            LOG_INFO("TalkServer::init => init accountBindServiceProxy");
            boost::shared_ptr<BindServiceProxy>
                accountBindServiceProxyPtr(new BindServiceProxy());
            MY_INSTANCE(ProxyRegister).registerProxy("accountBindServiceProxy", accountBindServiceProxyPtr);
            zkManagerPtr_->addListener(accountBindServiceProxyPtr->getZKPath(), accountBindServiceProxyPtr);
            changerPtr_.reset(new protocolChang::ProtocolChanger);



            LOG_INFO("EndpointServer::init => finish");
        }

        void EndpointServer::start(){
            asioServerPtr_->bind();

            LOG_INFO("EndpointServer::start => finish");
        }

        void EndpointServer::stop(){
            asioServerPtr_->unbind();
            LOG_INFO("EndpointServer::stop => finish");
        }

        void EndpointServer::pause(){
            LOG_INFO("EndpointServer::pause => begin");
            //检测到已经暂停直接返回，不用等待锁
            if(isPause_)
                return;
            ScopedLock lock(pauseMutex_);
            if(isPause_)
                return;
            isPause_ = true;
            asioServerPtr_->clearAllConnection();
            LOG_INFO("EndpointServer::pause => finish clear all connection");
        }

        void EndpointServer::resume(){
            LOG_INFO("EndpointServer::resume => begin");
            //检测到已经恢复直接返回，不用等待锁
            if(!isPause_)
                return;
            ScopedLock lock(pauseMutex_);
            if(!isPause_)
                return;
            isPause_ = false;
            LOG_INFO("EndpointServer::resume => finish");
        }

        bool EndpointServer::acceptRequest(HttpRequest& request, ConnectionPtr connectionPtr){
            LOG_DEBUG("EndpointServer::acceptRequest => begin");

            HttpResponse response(connectionPtr);

            if(isPause_){
                response.responseErr();
                return false;
            }
            try{
                bool result = true;
                map<string, boost::shared_ptr<HttpRequestHandler> >::iterator
                    it = handlerMap_.find(request.getUri());

                if(it == handlerMap_.end()){
                    response.response("404 Not Found", HttpResponse::NOT_FOUND);
                    response.setEvent(HttpResponse::EVENT_NOT_FOUND);
                    result = false;
                } else {
                    string headerConnection = request.getHeader("Connection");
                    boost::to_lower(headerConnection);
                    if(headerConnection == "keep-alive"){
                        connectionPtr->setAttribute("keep-alive");
                        LOG_DEBUG("EndpointServer::acceptRequest => set keep alive : cid = " << connectionPtr->getId());
                    }
                    request.setRemoteAddress(connectionPtr->getRemoteAddress());
                    boost::shared_ptr<HttpRequestHandler> handler = it->second;
                    handler->baseHandler(request, response);
                }

                string originalSendMsg = request.getBody();
                xml_document doc ;
                xml_parse_result xmlresult = doc.load(originalSendMsg.c_str());
                xml_node body_node = doc.first_child();

                if(xmlresult && !body_node.empty()){

                    xml_node node = body_node.first_child();
                    string nodeName = node.name();
                    if(nodeName == "message"){
                        string from = node.attribute("from").value();
                        string to = node.attribute("to").value();
                        string chatType = node.attribute("type").value();
                        string bodyType = node.child("body").attribute("type").value();	
                        string msgkey  = node.attribute("msgkey").value();
                        //string id = node.attribute("id").value();

                        if(bodyType == "text"){
                            string text = node.first_element_by_path("body/text").first_child().value();
                            LOG_HTTP_ACTION("IN|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<msgkey<<"|"<<"text|"<<text);
                        }else if (bodyType == "image"){
                            LOG_HTTP_ACTION("IN|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<msgkey<<"|"<< "image");
                        }else if(bodyType == "voice"){
                            LOG_HTTP_ACTION("IN|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<msgkey<<"|"<< "voice");
                        }else if(bodyType == "expression"){
                            LOG_HTTP_ACTION("IN|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<msgkey<<"|"<< "expression");
                        }else {
                            LOG_HTTP_ACTION("IN|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<msgkey<<"|"<< "unknow");
                        }
                    }
                }
                LOG_ACCESS(
                        request.getRemoteAddress() << "|" <<
                        request.getMethod() << "|" <<
                        request.getUrl() << "|" <<
                        request.getHeader("User-Agent") << "|" <<
                        response.getEvent()
                        );

                return result;
            } catch (exception& e) {
                LOG_ERROR("EndpointServer::acceptRequest => error : " << e.what());
            } catch (...) {
                LOG_ERROR("EndpointServer::acceptRequest => unkonw error");
            }
            response.response("500 Internal Server Error", HttpResponse::INTERNAL_SERVER_ERROR);
            return false;
        }

        void EndpointServer::deliverMsg(const long connectionId, const string& msg){

            ConnectionPtr connectionPtr = asioServerPtr_->getConnection(connectionId);

            xml_document doc ;
            xml_parse_result xmlResult = doc.load(msg.c_str());
            xml_node body_node = doc.first_child();
            stringstream os ;
            if(!connectionPtr){
                LOG_WARN("EndpointServer::deliverMsg => failure ( connection not found ) : cid = " << connectionId << " msg = " << os.str());
                return ;
            }

            for(xml_node message_node = body_node.first_child(); message_node; message_node = message_node.next_sibling()){
                //在此转换
                string domain = connectionPtr->getAttribute("serverDomain");
                if(domain != "talk.sixin.com"){
                    domain = "talk.m.renren.com" ;
                }
                if(changerPtr_->changBack(domain , message_node) == -1){
                    return ;
                }
            }

            body_node.print(os, "\t", pugi::format_raw);
            string msgStr = os.str();
            HttpResponse response(connectionPtr);
            response.response(msgStr, HttpResponse::OK, false);
            LOG_DEBUG("EndpointServer::deliverMsg => success : cid = " << connectionId << " msg = " << (msgStr));

        }

        bool EndpointServer::notifySent(mtalk::net::ConnectionPtr connectionPtr, long userId , std::string msg){


            LOG_DEBUG("EndpointServer::notifySent => success :msg = " << msg);
            size_t pos;
            string bodymsg;
            pos = msg.find_first_of("<");
            if(pos == string::npos){
                LOG_WARN("EndpointServer::notifySent   => msg error:msg = "<<msg);
                return 1;
            } else {

                bodymsg = msg.substr(pos);
            }


            LOG_DEBUG("EndpointServer::notifySent =>parser bodymsg = " << bodymsg);
            xml_document doc ;
            xml_parse_result xmlResult = doc.load(bodymsg.c_str());
            xml_node body_node = doc.first_child();

            if(xmlResult && !body_node.empty()){
                xml_node node=body_node.first_child();
                string nodeName = node.name();
                if(nodeName == "message"){
                    string from = node.attribute("from").value();
                    string to = node.attribute("to").value();
                    string chatType = node.attribute("type").value();
                    string bodyType = node.child("body").attribute("type").value();	
                    string msgkey  = node.attribute("msgkey").value();
                    //string id = node.attribute("id").value();

                    if(bodyType == "text"){
                        string text = node.first_element_by_path("body/text").first_child().value();
                        LOG_HTTP_ACTION("OUT|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<msgkey<<"|"<< "text|"<<text);
                    }else if (bodyType == "image"){
                        LOG_HTTP_ACTION("OUT|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<msgkey<<"|"<< "image");
                    }else if(bodyType == "voice"){
                        LOG_HTTP_ACTION("OUT|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<msgkey<<"|"<< "voice");
                    }else if(bodyType == "expression"){
                        LOG_HTTP_ACTION("OUT|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<msgkey<<"|"<< "expression");
                    }else {
                        LOG_HTTP_ACTION("OUT|"<<from<<"|"<<to<<"|"<<chatType<<"|"<<msgkey<<"|"<< "unknow");
                    }
                }
            }
            return 1;

        }

        EndpointServerZKListener::EndpointServerZKListener(const string& path, const int serverId, const short serverPort) :
            path_(path),
            serverId_(serverId),
            serverPort_(serverPort){

                nodeName_ = "server-" + boost::lexical_cast<string>(serverId_);
                nodePath_ = path_ + "/" + nodeName_;
                string ipAddr = MyUtil::IpAddr::inner();
                nodeAddress_ = ipAddr + ':' + boost::lexical_cast<string>(serverPort_);
            }

        void EndpointServerZKListener::zkHandle(boost::shared_ptr<ZKManager> zkManagerPtr, const std::string& path, const ZKEventType event){
            switch(event){
                case ZK_CHILD_CHANGED :
                    LOG_INFO("EndpointServerZKListener::zkHanlde => path [" << path << "] children changed, skip this event");
                    break;
                case ZK_SESSION_EXPIRED :
                    LOG_INFO("EndpointServerZKListener::zkHanlde => path [" << path << "] session expired, start update");
                    registerServer(zkManagerPtr);
                    LOG_INFO("EndpointServerZKListener::zkHanlde => path [" << path << "] listener update finish");
                    break;
                case ZK_LISTENER_INIT :
                    LOG_INFO("EndpointServerZKListener::zkHanlde => path [" << path << "] listener init, start update");
                    registerServer(zkManagerPtr);
                    LOG_INFO("EndpointServerZKListener::zkHanlde => path [" << path << "] listener update finish");
                    break;
            };
        }

        string EndpointServerZKListener::getNodePath() const{
            return nodePath_;
        }

        void EndpointServerZKListener::updateConfig(boost::shared_ptr<ZKManager> zkManagerPtr){
        }

        void EndpointServerZKListener::registerServer(boost::shared_ptr<ZKManager> zkManagerPtr){
            LOG_INFO("EndpointServerZKListener::registerServer => begin : path = " << nodePath_ << " address = " << nodeAddress_);
            zkManagerPtr->createNode(path_, nodeName_, nodeAddress_);
        }

    };
};
