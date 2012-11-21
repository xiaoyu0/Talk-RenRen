#ifndef XMMPPTAGHANDLER__H
#define XMMPPTAGHANDLER__H
#include "pugixml/Tag.h"
#include "xmpp/XMPPProcessor.h"
#include "SocketSession.h"

namespace mtalk{
	namespace socket{

		class XMPPTagHandler : public tagParser::TagHandler{
			public:
				XMPPTagHandler(boost::shared_ptr<mtalk::xmpp::XMPPProcessor> xmppProcessorPtr);
					void messaged(SocketSessionPtr SSPtr, tagParser::xml_document_ptr& doc);
				~XMPPTagHandler(){}
			private:
				boost::shared_ptr<mtalk::xmpp::XMPPProcessor> xmppProcessorPtr_;

		};

	}
}
#endif
