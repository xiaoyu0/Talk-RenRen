/**
* @file PresenceRouter.h
* @brief	presence 消息的分发
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-15
*/
#ifndef TALK_XMPP_PRESENCE_ROUTER_H_
#define TALK_XMPP_PRESENCE_ROUTER_H_

#include "PacketRouter.h"
#include "ProcessHandler.h"

namespace mtalk{
namespace xmpp{

	class PresenceRouter : public PacketRouter{
	public :
		PresenceRouter();
		ProcessResult route(mtalk::talk::SessionPtr sessionPtr, const pugi::xml_node& node);

	private :
		boost::shared_ptr<ProcessHandler> offlineHandlerPtr_;
	};
};
};
#endif //TALK_XMPP_PRESENCE_ROUTER_H_
