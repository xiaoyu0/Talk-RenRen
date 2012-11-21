#include <boost/lexical_cast.hpp>
#include <set>

#include "RedisProxy.h"
#include "utils/MyLogger.h"

using namespace std;
using namespace mtalk::redis;
using namespace mtalk::utils;

namespace mtalk{
namespace proxy{
	
	RedisProxy::RedisProxy(const string& addrs) :
		redisClientPool_(20, addrs){

		redisClientPool_.init();
	}

	RedisProxy::~RedisProxy(){
	}

	bool RedisProxy::set(const string& key, const string& value){
		LOG_DEBUG("RedisProxy::set => key = " << key << " value = " << value);
		boost::shared_ptr<RedisClient> redisClientPtr = redisClientPool_.getClient();

		RedisReply reply = redisClientPtr->set(key, value);

		redisClientPool_.retClient(redisClientPtr);

		return reply.type != RedisReplyType::error;
	}

	bool RedisProxy::setex(const string& key, const string& value, const int second){
		LOG_DEBUG("RedisProxy::setex => key = " << key << " value = " << value << " second = " << second);
		boost::shared_ptr<RedisClient> redisClientPtr = redisClientPool_.getClient();

		RedisReply reply = redisClientPtr->setex(key, value, second);

		redisClientPool_.retClient(redisClientPtr);

		return reply.type != RedisReplyType::error;
	}

	boost::shared_ptr<string> RedisProxy::get(const string& key){
		LOG_DEBUG("RedisProxy::get => key = " << key);
		boost::shared_ptr<RedisClient> redisClientPtr = redisClientPool_.getClient();
		RedisReply reply = redisClientPtr->get(key);
		redisClientPool_.retClient(redisClientPtr);

		boost::shared_ptr<string> value;

		if(reply.type == RedisReplyType::string){
			value = reply.str;
		}
		
		return value;
	}

	bool RedisProxy::del(const string& key){
		LOG_DEBUG("RedisProxy::del => key = " << key);
		boost::shared_ptr<RedisClient> redisClientPtr = redisClientPool_.getClient();

		RedisReply reply = redisClientPtr->del(key);

		redisClientPool_.retClient(redisClientPtr);

		return reply.type != RedisReplyType::error;
	}

	bool RedisProxy::addMemberSet(const string& key, const string& value){
		LOG_DEBUG("RedisProxy::addMemberSet ==> key = " << key << " value = " << value);
		boost::shared_ptr<RedisClient> redisClientPtr = redisClientPool_.getClient();

		RedisReply reply = redisClientPtr->sadd(key, value);
		redisClientPool_.retClient(redisClientPtr);

		return reply.type != RedisReplyType::error;
	}
	
	bool RedisProxy::delMemberSet(const string& key, const string& value){
		LOG_DEBUG("RedisProxy::delMemberSet ==> key = " << key << " value = " << value);
		boost::shared_ptr<RedisClient> redisClientPtr = redisClientPool_.getClient();

		RedisReply reply = redisClientPtr->srem(key, value);
		redisClientPool_.retClient(redisClientPtr);

		return reply.type != RedisReplyType::error;
	}


	bool RedisProxy::getMembersSet(const string& key, std::set<long>& valueSet){
		LOG_DEBUG("RedisProxy::getMemberSet ==> key = " << key);
		
		boost::shared_ptr<RedisClient> redisClientPtr = redisClientPool_.getClient();
		RedisReply reply = redisClientPtr->smembers(key);
		redisClientPool_.retClient(redisClientPtr);

		if(reply.type == RedisReplyType::array){
			for(vector<RedisReply>::iterator it = reply.array.begin(); it != reply.array.end(); it++){
				if(it->type == RedisReplyType::string){
					if ((it->str).get()){
						string idStr = *(it->str);
						int userId = boost::lexical_cast<long>(idStr);
						valueSet.insert(userId);
					}
				}
			}
			return true;
		}
		return false;
	}
};
};
