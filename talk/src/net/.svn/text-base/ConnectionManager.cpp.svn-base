#include <vector>
#include <boost/timer.hpp>
#include "ConnectionManager.h"
#include "IoHandler.h"

using namespace std;
using namespace mtalk::utils;

namespace mtalk{
namespace net{

	ConnectionManager::ConnectionManager(){
		LOG_INFO("ConnectionManager::ConnectionManager => Created");
	}

	void ConnectionManager::start(){
		if(!timerTaskPtr_){
			timerTaskPtr_ = new ConnectionManagerCheckTimerTask(shared_from_this());
		}
		timer_.scheduleRepeated(timerTaskPtr_, IceUtil::Time::seconds(CONNECTION_CHECK_TIME));
		LOG_INFO("ConnectionManager::start => task start");
	}

	void ConnectionManager::stop(){
		timer_.cancel(timerTaskPtr_);
		clear();
		LOG_INFO("ConnectionManager::stop => task stop");
	}

	ConnectionPtr ConnectionManager::getConnection(long connectionId){
		int poolIndex = getPoolIndex(connectionId);

		ReadLock lock(connectionPoolMutexs_[poolIndex]);
		
		ConnectionPool& subPool = connectionPools_[poolIndex];
		ConnectionPool::iterator it = subPool.find(connectionId);
		
		ConnectionPtr connectionPtr;

		if(it != subPool.end()){
			connectionPtr = it->second;
		}

		return connectionPtr;
	}

	void ConnectionManager::addConnection(ConnectionPtr connectionPtr){
		LOG_DEBUG("ConnectionManager::addConnection => begin : cid = " << connectionPtr->getId());

		int poolIndex = getPoolIndex(connectionPtr->getId());

		WriteLock lock(connectionPoolMutexs_[poolIndex]);

		connectionPools_[poolIndex][connectionPtr->getId()] = connectionPtr;
	}

	inline int ConnectionManager::getPoolIndex(long connectionId){
		return (connectionId >> 8) % CONNECTION_POOL_SIZE;
	}

	void ConnectionManager::clear(){
		LOG_DEBUG("ConnectionManager::clear => begin");
		for(int i = 0; i < CONNECTION_POOL_SIZE; i++){
			WriteLock lock(connectionPoolMutexs_[i]);
			ConnectionPool& subPool = connectionPools_[i];
			for(ConnectionPool::iterator it = subPool.begin(); it != subPool.end(); it++){
				it->second->close(false);
			}
			subPool.clear();
		}
		LOG_INFO("ConnectionManager::clear => finish");
	}

	void ConnectionManager::delConnection(long connectionId){
		LOG_DEBUG("ConnectionManager::delConnection => del cid = " << connectionId);
		int poolIndex = getPoolIndex(connectionId);

		WriteLock lock(connectionPoolMutexs_[poolIndex]);
		
		connectionPools_[poolIndex].erase(connectionId);
		return;
	}

	void ConnectionManager::check(){
		ScopedLock checkingLock(checkingMutex_);
		LOG_DEBUG("ConnectionManager::check => begin");
		boost::timer tStart;
		int count = 0;
		int discCount = 0;
		int disOpen = 0;
		for(int i = 0; i < CONNECTION_POOL_SIZE; ++i){
			WriteLock lock(connectionPoolMutexs_[i]);
			ConnectionPool& subPool = connectionPools_[i];
			std::map<long, ConnectionPtr>::iterator iter = subPool.begin();
			int subdiscCount = 0;
			int subdisOpen = 0;
			for(; iter != subPool.end(); iter++){
				if(!iter->second->isConnected()){
					subdiscCount++;
				}	
				if(!iter->second->getSocket().is_open()){
					subdisOpen++;
				}
			}
			discCount += subdiscCount;
			count += subPool.size();
		}
		
		LOG_INFO("ConnectionManager::check => finish : count = " << count <<"   discCount = "<<discCount << "   disOpen = "<<disOpen<<"    cast time = " << tStart.elapsed() << "s");
	}

	void ConnectionManagerCheckTimerTask::runTimerTask(){
		managerPtr_->check();
	}

};
};
