#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include "RouterProxyManager.h"
#include "utils/MyLogger.h"
#include "talk/TalkServer.h"
#include "Config.h"
#include "utils/TimeUtils.h"
#include <boost/shared_ptr.hpp>
#include "RouterProxy.h"
#include "ProxyRegister.h"


using namespace std;
using namespace boost::algorithm;
using namespace mtalk::utils;
using namespace mtalk::zk;
using namespace mtalk::talk;
using namespace mtalk::proxy;

namespace mtalk{
namespace proxy{

	RouterProxyManager::RouterProxyManager():
		routerZKPath_(ZK_ROUTER_PATH){

			LOG_INFO("RouterProxyManager::RouterProxyManager=> Created");
	}

	void RouterProxyManager::initRouter(){

	}


	string RouterProxyManager::getRouterZKPath() const{

		return routerZKPath_;

	}

	bool RouterProxyManager::getRouter(string routerName){

		if(routerNameSet_.empty()){
			return false;
		}	
		set<string>::iterator it=routerNameSet_.begin();
		for(;it!=routerNameSet_.end();it++){

			if((*it)==routerName){
				return true;
			}

		}

		return false;

	}

	void RouterProxyManager::registerRouter(string routerName, string namePath){

		WriteLock lock(mutex);

		{
			routerNameSet_.insert(routerName);
		}

		LOG_INFO("RouterProxyManager::init => init ServiceProxy: "<<routerName);

		string serverName =routerName;

		string proxyname =routerName.append("ServiceProxy");

		boost::shared_ptr<RouterServiceProxy> routerServiceProxyPtr(new RouterServiceProxy(serverName,namePath));

		MY_INSTANCE(ProxyRegister).registerProxy(proxyname, routerServiceProxyPtr); 

		MY_INSTANCE(TalkServer).getZKManager()->addListener(namePath,routerServiceProxyPtr);

		//cout<<"add ok!"<<endl;

	}


	void  RouterProxyManager::updateConfig(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr){
		

		//std::cout<<0<<std::endl;

		LOG_DEBUG("RouterProxyManagerProxy::updateConfig: router" );

		std::vector<std::string> routerNameList;

		if(!zkManagerPtr->getChildren(routerZKPath_, routerNameList)){

			LOG_ERROR("RouterProxyManagerProxy::updateZKProxy => get routerName failure : path = " << routerZKPath_);

			initRouter();

			return;
		}   

		if(routerNameList.empty()){

			LOG_ERROR("RouterProxyManager::updateZKProxy => the children of router is empty,path= "<<routerZKPath_ );

			return;

		}
		for(size_t i = 0; i < routerNameList.size(); ++i){


			//已经存在router
			if(routerNameSet_.count(routerNameList[i])>0){

				//continue;

			} 


			string routername = routerNameList[i];
			string routerNamePath(routerZKPath_);

			routerNamePath.append("/");

			routerNamePath=routerNamePath+routerNameList[i];

			LOG_DEBUG("RouterProxyManagerProxy::updateZKProxy => registerRouter  begin : routerpathname = " << routerNamePath);

			registerRouter(routername,routerNamePath);

		}
	}
};
};
