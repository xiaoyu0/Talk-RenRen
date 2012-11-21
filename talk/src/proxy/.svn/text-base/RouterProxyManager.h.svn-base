#ifndef ROUTER_MANAGER_PROXY_H_
#define ROUTER_MANAGER_PROXY_H_

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
#include "RouterProxy.h"

using namespace com::sixin::talk::router;
namespace mtalk{
namespace proxy{


	class RouterProxyManager: public mtalk::zk::ZKListener{

		public :

			RouterProxyManager();
			virtual ~RouterProxyManager(){}

			void initRouter();

//			bool initProxy(const std::string routerName, const std::vector<std::string>& serverlist);

//			bool forwardIq(std::string routerName, int id, std::string xmppString);
//
//			bool forwardPresence(std::string routerName, int id, std::string xmppString);
//
//			bool forwardMessage(std::string routerName, int id, std::string xmppString);
//
			std::string getRouterZKPath() const;

			bool getRouter(std::string routerName);

			//RouterServicePrx getProxy(std::string routerName, int fromId);

			void 	registerRouter(std::string routerName,std::string namePath);

			void	updateConfig(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr);
		private :
			mtalk::utils::WapIceChannel wapIceChannel_;

			boost::shared_mutex mutex; 

			std::string routerZKPath_;

			std::set<std::string> routerNameSet_;

			//std::map<std::string,std::vector<std::string> > serverListMap_;

			//std::map<std::string,std::vector<RouterServicePrx> > proxyMap_;

	//		bool isOneWay_;

 
	};

};
};
#endif	
