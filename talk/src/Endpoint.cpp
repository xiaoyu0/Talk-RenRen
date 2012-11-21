#include <sstream>
#include <fstream>
#include <iostream>
#include <boost/bind.hpp>
#include <boost/thread.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/program_options.hpp>
#include <boost/filesystem.hpp>
#include <Ice/Ice.h>
#include <log4cplus/logger.h>
#include <log4cplus/configurator.h>
#include "endpoint/EndpointServer.h"
#include "endpoint/EndpointServiceI.h"
#include "endpoint/HttpRequestHandler.h"
#include "endpoint/BoshRequestHandler.h"
#include "endpoint/SendRequestHandler.h"
#include "endpoint/VersionRequestHandler.h"

using namespace std;
using namespace log4cplus;
using namespace mtalk::utils;
using namespace mtalk::endpoint;

namespace bpo = boost::program_options;
namespace bfs = boost::filesystem;

int serverId;
short servicePort;
zhandle_t* zh;
string zkServers;

int main(int argc, char* argv[]){
	const bfs::path binPath(argv[0]);
	const bfs::path& homePath = system_complete(binPath).parent_path().parent_path();

	bpo::options_description desc("talk allowed options");
	desc.add_options()
		("help", "help message")
		("log_conf", bpo::value<string>(), "log4cplus configure file")
		("server_id", bpo::value<int>(), "The server id")
		("server_port", bpo::value<short>(), "The server port")
		("service_port", bpo::value<short>(), "The endpoint ice service port")
		("domain", bpo::value<string>(), "The server endpoint domain")
		("zk_servers", bpo::value<string>(), "The zookeeper servers list split with ','");
	string logConf;
	short serverPort;
	string domain;
    string schemaFile;

	bpo::variables_map vm;
//	bpo::store(bpo::parse_command_line(argc, argv, desc), vm);
	string configFile = homePath.string() + "/conf/endpoint_config.cfg";
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

	//create endpoint server
	EndpointServer& endpointServer = MY_INSTANCE(EndpointServer);

	//endpoint server init
	endpointServer.init(serverId, serverPort, servicePort, domain, zkServers);
	
	//create bosh request handler
	boost::shared_ptr<BoshRequestHandler> boshRequestHandlerPtr(
		new BoshRequestHandler());
	endpointServer.addRequestHandler("/talk",
		boost::shared_dynamic_cast<HttpRequestHandler>(boshRequestHandlerPtr));

	//create send request handler
	boost::shared_ptr<SendRequestHandler> sendRequestHandlerPtr(
		new SendRequestHandler());
	endpointServer.addRequestHandler("/send",
		boost::shared_dynamic_cast<HttpRequestHandler>(sendRequestHandlerPtr));

	//create version request handler
	boost::shared_ptr<VersionRequestHandler> versionRequestHandlerPtr(
		new VersionRequestHandler());
	endpointServer.addRequestHandler("/version",
		boost::shared_dynamic_cast<HttpRequestHandler>(versionRequestHandlerPtr));

	boost::thread thread(boost::bind(&EndpointServer::start, &endpointServer));

	WapIceChannel iceChannel;

	try{
		iceChannel.init();
		Ice::ObjectAdapterPtr adapter = iceChannel.createObjectAdapterWithEndpoints("TalkAdapter", servicePort);

		Ice::ObjectPtr object = new EndpointServiceI();
		adapter->add(object, iceChannel.getCommunicator()->stringToIdentity("EndpointService"));
		adapter->activate();

		LOG_INFO("main => endpoint server started");
		cout << "==== Server Started ====" << endl;
		iceChannel.getCommunicator()->waitForShutdown();
	} catch (const Ice::Exception& e) {
		cout << e << endl;
	} catch (const char* msg){
		cout << msg << endl;
	}

	endpointServer.stop();
	thread.join();
	iceChannel.destroy();
	return 0;
}
