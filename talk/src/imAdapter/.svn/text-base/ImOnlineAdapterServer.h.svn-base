/**
* @file ImOnlineAdapterServer.h
* @brief Im心跳服务主server
* @author chenxi.hou@renren-inc.com
* @version 1.0
* @date 2012-07-17
*/
#ifndef TALK_IM_ONLINE_ADAPTER_SERVER_H_
#define TALK_IM_ONLINE_ADAPTER_SERVER_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include <boost/thread.hpp>

#include "utils/MyLock.h"
#include "zk/ZKListener.h"
#include "zk/ZKManager.h"
#include    "ImAdapter.h"
#include    "Timer.h"

namespace mtalk{
namespace imAdapter{

	class ImOnlineAdapterServer{
	public :
		ImOnlineAdapterServer();

		void start();

		void stop();

		void init(int serverId, int serverPort, std::string& zkServers);

		void online(int userId,bool isLongOnline, std::string onlineIp);
		
		void offline(int userId,bool isDelLongOnline);

		void updateClusterInfo(int index, int count);


		/*
		   获取用户在线状态
		 */

		int userStat(int userId){
				return imAdapter_.userStat(userId);
		}

		std::vector<int>usersStat(std::vector<int> users){
				return imAdapter_.usersStat(users);
		}

		/*
		 * 移除池子中指定userId用户的离线请求对象
		 */
		void removeUser(const int userId){
			imAdapter_.removeUser(userId);
		}

		/*
		 * 批量移除，移除池子里所有模serverCount为mode的所有用户的离线请求对象
		 */
		void removeSpecifiedUsers(int serverCount , int mode);

		/*
		 * 批量移除，移除池子里所有模serverCount不为mode的所有用户的离线请求对象
		 */
		void retainSpecifiedUsers(int serverCount , int mode){ 
				imAdapter_.retainSpecifiedUsers(serverCount, mode); 
		}

		/*
		 *  用宕机talk服务的ip清除所有受牵连用户
		 */
		void removeUsersByIp(std::string crashedIp);

		/*
		   清空所有用户
		 */
		void clearUsers(){
				imAdapter_.clearUsers();
		}

		
		int	shortOnlineUserCount(){
				return imAdapter_.shortOnlineUserCount();
		}

		int longOnlineUserCount(){
				return imAdapter_.longOnlineUserCount();
		}

		int cushionCount(){
				return imAdapter_.cushionCount();
		}




	
		
	private :

		const static int  CHECK_TIME = 100 ;
		const static int  HEART_BEAT_TIME = 60*1000;

		ImAdapter imAdapter_;

		Timer  timer_;

		Timer  timer1_;

		int serverId_;

		int serverPort_;

		boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr_;

	};


	class ImOnlineAdapterServerZKListener : public mtalk::zk::ZKListener{
	public :
		ImOnlineAdapterServerZKListener(){}

		ImOnlineAdapterServerZKListener(const std::string& path, const int serverId, const short serverPort);
		
		virtual void zkHandle(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr, const std::string& path, const mtalk::zk::ZKEventType event);

		std::string getNodePath() const;

	private :
		virtual void updateConfig(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr);
		void registerServer(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr);

		std::string path_;
		int serverId_;
		short serverPort_;
		std::string nodePath_;
		std::string nodeName_;
		std::string nodeAddress_;
	};

	inline std::string ImOnlineAdapterServerZKListener::getNodePath() const {
		return nodePath_;
	}

}; // namespace talk
}; // namespace imoa

#endif // TALK_IM_ONLINE_ADAPTER_SERVER_H_

