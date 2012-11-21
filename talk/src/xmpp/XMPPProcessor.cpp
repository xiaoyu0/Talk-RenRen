#include <boost/algorithm/string.hpp>
#include "XMPPProcessor.h"
#include "StreamErrorFactory.h"
#include "utils/MyLogger.h"
using namespace std;
using namespace pugi;

namespace mtalk{
namespace xmpp{

	ProcessResult XMPPProcessor::process(mtalk::talk::SessionPtr sessionPtr, const xml_node& node){
		ProcessResult result;

		if(!node){
			result.setCode(ProcessResult::EMPTY);
			return result;
		}
		
		

		string name = node.name();

		if(name == "message"){
			result = messageRouterPtr_->route(sessionPtr, node);
		} else if(name == "presence"){
			result = presenceRouterPtr_->route(sessionPtr, node);
		} else if(name == "iq"){
			result = iqRouterPtr_->route(sessionPtr, node);
		} else {
			return StreamErrorFactory::invalidXml("unknown node : " + name);
		}

		if(result.getCode() != ProcessResult::OK 
			&& result.getCode() != ProcessResult::HAS_RESPONSE
			&& result.getCode() != ProcessResult::ANTISPAM
			&& result.getCode() != ProcessResult::SESSION_CLOSE){
			result = StreamErrorFactory::invalidFrom(result.getMsg());
		}

		return result;

	};

};
};
