/**
 * @file Router2TalkServer.h
 * @brief 从facebook到talk间的router.
 负责路由转发包给talk
 * @author guangyou.zhou@renren-inc.com
 * @version 1.0
 * @date 2012-08-06
 */
#ifndef ROUTER_TO_TALK_SERVER_H_
#define ROUTER_TO_TALK_SERVER_H_

#include <vector>
#include "UserManager.h"
#include "OnlineStatManager.h"

#include "constant/UserOnlineType.h"
#include "utils/Singleton.h"
#include "xmpp/ProcessResult.h"
#include "xmpp/XMPPProcessor.h"
#include "proxy/ProxyRegister.h"
#include "proxy/TalkServiceProxy.h"
#include "utils/MyLock.h"
#include "constant/MessageType.h"
#include "c-client-src/zookeeper.h"
#include "zk/ZKManager.h"
#include "bosh/Message.h"
#include "proxy/TalkServiceProxy.h"
#include "proxy/OfflineMsgServiceProxy.h"
#include "proxy/ShortUrlServiceProxy.h"
#include "proxy/HistoryServiceProxy.h"
#include "zk/ZKListener.h"
#include "SessionManager.h"
#include "pugixml/pugixml.hpp"
#include "xmpp/JID.h"

namespace mtalk{
	namespace talk{

		class Router2TalkServer{
			public :
				Router2TalkServer();

				int forwardIq(const std::string& xmppString);


				int forwardPresence(const std::string& xmppString);


				int forwardMessage(const std::string& xmppString);


			private:
				static   int   packet_count;

		};


	};


};


#endif
