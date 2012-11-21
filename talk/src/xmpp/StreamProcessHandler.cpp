#include <sstream>
#include "StreamProcessHandler.h"

using namespace pugi;
using namespace std;

namespace mtalk{
namespace xmpp{

	ProcessResult StreamProcessHandler::handler(const xml_node& node){
		ProcessResult result;
		ostringstream os;

		os << "<?xml version=\"1.0\"?>";
		os << "<stream:stream from=\"example.com\" id=\"someid\" xmlns=\"jabber:client\" xmlns:stream=\"http://etherx.jabber.org/streams\" version=\"1.0\">";
		os << "<stream:features>";
		os << "<bind xmlns=\"urn:ietf:params:xml:ns:xmpp-bind\"/>";
		os << "</stream:features>";

		result.setMsg(os.str());
		return result;
	}
};
};
