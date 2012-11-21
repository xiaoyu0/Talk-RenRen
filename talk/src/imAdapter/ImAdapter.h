#ifndef IM_ADAPTER_H_
#define IM_ADAPTER_H_

#include  <boost/shared_ptr.hpp>
#include  <boost/enable_shared_from_this.hpp>
#include  <boost/noncopyable.hpp>
#include  <map>
#include  <queue>
#include  <list>
#include  <string>
#include  <boost/thread.hpp>
#include  <ctime>
#include  "IMGateForPhoneAdapter.h"

namespace mtalk{
	namespace	imAdapter{

		/*
		 * 在线类型定义，离线请求缓冲结构体的字段imState和cushion均为此类型数据
		 */
		typedef enum Type{
			OFFLINE = 0,
			ONLINE = 1,
		}onlineType;

		/*
		 * 离线请求缓冲结构体
		 *
		 * (1)其值类型存储在map中
		 * (2)其指针类型存储在离线请求缓冲队列中
		 */

		typedef struct{
			int userId;	//用户uid，非必需

			onlineType imState;  //im在线状态，值总为ONLINE(1)，非必需

			onlineType cushionState; //缓冲状态
			
			std::list<time_t>  timeQueue;  //状态最后更新时间。此时间戳队列用来记录缓冲队列中所有离线请求的时间。
			
			int offlineCount;	// 缓冲队列中同一用户的离线请求总数。

			boost::mutex   countMutex ;

			std::string onlineIp; // 调用上线接口的talk的ip地址
			
		}UserOnlineState;


		/*
		 * IM适配器的构成类型定义
		 */
		//用户状态指针，离线请求的指针类型定义
		typedef boost::shared_ptr<UserOnlineState>  UserOnlineStatePtr;

		//用户在线状态存储器，是保存所有离线请求的map
		typedef std::map<int , UserOnlineStatePtr> UserOnlineStateMap;
		//上下线缓冲队列，离线请求智能指针缓冲队列
		typedef std::list<UserOnlineStatePtr>      StatesBuffer;


		/*
		 * 在线状态IM适配器的类型定义
		 */

		class ImAdapter :
			private boost::noncopyable {
				public :
					ImAdapter ();

					/*
					 * 适配器接口
					 */

					// 上线接口
					void online(int userId, bool isLongOnline = 0, std::string onlineIp = "");
					
					// 离线接口
					void offline(int userId, bool isDelLongOnline = 0);

					/*
					 * 供定时器周期调用的IM适配器任务函数
					 */

					// 周期的检查清空离线缓冲队列内的离线请求对象
					void timeCheck(size_t queueIndex);

					// 心跳函数，周期性的调用IM对象的心跳接口
					void heartBeat();

					
					/*
					 * 取得离线请求队列的下标, 用于取得用户userId所对应的stateBuffer和stateBufferMutex
					 */
					size_t getQueueIndex(int userId){
						return (size_t) userId % OFFLINE_QUEUE_SIZE;
					}
					
					/*
					 * 取得imAdapter中队列的个数
					 */
					static size_t getQueueNum(){
						return OFFLINE_QUEUE_SIZE;
					}

					/* 
					   获取用户的在线状态
					 */
					int userStat(int userId);
					std::vector<int>usersStat(std::vector<int> users);

					/*
					 * 移除池子中指定userId用户的离线请求对象
					 */
					void removeUser(const int userId);

					/*
					 * 批量移除，移除池子里所有模serverCount为mode的所有用户的离线请求对象
					 */
					void removeSpecifiedUsers(int serverCount , int mode);
					
					/*
					 * 批量移除，移除池子里所有模serverCount不为mode的所有用户的离线请求对象
					 */
					void retainSpecifiedUsers(int serverCount , int mode);

					/*
					 *  用宕机talk服务的ip清除所有受牵连用户
					 */
					void removeUsersByIp(string crashedIp);

					/*
					   清空所有用户
					 */
					void clearUsers();

					int shortOnlineUserCount();

					int longOnlineUserCount();

					int cushionCount();




				private :
					/*
					 * 一些常量的定义
					 */

					// 离线请求的Map按uid散列的池子总数
					const static int STATE_POOL_SIZE = 100;

					// 离线请求的缓冲时间 10分钟

					const static time_t CUSHIONSTATE_TIME = 5*60; //秒


					// 一次心跳的用户数，两次心跳之间有20ms的间隔
					const static int  MAX_SEQ_SIZE = 1000;

					// 离线请求队列的个数
					const static size_t  OFFLINE_QUEUE_SIZE = 10;

					
					/*
					 * 离线请求对象map池子和map互斥量
					 */

					//对池子总数取模确定uid用户所在池子id的内部函数，用来在map数组中找到uid所属的离线请求map和对应的互斥量
					int getPoolIndex(const int userId);

					//离线请求的map数组
					UserOnlineStateMap     userOnlineStateMaps[STATE_POOL_SIZE];

					//保证map数组中map中离线请求访问一致性的互斥量数组
					boost::shared_mutex		userPoolMutex_[STATE_POOL_SIZE];

					//长在线用户map的数组
					UserOnlineStateMap     longOnlineUserStateMaps[STATE_POOL_SIZE];
					boost::shared_mutex		longOnlineUserPoolMutex_[STATE_POOL_SIZE];

					/*
					 * 离线请求缓冲队列
					 */

					//确保访问一致性的互斥量数组
					boost::shared_mutex   stateBufferMutex_[OFFLINE_QUEUE_SIZE];

					//离线请求指针的缓冲队列数组
					StatesBuffer   	stateBuffer_[OFFLINE_QUEUE_SIZE];
					
					/*
					 * 在线状态IM适配器的目标，即IM对象
					 */
				
					im::IMGateForPhoneAdapter iMGateForPhoneAdapter_;	

					//boost::mutex	mutex_;

			};

	}
}



#endif // IM_ADAPTER_H_
