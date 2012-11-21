#ifndef XMMPPTAGHANDLER__H
#define XMMPPTAGHANDLER__H
#include "Tag.h"
#include    "net/Connection.h"
#include    "proxy/SocketServiceProxy.h"
#include "protocolChanger/ProtocolChanger.h"
//#include "SocketSession.h"

namespace mtalk{
	namespace endpoint2{

		class XMPPTagHandler : public tagparser::TagHandler{
			public:
				XMPPTagHandler(/*boost::shared_ptr<mtalk::xmpp::XMPPProcessor> xmppProcessorPtr*/);
					void messaged(const boost::shared_ptr<mtalk::net::Connection> connectionPtr, tagparser::xml_document_ptr& doc);
					void setProtocolChangerPtr( boost::shared_ptr<mtalk::protocolChang::ProtocolChanger> protocolChangerPtr){ protocolChangerPtr_ = protocolChangerPtr; }
				~XMPPTagHandler(){}
			private:
				void writeLog(mtalk::net::ConnectionPtr, const pugi::xml_node node);

				boost::shared_ptr<proxy::SocketServiceProxy> socketServiceProxyPtr_;
				//				boost::shared_ptr<mtalk::xmpp::XMPPProcessor> xmppProcessorPtr_;
				std::string generateErr(const std::string& errMsg);
				
				std::string generateInternalErr(const std::string& errMsg);
				
				boost::shared_ptr<mtalk::protocolChang::ProtocolChanger>  protocolChangerPtr_ ;	

		};

	}
}
#endif
