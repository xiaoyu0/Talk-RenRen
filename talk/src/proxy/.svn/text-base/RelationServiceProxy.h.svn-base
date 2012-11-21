/***************************************
 * purpose: 提供判断是否在黑名单的proxy
 * author: guangyou.zhou@renren-inc.com
 ****************************************/
#ifndef RELATION_SERVICE_PROXY_H_
#define RELATION_SERVICE_PROXY_H_

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
#include "ice_src/relationService.h"
#include "Config.h"
#include <boost/shared_ptr.hpp>
#include "SerialZKProxy.h"
#include "SimpleZKProxy.h"
#include "IceExceptionCounter.h"

using namespace std;

namespace mtalk{
	namespace proxy{

		class RelationServiceProxy :
			public SimpleZKProxy<com::renren::sixin::account::RelationServicePrx>{
				public:
					RelationServiceProxy();		

					~RelationServiceProxy(){}	
                                      
					 /**
					 * 判断用户associateId是否在用户hostId的黑名单中
					 *param: hostId
					 *param: associateId
					 *return int 
					         在黑名单中返回1, 不在黑名单中返回0，异常返回-1. 
					 */ 
					int  isBlocked(long hostId, long  associateId);
				private:
					boost::shared_ptr<IceExceptionCounter> counterPtr;
			};
	};
};


#endif
