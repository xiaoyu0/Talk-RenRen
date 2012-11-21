/**
* @file UserBuffer.h
* @brief	一个用户的session绑定信息对象
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_TALK_USER_BUFFER_H_
#define TALK_TALK_USER_BUFFER_H_

#include <string>
#include <list>
#include <map>
#include  <vector>
#include <boost/shared_ptr.hpp>
#include "Session.h"
#include "SessionManager.h"
#include "utils/MyLock.h"

namespace mtalk{
namespace talk{

	class UserBuffer{
	public :
		UserBuffer(long userId);

		~UserBuffer();

		/**
		* @brief	添加一个sessionId
		*
		* @param	sessionId
		*
		* @return	
		*/
		void addSession(const std::string& sessionId);
		/**
		* @brief	添加一个私信3.0的一个sessionId
		*
		* @param	sessionId
		*
		* @return	
		*/

		void addNewSession(const std::string& sessionId);

		/**
		* @brief	添加一个sessionPtr
		*
		* @param	sessionPtr
		*
		* @return	
		*/


		std::string addSession(const SessionPtr sessionPtr);

		
		void clearNewSession();
		/**
		* @brief	获取用户的所有接入的session id
		*
		* @return	
		*/
		std::list<std::string> getNewSessionIdList();
		std::list<std::string> getSessionIdList();

		/**
		* @brief	清除用户的一个client buffer
		* 			如果是最后一个client buffer 返回true 否则返回 false
		*
		* @param	sessionid
		*
		* @return	
		*/
		bool clear(const SessionPtr sessionPtr);

		/**
		* @brief addType  用户new session,在线类型加入进来, 在UserManager::bind中调用
		*
		* @param type
		*/
		void addType(int type);

		/**
		* @brief delType  用户 session 结束时在UserBuffer中删除对应的在线类型
		*				  
		* @param type
		*
		* @return 		 如果删除后这种在线type数为0了,返回true, 否则返回false
		*/
		bool delType(int type);
		/**
		 *im推送来的离线消息进map，同时
		 *从自己离线系统的消息也进map
		 *通过map的有序来进行排序
		 **/ 
		void   sendToOfflineMessageMap(long time , std::string msg);
		std::vector<std::string> getOfflineMessageSequence();

		/**
		* @brief hasOnlineType 判断当前userBuffer中onlineTypeMap_是不是空的,即是不是有任何移动终端连接 
		*
		* @return 
		*/
		bool hasOnlineType();

		bool hasOnlineType(int type);

	private :
		long userId_;
		std::list<std::string> sessionList_;//私信3.0前所有的session
		std::list<std::string> sessionNewList_;//私信3.0的session
		//存储user的在线类型以及这个类型的个数(以防一个user多个相同的终端类型同时在)	
		std::map<int, int> onlineTypeMap_;
		//离线消息队列
		std::multimap<long , std::string> offlineMessageMap_;
		boost::shared_mutex offlineMessageMapMutex_;
	};

};
};
#endif //TALK_TALK_USER_BUFFER_H_
