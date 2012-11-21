/*
 * =====================================================================================
 *
 *       Filename:  IceExceptionCounter.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年09月14日 20时27分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jun.liu (), jun.liu@renren-inc.com
 *        Company:  renren-inc
 *
 * =====================================================================================
 */

#ifndef  ICEEXCEPTIONCOUNTER_H
#define  ICEEXCEPTIONCOUNTER_H

#include  <string>
#include <Ice/Object.h>
#include  <boost/shared_ptr.hpp>
#include  <boost/thread.hpp>
#include  <boost/utility.hpp>
#include  <Ice/Ice.h>

using namespace std;

namespace mtalk {
namespace proxy {

	/**
	 * @brief ICE异常统计器 
	 *
	 */
	class IceExceptionCounter : 
		public boost::enable_shared_from_this<IceExceptionCounter>,
		private boost::noncopyable {
		public:
			/**
			 * @brief 构造函数
			 **/
			IceExceptionCounter(string fileName);

			/**
			 * @brief 析构函数
			 **/
			virtual ~IceExceptionCounter();
			
			/**
			 * @brief 获取异常次数
			 *
			 * @return int 异常次数
			 **/
			int getExceptionCount();

			/**
			 * @brief 增加异常次数
			 * 
			 * @param Ice::Exception& e 
			 * @return void
			 **/
			void increase(Ice::Exception& e);
			void increase();
			
			/**
			 * @brief 是否为安全模式
			 *
			 **/
			bool isSafeMode();	
			
			/**
			 * @brief 启动清理任务
			 *
			 **/
			void startCleanTask();
			
			/**
			 * @brief 关闭清理任务
			 *
			 **/
			void stopCleanTask();
		
			/**
			 * @brief 清理
			 *
			 **/
			void clean();
			
			/**
			 * @brief 开始安全任务
			 *
			 **/
			void startSafeModeTask();
			
			/**
			 * @brief 结束安全任务
			 *
			 **/
			void stopSafeModeTask();

		protected:
			//是否已启动
			bool cleanTaskStarted_;
			//安全模式
			bool safeMode_;
			//异常次数
			int count_;
			//异常所在处
			string fileName_;
			//定时器
			IceUtil::Timer cleanTimer_;
			IceUtil::Timer safeModeTimer_;
			//定时任务
			IceUtil::TimerTaskPtr cleanTimerTaskPtr_;
			IceUtil::TimerTaskPtr safeModeTimerTaskPtr_;
			//锁
			boost::mutex cleanMutex_;
			boost::mutex safeMutex_;
	};

	typedef boost::shared_ptr<IceExceptionCounter> IceExceptionCounterPtr;

	class IceExceptionCheckTimerTask : public IceUtil::TimerTask {
		public:
			IceExceptionCheckTimerTask(IceExceptionCounterPtr counterPtr, const int& type = 0) :counterPtr_(counterPtr), type_(type) {
			
			} 

			void runTimerTask();
		private:
			IceExceptionCounterPtr counterPtr_;
			int type_;
	};
};
};


#endif  /*ICEEXCEPTIONCOUNTER_H*/
