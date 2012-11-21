/**
* @file OfflineMsgServiceProxy.h
* @brief	连接离线消息服务的代理
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-09-27
*/
#ifndef TALK_PROXY_OFFLINE_MSG_SERVICE_PROXY_H_
#define TALK_PROXY_OFFLINE_MSG_SERVICE_PROXY_H_

#include <string>
#include <vector>
#include "SimpleZKProxy.h"
#include "ice_src/OfflineMsgService.h"
#include "constant/MessageType.h"

namespace mtalk{
namespace proxy{

	class OfflineMsgServiceProxy :
		public SimpleZKProxy<com::xiaonei::wap::talk::offline::OfflineMsgServicePrx>{
	public :
		OfflineMsgServiceProxy();

		~OfflineMsgServiceProxy(){}

		/**
		* @brief	添加一条离线消息
		* 			需要自己包装好msg内容，离线消息服务本身不包含离线内容消息体的包装
		* 			包装主要包含在message节点添加offline='true'属性，添加time子节点
		*
		* @param	fromId
		* @param	toId
		* @param	msg
		* @param	msgType
		*
		* @return	
		*/
		bool addOfflineMsg(const long fromId, const long toId, const std::string& msg, const int  msgType , int supportToClientType =3);

		/**
		* @brief	获取指定用户的所有离线消息，返回所有离线消息message的合并结果
		* 			每次获取离线消息后，离线消息即被标志位已读，以后不会再取到了。
		*
		* @param	userId
		*
		* @return	
		*/
		void notifyPushOfflineMessage(const std::string sesssionId, const long userId, 
																int supportType = 0 , int ClientType = 0 ,const int limit = 300);
		
		//void deleteOfflineMessage(long msgKey,long userid,int clientType);
        // msgType: 1-官方,2-私信,3-官方+私信,4-群聊,5-系统消息
		void deleteOfflineMessage(long msgKey, long userId, int msgType);	        
	
		void addGroupOfflineMsg(long toId, std::string message);

	private :
	};
};
};
#endif //TALK_PROXY_OFFLINE_MSG_SERVICE_PROXY_H_
