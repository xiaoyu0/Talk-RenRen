#include "TalkSessionListener.h"
#include "TalkServer.h"
#include "bosh/BoshSession.h"
 #include  "utils/TimeUtils.h"
#include    "utils/MyLogger.h"

using namespace mtalk::utils;
namespace mtalk{
	namespace talk{
		void TalkSessionListener::sessionCreated(boost::shared_ptr<talk::Session> sessionPtr, const pugi::xml_node& body){
			MY_INSTANCE(TalkServer).bind(sessionPtr);
		}

	void TalkSessionListener::sessionClosed(boost::shared_ptr<talk::Session> sessionPtr){
			
		LOG_DEBUG("TalkSessionListener::sessionClosed");
		MY_INSTANCE(TalkServer).unbind(sessionPtr);
	}

	void TalkSessionListener::messageSent(long userId, std::vector<MsgNodePtr> nodes, int clientType){
		for(size_t i = 0; i < nodes.size(); ++i){
			MY_INSTANCE(TalkServer).NotifyMessageSent(userId, nodes[i]->mid ,clientType);
		}
	}
};
};
