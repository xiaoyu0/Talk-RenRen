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
#include "endpoint2/EndpointServer2.h"
#include "endpoint2/EndpointServiceI.h"
#include "proxy/SocketServiceProxy.h"

using namespace std;
using namespace log4cplus;
using namespace mtalk::utils;
using namespace mtalk::proxy;
using namespace mtalk::endpoint2;
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
        ("server_ssl_port", bpo::value<short>(), "The server ssl port")
        ("ssl_crt_file", bpo::value<string>(), "ssl crt file ','")
        ("ssl_key_file", bpo::value<string>(), "ssl key file ','")
        ("ssl_dh_file", bpo::value<string>(), "ssl dh file ','")
		("service_port", bpo::value<short>(), "The endpoint ice service port")
		("domain", bpo::value<string>(), "The server endpoint domain")
		("zk_servers", bpo::value<string>(), "The zookeeper servers list split with ','");

	string logConf;
	short serverPort;
    short serverSslPort;
	string SslCertFile;
    string SslKeyFile;
    string SslDhFile;
	string domain;
    string schemaFile;
	
	bpo::variables_map vm;
//	bpo::store(bpo::parse_command_line(argc, argv, desc), vm);
	string configFile = homePath.string() + "/conf/endpoint4Socket_config.cfg";
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
	if(vm.count("server_ssl_port")){
		serverSslPort = vm["server_ssl_port"].as<short>();
	} else {
		cout << desc << endl;
		return 0;
	}
	if(vm.count("ssl_crt_file")){
		SslCertFile  = vm["ssl_crt_file"].as<string>();
	} else {
		cout << desc << endl;
		return 0;
	}
	if(vm.count("ssl_key_file")){
		SslKeyFile = vm["ssl_key_file"].as<string>();
	} else {
		cout << desc << endl;
		return 0;
	}
	if(vm.count("ssl_dh_file")){
	    SslDhFile = vm["ssl_dh_file"].as<string>();
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
	EndpointServer2& endpointServer = MY_INSTANCE(EndpointServer2);


	//endpoint server init
	endpointServer.init(serverId, serverPort,serverSslPort , SslCertFile, SslKeyFile, SslDhFile ,servicePort, domain, zkServers);


	//create XMPPstream   handler
    boost::shared_ptr<StreamHandler> streamHandlerPtr(new StreamHandler());
	endpointServer.setStreamHandler(streamHandlerPtr);
	boost::thread thread(boost::bind(&EndpointServer2::start, &endpointServer));

	Ice::CommunicatorPtr ic;

	try{
		ic = Ice::initialize();
		ostringstream os;
		os << "default -p " << servicePort;
		Ice::ObjectAdapterPtr adapter = ic->createObjectAdapterWithEndpoints("TalkAdapter", os.str());

		Ice::ObjectPtr object = new EndpointServiceI();
		adapter->add(object, ic->stringToIdentity("EndpointService"));
		adapter->activate();

		LOG_INFO("main => endpoint server started");
		cout << "==== Server Started ====" << endl;
		ic->waitForShutdown();
	} catch (const Ice::Exception& e) {
		cout << e << endl;
	} catch (const char* msg){
		cout << msg << endl;
	}

	endpointServer.stop();
	thread.join();
	if(ic){
		ic->destroy();
	}
	return 0;
}
