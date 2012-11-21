/**
* @file TalkXmppRequestHandler.h
* @brief	xmpp内容的处理handler
* 			处理来自bosh协议接受来的xmpp内容
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_TALK_TALK_XMPP_REQUEST_HANDLER_H_
#define TALK_TALK_TALK_XMPP_REQUEST_HANDLER_H_

#include "bosh/BoshRequestHandler.h"
#include "xmpp/XMPPProcessor.h"

namespace mtalk{
namespace talk{

	class TalkXmppRequestHandler : public bosh::BoshRequestHandler{
	public :
		TalkXmppRequestHandler(boost::shared_ptr<mtalk::xmpp::XMPPProcessor> xmppProcessorPtr);

		com::xiaonei::wap::talk::Result process(boost::shared_ptr<talk::Session>  sessionPtr, const pugi::xml_node& body);

	private :
		boost::shared_ptr<mtalk::xmpp::XMPPProcessor> xmppProcessorPtr_;
	};

};
};
#endif //TALK_TALK_TALK_XMPP_REQUEST_HANDLER_H_
