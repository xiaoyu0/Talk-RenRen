/*
 * =====================================================================================
 *
 *       Filename:  IceExceptionCounter.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年09月14日 20时44分18秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jun.liu (), jun.liu@renren-inc.com
 *        Company:  renren-inc
 *
 * =====================================================================================
 */

#include    "IceExceptionCounter.h"
#include    "utils/MyLogger.h"
#include    "utils/MyLock.h"

using namespace mtalk::utils;

#define FIVE_MINUTES 300 
#define ONE_MINUTES 60 
#define MAX_COUNT 60 


namespace mtalk {
namespace proxy {
	
	IceExceptionCounter::IceExceptionCounter(string fileName) : cleanTaskStarted_(false), safeMode_(true), count_(0), fileName_(fileName) {
	}

	IceExceptionCounter::~IceExceptionCounter() {
			
	}

	int IceExceptionCounter::getExceptionCount() {
		return count_;
	}

	void IceExceptionCounter::increase(Ice::Exception& e) {
		LOG_INFO("[" << fileName_ << "]-IceExceptionCounter::increase with " << e.what());
		increase();	
	}

	void IceExceptionCounter::increase() {
		LOG_INFO("[" << fileName_ << "]-IceExceptionCounter::increase");
		if(safeMode_)
		  return;
		if(!cleanTaskStarted_)
			startCleanTask();
		count_++;
		if(count_ > MAX_COUNT) { 
			LOG_WARN("[" << fileName_ << "]-IceExceptionCounter::increase is bigger than MAX_COUNT=" << MAX_COUNT);
			stopCleanTask();	
			startSafeModeTask();
		}
	}



	void IceExceptionCounter::startCleanTask() {
//		LOG_DEBUG("[" << fileName_ << "]-IceExceptionCounter::startCleanTask start=====");
//		ScopedLock lock(cleanMutex_);			
//		if(cleanTaskStarted_) {
//			LOG_DEBUG("[" << fileName_ << "]-IceExceptionCounter::startCleanTask end with already start=====");
//			return;
//		}
//		
//		if(!cleanTimerTaskPtr_) {
//			cleanTimerTaskPtr_ = new IceExceptionCheckTimerTask(shared_from_this());
//		}
//		
//		cleanTimer_.scheduleRepeated(cleanTimerTaskPtr_, IceUtil::Time::seconds(ONE_MINUTES));
//		cleanTaskStarted_ = true;
//		count_ = 0;
//		LOG_DEBUG("[" << fileName_ << "]-IceExceptionCounter::startCleanTask end=====");
	}

	
	void IceExceptionCounter::stopCleanTask() {
		LOG_DEBUG("[" << fileName_ << "]-IceExceptionCounter::stopCleanTask start=====");
		ScopedLock lock(cleanMutex_);			
		if(!cleanTaskStarted_) {
			LOG_DEBUG("[" << fileName_ << "]-IceExceptionCounter::stopCleanTask end with already stop=====");
			return;
		}

		cleanTimer_.cancel(cleanTimerTaskPtr_);	
		cleanTaskStarted_ = false;
		LOG_DEBUG("[" << fileName_ << "]-IceExceptionCounter::stopCleanTask end=====");
	}
	
	void IceExceptionCounter::clean() {
		LOG_DEBUG("[" << fileName_ << "]-IceExceptionCounter::clean start=====");
		ScopedLock lock(cleanMutex_);			
		count_ = 0;	
		LOG_DEBUG("[" << fileName_ << "]-IceExceptionCounter::clean end=====");
	}

	bool IceExceptionCounter::isSafeMode() {
		return safeMode_;
	}

	void IceExceptionCounter::startSafeModeTask() {
		LOG_INFO("[" << fileName_ << "]-IceExceptionCounter::startSafeModeTask start=====");
		ScopedLock lock(safeMutex_);			
		if(safeMode_) {
			LOG_DEBUG("[" << fileName_ << "]-IceExceptionCounter::startSafeModeTask end with already isSafeMode=====");
			return;
		}

		if(!safeModeTimerTaskPtr_) {
			safeModeTimerTaskPtr_ = new IceExceptionCheckTimerTask(shared_from_this(), 1);
		}

		safeModeTimer_.schedule(safeModeTimerTaskPtr_, IceUtil::Time::seconds(FIVE_MINUTES));
		safeMode_ = true;
		LOG_DEBUG("[" << fileName_ << "]-IceExceptionCounter::startSafeModeTask end=====");
	}

	void IceExceptionCounter::stopSafeModeTask() {
		LOG_INFO("[" << fileName_ << "]-IceExceptionCounter::stopSafeModeTask start=====");
		ScopedLock lock(safeMutex_);			
		safeMode_ = false;
		LOG_DEBUG("[" << fileName_ << "]-IceExceptionCounter::stopSafeModeTask end=====");
	}

	void IceExceptionCheckTimerTask::runTimerTask() {
		LOG_DEBUG("IceExceptionCheckTimerTask::runTimerTask start=====");
		if(type_ == 0) {
			counterPtr_->clean();	
		}
		else {
			counterPtr_->stopSafeModeTask();
			counterPtr_->startCleanTask();
		}
		LOG_DEBUG("IceExceptionCheckTimerTask::runTimerTask end=====");
	}
};
};
