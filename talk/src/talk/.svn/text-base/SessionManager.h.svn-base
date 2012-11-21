/**
* @file SessionManager.h
* @brief	session manager
* 			管理所有接入的会话
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_TALK_SESSION_MANAGER_H_
#define TALK_TALK_SESSION_MANAGER_H_

#include <string>
#include <map>
#include <ctime>
#include <Ice/Ice.h>
#include <boost/utility.hpp>
#include <boost/shared_ptr.hpp>
#include "Session.h"
#include "SessionListener.h"
#include "utils/MyLock.h"
#include "utils/MyLogger.h"

namespace mtalk{
namespace talk{

	/**
	* @brief	session id 生产工厂
	*/
	class SessionIdFactory{
	public :
		SessionIdFactory();

		/**
		* @brief	获取一个新的sessionId
		*
		* @return	
		*/
		std::string createSessionId(long userId);
	private :
		const std::string charSet_;
		long index_;
	};

	typedef boost::shared_ptr<talk::Session> SessionPtr;
	typedef std::map<std::string, SessionPtr > SessionPool;

	class SessionManager : 
		public boost::enable_shared_from_this<SessionManager>,
		private boost::noncopyable {
	public :
		SessionManager (){
		}
		
		/**
		* @brief	获取一个新的session
		* 			只是产生一个拥有唯一sessionId的session
		* 			不会存入manager中
		*
		* @return	
		*/
template<class T>
		boost::shared_ptr<T> getNewSession(long userId);

		/**
		* @brief	将一个新的session放入manager中
		*
		* @param	sessionPtr
		*/
		void addSession(SessionPtr sessionPtr);

		/**
		* @brief	根据Id删除一个session
		*
		* @param	sessionId
		*/
		void delSession(const std::string& sessionId);

		/**
		* @brief	根据sessionId获取session，
		* 			如果不存在返回一个空的SessionPtr
		*
		* @param	sessionId
		*
		* @return	
		*/
		SessionPtr getSession(const std::string& sessionId);
		
		/**
		* @brief	检测和删除超时的session
		*/
		 void check();

		/**
		* @brief	session manager开始定时检测和删除超时的session
		*/
		void start();

		void stop();

		void init();

		/**
		* @brief	清楚所有的session.
		*/
		void clear();

	private :
		const static int SESSION_POOL_SIZE = 100;
		const static time_t SESSION_TIMEOUT = 60;
		const static time_t SESSION_CHECK_TIME = 5;

		int getPoolIndex(const std::string& sessionId);

		SessionPool sessionPools_[SESSION_POOL_SIZE];
	
		boost::shared_mutex sessionPoolMutex_[SESSION_POOL_SIZE];

		boost::mutex mutex_;
		
		IceUtil::Timer timer_;

		boost::shared_ptr<talk::SessionListener> sessionListenerPtr_;

		SessionIdFactory sessionIdFactory_;
		
		IceUtil::TimerTaskPtr timerTaskPtr_;
	};

	typedef boost::shared_ptr<SessionManager> SessionManagerPtr;

	/**
	* @brief	用户检测超时session的timer task
	*/
	class SessionManagerCheckTimerTask : public IceUtil::TimerTask {
	public :
		SessionManagerCheckTimerTask(SessionManagerPtr SessionManagerPtr)
			: managerPtr_(SessionManagerPtr){
		}

		void runTimerTask();
	private :
		SessionManagerPtr managerPtr_;
	};


	template<class T>
	boost::shared_ptr<T>  SessionManager::getNewSession(long userId){
		std::string sessionId = sessionIdFactory_.createSessionId(userId);
		boost::shared_ptr<T> sp(new T(sessionId));
		sp->setManagerDeleteListener(sessionListenerPtr_);
		sp->setUserId(userId);
		addSession(sp);
		LOG_DEBUG("SessionManager::getNewSession => create a session : sid = " << sp->getSessionId());
		return sp;
	}


};
};
#endif //TALK_TALK_SESSION_MANAGER_H_
