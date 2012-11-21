#include "OfflinePresenceProcessHandler.h"
#include "constant/MessageType.h"
#include    "utils/MyLogger.h"
#include  <iostream>

using namespace mtalk::utils;
namespace mtalk{
	namespace xmpp{
		ProcessResult OfflinePresenceProcessHandler::handler(mtalk::talk::SessionPtr sessionPtr, const pugi::xml_node& node){
			if(strcmp(node.attribute("type").value(), "unavailable") == 0) {
				LOG_TRACE_ACTION(" sessionCloseByClient"<<" | "<<sessionPtr->getUserId()<<" | "<<sessionPtr->getSessionId()<<" | "<<sessionPtr->getCAppId()<<" | "<<"000000");
				sessionPtr->close();
				ProcessResult result(ProcessResult::SESSION_CLOSE);
				return result;
			}

			if(	strcmp(node.attribute("type").value(), "background") == 0 ){
				sessionPtr->delSupportType(mtalk::constant::MessageType::PRESENCE);
				sessionPtr->setBackGround();
				ProcessResult result;
				return result;
			}

			if(	strcmp(node.attribute("type").value(), "foreground") ==0 ){
				sessionPtr->addSupportType(mtalk::constant::MessageType::PRESENCE);
				sessionPtr->setForeGround();
				ProcessResult result;
				return result;
			}
			ProcessResult result;
			return result;

		}
		};
	};
