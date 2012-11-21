#include    "ImAdapter.h"
#include  <iostream>
#include    "utils/TimeUtils.h"
#include    "utils/MyLogger.h"
#include    "utils/UserIdUtil.h"
#include    <boost/lexical_cast.hpp>

using namespace std;
using namespace boost;
using namespace mtalk::utils;



namespace mtalk{
    namespace imAdapter{

		/*
		 * 构造期建立和IM对象的联系
		 */

		ImAdapter::ImAdapter (){
			iMGateForPhoneAdapter_.open();
			iMGateForPhoneAdapter_.setAvailable();
		}

		/*
		 * 上线接口
		 */
		void ImAdapter::online(int userId, bool isLongOnline, std::string onlineIp){
			/*
			 * 按uid在池子中找到map，再在map中搜寻离线请求对象
			 */
			size_t poolIndex = getPoolIndex(userId);
			unique_lock<shared_mutex> lock(userPoolMutex_[poolIndex]);
			UserOnlineStateMap& subPool = userOnlineStateMaps[poolIndex];
			UserOnlineStateMap::iterator it = subPool.find(userId);

			if(it != subPool.end()){
				/*
				 * 已经存在的离线请求对象的情况
				 */
				UserOnlineStatePtr statePtr = it->second;
				//如果用户存在且im在线，此条件一直为真
				if(statePtr->imState == ONLINE){
					// 将缓冲状态置为在线
					statePtr->cushionState = ONLINE;
					// 更新登录IP
					statePtr->onlineIp = onlineIp;
					// 打印日志，特别说明more，表明是在离线请求受到缓冲的情况下进行的上线操作
					LOG_INFO("ON|M|"<<userId);
					// 离线请求缓冲的情况下上线行为不立即引发对IM对象上线接口的调用
				}else if(statePtr->imState == OFFLINE){
					//此种状态不存在
				}
			}else{
				/*
				 * map中不存在uid对应的离线请求对象时，需要新建
				 */
				// 新建离线请求对象
				UserOnlineStatePtr statePtr(new UserOnlineState);

				/*
				 * 初始化工作
				 */
				// 初始化其uid
				statePtr->userId = userId;
				// 在线状态初始化为在线
				statePtr->imState = ONLINE;
				statePtr->cushionState = ONLINE;
				// 离线请求总数初始化为0
				statePtr->offlineCount = 0;
				// 更新登录IP
				statePtr->onlineIp = onlineIp;

				/*
				 * 初始化结束
				 */
				// 离线请求对象放入池子的所属map，不进入离线缓冲队列
				subPool[userId] = statePtr;	

				/*
				 * 日志打印
				 */
				// 打印日志，输出上线用户的uid
				LOG_INFO("ON|N|"<<userId);

				/*
				 * 调用im接口通知上线，上线请求行为不进行缓冲
				 */
				//此处调用im借口上线
				iMGateForPhoneAdapter_.online(userId);
			}

		}


		/*
		 * 离线接口
		 */

		void ImAdapter::offline(int userId, bool isDelLongOnline ){
			/*
			 * 按uid在池子中找到map，再在map中搜寻离线请求对象
			 */
			LOG_INFO("OFF|B|"<<userId);
			size_t poolIndex = getPoolIndex(userId);
			shared_lock<shared_mutex> lock(userPoolMutex_[poolIndex]);
			UserOnlineStateMap& subPool = userOnlineStateMaps[poolIndex];
			UserOnlineStateMap::iterator it = subPool.find(userId);

			if(it == subPool.end()){
				// 离线请求对象不存在时，不做任何事
			}else{

				// 生成map中的离线请求对象的指针
				UserOnlineStatePtr statePtr = it->second;

				// 此条件表示 仅接受 有效的offline下线请求，非法的连续多次的下线请求仅仅接受或者说承认第一次请求,重复连续发出的离线请求会被废弃
				if(statePtr->cushionState == ONLINE){
					/*
					 * 缓冲状态改变
					 */
					// 将离线请求对象的缓冲状态置为离线
					statePtr->cushionState = OFFLINE;

					/*
					 * 离线请求缓冲队列增加一项，map中的字段相应变化
					 */
					// 在时间戳队列中压入当前时间
					statePtr->timeQueue.push_back(time(NULL));
					// 离线请求缓冲队列请求总数加一
					{
						boost::mutex::scoped_lock lock(statePtr->countMutex);
						statePtr->offlineCount++;
					}
					// 锁定离线缓冲请求队列，压入请求对象指针
					size_t queueIndex = getQueueIndex(userId);
					unique_lock<shared_mutex> lock(stateBufferMutex_[queueIndex]);
					stateBuffer_[queueIndex].push_back(statePtr);
				}else{
					//非法的重复offline请求，此情况实际不出现，这里进行容错
					statePtr->cushionState = OFFLINE;
				}
			}
		}

		/*
		 * 周期的检查清空离线缓冲队列内的离线请求对象
		 */

		void ImAdapter::timeCheck(size_t queueIndex){
			/*
			 * 清空的循环
			 */
			while(1){
				MilliTimer timer;
				if(stateBuffer_[queueIndex].empty()){
					LOG_DEBUG("EMPTY");
					MilliSleep(300);
					continue ;
				}
				/*
				 * 取缓冲队列队头
				 */
				// 取缓冲队列队头
				UserOnlineStatePtr statePtr = stateBuffer_[queueIndex].front();
				/*
				 * 健壮性设计
				 */
				// 确保队头指针引用的目标的存在
				if(!statePtr){
					continue;
				//	return ;
				}

				/*
				 * 日志打印缓冲队列当前大小
				 */
				// LOG_DEBUG("SB[" << queueIndex << "]|"<<stateBuffer_[queueIndex].size());

				/*
				 * 健壮性设计
				 */
				if(statePtr->timeQueue.empty()){
					// 离线请求对象的时间戳队列为空的情况，不易出现的数值异常情形
					LOG_ERROR("unexpected error|"<<stateBuffer_[queueIndex].size());
					//	statePtr->timeQueue.pop_front();
					stateBuffer_[queueIndex].pop_front();
					continue ;
					//return ;
				}

				/*
				 * 队头离线请求对象超时的情况，需要让队头出队
				 */
				long firstTime = statePtr->timeQueue.front();


				if(time(NULL) - firstTime > CUSHIONSTATE_TIME){

					//LOG_DEBUG("SB[" << queueIndex << "]POP|"<<stateBuffer_[queueIndex].size());
					// 弹出离线请求指针
					stateBuffer_[queueIndex].pop_front();

					// 弹出离线请求对象的最早时间戳
					statePtr->timeQueue.pop_front();

					/*
					 * 离线请求缓冲队列中离线请求指针惟一且缓冲状态为下线状态的情况下，可以调用IM对象的离线接口
					 */
					{
						int count = 0 ;
						{
							boost::mutex::scoped_lock lock(statePtr->countMutex);
							count = statePtr->offlineCount ;
						}
						if(statePtr->imState == ONLINE && statePtr->cushionState == OFFLINE && ((count - 1) < 1)){
							// 调用离线接口
							LOG_INFO("IMOFF|"<<statePtr->userId);
							iMGateForPhoneAdapter_.offline(statePtr->userId);
							removeUser(statePtr->userId);
						}else{
							// 不能删除离线请求的情况，修改受影响的字段
							LOG_INFO("OFF|--|"<<statePtr->userId);
							{
								boost::mutex::scoped_lock lock(statePtr->countMutex);
								statePtr->offlineCount--;
							}
							LOG_INFO("OFF|C|"<<statePtr->userId<<"|"<<statePtr->offlineCount);
						}
					}
				}else{ 
					/*
					 * 队头时间戳不超时，则无须继续检查队头以后的离线请求对象指针的时间戳，退出循环
					 */
					MilliSleep(150);
					continue ;
					//	break;
				}
			}

		}


		/*
		 * 心跳函数，周期性的调用IM对象的心跳接口
		 */

		void ImAdapter::heartBeat(){
			/*
			 * 日志输出当前总的离线请求数
			 */
			//	size_t queueTotalSize = 0;
			//	for(size_t i = 0; i < OFFLINE_QUEUE_SIZE; i++){
			//		queueTotalSize += stateBuffer_[i].size();
			//	}
			//	LOG_INFO("IMADAPTRE|timeCheck|stateBuffer_|" << queueTotalSize);

			int count = 0 ;
			// 传给IM对象的在线用户ID序列
			std::vector<int>  heartbeatSeq;

			// 对所有的池子采取心跳操作
			for( int i = 0; i < STATE_POOL_SIZE; i++){
				UserOnlineStateMap subPool ;
				{
					shared_lock<shared_mutex> lock(userPoolMutex_[i]);
					subPool = userOnlineStateMaps[i];
				}

				for( UserOnlineStateMap::iterator it = subPool.begin(); it != subPool.end(); it++){
					// 将池子内所有用户ID填入在线用户ID序列
					heartbeatSeq.push_back(it->first);	
					// 序列长度每达到一次心跳用户数下限(1000)就做一次心跳
					if(++count > (MAX_SEQ_SIZE - 1)){
						//调用im心跳
						iMGateForPhoneAdapter_.heartBeat(heartbeatSeq);
						//心跳后延迟20毫秒
						MilliSleep(150);
						//序列计数器清零
						count = 0 ;
						LOG_INFO("H|H1|"<<heartbeatSeq.size());
						//序列内容清空
						heartbeatSeq.clear();
					}
				}
			}

			if(heartbeatSeq.size()>0){
				LOG_INFO("H|H2|"<<heartbeatSeq.size());
				//调用im心跳
				iMGateForPhoneAdapter_.heartBeat(heartbeatSeq);
			}
		}

		int ImAdapter::userStat(int userId){
			LOG_INFO("IMADAPTER|userStat|userId");
			size_t poolIndex = getPoolIndex(userId);
			shared_lock<shared_mutex> lock(userPoolMutex_[poolIndex]);
			UserOnlineStateMap& subPool = userOnlineStateMaps[poolIndex];
			UserOnlineStateMap::iterator it = subPool.find(userId);

			if(it != subPool.end()){
				return 1;
			}
			return 0;
		}

		vector<int> ImAdapter::usersStat(vector<int> users){
			vector<int>::iterator it = users.begin();
			vector<int> stat;
			for(; it != users.end(); it++){
				stat.push_back(userStat(*it));
			}
			return stat;
		}


		/*
		 * 对池子总数取模确定uid用户所在池子id的内部函数，用来在map数组中找到uid所属的离线请求map和对应的互斥量
		 */

		int ImAdapter::getPoolIndex(const int userId){

			return (size_t)(userId % STATE_POOL_SIZE);

		}


		/*
		 * 从map中移除离线请求对象
		 */

		void ImAdapter::removeUser(const int  userId){
			/*
			 * 找到userId所属的池子
			 */
			size_t poolIndex = getPoolIndex(userId);
			unique_lock<shared_mutex> lock(userPoolMutex_[poolIndex]);
			UserOnlineStateMap& subPool = userOnlineStateMaps[poolIndex];
			UserOnlineStateMap::iterator it = subPool.find(userId);

			/*
			 * 删除离线请求对象
			 */
			if(it != subPool.end()){
				LOG_INFO("RM|"<<userId);
				subPool.erase(it);
			}
		}


		/*
		 * 删除池子里所有模serverCount为mode的所有用户的离线请求对象
		 */

		void ImAdapter::removeSpecifiedUsers(int serverCount , int mode){
			LOG_INFO( "IMADAPTER|removeSpecifiedUsers|"<<serverCount<<"|"<<mode);
			for( int i = 0; i < STATE_POOL_SIZE; i++){
				shared_lock<shared_mutex> lock(userPoolMutex_[i]);
				UserOnlineStateMap& subPool = userOnlineStateMaps[i];
				for( UserOnlineStateMap::iterator it = subPool.begin(); it != subPool.end(); ){
					if(it->second->userId % serverCount == mode){
						subPool.erase(it++);
					}else{
						it ++ ;
					}
				}
			}
		}


		void ImAdapter::retainSpecifiedUsers(int serverCount, int mode){
			LOG_INFO( "IMADAPTER|retainSpecifiedUsers|"<<serverCount<<"|"<<mode);
			for( int i = 0; i < STATE_POOL_SIZE; i++){
				shared_lock<shared_mutex> lock(userPoolMutex_[i]);
				UserOnlineStateMap& subPool = userOnlineStateMaps[i];
				for( UserOnlineStateMap::iterator it = subPool.begin(); it != subPool.end(); ){
					long  sixinId = UserIdUtil::convertRenRenId2Gid(boost::lexical_cast<string>(it->second->userId));
					if((sixinId % serverCount) != mode){
						subPool.erase(it++);
					}else{
						it ++ ;
					}
				}
			}
		}


		/*
		 * 按照宕机talk的ip清除失效的状态记录
		 */
		void ImAdapter::removeUsersByIp(string crashedIp){
			LOG_INFO( "IMADAPTER|removeUsersByIp|CRASHIP1|"<< crashedIp );

			// 逐个pool寻找IP匹配的状态记录
			for( int i = 0; i < STATE_POOL_SIZE; i++){
				shared_lock<shared_mutex> lock(userPoolMutex_[i]);
				// 开始遍历pool中的记录
				UserOnlineStateMap& subPool = userOnlineStateMaps[i];
				for( UserOnlineStateMap::iterator it = subPool.begin(); it != subPool.end(); ){
					if(it->second->onlineIp == crashedIp){
						// 清除宕机ip的用户
						LOG_INFO("IMADAPTER|removeUsersByIp|USER|" << it->second->userId << "|CRASHIP2|" << crashedIp);
						subPool.erase(it++);
					}else{
						// 无须移除
						it ++ ;
					}
				}
			}
		}

		void ImAdapter::clearUsers(){
			LOG_INFO( "IMADAPTER|clearUsers");
			for( int i = 0; i < STATE_POOL_SIZE; i++){
				shared_lock<shared_mutex> lock(userPoolMutex_[i]);
				UserOnlineStateMap& subPool = userOnlineStateMaps[i];
				subPool.clear();
			}

		}

		int ImAdapter::shortOnlineUserCount(){
			LOG_INFO( "IMADAPTER|getShortCount");
			int count = 0;
			for( int i = 0; i < STATE_POOL_SIZE; i++){
				shared_lock<shared_mutex> lock(userPoolMutex_[i]);
				UserOnlineStateMap& subPool = userOnlineStateMaps[i];
				count += subPool.size();
			}
			return count ;
		}

		int ImAdapter::longOnlineUserCount(){
			LOG_INFO( "IMADAPTER|getLongCount");
			int count = 0;
			for( int i = 0; i < STATE_POOL_SIZE; i++){
				shared_lock<shared_mutex> lock(longOnlineUserPoolMutex_[i]);
				UserOnlineStateMap& subPool = longOnlineUserStateMaps[i];
				count += subPool.size();
			}
			return count ;

		}

		int ImAdapter::cushionCount(){
			LOG_INFO( "IMADAPTER|getcushionCount");
			int count = 0;
			for(size_t i = 0; i < OFFLINE_QUEUE_SIZE; i++){
				count +=  stateBuffer_[i].size();
			}
			return  count ;
		}

    }
}


