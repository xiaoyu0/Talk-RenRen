#include "SessionManagerListener.h"
#include "SessionManager.h"
#include "talk/Session.h"

namespace mtalk{
namespace talk{
	SessionManagerListener::SessionManagerListener(boost::shared_ptr<SessionManager> SessionManagerPtr) :
		SessionManagerPtr_(SessionManagerPtr){
	}
	void SessionManagerListener::sessionClosed(boost::shared_ptr<mtalk::talk::Session> sessionPtr){
		LOG_DEBUG("SessionManagerListener::sessionClosed");
		SessionManagerPtr_->delSession(sessionPtr->getSessionId());
	}
};
};
