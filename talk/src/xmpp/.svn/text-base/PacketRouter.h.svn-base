/**
* @file PacketRouter.h
* @brief	xmpp 内容的router interface
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_XMPP_PACKET_ROUTER_H_
#define TALK_XMPP_PACKET_ROUTER_H_

#include "boost/shared_ptr.hpp"
#include "talk/Session.h"
#include "ProcessResult.h"
#include "pugixml/pugixml.hpp"

namespace mtalk{
namespace xmpp{
	
	class PacketRouter{
	public :
		virtual ~PacketRouter(){};
		virtual ProcessResult route(mtalk::talk::SessionPtr sessionPtr, const pugi::xml_node& node) = 0;
	};
};
};
#endif //TALK_XMPP_PACKET_ROUTER_H_
