#include "XMPPTagHandler.h"
#include "utils/MyLogger.h"
#include <string>
#include "pugixml/pugixml.hpp"
#include "constant/MessageType.h"
#include <sstream>
#include <iostream>
#include <boost/lexical_cast.hpp>
#include "proxy/ProxyRegister.h"
#include "Config.h"
#include "proxy/MsgWaitServiceProxy.h"
#include "proxy/PushServiceProxy.h"
#include "utils/XmlUtils.h"

using namespace std;
using namespace mtalk::constant;
using namespace mtalk::proxy;
namespace mtalk{
	namespace socket{

		XMPPTagHandler::XMPPTagHandler(boost::shared_ptr<mtalk::xmpp::XMPPProcessor> xmppProcessorPtr):
			xmppProcessorPtr_(xmppProcessorPtr){
			}
		void XMPPTagHandler::messaged(SocketSessionPtr SSPtr, tagParser::xml_document_ptr& doc){
			stringstream os;
			pugi::xml_node body = doc->first_child();
	
			string msgDecode = body.first_element_by_path("body/text").child_value();
			if (!msgDecode.empty()){
				utils::XmlUtils::xmlDecode(msgDecode);
				pugi::xml_node textBody = body.first_element_by_path("body/text");
				textBody.remove_child(textBody.first_child());
				textBody.append_child(pugi::node_pcdata).set_value(msgDecode.c_str());
			}
			os.str("");
			body.print(os, "\t", pugi::format_raw);
			string str = os.str();
			LOG_TRACE("XMPPTagHandler::messaged => begin  xml_document = "<<str);
			string name=body.name();
			if(name=="stream:stream"){
				stringstream os;
				os<<"<?xml version='1.0'?>"
					<<"<stream:stream from='talk.xiaonei.com'"
					<<"xmlns='jabber:client'"
					<<"xmlns:stream='http://etherx.jabber.org/streams'"
					<<"version='1.0'>\r\n";
				SSPtr->deliver(0, os.str(), MessageType::ACTION, 0);
				return;
			}else if(name=="close"){
				stringstream os;
				LOG_TRACE_ACTION(" sockSessionCloseByClient"<<" | "<<SSPtr->getUserId()<<" | "<<SSPtr->getSessionId()<<" | "<<SSPtr->getCAppId()<<" | "<<"000000");
				os<<"</stream:stream>";
				SSPtr->deliver(0, os.str(), MessageType::ACTION, 0);
				SSPtr->close();
				return;
			}else if(name == "ack"){
				string msgKeyStr= body.attribute("msgkey").value();
					long msgKey = 0;
				try {
					msgKey = boost::lexical_cast<long>(msgKeyStr);
				}catch(...){}

				MY_INSTANCE(ProxyRegister).getProxy<MsgWaitServiceProxy>("msgWaitProxy")->delMessage(msgKey, SSPtr->getUserId() ,  SSPtr->getSessionType());
				return ;
			}

			try {
				xmppProcessorPtr_->process(SSPtr, body);
			}catch(std::exception& e){
				std::cout<<"xmppTagHandler exception = "<<e.what()<<std::endl;
			}	
			
		}

	}
}
