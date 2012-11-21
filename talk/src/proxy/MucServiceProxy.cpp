/*
 * =====================================================================================
 *
 *       Filename:  MucServiceProxy.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年05月18日 
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  yuanyanbin 
 *        Company:  renren
 *
 * =====================================================================================
 */
#include <sstream>
#include <string>
#include "MucServiceProxy.h"
#include "utils/MyLogger.h"
#include "Config.h"


using namespace std;
using namespace mtalk::utils;
using namespace com::xiaonei::wap::muc;

namespace mtalk{
	namespace proxy{

		MucServiceProxy::MucServiceProxy():
			SerialZKProxy<MucServicePrx>("MucService",ZK_MUC_PATH,1){
				LOG_DEBUG("MucServiceProxy::MucServiceProxy => Created");
            }

        bool MucServiceProxy::forwardMessage(long toId, const ::std::string& sessionId, const ::std::string& msg){
			LOG_W(toId, "MucServiceProxy::forwardMessage", -1, msg);
				string message = msg;
		    	ReadLock lock(mutex_);
		    	MucServicePrx proxy = getProxy(toId);//取muc的代理
		    	if(!proxy){
				LOG_ERROR("MucServiceProxy::forwardMessagemessage => get proxy failure : toId = " << toId << " toId = " << toId);
				return false;
		     	}
		    	LOG_DEBUG("MucServiceProxy::forwardMessage <<message = " << message);
			      	
			try{
				proxy->forwardMessage(sessionId, msg);
				
			} catch (exception& e){
				LOG_ERROR("MucServiceProxy::forwardMessage => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
				return false;
			}catch(...){
				LOG_ERROR("MucServiceProxy::forwardMessage => failure : proxy = " << proxy->ice_toString() << " exception = unknow exception"  ); 
				return false;
			}

			LOG_DEBUG("MucServiceProxy::forwardMessage => message = " << toId << " message = " << message );
			return true;

 		}

        bool MucServiceProxy::forwardIq(long toId, const ::std::string& sessionId, const ::std::string& msg){
			LOG_W(toId, "MucServiceProxy::forwardIq", -1, msg);
				string message = msg;
		    	ReadLock lock(mutex_);
		    	MucServicePrx proxy = getProxy(toId);//取muc的代理
		    	if(!proxy){
				LOG_ERROR("MucServiceProxy::forwardIq => get proxy failure : toId = " << toId << " toId = " << toId);
				return false;
		     	}
		    	LOG_DEBUG("MucServiceProxy::forwardIq <<message = " << message);
			      	
			try{
				proxy->forwardIq(sessionId, msg);
				
			} catch (exception& e){
				LOG_ERROR("MucServiceProxy::forwardIq => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
				return false;
			}catch(...){
				LOG_ERROR("MucServiceProxy::forwardIq => failure : proxy = " << proxy->ice_toString() << " exception = unknow exception"  ); 
				return false;
			}

			LOG_DEBUG("MucServiceProxy::forwardIq => message = " << toId << " message = " << message );
			return true;
      }

      bool MucServiceProxy::forwardPresence(long toId, const ::std::string& sessionId, const ::std::string& msg){
			LOG_W(toId, "MucServiceProxy::forwardPresence", -1, msg);

				string message = msg;
		    	ReadLock lock(mutex_);
		    	MucServicePrx proxy = getProxy(toId);//取muc的代理
		    	if(!proxy){
				LOG_ERROR("MucServiceProxy::forwardPresence=> get proxy failure : toId = " << toId << " toId = " << toId);
				return false;
		     	}
		    	LOG_DEBUG("MucServiceProxy::forwardPresence <<message = " << message);
			      	
			try{
				proxy->forwardPresence(sessionId, msg);
				
			} catch (exception& e){
				LOG_ERROR("MucServiceProxy::forwardPresence => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
				return false;
			}catch(...){
				LOG_ERROR("MucServiceProxy::forwardPresence => failure : proxy = " << proxy->ice_toString() << " exception = unknow exception"  ); 
				return false;
			}

			LOG_DEBUG("MucServiceProxy::forwardPresence => message = " << toId << " message = " << message );
			return true;
      } 
			
	};
};
