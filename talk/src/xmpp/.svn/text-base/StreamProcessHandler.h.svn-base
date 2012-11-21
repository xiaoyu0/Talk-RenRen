#ifndef TALK_XMPP_STREAM_PROCESS_HANDLER_H_
#define TALK_XMPP_STREAM_PROCESS_HANDLER_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "pugixml/pugixml.hpp"
#include "ProcessResult.h"

namespace mtalk{
namespace xmpp{

	class StreamProcessHandler{
	public :
		StreamProcessHandler(){};
		virtual ~StreamProcessHandler(){}

		ProcessResult handler(const pugi::xml_node& node);
	};
};
};
#endif //TALK_XMPP_STREAM_PROCESS_HANDLER_H_
