#ifndef TALK_UTILS_MY_LOCK_H_
#define TALK_UTILS_MY_LOCK_H_
#include <boost/thread.hpp>

namespace mtalk{
namespace utils{
		/**
		 * 读写锁
		 */
		typedef boost::shared_lock< boost::shared_mutex > ReadLock;
		typedef boost::unique_lock< boost::shared_mutex > WriteLock;
		
		/**
		 * 互斥锁
		 */
		typedef boost::mutex::scoped_lock ScopedLock;
};
};
#endif //TALK_UTILS_MY_LOCK_H_
