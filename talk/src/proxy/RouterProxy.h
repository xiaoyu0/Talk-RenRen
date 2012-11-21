
#ifndef ROUTER_PROXY_H_
#define ROUTER_PROXY_H_

#include <string>
#include <vector>
#include <set>
#include <boost/shared_ptr.hpp>
#include <boost/lexical_cast.hpp>
#include "zk/ZKListener.h"
#include "WapIceProxy.h"
#include "utils/MyLogger.h"
#include "Proxy.h"
#include "utils/WapIceChannel.h"
#include "ice_src/Router.h"
#include "Config.h"
#include <boost/shared_ptr.hpp>
#include "SerialZKProxy.h"

using namespace com::sixin::talk::router;
namespace mtalk{
namespace proxy{


	class RouterServiceProxy :
		public SerialZKProxy<com::sixin::talk::router::RouterServicePrx>{
			public :
				RouterServiceProxy(std::string proxyName, std::string routerPath);		

				~RouterServiceProxy(){}		
				//转发各类消息类型的消息
				bool forwardIq(long from, long to ,std::string xmppString);

				bool forwardPresence(long from,long to, std::string xmppString);

				bool forwardMessage(long from, long to,std::string xmppString);


			private :
		};
};
};
#endif 









