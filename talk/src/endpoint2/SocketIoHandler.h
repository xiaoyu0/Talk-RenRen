#ifndef TALK_ENDPOIN_SOCKET_IO_HANDLER_
#define TALK_ENDPOIN_SOCKET_IO_HANDLER_
#include "net/IoHandler.h"
#include <boost/shared_ptr.hpp>
namespace mtalk{
	namespace endpoint2{

		class  EndpointServer;

		class SocketIoHandler : public net::IoHandler {

			public:

				SocketIoHandler();

				virtual ~SocketIoHandler();

				virtual void connectionOpened(const boost::shared_ptr<mtalk::net::Connection> connectionPtr);

				virtual void connectionClosed(const boost::shared_ptr<mtalk::net::Connection> connectionPtr);

				virtual void connectionIdle(const boost::shared_ptr<mtalk::net::Connection> connectionPtr, const mtalk::net::IdleStatus status);

				virtual void exceptionCaught(const boost::shared_ptr<mtalk::net::Connection> connectionPtr, const boost::system::error_code& e);

				virtual void messageReceived(const boost::shared_ptr<mtalk::net::Connection> connectionPtr, const std::string& message);

				virtual void messageSent(const boost::shared_ptr<mtalk::net::Connection> connectionPtr, const std::string& msg);

			private :

				boost::shared_ptr<EndpointServer> endpointServerPtr_;

		};
	}
}
#endif 
