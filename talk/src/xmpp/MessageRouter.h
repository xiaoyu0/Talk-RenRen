/**
* @file MessageRouter.h
* @brief	message消息的分发器
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-15
*/
#ifndef TALK_XMPP_MESSAGE_ROUTER_H_
#define TALK_XMPP_MESSAGE_ROUTER_H_

#include <boost/shared_ptr.hpp>
#include "PacketRouter.h"
#include "ProcessHandler.h"
#include "imAdapter/IMGateForPhoneAdapter.h"
#include "protocolChanger/ProtocolChanger.h"

namespace mtalk{
namespace xmpp{
	
	class MessageRouter : public PacketRouter{
	public :
		MessageRouter(boost::shared_ptr<mtalk::im::IMGateForPhoneAdapter> imGateForPhoneAdapterPtr);
		~MessageRouter(){};
		ProcessResult route(mtalk::talk::SessionPtr sessionPtr, const pugi::xml_node& node);
	private :
		boost::shared_ptr<ProcessHandler> chatHandlerPtr_;
		protocolChang::ProtocolChanger  changer;
	};
};
};
#endif //TALK_XMPP_MESSAGE_ROUTER_H_
