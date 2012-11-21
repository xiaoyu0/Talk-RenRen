#ifndef TALK_TALK_SESSION_MANAGER_LISTENER_H_
#define TALK_TALK_SESSION_MANAGER_LISTENER_H_

#include "talk/SessionListener.h"

namespace mtalk{
namespace talk{

	class Session;

	class SessionManager;

	class SessionManagerListener : public talk::SessionListener{
	public :
		SessionManagerListener(boost::shared_ptr<SessionManager> SessionManagerPtr);
		~SessionManagerListener(){};
		
		void sessionCreated(boost::shared_ptr<mtalk::talk::Session> sessionPtr, const pugi::xml_node& body){};

		void sessionClosed(boost::shared_ptr<mtalk::talk::Session> sessionPtr);
		
		void messageSent(long userId, std::vector<mtalk::talk::MsgNodePtr> nodes , int clientType = 3){};

	private :
		boost::shared_ptr<SessionManager> SessionManagerPtr_;
	};

};
};
#endif //TALK_TALK_SESSION_MANAGER_LISTENER_H_
