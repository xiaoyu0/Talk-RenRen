#include "TalkXmppRequestHandler.h"
#include "pugixml/pugixml.hpp"
#include "ice_src/Utils.h"
#include "constant/ResultCode.h"

using namespace pugi;
using namespace mtalk::xmpp;
using namespace mtalk::constant;

namespace mtalk{
namespace talk{

	TalkXmppRequestHandler::TalkXmppRequestHandler(boost::shared_ptr<xmpp::XMPPProcessor> xmppProcessorPtr) :
		xmppProcessorPtr_(xmppProcessorPtr){
		
	}

	com::xiaonei::wap::talk::Result TalkXmppRequestHandler::process(boost::shared_ptr<talk::Session> sessionPtr, const xml_node& body){
		com::xiaonei::wap::talk::Result result;
		result.code = ResultCode::OK;
		for(xml_node node = body.first_child(); node; node = node.next_sibling()){
			ProcessResult pResult =  xmppProcessorPtr_->process(sessionPtr, node);
			if(pResult.getCode() == ProcessResult::SESSION_CLOSE){
				result.code = ResultCode::SESSION_CLOSE;
				result.msg = "";
				break;
			}
			if(!pResult.getMsg().empty()){
				result.msg += pResult.getMsg();
			}
		}

		if(!result.msg.empty()){
			result.code = ResultCode::XMPP_RESPONSE;
		}

		return result;
	}

};
};
