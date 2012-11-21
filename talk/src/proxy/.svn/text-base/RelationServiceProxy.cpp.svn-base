#include <sstream>
#include "utils/MyLogger.h"
#include "utils/TimeUtils.h"
#include "RelationServiceProxy.h"
#include "Config.h"

using namespace std;
using namespace mtalk::utils;
using namespace com::renren::sixin::account;

namespace mtalk{
	namespace proxy{


		RelationServiceProxy::RelationServiceProxy():
                     SimpleZKProxy<RelationServicePrx>("RelationService",ZK_RELATION_PATH,false,500)
		{

			LOG_DEBUG("RelationServiceProxy::RelationServiceProxy => Created.");

			counterPtr = boost::shared_ptr<IceExceptionCounter>(new IceExceptionCounter("RelationServiceProxy.cpp"));
		}	



		int  RelationServiceProxy::isBlocked(long hostId, long  associateId)
		{
	//		if(counterPtr->isSafeMode()) {
	//			LOG_DEBUG("RelationServiceProxy::getProxy => get proxy with safe mode(always is -1) : hostId= " << hostId);
	//			return -1;
	//		}
			::com::renren::sixin::account::BoolResultPtr   result;
			MilliTimer tStart;
			ReadLock lock(mutex_);
			size_t pHostId = size_t(hostId) ;
			RelationServicePrx  proxy = getProxy(pHostId);
			if(!proxy){
				LOG_ERROR("RelationServiceProxy::getProxy => get proxy failure : hostId= " << hostId);
				return -1;
			}

			try{
				result = proxy->isBlocked(hostId,associateId);

      			        if(!(result->boolValue))   //the vector is empty, not exists.
				{
			
				    LOG_DEBUG("RelationServiceProxy::isBlocked => UserId: "<<associateId<<" is not in the blacklist of UserId= "<<hostId);
				    return  0;
				}	
			        
			
				LOG_TIME("RelationServiceProxy::isBlocked blacklist exist, hostId= "<<hostId<<"| use: " << tStart.elapsed() );
			
				return 1;
			} catch (Ice::Exception& e){
				counterPtr->increase(e);
				LOG_ERROR("RelationServiceProxy::isBlocked => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
				return  -1;

			} catch (std::exception& e){
				LOG_ERROR("RelationServiceProxy::isBlocked => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
				return  -1;
			} catch(...){
				LOG_ERROR("RelationServiceProxy::isBlocked => failure : proxy = " << proxy->ice_toString() << " exception = unknow exception"); 
				return  -1;
			}

		}


	};
};



