/**
* @file TalkSessionListener.h
* @brief	监听session创建和销毁事件，完成session和用户id的绑定与解绑
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK__TALK_SESSION_LISTENER_H_
#define TALK__TALK_SESSION_LISTENER_H_

#include "SessionListener.h"

namespace mtalk{
namespace talk{

	class TalkSessionListener : public talk::SessionListener{
	public :
		~TalkSessionListener(){};
		
		void sessionCreated(boost::shared_ptr<Session> sessionPtr, const pugi::xml_node& body);

		void sessionClosed(boost::shared_ptr<Session> sessionPtr);

		void messageSent(long userId, std::vector<MsgNodePtr> nodes, int clientType = 3);
	private :
	};
	};
};
#endif //TALK__TALK_SESSION_LISTENER_H_
