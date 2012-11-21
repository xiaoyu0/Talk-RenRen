#include <utility>
#include <vector>
#include <iostream>
#include <boost/lexical_cast.hpp>
#include <boost/shared_ptr.hpp>

#include "ImOnlineAdapterServer.h"
#include "ImAdapterTalkZKListener.h"

#include "proxy/ProxyRegister.h"
#include "proxy/BindServiceProxy.h"

#include "utils/Singleton.h"
#include "utils/MyLogger.h"
#include "utils/IpAddr.hpp"
#include "Config.h"

using namespace std;
using namespace mtalk::proxy;
using namespace mtalk::utils;
using namespace mtalk::zk;
using namespace mtalk::imAdapter;


namespace mtalk{
namespace imAdapter{

	ImOnlineAdapterServer::ImOnlineAdapterServer():
		timer_(1),
		timer1_(1),
		zkManagerPtr_(new ZKManager()){

	}

	void ImOnlineAdapterServer::start(){
		// 心跳任务加入timer1定时器
		timer1_.addScheduleRepeatedTask(boost::bind(&ImAdapter::heartBeat, &imAdapter_), HEART_BEAT_TIME)  ;
		LOG_INFO("ImOnlineAdapterServer::start  ==> started");

		/*
		 * 启动队列数 个线程，每线程处理各自的队列请求
		 */
		vector<boost::shared_ptr<boost::thread> > threads;
		for(size_t i = 0; i < imAdapter_.getQueueNum(); i++){
			threads.push_back(boost::shared_ptr<boost::thread>(new boost::thread(boost::bind(&ImAdapter::timeCheck, &imAdapter_, i))));
		}
		// 在线程t1中启动timer1心跳定时器，周期性的向IM以心跳的方式传送在线用户列表
		boost::thread t1(boost::bind(&Timer::start,&timer1_));

		
		//  等待队列线程完成
		for(size_t i = 0; i < imAdapter_.getQueueNum(); i++){
			threads[i]->join();
		}
		// 等待心跳定时器线程t1完成
		t1.join();

		LOG_INFO("ImOnlineAdapterServer::start  ==> started");
	}

	void ImOnlineAdapterServer::stop(){
		LOG_INFO("ImOnlineAdapterServer::stop ==> stoped");
	}

	void ImOnlineAdapterServer::init(int serverId, int serverPort, string& zkServers){

		serverId_ = serverId;
		serverPort_ = serverPort;
		
		zkManagerPtr_->init(zkServers);
		
		//// 建立节点并进行监听父节点和自己这个子节点的变化
		boost::shared_ptr<ImOnlineAdapterServerZKListener> imOnlineAdapterServerZKListener(new ImOnlineAdapterServerZKListener(ZK_IM_ONLINE_ADAPTER_PATH, serverId_, serverPort_));
	
		zkManagerPtr_->addListener(ZK_IM_ONLINE_ADAPTER_PATH, imOnlineAdapterServerZKListener);
		zkManagerPtr_->addListener(imOnlineAdapterServerZKListener->getNodePath(), imOnlineAdapterServerZKListener);

		/********** Init accountServiceProxy **********/
		LOG_INFO("TalkServer::init => init accountBindServiceProxy");
		boost::shared_ptr<BindServiceProxy>
				accountBindServiceProxyPtr(new BindServiceProxy());
		MY_INSTANCE(ProxyRegister).registerProxy("accountBindServiceProxy", accountBindServiceProxyPtr);
		zkManagerPtr_->addListener(accountBindServiceProxyPtr->getZKPath(), accountBindServiceProxyPtr);


		// 监听 Talk服务zookeeper路径的变化
		boost::shared_ptr<ImAdapterTalkZKListener> imAdapterTalkZKListener(new ImAdapterTalkZKListener(ZK_BOSH_PATH));
		zkManagerPtr_->addListener(ZK_BOSH_PATH,imAdapterTalkZKListener);

	}
	
	void ImOnlineAdapterServer::online(int userId,bool isLongOnline,string onlineIp){
		imAdapter_.online(userId,isLongOnline,onlineIp);
	}	

	void ImOnlineAdapterServer::offline(int userId,bool isDelLongOnline){
		imAdapter_.offline(userId,isDelLongOnline);
	}

	void ImOnlineAdapterServer::updateClusterInfo(int index, int count){
		LOG_INFO("ImOnlineAdapterServer::updateClusterInfo");
	}

	void ImOnlineAdapterServer::removeSpecifiedUsers(int count, int standing){
		imAdapter_.removeSpecifiedUsers(count,standing);
	}

	void ImOnlineAdapterServer::removeUsersByIp(std::string crashedIp){
		imAdapter_.removeUsersByIp(crashedIp);
	}

	ImOnlineAdapterServerZKListener::ImOnlineAdapterServerZKListener(const string& path, const int serverId, const short serverPort):
	path_(path),
	serverId_(serverId),
	serverPort_(serverPort){
			nodeName_ = "server-" + boost::lexical_cast<string>(serverId_);
			nodePath_ = path_ + "/" + nodeName_;
			string ipAddr = MyUtil::IpAddr::inner();
			nodeAddress_ = ipAddr + ':' + boost::lexical_cast<string>(serverPort_);
	}
	

	void ImOnlineAdapterServerZKListener::zkHandle(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr, const std::string& path, const mtalk::zk::ZKEventType event){
		switch(event){
				case ZK_CHILD_CHANGED :
					LOG_INFO("ImOnlineAdapterServerZKListener::zkHanlde => path [" << path << "] children changed, start update");
					if(path == path_){
						updateConfig(zkManagerPtr);
					}
					LOG_INFO("ImOnlineAdapterServerZKListener::zkHanlde => path [" << path << "] listener update finish");
					break;
				case ZK_SESSION_EXPIRED :
					LOG_INFO("ImOnlineAdapterServerZKListener::zkHanlde => path [" << path << "] session expired, start update");
					registerServer(zkManagerPtr);
					updateConfig(zkManagerPtr);
					LOG_INFO("ImOnlineAdapterServerZKListener::zkHanlde => path [" << path << "] listener update finish");
					break;
				case ZK_LISTENER_INIT :
					LOG_INFO("ImOnlineAdapterServerZKListener::zkHanlde => path [" << path << "] listener init, start update");
					if(path == path_){
						registerServer(zkManagerPtr);
						updateConfig(zkManagerPtr);
					}
					LOG_INFO("ImOnlineAdapterServerZKListener::zkHanlde => path [" << path << "] listener update finish");
					break;
			};
	}


	void ImOnlineAdapterServerZKListener::updateConfig(boost::shared_ptr<ZKManager> zkManagerPtr){
		vector<string> serverList;
		zkManagerPtr->getChildren(path_, serverList);

		vector<int> serverIds;
		for (size_t i=0; i < serverList.size(); i++){
			string serverName(serverList[i]);
			size_t pos = serverName.find('-');
			if (pos == string::npos){
				continue;
			}
			int serverId = boost::lexical_cast<int>(serverName.substr(pos+1));
			serverIds.push_back(serverId);
		}

		sort(serverIds.begin(), serverIds.end());
		int index = 0;
		int count = serverIds.size();

		for(size_t i= 0; i < serverIds.size(); i++){
			if(serverId_ == serverIds[i]){
				index = i; 
				break;
			}    
		}    

		LOG_INFO("TalkServerZKListener::updateConfig => cluster info : index = " << index << " count = " << count);
		MY_INSTANCE(ImOnlineAdapterServer).updateClusterInfo(index, count);
	}

	void ImOnlineAdapterServerZKListener::registerServer(boost::shared_ptr<ZKManager> zkManagerPtr){
		LOG_INFO("ImOnlineAdapterServerZKListener::registeServer ==> register this ImOnlineAdapterServer node");
		zkManagerPtr->createNode(path_, nodeName_, nodeAddress_);
	}

};
};
