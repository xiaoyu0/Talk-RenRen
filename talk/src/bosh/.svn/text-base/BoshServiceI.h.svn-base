#ifndef TALK_TALK_SERVER_I_H_
#define TALK_TALK_SERVER_I_H_

#include <Ice/Ice.h>
#include "ice_src/BoshService.h"

namespace mtalk{
namespace bosh{

	class BoshServiceI : public com::xiaonei::wap::talk::BoshService{
	public :
		BoshServiceI(){};

		~BoshServiceI(){};

		virtual com::xiaonei::wap::talk::Result createSession(Ice::Long connectionId, const std::string& msg, const Ice::Current& current);

		virtual com::xiaonei::wap::talk::Result updateSession(Ice::Long connectionId, const std::string& msg, const Ice::Current& current);
		
		virtual com::xiaonei::wap::talk::Result sendMessage(Ice::Long connectionId, const std::string& msg, const Ice::Current& current);

		virtual std::string getVersionAndHost(const Ice::Current& current);
		
	private :
	};
};
};
#endif //TALK_TALK_SERVER_I_H_
