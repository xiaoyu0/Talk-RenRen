
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include "RouterProxy.h"
#include "utils/MyLogger.h"
#include "Config.h"
#include "utils/TimeUtils.h"
#include <boost/shared_ptr.hpp>

using namespace std;
using namespace boost::algorithm;
using namespace mtalk::utils;
using namespace mtalk::zk;
using namespace mtalk::proxy;

namespace mtalk{
namespace proxy{
	RouterServiceProxy::RouterServiceProxy(string serviceName, string routerPath):
		SerialZKProxy<RouterServicePrx>(serviceName,routerPath, 1){
			//std::cout<<serviceName<<std::endl;
			LOG_DEBUG("RouterServiceProxy::RouterServiceProxy => Created,Name = " << serviceName);
		}

	bool RouterServiceProxy::forwardIq(long from,long to, string xmppString){

		ReadLock lock(mutex_);
		RouterServicePrx proxy =getProxy(from);
		if(!proxy){
			LOG_ERROR("RouterProxy::forwardIq => get proxy failure");
			return false;
		}   
		LOG_DEBUG("RouterProxyManager::forwardIq begin<<message = " << xmppString);

		try{

			proxy->forwardIq(xmppString);

		} catch (exception& e){ 
			LOG_ERROR("RouterProxy::forwardIq => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
			return false;
		}catch(...){
			LOG_ERROR("RouterProxy::forwardIq => failure : proxy = " << proxy->ice_toString() << " exception = unknow exception"  );
			return false;
		}

		LOG_DEBUG("RouterProxy::forwardIq end=> message = " << xmppString );

		return true;

	}

	bool RouterServiceProxy::forwardPresence(long from,long to, string xmppString){

		ReadLock lock(mutex_);
		RouterServicePrx proxy =getProxy(from);
		if(!proxy){
			LOG_ERROR("RouterProxy::forwardPresence => get proxy failure");
			return false;
		}   
		LOG_DEBUG("RouterProxyManager::forwardPresence begin <<message = " << xmppString);

		try{
			proxy->forwardPresence(xmppString);

		} catch (exception& e){ 
			LOG_ERROR("RouterProxy::forwardPresence => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
			return false;
		}catch(...){
			LOG_ERROR("RouterProxy::forwardPresence => failure : proxy = " << proxy->ice_toString() << " exception = unknow exception"  );
			return false;
		}

		LOG_DEBUG("RouterProxy::forwardPresence end=> message = " << xmppString );

		return true;

	}

	bool RouterServiceProxy::forwardMessage(long from,long to, string xmppString){

		ReadLock lock(mutex_);
		RouterServicePrx proxy = getProxy(from);
		if(!proxy){
			LOG_ERROR("RouterProxy::forwardMessage => get proxy failure");
			return false;
		}   

		LOG_DEBUG("RouterProxyManager::forwardMessage begin<<message = " << xmppString);

		try{

			proxy->forwardMessage(xmppString);

		} catch (exception& e){ 

			LOG_ERROR("RouterProxy::forwardMessage => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 

			return false;

		}catch(...){
			LOG_ERROR("RouterProxy::forwardMessage => failure : proxy = " << proxy->ice_toString() << " exception = unknow exception"  );
			return false;
		}

		LOG_DEBUG("RouterProxy::forwardMessage end=> message = " << xmppString );

		return true;

	}

};
};

