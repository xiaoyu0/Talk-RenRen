/**
* @file Muc.cpp
* @brief Muc main函数
* @author wang.yu@renren-inc.com
* @version 1.0
* @date 2012-05-14
*/
#include <iostream>
#include <fstream>

#include <boost/thread.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/program_options.hpp>
#include <boost/filesystem.hpp>
#include <Ice/Ice.h>
#include <log4cplus/logger.h>
#include <log4cplus/configurator.h>

#include "utils/Singleton.h"
#include "utils/WapIceChannel.h"
#include "utils/MyLogger.h"
#include "muc/MucServer.h"
#include "muc/MucServiceI.h"

using namespace std;
using namespace log4cplus;
using namespace mtalk::muc;
using namespace mtalk::utils;

namespace bpo = boost::program_options;
namespace bfs = boost::filesystem;

int main(int argc, char* argv[]){
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
		("redis_servers", bpo::value<string>(), "The redis server list split with ','");

	string logConf;
	int serverId;
	short serverPort;
	string domain;
	string zkServers;
	string redisServers;

	bpo::variables_map vm;
	string configFile = homePath.string() + "/conf/muc_config.cfg";
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
		cout << "zkServers = " << zkServers << endl;
		LOG_INFO("main ==> zkServers = " << zkServers);
	} else {
		cout << desc << endl;
		return 0;
	}
	

	ConfigureAndWatchThread configureThread(LOG4CPLUS_TEXT(logConf), 5 * 1000);
	
	MucServer& mucServer = MY_INSTANCE(MucServer);
	mucServer.init(serverId, serverPort, zkServers);

	boost::thread thread(boost::bind(&MucServer::start, &mucServer));

	WapIceChannel iceChannel;
	try{
		iceChannel.init();
		Ice::ObjectAdapterPtr adapter = iceChannel.createObjectAdapterWithEndpoints("MucAdapter", serverPort);

		Ice::ObjectPtr mucService = new MucServiceI();
		adapter->add(mucService, iceChannel.getCommunicator()->stringToIdentity("MucService"));

		adapter->activate();

		LOG_INFO("main => muc server started");
		cout << "=== Server started ===" << endl;
		iceChannel.getCommunicator()->waitForShutdown();
	} catch (const Ice::Exception& e){
		cout << e << endl;
	} catch (const char* msg){
		cout << msg << endl;
	}

	mucServer.stop();
	thread.join();
	iceChannel.destroy();
	return 0;
}


