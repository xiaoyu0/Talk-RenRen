#ifndef TALK_REDIS_REDIS_REPLY_H_
#define TALK_REDIS_REDIS_REPLY_H_

#include <string>
#include <vector>

namespace mtalk{
namespace redis{

	class RedisReplyType{
	public :
		typedef enum{
			string = 1,
			array = 2,
			integer = 3,
			nil = 4,
			status = 5,
			error = 6
		} Type;
	};

	struct RedisReply{
		RedisReply(RedisReplyType::Type t = RedisReplyType::status) :
			type(t){
		}
		RedisReply(long long nu) :
			type(RedisReplyType::integer),
			integer(nu){
		}
		RedisReply(boost::shared_ptr<std::string> s) :
			type(RedisReplyType::string),
			str(s){
			if(!s){
				type = RedisReplyType::nil;
			}
		}
		RedisReply(RedisReplyType::Type t, boost::shared_ptr<std::string> s) :
			type(t),
			str(s){
		}
		RedisReplyType::Type type;
		long long integer;
		boost::shared_ptr<std::string> str;
		std::vector<RedisReply> array;
	};
};
};
#endif //TALK_REDIS_REDIS_REPLY_H_
