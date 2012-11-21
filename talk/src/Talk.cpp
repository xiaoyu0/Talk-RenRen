/**
 * @file Talk.cpp
 * @brief    talk 服务的main方法
 * @author you.zhou@renren-inc.com
 * @version 1.0
 * @date 2011-07-06
 */
#include <iostream>
#include <fstream>
#include <pthread.h>
#include <signal.h>
#include <boost/bind.hpp>
#include <boost/thread.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/program_options.hpp>
#include <boost/filesystem.hpp>
#include <Ice/Ice.h>
#include <log4cplus/logger.h>
#include <log4cplus/configurator.h>
#include "bosh/BoshServer.h"
#include "bosh/BoshServiceI.h"
#include "socket/SocketServiceI.h"
#include "talk/TalkServer.h"
#include "talk/UserManager.h"
#include "talk/TalkServiceI.h"
#include "talk/OnlineStatManager.h"
#include "talk/I18nTranslateServiceI.h"
#include "c-client-src/zookeeper.h"
#include "utils/TTClient.h"
#include "utils/IpAddr.hpp"
#include "utils/EmojiFilter.h"
#include "proxy/ProxyRegister.h"
#include "proxy/RedisProxy.h"
#include "proxy/IceExceptionCounter.h"
#include "talk/FeedProcessor.h"
#include "utils/I18nTranslate.h"
#include "protocolChanger/ProtocolChanger.h"
#include "talk/Router2TalkServiceI.h"   //add by zhougy.

using namespace std;
using namespace log4cplus;
using namespace mtalk::bosh;
using namespace mtalk::im;
using namespace mtalk::utils;
using namespace mtalk::talk;
using namespace mtalk::socket;
using namespace mtalk::proxy;

namespace bpo = boost::program_options;
namespace bfs = boost::filesystem;


static void sigHandler(int iSig){
    mtalk::utils::i18n::reload();
    mtalk::utils::wl::InitWhiteList();
}

// 初始化信号处理
// 1. 屏蔽SIGTERM, SIGUSR2信号
// 2. SIGUSR1用于重新载入模板资源
static void initSigHandler(void)
{
    struct sigaction act;
    memset(&act, 0, sizeof(act));
    act.sa_handler = SIG_IGN;
    sigemptyset(&act.sa_mask);
    act.sa_flags = 0;

    sigaction(SIGTERM, &act, NULL);
    sigaction(SIGUSR2, &act, NULL);

    act.sa_handler = sigHandler;

    sigaction(SIGUSR1, &act, NULL);
}


int main(int argc, char* argv[]){

    initSigHandler();
	//IceExceptionCounter::loadAlarmConfigure();
	
	const bfs::path binPath(argv[0]);
    const bfs::path& binDir = system_complete(binPath).parent_path();
    const bfs::path& homePath = binDir.parent_path();

    bpo::options_description desc("talk allowed options");
    desc.add_options()
        ("help", "help message")
        ("log_conf", bpo::value<string>(), "log4cplus configure file")
        ("server_id", bpo::value<int>(), "The server id")
        ("server_port", bpo::value<short>(), "The server port")
        ("domain", bpo::value<string>(), "The server domain")
        ("zk_servers", bpo::value<string>(), "The zookeeper server list split with ','")
        ("tt_servers", bpo::value<string>(), "The TT server list split with ','")
        ("tt_mas_servers", bpo::value<string>(), "The TT server list split with ','")
        ("redis_servers", bpo::value<string>(), "The redis server list split with ','")
        ("emoji_data", bpo::value<string>(), "The Emoji unicode data file");
    //        ("push_last_time", bpo::value<int>(), "the push last time(long online time) in OnlineStatManager");

    string logConf;
    int serverId;
    short serverPort;
    string domain;
    string zkServers;
    string ttServers;
    string ttMASServers;
    string redisServers;
    string emojiData;
    string schemaFile;
    //    int pushLastTime;
    bpo::variables_map vm;
    //    bpo::store(bpo::parse_command_line(argc, argv, desc), vm);
    string configFile = homePath.string() + "/conf/talk_config.cfg";
    ifstream configIFS(configFile.c_str());
    bpo::store(bpo::parse_config_file(configIFS, desc), vm);
    bpo::notify(vm);

    if(vm.count("help")){
        cout << desc << endl;
        return 0;
    }
    if(vm.count("log_conf")){
        logConf = vm["log_conf"].as<string>();
    } else {
        cout << desc << endl;
        return 0;
    }
    if(vm.count("server_id")){
        serverId = vm["server_id"].as<int>();
    } else {
        cout << desc << endl;
        return 0;
    }
    if(vm.count("server_port")){
        serverPort = vm["server_port"].as<short>();
    } else {
        cout << desc << endl;
        return 0;
    }
    if(vm.count("domain")){
        domain = vm["domain"].as<string>();
    } else {
        cout << desc << endl;
        return 0;
    }
    if(vm.count("zk_servers")){
        zkServers = vm["zk_servers"].as<string>();
    } else {
        cout << desc << endl;
        return 0;
    }
    if(vm.count("tt_servers")){
        ttServers = vm["tt_servers"].as<string>();
    } else {
        cout << desc << endl;
        return 0;
    }
    if(vm.count("tt_mas_servers")){
        ttMASServers = vm["tt_mas_servers"].as<string>();
    } else {
        cout << desc << endl;
        return 0;
    }
    if(vm.count("redis_servers")){
        redisServers = vm["redis_servers"].as<string>();
    } else {
        cout << desc << endl;
        return 0;
    }
    if(vm.count("emoji_data")){
        emojiData = vm["emoji_data"].as<string>();
    } else {
        cout << desc << endl;
        return 0;
    }
	
    /*    if(vm.count("push_last_time")){
        pushLastTime= vm["push_last_time"].as<int>();
        } else {
        cout << desc << endl;
        return 0;
        }
        cout << "push last time = " << pushLastTime << endl;*/
    //configure log4cplus
    ConfigureAndWatchThread configureThread(LOG4CPLUS_TEXT(logConf), 5 * 1000);
    MY_INSTANCE(mtalk::protocolChang::ProtocolChanger);
    MY_INSTANCE(EmojiFilter).initDataMap(emojiData);


    TalkServer& talkServer = MY_INSTANCE(TalkServer);

    //create IMGateForPhoneAdapter
    boost::shared_ptr<IMGateForPhoneAdapter> imGateForPhoneAdapterPtr(new IMGateForPhoneAdapter());
    talkServer.setIMGateForPhoneAdapter(imGateForPhoneAdapterPtr);

    //create OnlineStatManager
    boost::shared_ptr<OnlineStatManager> onlineStatManagerPtr(new OnlineStatManager());
    onlineStatManagerPtr->setServerId(serverId); // OnlineStatManager need serverId
    talkServer.setOnlineStatManager(onlineStatManagerPtr);
    MY_INSTANCE(FeedProcessor).setOnlineStatManager(onlineStatManagerPtr);

    //create UserManager
    boost::shared_ptr<UserManager> userManagerPtr(new UserManager(imGateForPhoneAdapterPtr, onlineStatManagerPtr));
    talkServer.setUserManager(userManagerPtr);

    //create and set TTClient , used by talkServer 
    boost::shared_ptr<TTClient> ttClientPtr(new TTClient(ttServers));
    boost::shared_ptr<TTClient> ttClient4MASPtr(new TTClient(ttMASServers));
    talkServer.setTTClient(ttClientPtr);
    talkServer.setTTClient4MAS(ttClient4MASPtr);

    //create RedisClient, used by onlineStatManager
    boost::shared_ptr<RedisProxy> redisProxyPtr(new RedisProxy(redisServers));
    MY_INSTANCE(ProxyRegister).registerProxy("redisProxy", redisProxyPtr);

    //set imGateForPhoneAdapter for onlineStatManager
    onlineStatManagerPtr->setIMGateForPhoneAdapter(imGateForPhoneAdapterPtr);

    //init i18n
    string templateFile = homePath.string() + "/conf/template.cfg";
    string langPath = homePath.string() + "/conf/lang";
    mtalk::utils::i18n::init(templateFile, langPath);

	// init whitelist
    mtalk::utils::wl::InitWhiteList();
	
    //talk server init
    talkServer.init(serverId, serverPort, domain, zkServers);
    boost::thread thread(boost::bind(&TalkServer::start, &talkServer));

    WapIceChannel iceChannel;
    try{
        iceChannel.init();
        Ice::ObjectAdapterPtr adapter = iceChannel.createObjectAdapterWithEndpoints("TalkAdapter", serverPort);

        Ice::ObjectPtr boshService = new BoshServiceI();
        adapter->add(boshService, iceChannel.getCommunicator()->stringToIdentity("BoshService"));

        Ice::ObjectPtr talkService = new TalkServiceI(imGateForPhoneAdapterPtr);
        adapter->add(talkService, iceChannel.getCommunicator()->stringToIdentity("TalkService"));

        //add by zhougy-----begin-----.
        //router to talk from facebook.
        Ice::ObjectPtr route2talkService = new Router2TalkServiceI();
        adapter->add(route2talkService, iceChannel.getCommunicator()->stringToIdentity("RouterService"));
        //add by zhougy-----end-------.

        // i18ntranslate
        Ice::ObjectPtr i18nService = new I18nTranslateServiceI();
        adapter->add(i18nService, iceChannel.getCommunicator()->stringToIdentity("I18nTranslateService"));

        //    remove socket support
        Ice::ObjectPtr socketService = new SocketServiceI();
        adapter->add(socketService, iceChannel.getCommunicator()->stringToIdentity("SocketService"));

        adapter->activate();

        LOG_INFO("main => talk server started");
        cout << "==== Server Started ====" << endl;
        iceChannel.getCommunicator()->waitForShutdown();
    } catch (const Ice::Exception & e) {
        cout << e << endl;
    } catch (const char* msg){
        cout << msg << endl;
    }

    talkServer.stop();
    thread.join();
    iceChannel.destroy();
    return 0;
}
