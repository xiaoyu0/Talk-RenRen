#ifndef TALK_PROXY_REDIS_PROXY_H_
#define TALK_PROXY_REDIS_PROXY_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "proxy/Proxy.h"
#include "redis/RedisClientPool.h"

namespace mtalk{
namespace proxy{

	class RedisProxy : public Proxy {
	public :
		RedisProxy(const std::string& addrs);

		~RedisProxy();

		bool set(const std::string& key, const std::string& value);

		bool setex(const std::string& key, const std::string& value, const int second);

		boost::shared_ptr<std::string> get(const std::string& key);

		bool del(const std::string& key);
		
		//Set methods
		bool addMemberSet(const std::string& key, const std::string& value);

		bool delMemberSet(const std::string& key, const std::string& value);

		bool getMembersSet(const std::string& key, std::set<long>& valueSet);
	private :
		mtalk::redis::RedisClientPool redisClientPool_;

	};
};
};
#endif //TALK_PROXY_REDIS_PROXY_H_
