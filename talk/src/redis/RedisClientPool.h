#ifndef TALK_REDIS_REDIS_CLIENT_POOL_H_
#define TALK_REDIS_REDIS_CLIENT_POOL_H_

#include <string>
#include <list>
#include <set>
#include "utils/MyLock.h"
#include "RedisClient.h"


namespace mtalk{
namespace redis{

	class RedisClientPool {
	public :
		RedisClientPool(int size);
		RedisClientPool(int size, const std::string& addrs);

		bool init();
		bool init(const std::string& addrs);

		void setRWSplit(bool split);
		bool isRWSplit() const;

		void setBlock(bool block);
		bool isBlock() const;

		boost::shared_ptr<RedisClient> getClient();
		void retClient(boost::shared_ptr<RedisClient> clientPtr);
	
	private :
		boost::shared_ptr<RedisClient> createOneClient(int index);

		int size_;
		std::string addrs_;
		bool split_;
		bool block_;

		std::list<boost::shared_ptr<RedisClient> > idleClientList_;

		std::set<boost::shared_ptr<RedisClient> > clientSet_;

		boost::mutex mutex_;
		boost::condition_variable cond_;
	};
};
};
#endif //TALK_REDIS_REDIS_CLIENT_POOL_H_
