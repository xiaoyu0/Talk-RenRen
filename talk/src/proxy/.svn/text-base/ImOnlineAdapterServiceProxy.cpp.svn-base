/*
 * =====================================================================================
 *
 *       Filename:  ImOnlineAdapterServiceProxy.cpp
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
#include <sstream>
#include <string>
#include "ImOnlineAdapterServiceProxy.h"
#include "utils/MyLogger.h"
#include "Config.h"


using namespace std;
using namespace mtalk::utils;
using namespace com::xiaonei::wap::talk::imoa;

namespace mtalk{
	namespace proxy{

		ImOnlineAdapterServiceProxy::ImOnlineAdapterServiceProxy():
			SerialZKProxy<ImOnlineAdapterServicePrx>("ImOnlineAdapterService",ZK_IM_ONLINE_ADAPTER_PATH,1){
				LOG_DEBUG("ImOnlineAdapterServiceProxy::ImOnlineAdapterServiceProxy => Created");
            }
        void ImOnlineAdapterServiceProxy::online(long userId,bool isLongOnline){

            LOG_W(userId, "ImOnlineAdapterServiceProxy::online", -1, "");

#ifndef INTERNATIONAL  
			ReadLock lock(mutex_);
			ImOnlineAdapterServicePrx proxy = getProxy(userId);//取ImOnlineAdapterService的代理

			if(!proxy){
				LOG_ERROR("ImOnlineAdapterServiceProxy::online => get proxy failure : userId = " << userId <<" isLongOnline="<< isLongOnline);
				return; 
			}
			
			LOG_DEBUG("ImOnlineAdapterServiceProxy::online => userId = " << userId <<" isLongOnline="<< isLongOnline<< " getProxy success.");
			      	
			try{
				proxy->online(userId,isLongOnline);
				
			} catch (exception& e){
				LOG_ERROR("ImOnlineAdapterServiceProxy::online => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
				return;
			}catch(...){
				LOG_ERROR("ImOnlineAdapterServiceProxy::online => failure : proxy = " << proxy->ice_toString() << " exception = unknow exception"  ); 
				return;
			}

			LOG_DEBUG("ImOnlineAdapterServiceProxy::online => userId = " << userId <<" isLongOnline="<< isLongOnline << " interface function call success");
#endif
			return;

 		}
		
		
        void ImOnlineAdapterServiceProxy::offline(long userId,bool isDelLongOnline){

            LOG_W(userId, "ImOnlineAdapterServiceProxy::offline", -1, "");

#ifndef INTERNATIONAL  
			ReadLock lock(mutex_);
			ImOnlineAdapterServicePrx proxy = getProxy(userId);//取ImOnlineAdapterService的代理

			if(!proxy){
				LOG_ERROR("ImOnlineAdapterServiceProxy::offline => get proxy failure : userId = " << userId << " isDelLongOnline=" << isDelLongOnline);
				return;
			}
			
			LOG_DEBUG("ImOnlineAdapterServiceProxy::offline <<userId = " << userId << " isDelLongOnline=" << isDelLongOnline<< " getProxy success.");
			      	
			try{
				proxy->offline(userId,isDelLongOnline);
				
			} catch (exception& e){
				LOG_ERROR("ImOnlineAdapterServiceProxy::offline => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
				return;
			}catch(...){
				LOG_ERROR("ImOnlineAdapterServiceProxy::offline => failure : proxy = " << proxy->ice_toString() << " exception = unknow exception"  ); 
				return;
			}

			LOG_DEBUG("ImOnlineAdapterServiceProxy::offline => userId = " << userId << " isDelLongOnline=" << isDelLongOnline << " interface function call success");
#endif
			return;

 		}

       
};
};
