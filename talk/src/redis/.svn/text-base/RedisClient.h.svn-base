/**
* @file RedisClient.h
* @brief	redis client 支持主从读写分离
* @author zhou you, Email : you.zhou@renren-inc.com
* @version 1.0
* @date 2012-02-28
*/
#ifndef TALK_REDIS_REDIS_CLIENT_H_
#define TALK_REDIS_REDIS_CLIENT_H_

#include <string>
#include <vector>
#include <map>
#include <boost/shared_ptr.hpp>
#include <hiredis/hiredis.h>
#include "redis/RedisReply.h"


namespace mtalk{
namespace redis{

	/**
	* @brief	redis client 支持主从读写分离，基于hiredis
	*/
	class RedisClient{
	public :
		RedisClient();

		/**
		* @brief	使用地址addr创建client
		*
		* @param	addrs 地址中第一个为主服务：addrs = masterIp:masterPort,ip:port,...
		*/
		RedisClient(const std::string& addrs);

		~RedisClient();

		/**
		* @brief	使用构造函数中设置的addrs链接redis服务器
		*
		* @return	
		*/
		bool connect();
		/**
		* @brief	使用指定地址addrs链接redis服务器
		*
		* @param	addrs 地址中第一个为主服务：addrs = masterIp:masterPort,ip:port,...
		*
		* @return	
		*/
		bool connect(const std::string& addrs);

		/**
		* @brief	断开到redis服务的链接
		*
		* @return	
		*/
		bool disconnect();

		/**
		* @brief	设置是否主从读写分离，如果主从分离则写操作只在主节点上，读操作只随机在后续的从节点上。如果主从不分离则写操作只在主节点上，读操作在随机在主节点和从节点上。
		*
		* @param	split true：表示分离；false：表示不分离
		*/
		void setRWSplit(bool split);

		bool getRWSplit() const;

		void setIndex(const int index);

		int getIndex() const;

		/**
		* @brief	设置一个key的value值
		*
		* @param	key
		* @param	value
		*
		* @return	
		*/
		RedisReply set(const std::string& key, const std::string& value);

		/**
		* @brief	设置的一个key的value和到期
		*
		* @param	key
		* @param	value
		* @param	seconds
		*
		* @return	
		*/
		RedisReply setex(const std::string& key, const std::string& value, int seconds);

		/**
		* @brief	获取key的value, key不存在返回空指针
		*
		* @param	key
		*
		* @return	
		*/
		RedisReply get(const std::string& key);

		/**
		* @brief	获取所有key的值,如果某个key不存在则结果中该位为空指针
		*
		* @param	keys
		*
		* @return	
		*/
		RedisReply mget(const std::vector<std::string>& keys);

		/**
		* @brief	删除一个key
		*
		* @param	key
		*
		* @return	
		*/
		RedisReply del(const std::string& key);

		/**
		* @brief	设置hash map中field和value
		*
		* @param	key
		* @param	field
		* @param	value
		*
		* @return	
		*/
		RedisReply hset(const std::string& key, const std::string& field, const std::string& value);

		/**
		* @brief	从hash map中读取全部的field和value
		*
		* @param	key
		*
		* @return	
		*/
		RedisReply hgetall(const std::string& key);

		RedisReply sadd(const std::string& key, const std::string& value);

		RedisReply srem(const std::string& key, const std::string& value);

		RedisReply smembers(const std::string& key);

	private :

		inline redisContext *getRContext();

		inline redisContext *getWContext();

		std::vector<redisContext *> redisClusters_;

		std::string addrs_;

		int index_;
		
		bool rwSplit_;
	};
};
};

#endif //TALK_REDIS_REDIS_CLIENT_H_
