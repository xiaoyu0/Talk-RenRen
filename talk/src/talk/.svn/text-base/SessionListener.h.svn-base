/**
* @file SessionListener.h
* @brief	session listener 监听session的多种事件
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-08-03
*/
#ifndef TALK_TALK_SESSION_LISTENER_H_
#define TALK_TALK_SESSION_LISTENER_H_

#include <vector>
#include <boost/shared_ptr.hpp>
#include "pugixml/pugixml.hpp"
#include "MsgNode.h"

namespace mtalk{
namespace talk{

	class Session;
typedef boost::shared_ptr<Session> SessionPtr;
	class SessionListener{
	public :
		virtual ~SessionListener(){};

		/**
		* @brief	session创建完成的时候调用
		*
		* @param	sessionPtr
		*@param	body
		*/
		virtual void sessionCreated(SessionPtr sessionPtr, const pugi::xml_node& body) = 0;

		/**
		* @brief	session close方法执行完的时候调用
		*
		* @param	sessionPtr
		*/
		virtual void sessionClosed(SessionPtr sessionPtr) = 0;

		/**
		* @brief	session确认一条消息发送成功的时候调用
		*
		* @param	userId
		* @param	nodes
		*/
		virtual void messageSent(long userId, std::vector<MsgNodePtr> nodes , int clientType = 3) = 0;

	private :
	};
};
};
#endif //TALK_TALK_SESSION_LISTENER_H_
