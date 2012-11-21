#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include "EndpointServiceProxy.h"
#include "utils/MyLogger.h"
#include "Config.h"
#include    "utils/TimeUtils.h"
using namespace std;
using namespace boost::algorithm;
using namespace mtalk::utils;
using namespace mtalk::zk;

namespace mtalk{
namespace proxy{
	
	EndpointServiceProxy::EndpointServiceProxy():
		zkPath_(ZK_ENDPOINT_PATH),
		proxyCount_(0){
		wapIceChannel_.init();
		LOG_INFO("EndpointServiceProxy::EndpointServiceProxy => Created");
	}

	EndpointServiceProxy::~EndpointServiceProxy(){
	}

	bool EndpointServiceProxy::initProxy(const vector<ServerNode>& endpointNodes){
		if(endpointNodes.empty()){
			return false;
		}
		
		WriteLock lock(mutex_);

		if(!proxyMap_.empty()){
			proxyMap_.clear();
		}
		proxyCount_ = endpointNodes.size();
		if(proxyCount_ <= 0){
			return false;
		}
		string endpoints;
		for(size_t i = 0; i < endpointNodes.size(); i++){
			string endpoint = endpointNodes[i].address;
			endpoints.append(endpoint);
			endpoints.append(",");
			size_t p = endpoint.find(':');
			if(p == string::npos){
				return false;
			}
			string host = endpoint.substr(0, p);
			string port = endpoint.substr(p+1);

			ostringstream os;
			os << "EndpointService:default -h " << host << " -p " << port;

			EndpointServicePrx proxy = wapIceChannel_.stringToProxyOneway<EndpointServicePrx>(os.str());
			if(!proxy){
				return false;
			}

			proxyMap_[endpointNodes[i].index] = proxy;
			LOG_INFO("EndpointServiceProxy::initProxy => add endpoint service : index =  " <<endpointNodes[i].index );
			LOG_INFO("EndpointServiceProxy::initProxy => add endpoint service : host = " << host << " port = " << port);
		}
		LOG_INFO("EndpointServiceProxy::initProxy => success : count = " << proxyCount_ << " list = " << endpoints);
		LOG_INFO("EndpointServiceProxy::initProxy => success : mapSize = " << proxyMap_.size());
		return true;
	}

	void EndpointServiceProxy::deliverMsg(const long connectionId, const string& msg, long mid, int msgType){
		MilliTimer tStart;
		ReadLock lock(mutex_);
		EndpointServicePrx proxy = getProxy(connectionId);

		if(!proxy){
			LOG_ERROR("EndpointServiceProxy::deliverMsg => get proxy failure : cid = " << connectionId);
			return;
		}

		try{
			proxy->deliverMsg(connectionId, msg);
		}catch(std::exception& e){
			std::cout<<"EndpointServicePrx deliverMsg catch exception ="<<e.what()<<std::endl;
		}catch(...){
			std::cout<<"EndpointServicePrx deliverMsg unknow exception"<<std::endl;
		}
		LOG_TIME("EndpointServicePrx::deliverMsg|" << tStart.elapsed() );
		return;
	}

	EndpointServicePrx EndpointServiceProxy::getProxy(const long connectionId){
		int serverId = connectionId & 0xFF;

		map<int, EndpointServicePrx>::iterator it = proxyMap_.find(serverId);
		LOG_DEBUG("EndpointServiceProxy::getProxy => serverId = " << serverId<<" size= " <<proxyMap_.size());

		if(it != proxyMap_.end()){
			return it->second;
		} else {
			return NULL;
		}
	}

	void EndpointServiceProxy::pause(){
		for(map<int, EndpointServicePrx>::iterator it = proxyMap_.begin(); it != proxyMap_.end(); it++){
			LOG_INFO("EndpointServiceProxy::resume => send pause to server " << it->first);
			it->second->pause();
		}
		LOG_INFO("EndpointServiceProxy::pause => success");
	}

	void EndpointServiceProxy::resume(){
		for(map<int, EndpointServicePrx>::iterator it = proxyMap_.begin(); it != proxyMap_.end(); it++){
			LOG_INFO("EndpointServiceProxy::resume => send resume to server " << it->first);
			it->second->resume();
		}
		LOG_INFO("EndpointServiceProxy::resume => success");
	}

	void EndpointServiceProxy::updateConfig(boost::shared_ptr<ZKManager> zkManagerPtr){
		vector<string> serverNameList;
		vector<ServerNode> serverList;

		if(!zkManagerPtr->getChildren(zkPath_, serverNameList)){
			LOG_ERROR("EndpointServiceProxy::updateConfig => get serverName failure : path = " << zkPath_);
			initProxy(serverList);
			return;
		}

		std::vector<int> indexList;
		std::map<int, std::string> serverMap;
		
		for(size_t i = 0; i < serverNameList.size(); ++i){
			size_t p = serverNameList[i].find('-');
			
			if(p == string::npos){
				LOG_ERROR("EndpointServiceProxy::updateConfig => serverName format error : name = [" 
					<< serverNameList[i] << "]");
				continue;
			}

			int index = 0;
			try{
				index = boost::lexical_cast<int>(serverNameList[i].substr(p + 1));
			} catch (boost::bad_lexical_cast &){
				LOG_ERROR("EndpointServiceProxy::updateConfig => convert server index failure : index = [" 
					<< serverNameList[i].substr(p + 1) << "]");
				continue;
			}

			std::string childPath(zkPath_);
			childPath.append("/");
			childPath.append(serverNameList[i]);

			std::string server;
			if(zkManagerPtr->get(childPath, server)){
				indexList.push_back(index);
				serverMap[index] = server;
			} else {
				LOG_ERROR("EndpointServiceProxy::updateConfig => get server node failure : path = " << childPath);
			}
		}

		sort(indexList.begin(), indexList.end());

		for(size_t i = 0; i < indexList.size(); ++i){
			ServerNode node;
			node.index = indexList[i];
			node.address = serverMap[node.index];
			serverList.push_back(node);
		}

		initProxy(serverList);
	}

	string EndpointServiceProxy::getZKPath() const{
		return zkPath_;
	}
};
};
