/*
 * =====================================================================================
 *
 *       Filename:  MucServiceProxy.h
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

#ifndef TALK_MUC_SERVICE_PROXY_H_
#define TALK_MUC_SERVICE_PROXY_H_


#include <string>
#include <vector>
#include "SerialZKProxy.h"
#include "ice_src/MucService.h"
#include "utils/MyLogger.h"


namespace mtalk{
	namespace proxy{

		class MucServiceProxy :
			public SerialZKProxy<com::xiaonei::wap::muc::MucServicePrx>{
				public :
				   MucServiceProxy();		
				   ~MucServiceProxy(){}		

					/**
					 * @brief   forward message
					 *
					 * @param   toId sessionId  msg
					 */

                bool forwardMessage(long toId, const ::std::string& sessionId, const ::std::string& msg);

                bool forwardIq(long toId, const ::std::string& sessionId, const ::std::string& msg);

                bool forwardPresence(long toId, const ::std::string& sessionId, const ::std::string& msg);

				private :
			};
	};
};
#endif 
