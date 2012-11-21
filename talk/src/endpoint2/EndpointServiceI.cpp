#include "EndpointServiceI.h"
#include "EndpointServer2.h"
#include "utils/MyLogger.h"

using namespace mtalk::utils;

namespace mtalk{
namespace endpoint2{

	void EndpointServiceI::deliverMsg(Ice::Long connectionId, const std::string& msg,  const Ice::Current& current){
		LOG_DEBUG("EndpointServiceI::deliverMsg => msg send request : connectionId = " << connectionId << " msg = " << msg);
		MY_INSTANCE(EndpointServer2).deliverMsg(connectionId, msg);
	}

	void EndpointServiceI::pause(const Ice::Current& current){
		LOG_INFO("EndpointServiceI::pause => pause action");
		MY_INSTANCE(EndpointServer2).pause();
	}

	void EndpointServiceI::resume(const Ice::Current& current){
		LOG_INFO("EndpointServiceI::resume => resume action");
		MY_INSTANCE(EndpointServer2).resume();
	}
};
};
