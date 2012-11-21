/**
* @file OnlineStatManager.h
* @brief 管理用户的在线状态
* @author wang.yu@renren-inc.com
* @version 
* @date 2012-02-20
*/
#ifndef TALK_ONLINE_STATUS_MANAGER_H_
#define TALK_ONLINE_STATUS_MANAGER_H_

#include <map>
#include <vector>
#include <string>
#include <boost/enable_shared_from_this.hpp>

#include <Ice/Ice.h>

#include "constant/UserOnlineType.h"
#include "utils/MyLock.h"
#include "utils/MyLogger.h"
#include "proxy/RedisProxy.h"
#include "imAdapter/IMGateForPhoneAdapter.h"

namespace mtalk{
namespace talk{

	const size_t POOL_NUM = 100;
	typedef int OnlineStat;
	
	class OnlineStatManager : public boost::enable_shared_from_this<OnlineStatManager>{
	public :
		typedef enum {
			LOG_OUT,
			NORMAL
		}OnlineStatAction;
	private :
		/**
		* @brief 内部存储user onlineType的struct
		*/
		struct Status{
			OnlineStat stat;
			bool haslongOnline;
			int longOnlineStat;  //长在线type的 |
			unsigned int numlongStat;//user长在线类型个数	
			int statNum; //在线类型个数

			Status () : haslongOnline(false), longOnlineStat(0), numlongStat(0), statNum(0){}
			Status (int st, bool islong) : stat(st), haslongOnline(islong), statNum(1) {
				if(haslongOnline){
					numlongStat = 1;
				}else{
					numlongStat = 0;
				}
			}
		};
		
		typedef std::map<long, Status> SubPool;

	public :

		/**
		* @brief start  开启在线状态服务, 在UserManager::start 中调用
		*/
		void start ();

		/**
		* @brief addStat 添加用户在线状态
		*
		* @param userId
		* @param type 在线类型
		*/
		void addStat (const long userId, mtalk::constant::OnlineType::Type type, bool islongOnline = false);

		/**
		* @brief delStat 删除用户在线状态, sessionList清空时调用
		*
		* @param userId
		*/
		void delStat (const long userId);

		/**
		* @brief delStat 重载的删除用户状态, 在UserManager中,用户断开Session,但sessionList还未清空时调用
		*
		* @param userId
		* @param type
		*/
		void delStat (const long userId, mtalk::constant::OnlineType::Type type);
		
		/**
		* @brief getUsersOnlineStat 对TalkServer提供的接口, 查询一系列user的在线类型
		*
		* @param users
		*
		* @return 
		*/
		std::vector<OnlineStat> getUsersOnlineStat(const std::vector<long>& users) ;

		/**
		* @brief getUserOnlineStat 对TalkServer提供的接口, 查询单个user的在线类型
		*
		* @param userId
		*
		* @return 
		*/
		OnlineStat getUserOnlineStat (const long userId, bool forIM = false) ;
		
		/**
		* @brief pause 用于remoteStop中调用, 清掉所有短在线的
		*/
		void pause ();
		
		/**
		* @brief resume remoteStart中调用, 恢复长在线的 在线
		*/
		void resume();

		/**
		* @brief setIMGateForPhoneAdapter 在Talk.cpp中调用
		*
		* @param imGateForPhoneAdapterPtr
		*/
		void setIMGateForPhoneAdapter (boost::shared_ptr<mtalk::im::IMGateForPhoneAdapter> imGateForPhoneAdapterPtr);
		
		/**
		* @brief 用于SyncTaskTimer调用,一段时间同步一次DB和 内存 Status中的长在线 信息
		*/
		void sync ();

		/**
		* @brief hasLongOnline  判断当前用户有没有 type类型的长在线, 在UserManager::bind中调用时, 保证了在一次长在线的过程中, 用户只会在IM那上线一次
		*
		* @param userId
		*
		* @return 
		*/
		bool hasLongOnline(long userId, mtalk::constant::OnlineType::Type type);

		
		/**
		* @brief hasLongOnline	判断用户有没有长在线, 在talk直接调IOS push用到了, 在 IOSpush feed的时候用到了			 							 
		*
		* @param userId
		*
		* @return 
		*/
		bool hasLongOnline(long userId);

		/**
		* @brief setServerId 在Talk.cpp中调用，保存本机id,用于存redis使用
		*
		* @param serverId
		*/
		void setServerId(int serverId);

		/**
		* @brief userStatNum 取一个user的在线类型个数
		*
		* @param userId
		* @param action 一个枚举量用来控制，例如若在logout接口中调用，则在线类型个数要减一
		*
		* @return 
		*/
		int userStatNum(long userId, OnlineStatAction action = OnlineStatManager::NORMAL);

	private :
		/**
		* @brief getPoolIndex 内部函数, 根据userId获取其所在的 subPool index
		*
		* @param userId
		*
		* @return 
		*/
		inline size_t getPoolIndex (long userId) const{
			return (userId % POOL_NUM);	
		}
	
		/**
		* @brief type2String 内部函数, 在线状态enum转换为string用于 DB中存储
		*
		* @param type
		*
		* @return 
		*/
		std::string type2String (mtalk::constant::OnlineType::Type type);

		/**
		* @brief string2Type 从DB中读取后转换回enum type
		*
		* @param std::string
		*
		* @return 
		*/
		mtalk::constant::OnlineType::Type  string2Type (std::string);

		bool loadFromRedis();

		OnlineStat getStat (const long userId, bool forIM = false) ;

		static const int TIME_EXCEED = 60 * 60 * 24 * 2;  //seconds

		static const int SYNC_WAIT_TIME = 60 * 60 * 2; //seconds 

		mutable SubPool pools_[POOL_NUM];
	
		mutable boost::shared_mutex mus_[POOL_NUM];

		boost::shared_ptr<mtalk::proxy::RedisProxy> redisProxyPtr_;
		
		boost::shared_ptr<mtalk::im::IMGateForPhoneAdapter> imGateForPhoneAdapterPtr_;

		int serverId_;

		std::string serverkey_;

		IceUtil::Timer timer_;
		IceUtil::TimerTaskPtr timerTaskPtr_;	
	};


	typedef boost::shared_ptr<OnlineStatManager> OnlineStatManagerPtr;

	/**
	* @brief 用ICE util库实现的timer类, 固定时间调用OnlineStatManager::sync 
	*/
	class SyncTimerTask : public IceUtil::TimerTask{
	public :
		SyncTimerTask (OnlineStatManagerPtr ptr) :
			onlineStatManagerPtr_(ptr)	{
		}

		void runTimerTask ();
	
	private :
		OnlineStatManagerPtr onlineStatManagerPtr_;			
	};

};  //namespace talk
};  //namespace mtalk

#endif //TALK_ONLINE_STATUS_MANAGER_H_
