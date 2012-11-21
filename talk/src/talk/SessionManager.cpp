#include <ctime>
#include <iostream>
#include <boost/timer.hpp>
#include <boost/make_shared.hpp>
#include "SessionManager.h"
#include "SessionManagerListener.h"
#include "utils/MyLogger.h"
#include "TalkServer.h"

using namespace std;
using namespace mtalk::utils;

namespace mtalk{
namespace talk{

	void SessionManager::init(){
		sessionListenerPtr_ = boost::make_shared<SessionManagerListener>(shared_from_this());
	}

	void SessionManager::start(){
		ScopedLock lock(mutex_);
		if(!timerTaskPtr_){
			timerTaskPtr_ = new SessionManagerCheckTimerTask(shared_from_this());
		}
		timer_.scheduleRepeated(timerTaskPtr_, IceUtil::Time::seconds(SESSION_CHECK_TIME));
		LOG_INFO("SessionManager::start => started");
	}

	void SessionManager::stop(){
		ScopedLock lock(mutex_);
		timer_.cancel(timerTaskPtr_);
		clear();
		LOG_INFO("SessionManager::stop => stoped");
	}


	void SessionManager::addSession(SessionPtr sessionPtr){
		int poolIndex = getPoolIndex(sessionPtr->getSessionId());
		WriteLock lock(sessionPoolMutex_[poolIndex]);

		sessionPools_[poolIndex][sessionPtr->getSessionId()] = sessionPtr;
		LOG_DEBUG("SessionManager::addSession => end : sessionId = " << sessionPtr->getSessionId());
	}

	void SessionManager::delSession(const string& sessionId){
		int poolIndex = getPoolIndex(sessionId);
		WriteLock lock(sessionPoolMutex_[poolIndex]);
		SessionPool& subPool = sessionPools_[poolIndex];
		SessionPool::iterator it = subPool.find(sessionId);
		if(it != subPool.end()){
			LOG_DEBUG("SessionManager::delSession(lock) => success : sid = " << sessionId << " uid = " << it->second->getUserId());
			subPool.erase(it);
		}
	}

	SessionPtr SessionManager::getSession(const string& sessionId){
		int poolIndex = getPoolIndex(sessionId);
		ReadLock lock(sessionPoolMutex_[poolIndex]);
		SessionPool& subPool = sessionPools_[poolIndex];
		SessionPool::iterator it = subPool.find(sessionId);

		SessionPtr sessionPtr;

		if(it != subPool.end()){
			sessionPtr = it->second;
			LOG_DEBUG("SessionManager::getSession => success : sid = " << sessionId);
		} else {
			LOG_DEBUG("SessionManager::getSession => 404 : sid = " << sessionId);
		}
		return sessionPtr;
	}

	void SessionManager::check(){
		LOG_DEBUG("SessionManager::check => begin ");
		boost::timer tStart;
		int count = 0;
		int del = 0;
		vector<SessionPtr> holdTimeoutVector;
		for( int i = 0; i < SESSION_POOL_SIZE; i++){
			WriteLock lock(sessionPoolMutex_[i]);
			SessionPool& subPool = sessionPools_[i];
			for( SessionPool::iterator it = subPool.begin(); it != subPool.end();){

				if(it->second->check()){
					subPool.erase(it++);
				}else{
					it++;
				}

			}

			count += subPool.size();
		}

		del =  MY_INSTANCE(TalkServer).getUserCount();
		LOG_CHECK(count << "|" << del <<"|"<<tStart.elapsed());
		LOG_DEBUG("SessionManager::check => finish : count = " << count <<" cast time = " << tStart.elapsed() << "s");
	}

	void SessionManager::clear(){
		for( int i = 0; i < SESSION_POOL_SIZE; i++){
			WriteLock lock(sessionPoolMutex_[i]);
			SessionPool& subPool = sessionPools_[i];
			subPool.clear();
		}
		LOG_INFO("SessionManager::clear => clear all session");
	}

	inline int SessionManager::getPoolIndex(const string& sessionId){
		int count = 0;
		for(size_t i = 0; i < sessionId.size(); i++){
			count += (int)sessionId[i];
		}
		return count%SESSION_POOL_SIZE;
	}

	SessionIdFactory::SessionIdFactory() :
		charSet_("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"),
		index_(0){
			srand(time(NULL));
		}

	string SessionIdFactory::createSessionId(long userId){
		char cstr[17];
		long tuserId = userId;
		int tIndex = ++index_;
		int serverIndex = MY_INSTANCE(TalkServer).getServerIndex();
		for(int i = 0; i < 16; i++){
			if(i == 3)
				cstr[i] = '0' + ((serverIndex%1000)/100);
			else if (i == 7)
				cstr[i] = '0' + ((serverIndex%100)/10);
			else if (i == 11)
				cstr[i] = '0' + (serverIndex%10);
			else{
				if(tuserId > 0){
					cstr[i] = charSet_[tuserId%62];
					tuserId /= 62;
				} else if(tIndex > 0){
					cstr[i] = charSet_[tIndex%62];
					tIndex /= 62;
				} else {
					cstr[i] = charSet_[rand()%62];
				}
			}
		}
		cstr[16] = '\0';
		return string(cstr);
	}

	void SessionManagerCheckTimerTask::runTimerTask(){
		managerPtr_->check();
	}

};
};
