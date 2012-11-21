#include <ctime>
#include <sstream>
#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/make_shared.hpp>
#include "RedisClient.h"
#include "utils/MyLogger.h"

#define COMMAND(command, RW, args ...) redisContext \
		*context = get##RW##Context();\
		if(!context){\
			RedisReply rReply(RedisReplyType::error, boost::make_shared<string>("context error"));\
			return rReply;\
		}\
		redisReply *reply = (redisReply *)redisCommand(context, args);\
		if(!reply){\
			LOG_ERROR("RedisClient::" << #command << " => error : err = " << context->errstr);\
			disconnect();\
			connect();\
			context = get##RW##Context();\
			if(!context){\
				RedisReply rReply(RedisReplyType::error, boost::make_shared<string>("context error"));\
				return rReply;\
			}\
			reply = (redisReply *)redisCommand(context, args);\
			if(!reply){\
				LOG_ERROR("RedisClient::" << #command << " => retry error : err = " << context->errstr);\
				RedisReply eReply(RedisReplyType::error, boost::make_shared<string>(context->errstr));\
				return eReply;\
			}\
		}
	

using namespace std;
using namespace boost::algorithm;
using namespace mtalk::utils;

namespace mtalk{
namespace redis{

	RedisClient::RedisClient() :
		rwSplit_(false){
		srand(time(NULL));
		LOG_INFO("RedisClient::RedisClient => create without addr");
	}

	RedisClient::RedisClient(const string& addrs) :
		addrs_(addrs),
		rwSplit_(false){
		srand(time(NULL));
		LOG_INFO("RedisClient::RedisClient => create : addr = " << addrs);
	}

	RedisClient::~RedisClient(){
		disconnect();
	}

	bool RedisClient::connect(){

		vector<string> addrVec;
		split(addrVec, addrs_, is_any_of(","), token_compress_on);
		
		if(addrVec.size() == 0){
			LOG_ERROR("RedisClient::connect => can not found addr from addrs [" << addrs_ << "]");
			return false;
		}

		for(size_t i = 0; i < addrVec.size(); i++){
			string addr = addrVec[i];
			size_t p = addr.find(":");
			if(p != string::npos){
				string ip = addr.substr(0, p);
				string portStr = addr.substr(p+1);
				short port = boost::lexical_cast<int>(portStr);
				redisContext *context = redisConnect(ip.c_str(), port);
				if(context->err){
					LOG_ERROR("RedisClient::connect => connect redis server error : err = " << context->errstr);
					return false;
				}
				LOG_INFO("RedisClient::connect => connect redis server : ip = " << ip << " port = " << port);
				redisClusters_.push_back(context);
			} else {
				LOG_ERROR("RedisClient::connect => addr format error : addr = [" << addr << "]");
				return false;
			}
		}

		if(redisClusters_.size() == 0){
			LOG_ERROR("RedisClient::connect => connect to redis server failure");
			return false;
		}
		LOG_INFO("RedisClient::connect => client [" << index_ << "] connect success : cluster size = " << redisClusters_.size());
		return true;
	}

	bool RedisClient::connect(const string& addrs){
		addrs_ = addrs;
		return connect();
	}

	bool RedisClient::disconnect(){
		for(size_t i = 0; i < redisClusters_.size(); ++i){
			redisFree(redisClusters_[i]);
		}
		redisClusters_.clear();
		LOG_INFO("RedisClient::disconnect => disconnect redis server");
		return true;
	}

	void RedisClient::setRWSplit(bool split){
		rwSplit_ = split;
	}

	bool RedisClient::getRWSplit() const {
		return rwSplit_;
	}

	void RedisClient::setIndex(const int index) {
		index_ = index;
	}

	int RedisClient::getIndex() const{
		return index_;
	}

	RedisReply RedisClient::set(const string& key, const string& value){
		COMMAND(set, W, "set %s %s", key.c_str(), value.c_str());

		freeReplyObject(reply);
		RedisReply rReply;
		return rReply;
	}

	RedisReply RedisClient::setex(const string& key, const string& value, int seconds){
		COMMAND(setex, W, "setex %s %d %s", key.c_str(), seconds, value.c_str());
		
		freeReplyObject(reply);
		RedisReply rReply;
		return rReply;
	}

	RedisReply RedisClient::get(const std::string& key){
		
		COMMAND(get, R, "get %s", key.c_str());

		boost::shared_ptr<string> strPtr;
		if(reply->type == REDIS_REPLY_STRING){
			strPtr = boost::make_shared<string>(reply->str, reply->len);
		}

		freeReplyObject(reply);
		RedisReply rReply(strPtr);
		return rReply;
	}

	RedisReply RedisClient::mget(const vector<string>& keys){
		ostringstream os;
		os << "mget ";
		for(size_t i = 0; i < keys.size(); ++i){
			os << " " << keys[i];
		}
		
		COMMAND(mget, R, os.str().c_str());

		RedisReply rReply(RedisReplyType::array);

		if(reply->type == REDIS_REPLY_ARRAY){
			for(size_t i = 0; i < reply->elements; ++i){
				redisReply *element = reply->element[i];
				
				boost::shared_ptr<string> strPtr;

				if(element->type == REDIS_REPLY_STRING){
					strPtr = boost::make_shared<string>(element->str, element->len);
				}
				RedisReply iReply(strPtr);
				rReply.array.push_back(iReply);
			}
		}
		freeReplyObject(reply);
		return rReply;
	}

	RedisReply RedisClient::del(const string& key){
		COMMAND(del, W, "del %s", key.c_str());

		freeReplyObject(reply);
		RedisReply rReply;
		return rReply;
	}

	RedisReply RedisClient::hset(const string& key, const string& field, const string& value){
		COMMAND(hset, W, "hset %s %s %s", key.c_str(), field.c_str(), value.c_str());
	
		freeReplyObject(reply);
		RedisReply rReply;
		return rReply;
	}

	RedisReply RedisClient::hgetall(const string& key){
		map<string, string> fieldMap;

		COMMAND(hgetall, R, "hgetall %s", key.c_str());

		RedisReply rReply(RedisReplyType::array);

		if(reply->type == REDIS_REPLY_ARRAY){
			for(size_t i = 0; i < reply->elements; ++i){
				redisReply *element = reply->element[i];
				
				boost::shared_ptr<string> strPtr;

				if(element->type == REDIS_REPLY_STRING){
					strPtr = boost::make_shared<string>(element->str, element->len);
				}
				RedisReply iReply(strPtr);
				rReply.array.push_back(iReply);
			}
		}
		freeReplyObject(reply);
		return rReply;
	}

	RedisReply RedisClient::sadd(const string& key, const string& value){
		COMMAND(sadd, W, "sadd %s %s", key.c_str(), value.c_str());

		freeReplyObject(reply);
		RedisReply rReply;
		return rReply;
	}

	RedisReply RedisClient::srem(const string& key, const string& value){
		COMMAND(sadd, W, "srem %s %s", key.c_str(), value.c_str());
		
		freeReplyObject(reply);
		RedisReply rReply;
		return rReply;
	}

	RedisReply RedisClient::smembers(const string& key){
		COMMAND(smembers, R, "smembers %s", key.c_str());
		RedisReply rReply(RedisReplyType::array);

		if(reply->type == REDIS_REPLY_ARRAY){
			for(size_t i = 0; i < reply->elements; i++){
				redisReply* element = reply->element[i];
				boost::shared_ptr<string> strPtr;
				if(element->type == REDIS_REPLY_STRING){
					strPtr = boost::make_shared<string>(element->str, element->len);
				}
				RedisReply iReply(strPtr);
				rReply.array.push_back(iReply);
			}
		}
		freeReplyObject(reply);
		return rReply;
	}

	inline redisContext *RedisClient::getRContext(){
		if(redisClusters_.size() == 0){
			return NULL;
		}
		
		if(redisClusters_.size() == 1){
			return redisClusters_[0];
		}

		if(rwSplit_){
			if(redisClusters_.size() == 2){
				return redisClusters_[1];
			} else {
				int index = rand()%(redisClusters_.size() - 1) + 1;
				return redisClusters_[index];
			}
		} else {
			int index = rand()%(redisClusters_.size());
			return redisClusters_[index];
		}
	}

	inline redisContext *RedisClient::getWContext(){
		if (redisClusters_.size()){
			return redisClusters_[0];
		}
		return NULL;
	}
};
};
