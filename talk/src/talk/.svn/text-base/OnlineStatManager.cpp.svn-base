#include <boost/lexical_cast.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/thread.hpp>
#include <set>

#include "OnlineStatManager.h"
#include "proxy/ProxyRegister.h"
#include "proxy/ImOnlineAdapterServiceProxy.h"

using namespace std;
using namespace mtalk::constant;
using namespace mtalk::utils;
using namespace mtalk::proxy;
using namespace boost;

namespace mtalk{
namespace talk{

void OnlineStatManager::setIMGateForPhoneAdapter (boost::shared_ptr<mtalk::im::IMGateForPhoneAdapter> ptr){
	imGateForPhoneAdapterPtr_ = ptr;
}

void OnlineStatManager::start(){
	LOG_INFO("OnlineStatManager::start ==> started")
	redisProxyPtr_ = MY_INSTANCE(ProxyRegister).getProxy<RedisProxy>("redisProxy");

	if (!timerTaskPtr_){
		timerTaskPtr_ = new SyncTimerTask(shared_from_this());	
	}
	timer_.scheduleRepeated(timerTaskPtr_, IceUtil::Time::seconds(SYNC_WAIT_TIME));
	
	//单开个线程来恢复数据,这个过程要大概20秒
	boost::thread thread1(&OnlineStatManager::loadFromRedis, this);
	/*if (!loadFromRedis()){
		LOG_ERROR("OnlineStatManager::start ==> loadFromRedis error");
	}*/
}

vector<OnlineStat> OnlineStatManager::getUsersOnlineStat(const vector<long>& users){
	LOG_DEBUG("OnlineStatManager::getUsersOnlineStat ==> size :" << users.size());
	vector<OnlineStat> stats;

	vector<long>::const_iterator it = users.begin();

	for( ; it != users.end() ; it++){
		stats.push_back(getStat(*it, true));
	}
	LOG_DEBUG("OnlineStatManager::getUsersOnlineStat ==> result size  stats.size() = " << stats.size());
	return stats;
}

OnlineStat OnlineStatManager::getUserOnlineStat (const long userId, bool forIM) {
	LOG_DEBUG("OnlineStatManager::getUserOnlineStat ==> userId :" << userId);
	return getStat(userId, forIM);	
}
	
void OnlineStatManager::addStat(const long userId, OnlineType::Type type, bool islongOnline){
	LOG_DEBUG("OnlineStatManager::addStat ==> userId :" << userId << "  OnlineType : " << type);
	int index = getPoolIndex(userId);
	
	string idStr = lexical_cast<string>(userId);
	string typeStr = type2String(type);
	
	// 为程序意外重启作的准备
	bool userinDB = false;
	shared_ptr<string> pstr = redisProxyPtr_->get(idStr);
	if (pstr.get()){
		userinDB = true;	
	}

	WriteLock writeLock(mus_[index]);
	SubPool& subPool = pools_[index];

	map<long, Status>::iterator it = subPool.find(userId);
	if (it == subPool.end()){
		Status status;
		int st = static_cast<int>(type);
		status.stat = st;
		status.haslongOnline = islongOnline;
		status.statNum++;

		if (islongOnline){
			status.longOnlineStat = st; //加到长在线里
			LOG_DEBUG("onlineStatManager::addStat ==> status.longOnlineStat = " << status.longOnlineStat);
			status.numlongStat = 1;
			
			//每个长在线有一行userId的总记录和单独一条记录
			redisProxyPtr_->setex(idStr, typeStr, TIME_EXCEED);
			redisProxyPtr_->setex(idStr+typeStr, typeStr, TIME_EXCEED);
			// add to set
			redisProxyPtr_->addMemberSet(serverkey_, idStr);
			
			LOG_DEBUG("OnlineStatManager::addStat(new user) ==> add to RedisClient  userId = " << userId << " type = " << type << "  islongOnline = " << islongOnline);
		}
		
		subPool.insert(pair<long, Status>(userId, status));
	}
	else{
		Status& status = it->second;
		//往已有的user添加type
		if (islongOnline){
			//add to DB,还要分DB中是否有这一个userId了
			status.haslongOnline = true;
			bool typeinDB = (type & status.longOnlineStat);
			LOG_DEBUG("OnlineStatManager::addStat ==> typeinDB = " << typeinDB << " status.longOnlineStat = " << status.longOnlineStat);
			if (!typeinDB){ 
				status.longOnlineStat |= type;
				(status.numlongStat)++;
			
				shared_ptr<string> sp = redisProxyPtr_->get(idStr);
				if (!sp.get()){
					redisProxyPtr_->setex(idStr, typeStr, TIME_EXCEED);
					redisProxyPtr_->setex(idStr+typeStr, typeStr, TIME_EXCEED);

				} else{
					string sumTypeStr = (sp->append(",")).append(typeStr);
					redisProxyPtr_->setex(idStr, sumTypeStr, TIME_EXCEED);
					redisProxyPtr_->setex(idStr+typeStr, typeStr, TIME_EXCEED);
				}

			LOG_DEBUG("OnlineStatManager::addStat(exist user) ==> add to RedisClient  userId = " << userId << " type = " << type << "   islongOnline = " << islongOnline);
			} else {
				shared_ptr<string> sp = redisProxyPtr_->get(idStr);
				if (!sp.get()){
					redisProxyPtr_->setex(idStr, typeStr, TIME_EXCEED);	
					redisProxyPtr_->setex(idStr+typeStr, typeStr, TIME_EXCEED);
				} else{
					LOG_DEBUG("OnlineStatManager::addStat ==> *sp =" << sp->c_str());
					redisProxyPtr_->setex(idStr, *sp, TIME_EXCEED);	
					redisProxyPtr_->setex(idStr+typeStr, typeStr, TIME_EXCEED);
				}					
			}
			
		} else {
			//不是长在线且它存在,而之前的这个type是长在线, 这个时候要把这个长在线清掉
			if (type & status.longOnlineStat){
				LOG_DEBUG("OnlineStatManager::addStat ==> type之前是长在线, 现在要取消  type = " << type << " userId = " << userId);
				//int result = type ^ (status.longOnlineStat);
				status.numlongStat--;	
				status.longOnlineStat &= (~type);
				if (!status.longOnlineStat){
					LOG_DEBUG("  `---OnlineStatManager::addStat ==>  取消的type是userId唯一长在线的, 从DB中删除条目  type = " << type);
					//只有type一种长在线
					status.haslongOnline = false;
					
					redisProxyPtr_->del(idStr);
					redisProxyPtr_->del(idStr+typeStr);
					// del from set
					redisProxyPtr_->delMemberSet(serverkey_, idStr);

				} else {
					shared_ptr<string> sp = redisProxyPtr_->get(idStr);
					if (sp.get()){
						int pos = sp->find(typeStr);
						LOG_DEBUG("OnlineStatManager::addStat ==> before sp->erase  pos = " << pos << " *sp = " << sp->c_str());
						if (pos != 0){
							sp->erase((pos-1), typeStr.size()+1);
						}else{
							sp->erase(pos, typeStr.size()+1);
							LOG_DEBUG("OnlineStatManager::addStat ==> after sp->erase  pos = " << pos);
						}
						redisProxyPtr_->setex(idStr, *sp, TIME_EXCEED);
						redisProxyPtr_->del(idStr+typeStr);
						LOG_DEBUG("  `---OnlineStatManager::addStat ==>  取消的type不是userId唯一长在线的, 从DB中删除对应的状态 type = " << type << " typeStr = " << typeStr);
					} else {
						//DB中没取到,说明超时了被DB清掉了 , 这段代码后面可能会用不上,在实现一个user多个长在线状态的分别控制	
						status.haslongOnline = false;	
						status.longOnlineStat = 0;
						status.numlongStat = 0;	
					}
			
				}
			}
		
		}
			status.stat |= type;
	}

}

void OnlineStatManager::delStat(const long userId){
	LOG_DEBUG("OnlineStatManager::delStat (user delete) ==> userId : " << userId);
	int index = getPoolIndex(userId);
	SubPool& subPool = pools_[index];

	WriteLock write(mus_[index]);
	map<long, Status>::iterator it = subPool.find(userId);
	if (it != subPool.end()){
			subPool.erase(it);
	}
	else{
	
	}

	// del from set
	string idStr = boost::lexical_cast<string>(userId);
	redisProxyPtr_->delMemberSet(serverkey_, idStr);
}

void OnlineStatManager::delStat(const long userId, OnlineType::Type type){
	LOG_DEBUG("OnlineStatManager::delStat (user's one onlineType delete) ==> userId :" << userId << "  delType = " << type);

	int index = getPoolIndex(userId);
	SubPool& subPool = pools_[index];

	WriteLock write(mus_[index]);
	map<long, Status>::iterator it = subPool.find(userId);
	if (it != subPool.end()){
		(it->second).stat = ((it->second)).stat & (~type);
		return ;
	}
	else{
	}
}

void OnlineStatManager::pause (){
	for(size_t i=0; i<POOL_NUM; i++){
		WriteLock writeLock(mus_[i]);
		SubPool& pool = pools_[i];
		map<long, Status>::iterator it = pool.begin();
		for ( ;it != pool.end(); it++){
			Status& st = it->second;
			//清掉所有在线的状态
			st.stat = 0;  
			st.longOnlineStat = 0;
			//st.stat = st.stat & st.longOnlineStat; //清掉短在线的
			st.haslongOnline = false; //并且把这个设为false,让长在线的连接有机会向调 im->online
		}
	}
}

void OnlineStatManager::resume (){
	for(size_t i=0; i<POOL_NUM; i++){
		ReadLock readLock(mus_[i]);	
		SubPool& pool = pools_[i];
		map<long, Status>::iterator it = pool.begin();
		for ( ;it != pool.end(); it++){
			Status& status = it->second;
			if (status.longOnlineStat != 0){
				//这里不check DB
				//imGateForPhoneAdapterPtr_->online(it->first);
				//imAdapter online
				MY_INSTANCE(ProxyRegister).getProxy<ImOnlineAdapterServiceProxy>("imAdapterServiceProxy")->online(it->first,false);
			}
		}
	}

}


OnlineStat OnlineStatManager::getStat(long userId, bool forIM) {
	int poolIndex = getPoolIndex(userId);
	
	ReadLock read(mus_[poolIndex]);
	SubPool& subPool = pools_[poolIndex];

	map<long, Status>::iterator it = subPool.find(userId);
	
	if (it != subPool.end()){
		Status& status = it->second;
		
		if (forIM){
			return status.stat;	
		}
	
		if (status.haslongOnline){
			// 查DB中是否有userId
			string idStr = lexical_cast<string>(userId);
			shared_ptr<string> sp = redisProxyPtr_->get(idStr);
			if (!sp.get()){
				//DB中没有, 在 it->second 中的stat除掉longOnlineStat
				status.haslongOnline = false;
				LOG_DEBUG("OnlineStatManager ==> getStat  subPool[userId].haslongOnlne = " << subPool[userId].haslongOnline);
				int st = (status.stat &= (~status.longOnlineStat));
				status.numlongStat = 0;
				status.longOnlineStat = 0;
				//del from set
				redisProxyPtr_->delMemberSet(serverkey_, idStr);

				// 若删了长在线的后,stat为0了,通知im userId下线	
				if (status.stat == 0){
					LOG_DEBUG("OnlineStatManager::getStat ==> call im getoffline   userId = " << userId);
					//imGateForPhoneAdapterPtr_->offline(userId);
					//imAdapter offline
					MY_INSTANCE(ProxyRegister).getProxy<ImOnlineAdapterServiceProxy>("imAdapterServiceProxy")->offline(userId,false);
					
				}

				LOG_DEBUG("OnlineStatManager::getStat ==> 查DB,DB中没有,处理掉长在线的后返回 userId = " << userId << "  type = " << st);
				return st;	
			} else {
				// DB中有, 则进行细查同步.
				
				vector<string> typeStrs;
				split(typeStrs, *sp, is_any_of(","));
				vector<string>::iterator iter = typeStrs.begin();
				for ( ; iter != typeStrs.end(); iter++){
					int type = string2Type(*iter);
					if (!(redisProxyPtr_->get(idStr+(*iter)).get())){
						//删长在线	
						LOG_DEBUG("OnlineStatManager::getStat ==> 长在线的某一个状态超时了, typeStr = " << *iter);
						int pos = sp->find(*iter);
						if (pos != 0){
							sp->erase((pos-1), (iter->size())+1);
						}else{
							sp->erase(pos, (iter->size())+1);
							LOG_DEBUG("OnlineStatManager::addStat ==> after sp->erase  pos = " << pos);
						}
						redisProxyPtr_->setex(idStr, *sp, TIME_EXCEED);
						
						status.numlongStat--;
						status.longOnlineStat &= ~type;
						status.stat &= ~type;
					}	
				}
				LOG_DEBUG("OnlineStatManager::getStat ==> 查DB,DB有,直接返回现有的userId = " << userId << "  type = " << (status).stat);
				return ((status).stat);					
			}
			
		}
		LOG_DEBUG("OnlineStatManager::getStat ==> userId没有长在线,没有查DB, userId = " << userId << "  type = " << (status).stat);
		return (status).stat;	
	}

	return static_cast<OnlineStat>(OnlineType::OFFLINE);
}

string OnlineStatManager::type2String(OnlineType::Type type) {
	string str;
	switch (type){
		case  OnlineType::IPHONE_SIXIN :  
				str.assign("IPHONE_SIXIN");
				break;
		case  OnlineType::ANDROID_SIXIN :
				str.assign("ANDROID_SIXIN");
				break;	
		case  OnlineType::SYNBIAN_SIXIN :
				str.assign("SYNBIAN_SIXIN");
				break;
		case  OnlineType::WINPHONE_SIXIN :
				str.assign("WINPHONE_SIXIN");
				break;
		case  OnlineType::IPHONE_RENREN :
				str.assign("IPHONE_RENREN");
				break;
		case  OnlineType::IPAD_RENREN :
				str.assign("IPAD_RENREN");
				break;	
		case  OnlineType::RENREN_LOCK_SCREEN:
				str.assign("RENREN_LOCK_SCREEN");
				break;	
		default :
				str.assign("UNKNOWN");
				break;
	}
	return str;		
}

OnlineType::Type OnlineStatManager::string2Type(string str){
	OnlineType::Type type;	
	
	if (!str.compare("IPHONE_SIXIN")){
		type = OnlineType::IPHONE_SIXIN;
	} else if(!str.compare("WINPHONE_SIXIN")){
		type = OnlineType::WINPHONE_SIXIN;		
	} else if(!str.compare("IPHONE_RENREN")){
		type = OnlineType::IPHONE_RENREN;
	} else {
		type = OnlineType::UNKNOWN;
	}

	return type;	
}

bool OnlineStatManager::hasLongOnline(long userId, OnlineType::Type type){
	LOG_DEBUG("OnlineStatManager::hasLongOnline(int userId, OnlineType::Type type) ==> userId = " << userId << "	type = " << type);
	size_t index = getPoolIndex(userId);
	SubPool& pool = pools_[index];
	if (pool.find(userId) != pool.end()){
		Status& status = pool[userId];
		bool result = status.longOnlineStat & type;
		LOG_DEBUG("OnlineStatManager::hasLongOnline(int userId, OnlineType::Type type) ==> userId = " << userId << "	type = " << type  << "  result == " << result);
		return result;
	}
	
	LOG_DEBUG("OnlineStatManager::hasLongOnline(int userId, OnlineType::Type type) ==> userId = " << userId << "	type = " << type << "  return false");
	return false;
}

bool OnlineStatManager::hasLongOnline(long userId){
	LOG_DEBUG("OnlineStatManager::hasLongOnline(int userId) ==> userId = " << userId);
	size_t index = getPoolIndex(userId);
	SubPool& pool = pools_[index];
	
	if (pool.find(userId) != pool.end()){
		Status& status = pool[userId];
		bool result = status.haslongOnline;
		LOG_DEBUG("OnlineStatManager::hasLongOnline(int userId) ==> userId = " << userId << "  result = " << result);
		return result;
	}
	
	LOG_DEBUG("OnlineStatManager::hasLongOnline(int userId) ==> userId = " << userId << "  result = false");
	return false;

}

// sync()和用户登录时取好友状态是同步DB的两个时候
void OnlineStatManager::sync(){
	
	SubPool pool;
	for(size_t i=0; i<POOL_NUM; i++){
		//拷贝SubPool到栈上，然后释放锁，因为有sleep,不然要睡挺久的
		{
			ReadLock readLock(mus_[i]);
			pool = pools_[i];
		}
		map<long, Status>::iterator it = pool.begin();

		for ( ;it != pool.end(); it++){
			long userId = it->first;
			string idStr = lexical_cast<string>(userId);
			Status& status = it->second;
			shared_ptr<string> typeStrPtr;

			if (status.longOnlineStat != 0){
				typeStrPtr = redisProxyPtr_->get(idStr);
				if (!typeStrPtr.get()){
					LOG_DEBUG("OnlineStatManager::sync ==> stat not sync found , userId = " << userId);
					status.haslongOnline = false;
					status.stat &= (~(status.longOnlineStat));
					status.numlongStat = 0;
					// del from set
					redisProxyPtr_->delMemberSet(serverkey_, idStr);

					// 若删了长在线的后,stat为0了,通知im userId下线	
					if (status.stat == 0){
						LOG_DEBUG("OnlineStatManager::sync ==> call im getoffline in sync userId =" << userId);
						//imGateForPhoneAdapterPtr_->offline(userId);				
						//imAdapter offline
						MY_INSTANCE(ProxyRegister).getProxy<ImOnlineAdapterServiceProxy>("imAdapterServiceProxy")->offline(userId,false);
						usleep(50000);
					}
	
				} else{
					//每一次同步即2个小时给一次上线操作，不然IM把在线状态洗掉了就没办法了
					//usleep(1000);
					//imGateForPhoneAdapterPtr_->online(userId);
				}
			}
		} //for subPool
	} //for pools_
}

void OnlineStatManager::setServerId(int serverId){
	LOG_INFO("OnlineStatManager::setServerId ==> serverId = " << serverId);
	serverId_ = serverId;
	string serverIdStr = boost::lexical_cast<string>(serverId);
	serverkey_ = "talk_server_" + serverIdStr;
	LOG_INFO("OnlineStatManager::serServerId ==> serverkey = " << serverkey_);
}

bool OnlineStatManager::loadFromRedis(){
	LOG_INFO("OnlineStatManager::loadFromRedis ==> ");
	set<long> longOnlineUsers;
	if (!redisProxyPtr_->getMembersSet(serverkey_, longOnlineUsers)){
		LOG_INFO("OnlineStatManager::loadFromRedis error ");
		return false;
	}
	LOG_INFO("OnlineStatManager::loadFromRedis success ==> longOnlineUsers.size() = " << longOnlineUsers.size());
	for(set<long>::iterator it = longOnlineUsers.begin(); it != longOnlineUsers.end(); it++){
		string idStr = boost::lexical_cast<string>(*it);
		boost::shared_ptr<string> strPtr = redisProxyPtr_->get(idStr);
		if (!strPtr.get()){
			continue;
		}
		LOG_DEBUG("OnlineStatManager::loadFromRedis ==> userId = " << *it << "  typeStr = " << *strPtr);
		vector<string> typeStrs;
		split(typeStrs, *strPtr, is_any_of(","));
		int onlineType = 0;
		for(vector<string>::iterator iter = typeStrs.begin(); iter != typeStrs.end(); iter++){
			int type = string2Type(*iter);
			onlineType |= type;
		}
		
		Status status;
		status.stat = status.longOnlineStat = onlineType;
		status.haslongOnline = true;
		size_t poolIndex = getPoolIndex(*it);
		WriteLock writeLock(mus_[poolIndex]);
		pools_[poolIndex].insert(pair<long, Status>(*it, status));
	}
	LOG_INFO("OnlineStatManager::loadFromRedis finish ==> ");
	return true;
}

int OnlineStatManager::userStatNum(long userId, OnlineStatAction action){
	LOG_DEBUG("OnlineStatManager::userStatNum ==> userId = " << userId);
	size_t index = getPoolIndex(userId);
	SubPool& pool = pools_[index];
	
	if (pool.find(userId) != pool.end()){
		Status& status = pool[userId];
		int result = status.statNum;
		if(action == OnlineStatManager::LOG_OUT){
			status.statNum--;
		}
		return result;
	}
	return 0;
}

void SyncTimerTask::runTimerTask (){
	LOG_INFO("OnlineStatManager SyncTimerTask::runTimerTask ==> sync begin");
	onlineStatManagerPtr_->sync ();	
	LOG_INFO("OnlineStatManager SyncTimerTask::runTimerTask ==> sync finish");
}

};
};
