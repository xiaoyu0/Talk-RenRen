#ifndef TALK_ENDPOINT_HTTP_IO_HANDLER_H_
#define TALK_ENDPOINT_HTTP_IO_HANDLER_H_

#include "net/IoHandler.h"
#include <boost/shared_ptr.hpp>

namespace mtalk{
namespace endpoint{

	class EndpointServer;

	class HttpIoHandler : public mtalk::net::IoHandler{

	public :
		
		HttpIoHandler();

		virtual ~HttpIoHandler();

		virtual void connectionOpened(const boost::shared_ptr<mtalk::net::Connection> connectionPtr);

		virtual void connectionClosed(const boost::shared_ptr<mtalk::net::Connection> connectionPtr);
		
		virtual void connectionIdle(const boost::shared_ptr<mtalk::net::Connection> connectionPtr, const mtalk::net::IdleStatus status);

		virtual void exceptionCaught(const boost::shared_ptr<mtalk::net::Connection> connectionPtr, const boost::system::error_code& e);

		virtual void messageReceived(const boost::shared_ptr<mtalk::net::Connection> connectionPtr, const std::string& message);

		virtual void messageSent(const boost::shared_ptr<mtalk::net::Connection> connectionPtr, const std::string& message);

	private :
		boost::shared_ptr<EndpointServer> endpointServerPtr_;
	};
};
};

#endif //TALK_ENDPOINT_HTTP_IO_HANDLER_H_
