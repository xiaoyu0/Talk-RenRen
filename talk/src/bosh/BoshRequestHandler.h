#ifndef TALK_BOSH_BOSH_REQUEST_HANDLER_H_
#define TALK_BOSH_BOSH_REQUEST_HANDLER_H_

#include <boost/shared_ptr.hpp>
#include "BoshSession.h"
#include "talk/Session.h"
#include "talk/Session.h"
#include "ice_src/Utils.h"
#include "pugixml/pugixml.hpp"

namespace mtalk{
namespace bosh{

	class BoshRequestHandler{
	public :
		BoshRequestHandler(){};

		virtual ~BoshRequestHandler(){};

		virtual com::xiaonei::wap::talk::Result process( boost::shared_ptr<talk::Session> sessionPtr, const pugi::xml_node& body) = 0;

	private :
	};
};
};
#endif //TALK_BOSH_BOSH_REQUEST_HANDLER_H_
