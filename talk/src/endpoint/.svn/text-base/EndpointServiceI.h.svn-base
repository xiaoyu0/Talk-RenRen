#ifndef TALK_ENDPOINT_ENDPOINT_SERVICE_I_H_
#define TALK_ENDPOINT_ENDPOINT_SERVICE_I_H_

#include <string>
#include <Ice/Ice.h>
#include "ice_src/EndpointService.h"

namespace mtalk{
namespace endpoint{

	class EndpointServiceI : public com::xiaonei::wap::talk::EndpointService{
	public :
		EndpointServiceI(){};

		virtual void deliverMsg(Ice::Long connectionId, const std::string& msg, const Ice::Current& current);

		virtual void pause(const Ice::Current& current);
		
		virtual void resume(const Ice::Current& current);

	private :
	};
};
};
#endif //TALK_ENDPOINT_ENDPOINT_SERVICE_I_H_
