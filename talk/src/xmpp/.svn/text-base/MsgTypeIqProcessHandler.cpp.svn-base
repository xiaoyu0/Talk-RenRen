#include <boost/algorithm/string.hpp>
#include <sstream>
#include "MsgTypeIqProcessHandler.h"
#include "constant/MessageType.h"

using namespace pugi;
using namespace std;
using namespace mtalk::constant;
using namespace mtalk::talk;

namespace mtalk{
namespace xmpp{

	ProcessResult MsgTypeIqProcessHandler::handler(SessionPtr sessionPtr, const xml_node& node){
		ProcessResult result;
		ostringstream os;
		sessionPtr->delAllSupportType();
		for(xml_node msgType = node.first_child(); msgType; msgType = msgType.next_sibling()){
			if(strcmp(msgType.name(), "msgType") != 0){
				continue;
			}
			string msgTypeStr = msgType.child_value();
			boost::trim(msgTypeStr);
			if(msgTypeStr == "chat"){
				sessionPtr->addSupportType(MessageType::CHAT);
			} else if (msgTypeStr == "feed"){
				sessionPtr->addSupportType(MessageType::FEED);
			} else if (msgTypeStr == "notify"){
				sessionPtr->addSupportType(MessageType::NOTIFY);
			}
		}

		string id = node.attribute("id").value();
		string from = node.attribute("from").value();

		result.setCode(ProcessResult::HAS_RESPONSE);
		os << "<iq id='" << id << "' to='" << from << "' type='result'>"
			<< "<success/></iq>";
		result.setMsg(os.str());
		return result;
	}
};
};
