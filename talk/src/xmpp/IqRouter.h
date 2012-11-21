/**
* @file IqRouter.h
* @brief	iq消息的分发器
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-15
*/
#ifndef TALK_XMPP_IQ_ROUTER_H_
#define TALK_XMPP_IQ_ROUTER_H_

#include "PacketRouter.h"
#include "ProcessHandler.h"

namespace mtalk{
namespace xmpp{

	class IqRouter : public PacketRouter{
	public :
		IqRouter();
		ProcessResult route(mtalk::talk::SessionPtr sessionPtr, const pugi::xml_node& node);

	private :
		boost::shared_ptr<ProcessHandler> msgTypeHandlerPtr_;
	};
};
};
#endif //TALK_XMPP_IQ_ROUTER_H_
