#include <sstream>
#include <ctime>
#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/make_shared.hpp>
#include "TalkServer.h"
#include "bosh/BoshServer.h"
#include "socket/SocketServer.h"
#include "TalkSessionListener.h"
#include "xmpp/TalkXMPPProcessor.h"
#include "TalkXmppRequestHandler.h"
#include "pugixml/pugixml.hpp"
#include "utils/TimeUtils.h"
#include "utils/IpAddr.hpp"
#include "utils/MsgTransform.h"
#include "utils/MessageTails.h"
#include "proxy/ProxyRegister.h"
#include "Config.h"
#include "proxy/MsgWaitServiceProxy.h"
#include "proxy/MucServiceProxy.h"
#include "proxy/ImOnlineAdapterServiceProxy.h"
#include "proxy/PushServiceProxy.h"
#include "proxy/BindServiceProxy.h"
#include "proxy/RouterProxyManager.h"
#include "xmpp/JID.h"
#include "FeedProcessor.h"
#include  <boost/foreach.hpp>
#include  "utils/TimeUtils.h"
#include  "utils/XmlUtils.h"
#include  "protocolChanger/ProtocolChanger.h"


using namespace std;
using namespace boost;
using namespace mtalk::utils;
using namespace mtalk::constant;
using namespace mtalk::bosh;
using namespace mtalk::socket;
using namespace mtalk::proxy;
using namespace mtalk::zk;
using namespace mtalk::im;
using namespace com::xiaonei::wap::talk::offline;
using namespace pugi;
using namespace mtalk::xmpp;

namespace mtalk{
    namespace talk{

        TalkServer::TalkServer() :
            midCount_(0),
            midBegin_(time(NULL) << 24),
            zkManagerPtr_(new ZKManager()){
            }

        void TalkServer::setUserManager(boost::shared_ptr<UserManager> userManagerPtr){
            userManagerPtr_ = userManagerPtr;
        }

        void TalkServer::setTTClient4MAS(boost::shared_ptr<TTClient> ttClientPtr){
            ttClient4MASPtr_ = ttClientPtr;
        }

        void TalkServer::setTTClient(boost::shared_ptr<TTClient> ttClientPtr){
            ttClientPtr_ = ttClientPtr;
        }

        void TalkServer::setIMGateForPhoneAdapter(boost::shared_ptr<im::IMGateForPhoneAdapter> imGateForPhoneAdapterPtr){
            imGateForPhoneAdapterPtr_ = imGateForPhoneAdapterPtr;
        }

        void TalkServer::setOnlineStatManager(boost::shared_ptr<mtalk::talk::OnlineStatManager> onlineStatManagerPtr){
            onlineStatManagerPtr_ = onlineStatManagerPtr;
        }

        bool TalkServer::init(int id, short serverPort, const string& domain, const string& zkServers){

            LOG_INFO("TalkServer::init => talk server start init");

            serverId_ = id;
            serverPort_ = serverPort;

            LOG_INFO("TalkServer::init => init zkManager : zkServers = " << zkServers);
            zkManagerPtr_->init(zkServers);


            /********** Init SessionManager **********/
            LOG_INFO("TalkServer::init => init sessionManager");
            sessionManagerPtr_ = boost::make_shared<SessionManager>();
            sessionManagerPtr_->init();
            MY_INSTANCE(BoshServer).setSessionManager(sessionManagerPtr_);
            MY_INSTANCE(SocketServer).setSessionManager(sessionManagerPtr_);
            userManagerPtr_->setSessionManager(sessionManagerPtr_);

            /********** Init accountServiceProxy **********/
            LOG_INFO("TalkServer::init => init accountBindServiceProxy");
            boost::shared_ptr<BindServiceProxy>
                accountBindServiceProxyPtr(new BindServiceProxy());
            MY_INSTANCE(ProxyRegister).registerProxy("accountBindServiceProxy", accountBindServiceProxyPtr);
            zkManagerPtr_->addListener(accountBindServiceProxyPtr->getZKPath(), accountBindServiceProxyPtr);


            /********** Init RelationServiceProxy **********/
            LOG_INFO("TalkServer::init => init RelationServiceProxy");
            boost::shared_ptr<RelationServiceProxy>
                relationServiceProxyPtr(new RelationServiceProxy());
            MY_INSTANCE(ProxyRegister).registerProxy("RelationServiceProxy", relationServiceProxyPtr);
            zkManagerPtr_->addListener(relationServiceProxyPtr->getZKPath(), relationServiceProxyPtr);

            /********** Init EndpointServiceProxy **********/
            LOG_INFO("TalkServer::init => init endpointServiceProxy");
            boost::shared_ptr<EndpointServiceProxy>
                endpointServiceProxyPtr(new EndpointServiceProxy());
            MY_INSTANCE(ProxyRegister).registerProxy("endpointProxy", endpointServiceProxyPtr);
            zkManagerPtr_->addListener(endpointServiceProxyPtr->getZKPath(), endpointServiceProxyPtr);

            /********** Init TalkServiceProxy **********/
            LOG_INFO("TalkServer::init => init talkServiceProxy");
            talkServiceProxyPtr_ = boost::make_shared<TalkServiceProxy>();
            MY_INSTANCE(ProxyRegister).registerProxy("talkProxy", talkServiceProxyPtr_);
            zkManagerPtr_->addListener(talkServiceProxyPtr_->getZKPath(), talkServiceProxyPtr_);


            /********** Init ShortUrlServiceProxy **********/
            LOG_INFO("TalkServer::init => init shortUrlServiceProxy");
            boost::shared_ptr<ShortUrlServiceProxy>
                shortUrlServiceProxyPtr(new ShortUrlServiceProxy());
            MY_INSTANCE(ProxyRegister).registerProxy("shortUrlProxy", shortUrlServiceProxyPtr);
            zkManagerPtr_->addListener(shortUrlServiceProxyPtr->getZKPath(), shortUrlServiceProxyPtr);

            /********** Init TalkSessionListener **********/
            LOG_INFO("TalkServer::init => init talkSessionListener");
            boost::shared_ptr<TalkSessionListener> listenerPtr(new TalkSessionListener());
            MY_INSTANCE(BoshServer).addSessionListener(listenerPtr);
            MY_INSTANCE(SocketServer).addSessionListener(listenerPtr);

            /********** Init OfflineMsgServiceProxy **********/
            LOG_INFO("TalkServer::init => init offlineMsgServiceProxy");
            offlineMsgServiceProxyPtr_ = boost::make_shared<OfflineMsgServiceProxy>();
            MY_INSTANCE(ProxyRegister).registerProxy("offlineMsgProxy", offlineMsgServiceProxyPtr_);
            zkManagerPtr_->addListener(offlineMsgServiceProxyPtr_->getZKPath(), offlineMsgServiceProxyPtr_);


            /*********~~ Init PushServiceProxy ~~**********/
            LOG_INFO("TalkServer::init => init PushServiceProxy");
            boost::shared_ptr<PushServiceProxy> pushServiceProxyPtr(new PushServiceProxy());
            MY_INSTANCE(ProxyRegister).registerProxy("pushProxy", pushServiceProxyPtr);
            zkManagerPtr_->addListener(pushServiceProxyPtr->getZKPath(), pushServiceProxyPtr);


            /********** Init MsgWaitServiceProxy **********/
            //	LOG_INFO("TalkServer::init => init MsgWaitServiceProxy");
            //	boost::shared_ptr<MsgWaitServiceProxy>
            //		msgWaitServiceProxyPtr(new MsgWaitServiceProxy());
            //	MY_INSTANCE(ProxyRegister).registerProxy("msgWaitProxy", msgWaitServiceProxyPtr);
            //	zkManagerPtr_->addListener(msgWaitServiceProxyPtr->getZKPath(), msgWaitServiceProxyPtr);

            /********** Init MucServiceProxy **********/
            LOG_INFO("TalkServer::init => init MucServiceProxy");
            boost::shared_ptr<MucServiceProxy>
                mucServiceProxyPtr(new MucServiceProxy());
            MY_INSTANCE(ProxyRegister).registerProxy("mucProxy", mucServiceProxyPtr);
            zkManagerPtr_->addListener(mucServiceProxyPtr->getZKPath(), mucServiceProxyPtr);

            /********** Init ImOnlineAdapterServiceProxy **********/
            LOG_INFO("TalkServer::init => init ImOnlineAdapterServiceProxy");
            boost::shared_ptr<ImOnlineAdapterServiceProxy>
                imAdapterServiceProxyPtr(new ImOnlineAdapterServiceProxy());
            MY_INSTANCE(ProxyRegister).registerProxy("imAdapterServiceProxy", imAdapterServiceProxyPtr);
            zkManagerPtr_->addListener(imAdapterServiceProxyPtr->getZKPath(), imAdapterServiceProxyPtr);

            /********** RouterProxyManager **********/
            LOG_INFO("TalkServer::init => init RouterProxyManager");
            boost::shared_ptr<RouterProxyManager>
                routerProxyManagerPtr(new RouterProxyManager());
            zkManagerPtr_->addListener(routerProxyManagerPtr->getRouterZKPath(),routerProxyManagerPtr);


            LOG_INFO("TalkServer::init => init HistoryMessageServiceProxy");
            boost::shared_ptr<HistoryServiceProxy>
                historyServiceProxyPtr(new HistoryServiceProxy);
            MY_INSTANCE(ProxyRegister).registerProxy("HistoryMessageServiceProxy",historyServiceProxyPtr);
            zkManagerPtr_->addListener(historyServiceProxyPtr->getZKPath(), historyServiceProxyPtr);

            /********** Init XMPPProcessor **********/
            LOG_INFO("TalkServer::init => init xmppProcessor");
            xmppProcessorPtr_ = boost::make_shared<xmpp::TalkXMPPProcessor>(domain, imGateForPhoneAdapterPtr_);


            /********** Init Handler **********/
            LOG_INFO("TalkServer::init => init handler");
            //bosh-xmpp handler
            boost::shared_ptr<BoshRequestHandler> 
                xmppHandlerPtr(new TalkXmppRequestHandler(xmppProcessorPtr_));
            MY_INSTANCE(BoshServer).setHandler(xmppHandlerPtr);

            //socket-xmpp handler
            boost::shared_ptr<XMPPTagHandler> 
                xmppTagHandlerPtr(new XMPPTagHandler(xmppProcessorPtr_));  
            MY_INSTANCE(SocketServer).setXmppProcessor(xmppProcessorPtr_);
            MY_INSTANCE(SocketServer).setHandler(xmppTagHandlerPtr);

            LOG_INFO("TalkServer::init => init boshServer");
            MY_INSTANCE(BoshServer).setTTClient(ttClientPtr_);
            MY_INSTANCE(BoshServer).setTTClient4MAS(ttClient4MASPtr_);
            MY_INSTANCE(SocketServer).setTTClient(ttClientPtr_);
            MY_INSTANCE(SocketServer).setTTClient4MAS(ttClient4MASPtr_);
            MY_INSTANCE(BoshServer).init(serverIndex_, serverCount_, domain);
            MY_INSTANCE(SocketServer).init(serverIndex_, serverCount_, domain);

            /********** Init IMStormAdapter **********/
            //初始化strom 订阅
            //LOG_INFO("TalkServer::init => init imSormAdapter");
            //imStormAdapterPtr_ = boost::make_shared<mtalk::im::IMStormAdapter>();

            LOG_INFO("TalkServer::init => init talkServerZKListener");
            boost::shared_ptr<TalkServerZKListener>
                talkServerZKListener(new TalkServerZKListener(ZK_BOSH_PATH, serverId_, serverPort_));
            //同时监听bosh节点和node自身节点的变化
            zkManagerPtr_->addListener(ZK_BOSH_PATH, talkServerZKListener);
            zkManagerPtr_->addListener(talkServerZKListener->getNodePath(), talkServerZKListener);

            LOG_INFO("TalkServer::init => talk server init finish");
            return true;
        }

        int TalkServer::getServerIndex() const {
            return serverIndex_;
        }

        void TalkServer::start(){
            LOG_INFO("TalkServer::start => begin sessionManagerPtr_->start()");
            sessionManagerPtr_->start();
            LOG_INFO("TalkServer::start => step 1 userManagerPtr_->open()");
            userManagerPtr_->start();
            LOG_INFO("TalkServer::start => step 2 ttClientPtr_->open()");
            ttClientPtr_->open();
            ttClient4MASPtr_->open();
            LOG_INFO("TalkServer::start => step 3 BoshServer.start()");
            MY_INSTANCE(BoshServer).start();
            LOG_INFO("TalkServer::start => step 4 imStormAdapterPtr_->open()");
            //imStormAdapterPtr_->open();
            LOG_INFO("TalkServer::start => step 5 imStormAdapterPtr_->subscribe()");
            //imStormAdapterPtr_->subscribe(serverIndex_, serverCount_);
            LOG_INFO("TalkServer::start => success finish");
        }

        void TalkServer::stop(){
            userManagerPtr_->clear();
            sessionManagerPtr_->stop();
            MY_INSTANCE(BoshServer).stop();
            MY_INSTANCE(SocketServer).stop();
            //imStormAdapterPtr_->unSubscribe();
            //imStormAdapterPtr_->close();
        }


        void TalkServer::pushNotify(const long fromId, const long toId, const string& message , const MessageType::Type msgType ,long  mid){

            LOG_W(fromId, "TalkServer::pushNotify", msgType, message);

            LOG_DEBUG("TalkServer::pushNotify => accept a push request : fromId = " << fromId << " toId = " << toId 
                    << " message = " << message << " type = " << msgType );

            list<string> sessionIdList;

            sessionIdList = userManagerPtr_->getSessionIdList(toId);
            LOG_DEBUG("TalkServer::pushNotify => getSessionList : id = " << toId <<" size = "<<sessionIdList.size());

            for(list<string>::iterator it = sessionIdList.begin(); it != sessionIdList.end(); it++){
                talk::SessionPtr sessionPtr = MY_INSTANCE(BoshServer).getSession((*it));

                if(sessionPtr && (sessionPtr->getCAppId() == 185292 || sessionPtr->getCAppId() == 215897)){
                    sessionPtr->deliver(fromId,message, msgType, mid);
                }
            }

        }


        bool TalkServer::push(const long fromId, const long toId, const string& message, const MessageType::Type msgType, long mid ,int supportMsgType) {
            return push(fromId, toId, message, (int)msgType, mid, supportMsgType);    
        }

        bool TalkServer::push(const long fromId, const long toId, const string& message, const int msgType, long mid ,int supportMsgType){
            LOG_W(fromId, "TalkServer::push", msgType, message);

            LOG_DEBUG("TalkServer::push => accept a push request : fromId = " << fromId << " toId = " << toId 
                    << " message = " << message << " type = " << msgType << " mid = " << mid);

            MilliTimer tStart;
            string msg = message;
            xml_document doc;
            pugi::xml_parse_result result = doc.load(msg.c_str());

            if(!result){
                return 0;
            }
            xml_node node = doc.first_child();
            if(mid == -1/*&& !node.attribute("msgkey")*/){
                if(node.attribute("msgkey")){
                    string midStr = node.attribute("msgkey").value();
                    try{
                        mid = boost::lexical_cast<long>(midStr);
                    }catch(...){
                    }
                }else{
                    mid = generateMid();
                    if(result){
                        string msgKey = boost::lexical_cast<string>(mid);
                        node.append_attribute("msgkey") = msgKey.c_str();
                        stringstream os;
                        node.print(os, "\t", pugi::format_raw);
                        msg.assign(os.str());
                    }
                }
            }

            if(msgType == MessageType::ACTION){
                node.remove_attribute("msgkey");
            }
            node.remove_attribute("id");

            //处理1：判断消息是否立即进离线系统 通过push通知用户取离线消息（iphone wp） 

            list<string> sessionIdList;
            if(msgType==MessageType::PRESENCE){
                MilliTimer tStart_getSessionlist;
                sessionIdList = userManagerPtr_->getSessionIdList(toId);
                LOG_TIME("TalkServer::getSessionIdList|" << tStart_getSessionlist.elapsed() );
            }else{
                MilliTimer tStart_get;
                sessionIdList = userManagerPtr_->getParticularSessionIdList(toId);
                LOG_TIME("TalkServer::getParticularSessionIdList|" << tStart_get.elapsed() );
                if(sessionIdList.empty()){
                    //私信用户不存在
                    //察看是否有长在线状态
                    if(onlineStatManagerPtr_->hasLongOnline(toId,OnlineType::IPHONE_SIXIN) | onlineStatManagerPtr_->hasLongOnline(toId,OnlineType::WINPHONE_SIXIN)){
                        //有长在线状态  且该息类型要求保存  为私信用户保存离线消息 
                        if(msgType != MessageType::ACTION){
                            LOG_DEBUG("TalkServer::push => session not found but found longOnlineStatus: userid = " << toId <<" message put into offline offlineStamp = 2")
                                //MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->immediatelySend2Offline(fromId, toId, mid, msg, msgType, 2);
                                saveMsg2Offline(fromId, toId, msg , msgType);
                            return 1 ;
                        }
                    }else{
                        //没有长在线状态 且该消息类型要求保存   为官方和私信用户保存离线消息
                        MilliTimer tStart_getSessionlist;
                        sessionIdList = userManagerPtr_->getSessionIdList(toId);
                        LOG_TIME("TalkServer::getSessionIdList1|" << tStart_getSessionlist.elapsed() );
                    }
                }
            }


            //处理2：消息进msgWat
            if(sessionIdList.empty()){
                //没有任何session存在，没有任何长在线存在 ，直接推送消息进离线系统
                if(msgType != MessageType::PRESENCE && msgType != MessageType::ACTION){
                    LOG_DEBUG("TalkServer::push => do not  found any session userId = " << toId <<"  message put into offline offlineStamp = "<<supportMsgType)
                        //	MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->
                        //	immediatelySend2Offline(fromId, toId, mid, msg, msgType,supportMsgType);
                        saveMsg2Offline(fromId, toId, msg, msgType);
                    return 1;
                }
            }else{
                if(msgType != MessageType::PRESENCE && msgType != MessageType::ACTION){
                    //MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->
                    //	addMessage(fromId, toId, mid, msg, msgType,supportMsgType);
                    saveMsg2Offline(fromId, toId, msg, msgType);
                }
            }


            //处理3：消息分发给各个Session


            for(list<string>::iterator it = sessionIdList.begin(); it != sessionIdList.end(); it++){

                talk::SessionPtr sessionPtr = MY_INSTANCE(BoshServer).getSession(*it);
                if(!sessionPtr){
                    LOG_DEBUG("session has broken");
                    continue  ;
                }

                checkAndDeliver(sessionPtr, fromId, toId, node, msgType, mid);

            }

            LOG_TIME("TalkServer::process|" << tStart.elapsed() );
            return 1;
        }


        void TalkServer::checkAndDeliver(SessionPtr sessionPtr, long fromId , long toId, pugi::xml_node node, MessageType::Type msgType, long mid){
            checkAndDeliver(sessionPtr, fromId, toId, node, (int)msgType, mid);
        }

        void TalkServer::checkAndDeliver(SessionPtr sessionPtr, long fromId , long toId, pugi::xml_node node, int msgType, long mid){


            LOG_DEBUG("MessageCheck::checkAndDeliver begin :  toid = "<< toId <<" msgType = "<<msgType);
            //处理4：对消息的类型和session做适配处理  对所有不支持的类型做文字转换

            string msg;
            bool subResult = 0;
            if(!sessionPtr->supportMsgType(msgType)){
                LOG_DEBUG("MessageCheck::check msgType is not support  tansfer2text toId =" << toId);

                if((!sessionPtr->supportMsgType(MessageType::GROUP_CHAT)) && (msgType & MessageType::GROUP_CHAT)){// 消息类型有群聊的且session不支持的群聊的直接过滤掉

                    LOG_DEBUG("MessageCheck::check msgType is not support  groupchat toId =" << toId);
                    return ;

                }
				if(msgType & MessageType::IMAGE){
                    msg = MsgTransform::image2text(node);
                }else if(msgType & MessageType::VOICE){
                    msg = MsgTransform::voice2text(node);
                }else if(msgType & MessageType::EXPRESSION){
                    msg = MsgTransform::expression2text(node , 0);
                }else if(msgType & MessageType::LBS){
                    msg = MsgTransform::lbs2text(node);
                }else if((msgType & MessageType::PERSONAL) == MessageType::PERSONAL){
                    msg = MsgTransform::personal2text(node);
                }else{
                    return ;
                }


                string cAppid = node.attribute("fromCAppid").value();
                int int_cAppid = 0 ;

                try{
                    int_cAppid = boost::lexical_cast<int>(cAppid);
                }catch(...){
                }

                MessageTails::addTail(int_cAppid, msgType, msg);

                //处理5.1：调用发送接口 不支持的类型  发送转换文字  
                stringstream os;

     		os<<"<message from='"<<node.attribute("from").value()<<"' fname='"<<node.attribute("fname").value() 
                    <<"'  to='"<<node.attribute("to").value()<<"' type='chat' msgkey='"<<mid<<"'><body type='text'><text>"<<msg<<"</text></body></message>";

                subResult = sessionPtr->deliver(fromId, os.str(), MessageType::CHAT,  mid);

            }else{
                if(((msgType & MessageType::EXPRESSION) == MessageType::EXPRESSION) && sessionPtr->getSessionType() == 2){
                    if(processExpressionMsg(sessionPtr, node) == -1){
                        return ;
                    }
                }

                node.remove_attribute("fromCAppid");
                stringstream os;
                node.print(os, "\t", pugi::format_raw);
                msg.assign(os.str());
                //处理5.2：调用发送接口  支持类型 发送实体

                LOG_DEBUG("MessageCheck::checkAndDeliver Deliver  :  toid = "<< toId <<" msg = "<<msg);
                subResult = sessionPtr->deliver(fromId, msg, msgType,  mid);

            }
            //获取domain
            std::string fromStr = node.attribute("from").value(); 
            JID fromJID(fromStr);
            std::string toStr = node.attribute("to").value(); 
            JID toJID(toStr);
            //处理6： 打远程日志
            if(msgType != MessageType::PRESENCE && !(msgType & MessageType::GROUP_CHAT)){

                //获取聊天内容

                string context;

                if(msgType & MessageType::CHAT) {
                    xml_node body = node.child("body");
                    if(body) {
                        context = body.child_value("text");	
                        //去除空格和换行
                        replace_all(context, "|", "");
                        replace_all(context, "\n", "");
                    }
                }
                if(strcmp(node.attribute("type").value(), "EOOM") != 0){
                    LOG_ACTION("push|" << fromId << "|" << toId << "|"
                            << sessionPtr->getCAppId() << "|"
                            << sessionPtr->getCFromId() << "|"
                            << sessionPtr->getCVersion() << "|"
                            << msgType << "|success|" 
                            << fromJID.getEndpoint() << "|" 
                            << toJID.getEndpoint() << "|" 
                            << context << "|");

                    RLOG_ACTION("push|" << fromId << "|" << toId << "|"
                            << sessionPtr->getCAppId() << "|"
                            << sessionPtr->getCFromId() << "|"
                            << sessionPtr->getCVersion() << "|"
                            << msgType << "|success|" 
                            << fromJID.getEndpoint() << "|" 
                            << toJID.getEndpoint() << "|" 
                            << context << "|");
                }
            }else if(msgType & MessageType::GROUP_CHAT){

                std::string roomStr = node.attribute("from").value(); 
                JID room(roomStr);
                long roomId = room.getUserId();	

                LOG_MUC_ACTION("push|" << roomId<< "|" << toId << "|"
                        << sessionPtr->getCAppId() << "|"
                        << sessionPtr->getCFromId() << "|"
                        << sessionPtr->getCVersion() << "|"
                        << msgType << "|0|" << fromJID.getEndpoint() << "|" << toJID.getEndpoint() << "||");

                RLOG_MUC_ACTION("push|" << roomId<< "|" << toId << "|"
                        << sessionPtr->getCAppId() << "|"
                        << sessionPtr->getCFromId() << "|"
                        << sessionPtr->getCVersion() << "|"
                        << msgType << "|0|" << fromJID.getEndpoint() << "|" << toJID.getEndpoint() << "||");
            }
        }

        void TalkServer::pushOfflineMsg(const long fromId, const long toId, const string& message, const MessageType::Type msgType, long mid){

        }

        void TalkServer::remotePush(const long fromId, const long toId, const string& message, const int msgType){

            LOG_W(fromId, "TalkServer::remotePush", msgType, message);

            LOG_DEBUG("TalkServer::remotePush => begin");
            if(toId % serverCount_ == serverIndex_){
                if (msgType & MessageType::FEED){
                    feedPush(fromId, toId, message, msgType, -1L);
                    LOG_DEBUG("TalkServer::remotePush ==> local feedPush message = " << message);
                    return ;
                }
                push(fromId, toId, message, msgType, -1L);
                LOG_DEBUG("TalkServer::remotePush => local push");
            } else {
                talkServiceProxyPtr_->push(fromId, toId, message, msgType);
                LOG_DEBUG("TalkServer::remotePush => remote push");
            }

        }
        void TalkServer::remotePush(const long fromId, const long toId, const string& message, const MessageType::Type msgType){
            remotePush(fromId, toId, message, (int)msgType);	
        }

        void TalkServer::remoteStart(){
            MY_INSTANCE(BoshServer).start();
            MY_INSTANCE(BoshServer).notifyEndpointResume();
            onlineStatManagerPtr_->resume();
            LOG_INFO("TalkServer::remoteStart => finish");
        }

        void TalkServer::remoteStop(){
            MY_INSTANCE(BoshServer).notifyEndpointPause();
            MY_INSTANCE(BoshServer).stop();
            userManagerPtr_->clear();
            onlineStatManagerPtr_->pause();
            LOG_INFO("TalkServer::remoteStop => finish");
        }

        void TalkServer::bind(const SessionPtr sessionPtr){
            userManagerPtr_->bind(sessionPtr);
        }


        int TalkServer::getUserCount(){
            return userManagerPtr_->getUserCount();
        }

        void TalkServer::unbind(const SessionPtr sessionPtr){
            userManagerPtr_->unbind(sessionPtr);
        }

        vector<OnlineStat> TalkServer::getLocalUsersOnlineStatSeq(const vector<long>& users){
            LOG_DEBUG("TalkServer::getLocalUsersOnlineStatSeq => size = " << users.size());
            return onlineStatManagerPtr_->getUsersOnlineStat(users);
        }

        OnlineStat TalkServer::getLocalUserOnlineStat(const long userId, bool forIM){
            LOG_DEBUG("TalkServer::getLocalUserOnlineStat => userId = " << userId);
            return onlineStatManagerPtr_->getUserOnlineStat(userId, forIM);
        }

        vector<OnlineStat> TalkServer::getUsersOnlineStatSeq(const vector<long>& users){
            LOG_DEBUG("TalkServer::getUsersOnlineStatSeq => size = " << users.size());
            if(users.size() == 1){
                LOG_DEBUG("TalkServer::getUsersOnlineStatSeq => one user : uid = " << users[0]);

                vector<OnlineStat> stat;
                if(serverIndex_ == (users[0] % serverCount_)){
                    stat.push_back(getLocalUserOnlineStat(users[0]));
                } else {
                    stat.push_back(talkServiceProxyPtr_->getUserOnlineStat(users[0]));
                }

                return stat;
            } else {
                //对需要查询的用户id进行分桶批量查询，减少远程调用的次数
                vector<vector<long> > userIdBuckets(serverCount_);
                for(size_t i = 0; i < users.size(); ++i){
                    userIdBuckets[(users[i] % serverCount_)].push_back(users[i]);
                }
                vector<vector<OnlineStat> > statBuckets;
                for(int i = 0; i < serverCount_; ++i){
                    if(userIdBuckets[i].empty())
                        continue;
                    //根据index判断该桶是否在本地，如果在本地则不通过Ice调用
                    if(i == serverIndex_){
                        statBuckets.push_back(getLocalUsersOnlineStatSeq(userIdBuckets[i]));
                    } else{
                        statBuckets.push_back(
                                talkServiceProxyPtr_->getUsersOnlineStatSeq(userIdBuckets[i], i));
                    }
                }
                vector<unsigned int> bIndex(serverCount_, 0);
                vector<OnlineStat> stat;
                for(size_t i = 0; i < users.size(); ++i){
                    size_t index = users[i] % serverCount_;
                    if(statBuckets[index].size() > bIndex[index]){
                        stat.push_back(statBuckets[index][bIndex[index]++]);
                    } else {
                        stat.push_back(static_cast<OnlineStat>(OnlineType::OFFLINE));
                    }
                }
                return stat;
            }
        }

        OnlineStat TalkServer::getUserOnlineStat(const long userId, bool forIM){
            LOG_DEBUG("TalkServer::getUsersOnlineStat => uid = " << userId);
            if(serverIndex_ == (userId % serverCount_)){
                return getLocalUserOnlineStat(userId, forIM);
            } else {
                return talkServiceProxyPtr_->getUserOnlineStat(userId);
            }
        }

        OnlineStat TalkServer::getUserOnlineTypebyTalk(const long userId){
            LOG_DEBUG("TalkServer::getUsersOnlineTypebyTalk ==> uid = " << userId);
            if(serverIndex_ == (userId % serverCount_)){
                return getLocalUserOnlineStat(userId, true);
            } else {
                return talkServiceProxyPtr_->getUserOnlineTypebyTalk(userId);
            }
        }

        void TalkServer::logout(const long userId, const string& sessionId){
            LOG_DEBUG("TalkServer::logout ==> userId = " << userId);
            userManagerPtr_->logout(userId, sessionId);	
        }

        void TalkServer::uninstall(const long userId, const int appId){
            userManagerPtr_->uninstall(userId, appId);
        }

        xmpp::ProcessResult TalkServer::xmppProcess(const string& sessionId, const string& msg){
            boost::shared_ptr<Session> 
                sessionPtr = MY_INSTANCE(bosh::BoshServer).getSession(sessionId);
            if(!sessionPtr){
                xmpp::ProcessResult result(xmpp::ProcessResult::SESSION_NOT_FOUND, "404 Not Found");
                return result;
            }
            xml_document doc;
            doc.load(msg.c_str());
            xmpp::ProcessResult result;
            for(xml_node node = doc.first_child(); node; node = node.next_sibling()){
                xmpp::ProcessResult subResult = xmppProcessorPtr_->process(sessionPtr, node);
                if(!subResult.getMsg().empty()){
                    result.addMsg(subResult.getMsg());
                }
                if(subResult.getCode() != xmpp::ProcessResult::OK){
                    result.setCode(xmpp::ProcessResult::ERROR);
                }
            }
            return result;
        }

        void TalkServer::updateClusterInfo(int index, int count){
            serverIndex_ = index;
            serverCount_ = count;

            MY_INSTANCE(BoshServer).stop();
            MY_INSTANCE(SocketServer).stop();

            //userManagerPtr_->clear();
            //sessionManagerPtr_->clear();
            MY_INSTANCE(BoshServer).updateClusterInfo(index, count);
            //imStormAdapterPtr_->updateClusterInfo(index, count);

            MY_INSTANCE(SocketServer).start();
            MY_INSTANCE(BoshServer).start();

            LOG_INFO("TalkServer::updateClusterInfo => update bosh servers success : index = " << serverIndex_ << " count = " << serverCount_);
        }

        void TalkServer::notifyIM(long userId, long mid){

            imGateForPhoneAdapterPtr_->NotifyMessageSended(userId,mid);
        }

        void TalkServer::NotifyMessageSent(long userId, long msgkey, int clientType){
            notifyIM(userId, msgkey);
            delMsgFromOffline(userId, msgkey, clientType);
        }

        void TalkServer::NotifyMessageSent(long userId, const mtalk::talk::MsgNodePtr msgNodePtr, int clientType){
            switch(msgNodePtr->type){
                case MessageType::CHAT :
                case MessageType::CHAT | MessageType::OFFLINE :
                case MessageType::IMAGE :
                case MessageType::IMAGE |MessageType::OFFLINE :
                case MessageType::VIBRATE :
                case MessageType::VIBRATE|MessageType::OFFLINE :
                case MessageType::LBS :
                case MessageType::LBS| MessageType::OFFLINE:
                case MessageType::EXPRESSION :
                case MessageType::EXPRESSION |MessageType::OFFLINE:
                    //	MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->
                    //		delMessage(msgNodePtr->mid, userId ,  clientType);
                    delMsgFromOffline(msgNodePtr->mid, userId, clientType);
                    notifyIM(userId, msgNodePtr->mid);	
                    break;
                case MessageType::VOICE :
                case MessageType::VOICE |MessageType::OFFLINE :
                    //	MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->
                    //		delVoiceMessage(msgNodePtr->msg, userId , clientType);
                    delMsgFromOffline(msgNodePtr->mid, userId, clientType);
                    break;
                default :
                    //		MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->
                    //			delMessage(msgNodePtr->mid, userId ,  clientType);
                    delMsgFromOffline(msgNodePtr->mid, userId, clientType);
                    notifyIM(userId, msgNodePtr->mid);	

                    return;
            }

#ifdef MSG_ACK_TIME_LOG
            if(msgNodePtr->type != MessageType::PRESENCE){
                long msgAckCast = time(NULL) - msgNodePtr->time;
                LOG_ACTION("msgAckCast|" << msgNodePtr->from << "|"
                        << userId << "|"
                        << msgNodePtr->appId << "|"
                        << msgNodePtr->fromId << "|"
                        << msgNodePtr->version << "|"
                        << msgNodePtr->type << "|"
                        << msgNodePtr->mid << "|"
                        << msgAckCast);
            }
#endif
        }

        void  TalkServer::notifyPushOfflineMsg(SessionPtr session){
            vector<OfflineMessage> msgList;
            int   supportMsgType  =  MessageType::CHAT | MessageType::OFFLINE | MessageType::IMAGE
                | MessageType::VOICE | MessageType::EXPRESSION  | MessageType::FEED;

            supportMsgType |= session->getSuppotrMsgType();

            LOG_INFO("notifyPushOfflineMessage|"<<session->getUserId()<<"|"<<supportMsgType<<"|"<<session->getSessionType() << session->getSessionId());
            offlineMsgServiceProxyPtr_->notifyPushOfflineMessage(session->getSessionId(), session->getUserId(), supportMsgType , session->getSessionType());

        }


        bool TalkServer::sendToOfflineMessageMap(long fromId, long toId, std::string msg, long time){
            userManagerPtr_->sendToOfflineMessageMap(toId ,  time , msg);
            return 1;
        }


        vector<string> TalkServer::getOfflineMessageSequence( long userId){
            return userManagerPtr_->getOfflineMessageSequence(userId);
        }


        bool TalkServer::msgCheck(const SessionPtr sessionPtr, const constant::MessageType::Type msgType, string& message, long mid){

            if(!sessionPtr){
                //session not found
                LOG_DEBUG("MessageCheck::check session not found");
                return false;
            }


            if(!sessionPtr->supportMsgType(msgType)){
                //msg type not support
                LOG_DEBUG("MessageCheck::check msgType is not support");
                return false;
            }

            if(sessionPtr->supportMsgType(MessageType::IMAGE) 
                    && (MessageType::CHAT == msgType || MessageType::TEXT_OFFLINE == msgType)
                    && MsgTransform::isImage2text(message)){
                //对于支持图片的终端，如果收到了来自IM回推的图片转文字的文本，那么过滤之
                LOG_DEBUG("TalkServer::push => skip a image msg : [" << message << "]");
                //MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->
                //	delMessage(mid, sessionPtr->getUserId(), sessionPtr->getSessionType() );
                delMsgFromOffline(sessionPtr->getUserId(),mid, sessionPtr->getSessionType());
                LOG_DEBUG("TalkServer::push => NotifyMessageSent because it's imgToText uid=" << sessionPtr->getUserId()<<" mid ="<<mid);
                return false;
            }

            if(sessionPtr->supportMsgType(MessageType::VOICE) 
                    && (MessageType::CHAT == msgType || MessageType::TEXT_OFFLINE == msgType)
                    && MsgTransform::isVoice2text(message)){
                //对于支持语音的终端，如果收到了来自IM回推的语音转文字的文本，那么过滤之
                LOG_DEBUG("TalkServer::push => skip a voice msg : [" << message << "]");
                //MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->
                //	delMessage(mid, sessionPtr->getUserId(), sessionPtr->getSessionType() );
                delMsgFromOffline(sessionPtr->getUserId(),mid, sessionPtr->getSessionType());
                LOG_DEBUG("TalkServer::push => NotifyMessageSent because it's voiceToText uid=" << sessionPtr->getUserId()<<" mid ="<<mid);
                return false;
            }

            if(sessionPtr->supportMsgType(MessageType::LBS) 
                    && (MessageType::CHAT == msgType || MessageType::TEXT_OFFLINE == msgType)
                    && MsgTransform::isLbs2text(message)){
                //对于支持LBS的终端，如果收到了来自IM回推的LBS转文字的文本，那么过滤之
                LOG_DEBUG("TalkServer::push => skip a lbs msg : [" << message << "]");
                //MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->
                //	delMessage(mid, sessionPtr->getUserId(), sessionPtr->getSessionType() );
                delMsgFromOffline(sessionPtr->getUserId(), mid,  sessionPtr->getSessionType());
                LOG_DEBUG("TalkServer::push => NotifyMessageSent because it's lbsToText uid=" << sessionPtr->getUserId()<<" mid ="<<mid);

                return false;
            }

            if(sessionPtr->supportMsgType(MessageType::EXPRESSION) 
                    && (MessageType::CHAT == msgType || MessageType::TEXT_OFFLINE == msgType)
                    && MsgTransform::isExpression2text(message)){
                //对于支持LBS的终端，如果收到了来自IM回推的LBS转文字的文本，那么过滤之
                LOG_DEBUG("TalkServer::push => skip a expression msg : [" << message << "]");
                //MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->
                //	delMessage(mid, sessionPtr->getUserId(), sessionPtr->getSessionType() );
                delMsgFromOffline(sessionPtr->getUserId(), mid, sessionPtr->getSessionType());
                LOG_DEBUG("TalkServer::push => NotifyMessageSent because it's expToText uid=" << sessionPtr->getUserId()<<" mid ="<<mid);
                return false;
            }

            if(((MessageType::CHAT == msgType) || MessageType::TEXT_OFFLINE == msgType)
                    && MsgTransform::isFeed2Text(message)){
                // 滤掉所有IM 过来的 feed 回推, 因为所有feed聊天都是自己推的
                LOG_DEBUG("TalkServer::push => skip a  IM back feed_chat  msg : [" << message << "]");
                LOG_DEBUG("TalkServer::push => NotifyMessageSent uid=" << sessionPtr->getUserId()<<" mid ="<<mid);
                return false;
            }

            //	MessageTails::replaceTail(sessionPtr->getCAppId(), message);
            return true;
        }

        bool TalkServer::feedPush(const long fromId, const long toId, const string& message, const MessageType::Type msgType, long mid, bool feedConditionsforSixin){

            return feedPush(fromId, toId, message, (int)msgType, mid, feedConditionsforSixin); 
        }

        bool TalkServer::feedPush(const long fromId, const long toId, const string& message, const int msgType, long mid, bool feedConditionsforSixin){
            LOG_W(fromId, "TalkServer::feedPush", msgType, message);
            LOG_DEBUG("TalkServer::feedPush ==> accept a feedPush request :  message = " << message);
            string msg = message;
            MessageType::Type chatType = static_cast<MessageType::Type>(0);
            if (msgType != MessageType::IM_FEED){
                chatType = static_cast<MessageType::Type>(msgType & ~(MessageType::FEED | MessageType::OFFLINE)); //提取一个chatType出来
            } else {
                //把feed type提出来,打远程日志用
            }

            int supportMsgType = 3;
            //生成mid并给message(msg)加上msgKey属性

            xml_document doc;
            pugi::xml_parse_result xresult = doc.load(msg.c_str());

            if(!xresult || !doc.first_child()){
                LOG_ERROR("TalkServer::feedPush ==>  format error.");
                return false;
            }

            xml_node node = doc.first_child();
            string msgkeyStr = node.attribute("msgkey").value();
            if(msgkeyStr.empty()){
                mid = generateMid();
                string msgKey = boost::lexical_cast<string>(mid);
                node.append_attribute("msgkey") = msgKey.c_str();
                stringstream os;
                node.print(os, "\t", pugi::format_raw);
                msg.assign(os.str());
            }
    	    else
	    {
	      try{
                      mid = boost::lexical_cast<long>(msgkeyStr);

                 }catch(boost::bad_lexical_cast& e){
                       LOG_ERROR("TalkServer::feedPush ==> lexical_cast msgkeystr error. ");
		       mid = 0;
                 }
            }

	    list<string> sessionIdList;
	    sessionIdList = userManagerPtr_->getParticularSessionIdList(toId);
	    //随feed的聊天一系列分发处理	
	    if (chatType){
		if (sessionIdList.empty()){
		    if(onlineStatManagerPtr_->hasLongOnline(toId ,OnlineType::IPHONE_SIXIN) | onlineStatManagerPtr_->hasLongOnline(toId ,OnlineType::WINPHONE_SIXIN)){
			//有长在线状态  且该息类型要求保存  为私信用户保存离线消息 
			LOG_DEBUG("TalkServer::feedPush => session not found but found longOnlineStatus: userid = " << toId << " message put into offline offlineStamp = 2")
			    //	MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->immediatelySend2Offline(fromId, toId, mid, msg, chatType, 2);
			    saveMsg2Offline(fromId, toId, msg, chatType);
			return true;
		    }else{
			//没有长在线状态 且该消息类型要求保存   为官方和私信用户保存离线消息
			sessionIdList = userManagerPtr_->getSessionIdList(toId);
		    }	
		}
		if (sessionIdList.empty()){
		    //没有任何session存在，没有任何长在线存在 ，直接推送消息进离线系统
		    if(msgType != MessageType::PRESENCE && msgType != MessageType::ACTION){
			LOG_DEBUG("TalkServer::feedPush => do not  found any session userId = " << toId << "  message put into offline offlineStamp = " << supportMsgType)
			    //		MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->immediatelySend2Offline(fromId, toId, mid, msg, chatType, supportMsgType);
			    saveMsg2Offline(fromId, toId, msg, chatType);
			return true;
		    }
		} else if (!(msgType & MessageType::OFFLINE)){
		    if(msgType != MessageType::PRESENCE && msgType != MessageType::ACTION){
			LOG_DEBUG("TalkServer::feedPush => userId = " << toId << "  session found  size = " << sessionIdList.size() << " message put into msgwait offlineStamp = 3")
			    //				MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->addMessage(fromId, toId, mid, msg, chatType, supportMsgType);
			    saveMsg2Offline(fromId, toId, msg, chatType);
		    }
		}

            } else {
                //纯feed对所有session都推		
                sessionIdList = userManagerPtr_->getSessionIdList(toId);
            }


            bool result = false;
            for(list<string>::iterator it = sessionIdList.begin(); it != sessionIdList.end(); it++){
                talk::SessionPtr sessionPtr = sessionManagerPtr_->getSession(*it);

                string message = msg;

                if (!sessionPtr.get()){
                    LOG_DEBUG("session has broken for sessionId : sessionId = " << *it << "  userId = " << toId);
                    continue ;
                }

                if (!feedMsgCheck(sessionPtr, msgType, message, mid)){
                    LOG_DEBUG("TalkServer::feedPush ==> feedMsgCheck return false ,skip a feed msg : " << msg);
                    continue;
                }

                xml_document doc;
                doc.load(message.c_str());
                xml_node messageNode = doc.first_child();

                bool deliverResult = false;
                if (chatType){
                    checkAndDeliver(sessionPtr, fromId, toId, messageNode, chatType, mid);
                } else { //单独的feed下发
                    //这里来区分  官方或私信
                    if (MY_INSTANCE(FeedProcessor).checkSixinIMFeed(sessionPtr->getCAppId(), feedConditionsforSixin)){ //将发给私信的且type是不要的滤掉
                        continue ;
                    }
                    deliverResult = sessionPtr->deliver(fromId, message, msgType, mid);  // 这里msgType == MessageType::FEED
                }

                //打远程日志
                if (MY_INSTANCE(FeedProcessor).checkSixin(sessionPtr->getCAppId())){

                    if (deliverResult){
                        LOG_ACTION("push|" << fromId << "|" << toId << "|"  
                                << sessionPtr->getCAppId() << "|" 
                                << sessionPtr->getCFromId() << "|"
                                << sessionPtr->getCVersion() << "|"
                                << msgType << "|success||||");
                        RLOG_ACTION("push|" << fromId << "|" << toId << "|"  
                                << sessionPtr->getCAppId() << "|" 
                                << sessionPtr->getCFromId() << "|"
                                << sessionPtr->getCVersion() << "|"
                                << msgType << "|success||||");
                    } else {
                        LOG_ACTION("push|" << fromId << "|" << toId << "|" 
                                << sessionPtr->getCAppId() << "|" 
                                << sessionPtr->getCFromId() << "|"
                                << sessionPtr->getCVersion() << "|"
                                << msgType << "|failure|||");
                        RLOG_ACTION("push|" << fromId << "|" << toId << "|" 
                                << sessionPtr->getCAppId() << "|" 
                                << sessionPtr->getCFromId() << "|"
                                << sessionPtr->getCVersion() << "|"
                                << msgType << "|failure|||");
                    }
                }

                result |= deliverResult;	//有一个session deliver成功了则成功
            }

            if(result){
                LOG_DEBUG("TalkServer::feedPush ==> push feedMessage success toId = " << toId << " message = " << msg);
            } else {
                LOG_DEBUG("TalkServer::feedPush ==> push feedMessage failure (no effective connection for user) toId = " << toId << " message" << msg);
            }

            return result;

        }

        bool TalkServer::feedMsgCheck(const SessionPtr sessionPtr, const MessageType::Type msgType, string& message, long mid) {
            return feedMsgCheck(sessionPtr, (int)msgType, message, mid);
        }

        bool TalkServer::feedMsgCheck(const SessionPtr sessionPtr, const int msgType, string& message, long mid){

            if (!sessionPtr.get()){
                return false;
            }

            if ((MessageType::IM_FEED == msgType) && sessionPtr->supportMsgType(MessageType::IM_FEED)){
                return true;
            }

            if(sessionPtr->supportMsgType(MessageType::FEED)){
                return true;	
            } else{ //不支持Feed时的处理
                xml_document doc;
                xml_parse_result result = doc.load(message.c_str());
                if (!result){
                    // LOG_DEBUG
                    return false;
                }
                xml_node messageNode = doc.first_child();
                xml_node body = messageNode.child("body");
                if (body){  //是带feed的聊天, 过滤掉feed
                    messageNode.remove_attribute("feed");
                    ostringstream os;
                    messageNode.remove_child("feed");
                    messageNode.print(os, "\t", pugi::format_raw);
                    string str = os.str();  //for debug information
                    LOG_DEBUG("TalkServer::feedMsgCheck ==> session do not support FEED : before processing  message = " << message  << "  after processing : message = " << str);
                    message = os.str();
                    //	MessageType::Type chatTypeinFeed = static_cast<MessageType::Type>(msgType & ~MessageType::FEED);

                    return true;
                    //return msgCheck(sessionPtr, chatTypeinFeed, message, mid);
                } else { //下推的只有新鲜事 ,就过滤掉
                    return false;	
                }

            }

            return false;

        }

        void TalkServer::feedOfflineCheck(long fromId, long toId, xml_node& node){
            long msgkey = 0;	
            if (node.attribute("msgkey")){	
                string msgkeyStr = node.attribute("msgkey").value();
                msgkey = boost::lexical_cast<long>(msgkey);
            } else {
                msgkey = -1;
            }

            //long msgkey = boost::lexical_cast<long>(msgkeyStr);

            //还要把feed的类型解析出来这里 从node中
            xml_node body = node.child("body");
            string chatTypeStr = body.attribute("type").value();
            MessageType::Type msgType;
            if (!chatTypeStr.compare("text")){
                msgType = MessageType::CHAT;
            } else if (!chatTypeStr.compare("voice")){
                msgType = MessageType::VOICE;
            } else if (!chatTypeStr.compare("image")){
                msgType = MessageType::IMAGE;
            } else if (!chatTypeStr.compare("expression")){
                msgType = MessageType::EXPRESSION;
            }

            //加上离线和FEED属性
            msgType = static_cast<MessageType::Type>((msgType | MessageType::FEED | MessageType::OFFLINE));
            //msgType = static_cast<MessageType::Type>((msgType | MessageType::FEED)); //把离线去了，即也可以重复进离线

            ostringstream os;
            node.print(os, "\t", pugi::format_raw);
            feedPush(fromId, toId, os.str(), msgType, msgkey); //暂时没加msgkey, 没懂在离线处理中的作用 

        }


        void TalkServer::distribute(long roomId, long toId, const string& msg, bool isSave){

            LOG_W(toId, "TalkServer::distribute", -1, msg);

            LOG_TALK_ACTION("|distribute|"<<roomId<<"|"<<toId)

            LOG_MUC("TalkServer::MUCdistribute => accept a mucpush request : roomId = " << roomId << " toId = " << toId
                        << " message = " << msg << " isSave = " << isSave);

            string message = msg;
            xml_document doc;
            pugi::xml_parse_result result = doc.load(msg.c_str());

            if(!result){
                LOG_MUC("TalkServer::MUCdistribute  xml error  toId = "<<toId<<" roomId = "<<roomId);
                return ;
            }
            xml_node node = doc.first_child();
            long mid = 0;
            if(isSave && result && !node.attribute("msgkey")){
                if(!node.attribute("msgkey")){
                    mid = generateMid();
                    string msgKey = boost::lexical_cast<string>(mid);
                    node.append_attribute("msgkey")=msgKey.c_str();
                    stringstream os;
                    node.print(os, "\t", pugi::format_raw);
                    message.assign(os.str());
                }else{
                    string midStr = node.attribute("msgkey").value();
                    mid = boost::lexical_cast<long>(midStr);
                }
            }

            xml_node body = node.child("body");
            const char_t* msgTypeStr = body.attribute("type").value();
            //根据message获取messageType 
            MessageType::Type msgType = MessageType::GROUP_CHAT_TEXT;

            if(strcmp(msgTypeStr, "voice") == 0) {
                msgType	= MessageType::GROUP_CHAT_VOICE;
            } else if(strcmp(msgTypeStr, "image") == 0) {
                msgType	= MessageType::GROUP_CHAT_IMAGE;
            } else if(strcmp(msgTypeStr, "multimedia") == 0) {
                msgType	= MessageType::GROUP_CHAT_MULTIMEDIA;
            }else if(strcmp(msgTypeStr,"expression") == 0) {
                msgType	= MessageType::GROUP_CHAT_EXPRESSION;
            }else if(strcmp(msgTypeStr,"expression") == 0){
                msgType = MessageType::ACTION;
            }


            list<string> sessionIdList = userManagerPtr_->getParticularSessionIdList(toId);

            LOG_MUC("TalkServer::distribute getSession size  = "<<sessionIdList.size())	

                if(sessionIdList.empty()){
                    if(isSave && msgType != MessageType::ACTION){
                        //	MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->
                        //		immediatelySend2Offline(110, toId, mid, message, MessageType::GROUP_CHAT,2);
                        saveMsg2Offline(110, toId, message, MessageType::GROUP_CHAT);
                    }

                    LOG_MUC("TalkServer::distribute not found Session save = "<< isSave)	
                        return ;
                }else{
                    if(isSave && msgType != MessageType::ACTION){
                        //MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->
                        //	addMessage(110, toId, mid, message, MessageType::GROUP_CHAT,2);
                        saveMsg2Offline(110, toId, message, MessageType::GROUP_CHAT);
                    }
                    LOG_DEBUG("TalkServer::distribute found Session  uid = "<<toId<<" sessionCount = "<<sessionIdList.size()<<" save = "<<isSave)	
                }


            BOOST_FOREACH(string& sessionId, sessionIdList){
                talk::SessionPtr sessionPtr = MY_INSTANCE(BoshServer).getSession(sessionId);
                if(!sessionPtr){
                    LOG_MUC("TalkServer::distribute  session broken toId = "<<toId)	
                        continue ;
                }

                LOG_DEBUG("TalkServer::distribute forward  checkAndDeliver  uid = "<<sessionPtr->getUserId())	
                    checkAndDeliver(sessionPtr, 110, toId, node, msgType, mid );
            }

        }

        void TalkServer::MucReturn(const string& sessionId, const string& msg, bool isSave){
            LOG_TALK_ACTION("|mucReturn|"<<sessionId);
            LOG_MUC("TalkServer::MucReturn => accept a muc  return request : sid = " << sessionId
                    << " message = " << msg << " isSave = " << isSave);


            string message = msg;
            long mid = 0;
            long toId = 0;
            if(isSave){
                xml_document doc;
                pugi::xml_parse_result result = doc.load(msg.c_str());
                if(!result){
                    LOG_MUC("TalkServer::MUCdistribute  xml error ");
                    return ;
                }
                xml_node node= doc.first_child();
                JID to(node.attribute("to").value());
                toId = to.getUserId();
                mid = generateMid();

                if(!node.attribute("msgkey")){
                    string msgKey = boost::lexical_cast<string>(mid);
                    node.append_attribute("msgkey")=msgKey.c_str();
                }else{  
                    string midStr = node.attribute("msgkey").value();
                    mid = boost::lexical_cast<long>(midStr);
                }

                stringstream os;
                node.print(os, "\t", pugi::format_raw);
                message.assign(os.str());

            }



            talk::SessionPtr sessionPtr = MY_INSTANCE(BoshServer).getSession(sessionId);

            if(!sessionPtr){
                if(isSave){
                    LOG_MUC("TalkServer::MucReturn  sessionPtr not fount sid = "<<sessionId);
                    //MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->immediatelySend2Offline(110, toId, mid, message, MessageType::GROUP_CHAT,2);
                    saveMsg2Offline(110, toId, message, MessageType::GROUP_CHAT);
                }
                LOG_MUC("TalkServer::mucReturn ==> session not get return ");
                return ;
            }else{
                if(isSave){
                    //MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->addMessage(110, toId, mid, message, MessageType::GROUP_CHAT,2);
                    saveMsg2Offline(110, toId, message, MessageType::GROUP_CHAT);
                }
            }

            LOG_MUC("TalkServer::MucReturn getSession success and deliver  uid = "<<sessionPtr->getUserId())	
                sessionPtr->deliver(110, message, MessageType::GROUP_CHAT, mid);

        }

        void TalkServer::pushMucOffline(const string& sessionId, long toId, std::vector<string>mucOfflineMsgList){

            //循环处理发给toId的每条message	

            LOG_MUC("TalkServer::pushMucOffline => accept a pushmucoffline request :sessionId = " << sessionId<< " toId = " << toId << " size = "<<mucOfflineMsgList.size());
            if(mucOfflineMsgList.empty()){

                LOG_MUC("TalkServer::pushMucOffline not mucOfflineMsgList is empty, toId= "<<toId);	
                return ;	
            }

            talk::SessionPtr sessionPtr = MY_INSTANCE(BoshServer).getSession(sessionId);
            if(!sessionPtr){
                LOG_DEBUG("TalkServer::pushMucOffline  session fail toId = "<<toId)	
                    return ;
            }
            BOOST_FOREACH(string& msg, mucOfflineMsgList){
                std::string message = msg;	
                LOG_DEBUG("TalkServer::pushMucOffline => accept a mucpush request :toId = " << toId<< " message = " << message );
                xml_document doc;
                pugi::xml_parse_result result = doc.load(message.c_str());
                if(!result || !doc.first_child()){
                    LOG_MUC("TalkServer::pushMucOffline  xml error  toId = "<<toId<<"message"<<message);
                    continue ;
                }
                xml_node node= doc.first_child();
                long mid=0;
                try{	
                    string msgKey = node.attribute("msgkey").value();
                    mid = boost::lexical_cast<long>(msgKey);
                } catch(boost::bad_lexical_cast& e){ 

                    mid=0 ;//异常处理
                }


                xml_node body = node.child("body");
                const char_t* msgTypeStr=body.attribute("type").value();

                MessageType::Type msgType = MessageType::GROUP_CHAT_OFFLINE;

                if(strcmp(msgTypeStr, "voice") == 0){

                    msgType	= MessageType::GROUP_CHAT_OFFLINE_VOICE;

                } else if(strcmp(msgTypeStr, "image") == 0){

                    msgType	= MessageType::GROUP_CHAT_OFFLINE_IMAGE;

                } else if(strcmp(msgTypeStr, "multimedia") == 0){

                    msgType	= MessageType::GROUP_CHAT_OFFLINE_MULTIMEDIA;

                }else if(strcmp(msgTypeStr,"expression") == 0){

                    msgType	= MessageType::GROUP_CHAT_OFFLINE_EXPRESSION;
                }

                LOG_DEBUG("TalkServer::pushMucOffline   checkAndDeliver  uid = "<<sessionPtr->getUserId());	
                checkAndDeliver(sessionPtr, 110, toId, node, msgType, mid);

            }
        }

        void TalkServer::pushOffline(const string& sessionId, long toId, std::vector<string>offlineMsgList){


            LOG_DEBUG("TalkServer::pushOfflineMessage toId= "<<toId<<"sid = "<<sessionId<<" size = "<<offlineMsgList.size());	
            SessionPtr session =  MY_INSTANCE(BoshServer).getSession(sessionId);
            if(!session){
                LOG_INFO("TalkServer::pushOfflineMessage toId= "<<toId<<" session not found  size = "<<offlineMsgList.size() << "sid =" << sessionId);	
                LOG_W(toId, "TalkServer::pushOffline", -1, "session not found ");
                return ;
            } 
            if(!offlineMsgList.empty()){
                ostringstream os;
                os.str("");
                for(size_t i = 0; i < offlineMsgList.size(); ++i){
                    os << offlineMsgList[i];
                }
                string offlineMsg = os.str();

                LOG_DEBUG("talkServer::pushOfflineMessage => userId = "<< toId <<" msgListSize = "<<offlineMsgList.size()<<" msg = "<<"[*"<<offlineMsg<<"*]");
                xml_document doc;
                xml_parse_result xmlResult = doc.load(offlineMsg.c_str());

                if(!xmlResult || !doc.first_child()){
                    LOG_ERROR("talkServer::pushOfflineMessage => offline message not found, xml error : " << xmlResult.description());
                    return;
                }

                for(xml_node node = doc.first_child(); node; node = node.next_sibling()){
                    xmpp::JID to(node.attribute("to").value());
                    xmpp::JID from(node.attribute("from").value());

                    LOG_W(from.getUserId(), "TalkServer::pushOffline|feedOfflineCheck", -1, offlineMsg);

                    //以前几行为feed加入代码, 检查有没有feed属性
                    if (!node.attribute("feed").empty()){
                        long fromId = from.getUserId();
                        long toId = to.getUserId();
                        feedOfflineCheck(fromId, toId, node);  // 如果是feed 节, 单独处理, 这一趟结束
                        continue;
                    }

                    long   msgkey = 0; 
                    string  msgkey_str = node.attribute("msgkey").value();
                    try{
                        msgkey = boost::lexical_cast<long>(msgkey_str);
                    }catch(...){
                    }

                    stringstream os;
                    node.print(os, "\t", pugi::format_raw);
                    string msg = os.str();

                    xml_node body = node.child("body");
                    const char_t* type = body.attribute("type").value();


                    if(strcmp(type, "text") == 0){
                        checkAndDeliver(session, from.getUserId(),to.getUserId(), node, MessageType::TEXT_OFFLINE, msgkey );

                    } else if(strcmp(type, "voice") == 0){

                        checkAndDeliver(session, from.getUserId(),to.getUserId(), node, MessageType::VOICE_OFFLINE, msgkey );
                    } else if(strcmp(type, "image") == 0){

                        checkAndDeliver(session, from.getUserId(),to.getUserId(), node, MessageType::IMAGE_OFFLINE, msgkey );
                    } else if(strcmp(type, "lbs") == 0){

                        checkAndDeliver(session, from.getUserId(),to.getUserId(), node, MessageType::LBS_OFFLINE, msgkey );
                    } else if(strcmp(type, "expression") == 0){

                        checkAndDeliver(session, from.getUserId(),to.getUserId(), node, MessageType::EXPRESSION_OFFLINE, msgkey );
                    } else {
                        checkAndDeliver(session, from.getUserId(),to.getUserId(), node, MessageType::ENTITY, msgkey );
                    }

                }
            }

        }

        void TalkServer::antispamInfo(const SessionPtr sessionPtr, const xmpp::JID& from, const xmpp::JID& to, const string& msg){

            LOG_DEBUG("TalkServer::antispamInfo  fromId = "<<from.getUserId()<<" toId = "<<to.getUserId()<<"msg = "<<msg);	
            string subStr = utils::XmlUtils::getPartWorlds(msg, 8);

            int i18n_id = 30001;   //  template id defined at conf/template.conf 
            //          int temp_id = 10003;   //  i18n id defined at conf/lang/xx.properties

            if(msg.size() > 24)
                i18n_id = 30000;

            long mid = generateMid();

            stringstream tos;
            tos << "<template id='10003'>"           
                << "<para id='"<< i18n_id <<"'>" 
                << "<par>" << subStr << "</par>"
                << "</para></template>";

            stringstream os;

            long timestamp = time(NULL) * 1000; 

            os<<"<message from='"<<to.toString()<<"' to='"<<from.toString()<<"' msgkey='"<<mid<<"' type='info'"<<
                " time='"<< timestamp <<"'><body type='text'>"<<tos.str()<<"</body></message>";
            LOG_INFO("TalkServer::antispamInfo:: message = "<<os.str());
            sessionPtr->deliver(to.getUserId(), os.str(), MessageType::CHAT, mid);


        }


        void TalkServer::refuseInfo(const SessionPtr sessionPtr, const xmpp::JID& from, const xmpp::JID& to){
            LOG_DEBUG("TalkServer::refuseInfo  fromId = "<<from.getUserId()<<" toId = "<<to.getUserId());	

            int i18n_id = 30002;   //  template id defined at conf/template.conf 


            stringstream tos;
            tos << "<template id='10003'>"           
                << "<para id='"<< i18n_id <<"'>" 
                << "<par>"<<"</par>"
                << "</para></template>";

            long mid = generateMid();
            stringstream os;
            long timestamp = time(NULL) * 1000;

            os<<"<message from='"<<from.toString()<<"' to='"<<to.toString()<<"' msgkey='"<<mid<<"' type='info'"<<" time='"
                << timestamp <<"'><body type='text'>"<<tos.str()<<"</body></message>";
            sessionPtr->deliver(to.getUserId(), os.str(), MessageType::CHAT, mid);
        }



        long TalkServer::generateMid(){
            ScopedLock lock(midMutex_);

            ++midCount_;

            if((midCount_ * serverCount_) > (1<<24)){
                midCount_ = 1;
                midBegin_ = time(NULL) << 24;
            }

            return midBegin_ + midCount_ * (long)serverCount_ + (long)serverIndex_;
        }

        void TalkServer::setLang(long userId, const string msg){

            list<talk::SessionPtr> SessionList= userManagerPtr_->getNewParticularSessionList(userId);
            BOOST_FOREACH(talk::SessionPtr& sessionPtr,SessionList){

                LOG_DEBUG("TalkServer::setLang id = "<<userId<< "lang= "<< msg);	

                sessionPtr->setLang(msg);

            }

        }

        int TalkServer::processExpressionMsg(SessionPtr sessionPtr, pugi::xml_node& node){
            string expression = node.first_element_by_path("body/text").child_value();
            if(expression.find("阿狸") != string::npos){
                return 0;
            }else{

                int count = sessionPtr->sendNotSupExpCoun();
                MsgTransform::expression2Url(node);

                if(0 == (count % 10)){
                    stringstream os ;
                    os <<"<message fname='"<< node.attribute("fname").value()<<"' type='chat' time='"<<time(NULL)*100 
                        << "' from='" <<  node.attribute("from").value() << "' to='" << node.attribute("from").value() << "'>" 
                        << "<body type='text'><text>"<<node.attribute("fname").value()
                        <<"正在使用私信3.0的炫酷表情，快快更新吧。 http://mdown.renren.com/soft/sixinclientshow.do</text></body>" 
                        << "</message>";
                    JID from(node.attribute("from").value());
                    sessionPtr->deliver(from.getUserId(), os.str(), MessageType::CHAT, 0);
                    sessionPtr->sendNotSupExpCoun(++count);
                    return 0;
                }else{
                    sessionPtr->sendNotSupExpCoun(++count);
                    return 0;
                }

            }
        }


        TalkServerZKListener::TalkServerZKListener(const string& path, const int serverId, const short serverPort) :
            path_(path),
            serverId_(serverId),
            serverPort_(serverPort){

                nodeName_ = "server-" + boost::lexical_cast<string>(serverId_);
                nodePath_ = path_ + "/" + nodeName_;
                string ipAddr = MyUtil::IpAddr::inner();
                nodeAddress_ = ipAddr + ':' + boost::lexical_cast<string>(serverPort_);
            }

        void TalkServerZKListener::zkHandle(boost::shared_ptr<ZKManager> zkManagerPtr, const string& path, const ZKEventType event){
            switch(event){
                case ZK_CHILD_CHANGED :
                    LOG_INFO("TalkServerZKListener::zkHanlde => path [" << path << "] children changed, start update");
                    if(path == path_){
                        updateConfig(zkManagerPtr);
                    }
                    LOG_INFO("TalkServerZKListener::zkHanlde => path [" << path << "] listener update finish");
                    break;
                case ZK_SESSION_EXPIRED :
                    LOG_INFO("TalkServerZKListener::zkHanlde => path [" << path << "] session expired, start update");
                    registerServer(zkManagerPtr);
                    updateConfig(zkManagerPtr);
                    LOG_INFO("TalkServerZKListener::zkHanlde => path [" << path << "] listener update finish");
                    break;
                case ZK_LISTENER_INIT :
                    LOG_INFO("TalkServerZKListener::zkHanlde => path [" << path << "] listener init, start update");
                    if(path == path_){
                        registerServer(zkManagerPtr);
                        updateConfig(zkManagerPtr);
                    }
                    LOG_INFO("TalkServerZKListener::zkHanlde => path [" << path << "] listener update finish");
                    break;
            };
        }

        std::string TalkServerZKListener::getNodePath() const{
            return nodePath_;
        }

        void TalkServerZKListener::updateConfig(boost::shared_ptr<ZKManager> zkManagerPtr){
            vector<string> serverList;

            zkManagerPtr->getChildren(path_, serverList);

            vector<int> serverIds;

            for(size_t i = 0; i < serverList.size(); i++){
                string serverName(serverList[i]);
                size_t p = serverName.find('-');
                if(p == string::npos){
                    continue;
                }
                int serverId = boost::lexical_cast<int>(serverName.substr(p+1));
                serverIds.push_back(serverId);
            }

            sort(serverIds.begin(), serverIds.end());

            int index = 0;
            int count = serverIds.size();

            for(size_t i = 0; i < serverIds.size(); i++){
                if(serverId_ == serverIds[i]){
                    index = i;
                    break;
                }
            }

            LOG_INFO("TalkServerZKListener::updateConfig => cluster info : index = " << index << " count = " << count);
            MY_INSTANCE(TalkServer).updateClusterInfo(index, count);
        }

        void TalkServerZKListener::registerServer(boost::shared_ptr<ZKManager> zkManagerPtr){

            LOG_INFO("TalkServerZKListener::registerServer => begin : path = " << nodePath_ << " address = " << nodeAddress_);

            zkManagerPtr->createNode(path_, nodeName_, nodeAddress_);
        }

        void TalkServer::saveMsg2Offline(const long fromId, const long toId, const string& msg, const int  msgType ,int supportToClientType){
            LOG_DEBUG("saveMsg2Offline|" << fromId << "|" << toId << "|" << msgType << "|" << supportToClientType);
            offlineMsgServiceProxyPtr_->addOfflineMsg(fromId, toId, msg, msgType, supportToClientType);
        }

        void TalkServer::delMsgFromOffline(long userId ,long msgKey,int clientType){
            LOG_DEBUG("delMsgFromOffline|" << userId << "|" << msgKey << "|" << clientType);
            offlineMsgServiceProxyPtr_->deleteOfflineMessage(msgKey, userId, clientType);
        }

    };
};
