#include <sstream>
#include "StreamErrorFactory.h"

using namespace std;

namespace mtalk{
namespace xmpp{

	ProcessResult StreamErrorFactory::createErrorResult(const string& condition, const string& text){
		ostringstream os;
		os << "<stream:error>";
		os << "<" << condition << " xmlns='urn:ietf:params:xml:ns:xmpp-streams'/>";
		if(!text.empty()){
			os << "<text xmlns='urn:ietf:params:xml:ns:xmpp-streams' xml:lang='UTF-8'>";
			os << text;
			os << "</text>";
		}

		os << "</stream:error>";
		os << "</stream:stream>";
		ProcessResult result(ProcessResult::STREAM_ERROR, os.str());
		return result;
	}

};
};
