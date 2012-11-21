#include "EndpointServiceI.h"
#include "EndpointServer.h"
#include "utils/MyLogger.h"
#include "utils/TimeUtils.h"

using namespace mtalk::utils;

namespace mtalk{
namespace endpoint{

	void EndpointServiceI::deliverMsg(Ice::Long connectionId, const std::string& msg, const Ice::Current& current){
		MilliTimer tStart;			
		LOG_DEBUG("EndpointServiceI::deliverMsg => msg send request : connectionId = " << connectionId << " msg = " << msg);
		MY_INSTANCE(EndpointServer).deliverMsg(connectionId, msg);
//		LOG_TIME("EndpointServiceI::deliverMsg|" << tStart.elapsed() );				
	}

	void EndpointServiceI::pause(const Ice::Current& current){
		MilliTimer tStart;			
		LOG_INFO("EndpointServiceI::pause => pause action");
		MY_INSTANCE(EndpointServer).pause();
//		LOG_TIME("EndpointServiceI::pause|" << tStart.elapsed() );				
	}

	void EndpointServiceI::resume(const Ice::Current& current){
		MilliTimer tStart;			
		LOG_INFO("EndpointServiceI::resume => resume action");
		MY_INSTANCE(EndpointServer).resume();
//		LOG_TIME("EndpointServiceI::resume|" << tStart.elapsed() );				
	}
};
};
