/*
 * =====================================================================================
 *
 *       Filename:  ImOnlineAdapterServiceProxy.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年07月17日 
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  chenxi.hou@renren-inc.com 
 *        Company:  renren
 *
 * =====================================================================================
 */

#ifndef TALK_IM_ONLINE_ADAPTER_SERVICE_PROXY_H_
#define TALK_IM_ONLINE_ADAPTER_SERVICE_PROXY_H_


#include <string>
#include <vector>
#include "SerialZKProxy.h"
#include "ice_src/ImOnlineAdapterService.h"
#include "utils/MyLogger.h"


namespace mtalk{
	namespace proxy{

		class ImOnlineAdapterServiceProxy :
			public SerialZKProxy<com::xiaonei::wap::talk::imoa::ImOnlineAdapterServicePrx>{
				public :
					ImOnlineAdapterServiceProxy();		
				   ~ImOnlineAdapterServiceProxy(){}		

				void online(long userId,bool isLongOnline);

				void offline(long userId,bool isDelLongOnline);

			};
	};
};
#endif 
