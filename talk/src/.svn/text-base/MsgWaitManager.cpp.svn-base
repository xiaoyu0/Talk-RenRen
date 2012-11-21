/*
 * =====================================================================================
 *
 *       Filename:  MsgWaitManager.cpp
 *
 *    Description:  提取离线服务
 *
 *        Version:  1.0
 *        Created:  2012年02月10日 14时11分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  yuanjiang (mn), jiang.yuan@renren-inc.com
 *        Company:  renren
 *
 * =====================================================================================
 */
#include    "msgwait/MessageWaitManagerServiceI.h"
#include    "msgwait/MessageWaitManager.h"
#include    "ice_src/MessageWaitManagerService.h"

#include  <Ice/Ice.h>
#include  <iostream>
#include <sstream>
#include <fstream>
#include <iostream>
#include <boost/bind.hpp>
#include <boost/thread.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/program_options.hpp>
#include <boost/filesystem.hpp>
#include <log4cplus/logger.h>
#include <log4cplus/configurator.h>

using namespace mtalk;
using namespace msgwait;
using namespace log4cplus;
using namespace std;
using namespace mtalk::utils;
using namespace mtalk::proxy;
namespace bpo = boost::program_options;
namespace bfs = boost::filesystem;

int serverId;
short servicePort;
string zkServers;



int main(int argc , char* argv[])
{
	const bfs::path binPath(argv[0]);
	const bfs::path& homePath = system_complete(binPath).parent_path().parent_path();
	cout<<homePath.string();
	bpo::options_description desc("msgWait allowed options");
	desc.add_options()
		("help", "help message")
		("log_conf", bpo::value<string>(), "log4cplus configure file")
		("server_id", bpo::value<int>(), "The server id")
		("service_port", bpo::value<short>(), "The endpoint ice service port")
		("domain", bpo::value<string>(), "The server endpoint domain")
		("zk_servers", bpo::value<string>(), "The zookeeper servers list split with ','");

	string logConf;
	string domain;

	bpo::variables_map vm;
	string configFile = homePath.string() + "/conf/msgWait_config.cfg";
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
	if(vm.count("service_port")){
		servicePort = vm["service_port"].as<short>();
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

	//configure log4cplus
	ConfigureAndWatchThread configureThread(LOG4CPLUS_TEXT(logConf), 5 * 1000);

	boost::shared_ptr<MessageWaitManager> messageWaitManagerPtr(new MessageWaitManager);
	messageWaitManagerPtr->init(serverId, servicePort, domain, zkServers);
	messageWaitManagerPtr->start();
    
    // init whitelist
    mtalk::utils::wl::InitWhiteList();

	Ice::CommunicatorPtr ic;

	try{
		ic = Ice::initialize();
		ostringstream os;
		os << "default -p " << servicePort;
		Ice::ObjectAdapterPtr adapter = ic->createObjectAdapterWithEndpoints("TalkAdapter", os.str());
		Ice::ObjectPtr object = new msgwait::MessageWaitManagerServiceI( messageWaitManagerPtr );
		adapter->add(object, ic->stringToIdentity("MessageWaitManagerService"));
		adapter->activate();
		LOG_INFO("main => endpoint server started");
		cout << "==== Server Started ====" << endl;
		ic->waitForShutdown();
	} catch (const Ice::Exception& e) {
		cout << e << endl;
	} catch (const char* msg){
		cout << msg << endl;
	}
	messageWaitManagerPtr->stop();
	if(ic){
		ic->destroy();
	}

	return 0;
}
