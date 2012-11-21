#include "SocketIoHandler.h"
#include "net/Connection.h"
#include <algorithm>
#include "EndpointServer2.h"
#include <boost/lexical_cast.hpp>
#include "utils/MyLogger.h"
using namespace std;
using namespace mtalk::net;
using namespace mtalk::utils;
using namespace boost;
namespace mtalk{
	namespace endpoint2{
		SocketIoHandler::SocketIoHandler(){
		}

		SocketIoHandler::~SocketIoHandler(){
		}

		void SocketIoHandler::connectionOpened(const boost::shared_ptr<Connection> connectionPtr){
			LOG_DEBUG("SocketIoHandler::connectionOpened => cid = " << connectionPtr->getId());
			connectionPtr->setMaxReadIdleTime(10);
			connectionPtr->read();
		}

		void SocketIoHandler::connectionClosed(const boost::shared_ptr<Connection> connectionPtr){
					
			if(connectionPtr->getAttribute("alive") == "true"){
				MY_INSTANCE(EndpointServer2).acceptRequest("</stream:stream>", connectionPtr);
			}
			MY_INSTANCE(EndpointServer2).delTagparser(connectionPtr->getId());
		}

		void SocketIoHandler::connectionIdle(const boost::shared_ptr<Connection> connectionPtr, const IdleStatus status){
			LOG_DEBUG("SocketIoHandler::connectionIdle => cid = " << connectionPtr->getId() << " status = " << status);

			if(status == READER_IDLE || status == BOTH_IDLE){
				LOG_DEBUG("SocketIoHandler::connectionIdle => check read timeout : cid = " << connectionPtr->getId());
				connectionPtr->close();
				//MY_INSTANCE(EndpointServer2).delTagparser(connectionPtr->getId());
			}
		}

		void SocketIoHandler::exceptionCaught(const boost::shared_ptr<Connection> connectionPtr, const boost::system::error_code& e){
			LOG_WARN("SocketIoHandler::exceptionCaught => cid = " << connectionPtr->getId() << " error = " << e.message());
		//	MY_INSTANCE(EndpointServer2).acceptRequest("</stream:stream>", connectionPtr);
			connectionPtr->close();
			//	MY_INSTANCE(EndpointServer2).delTagparser(connectionPtr->getId());
		}
		void SocketIoHandler::messageReceived(const boost::shared_ptr<net::Connection> connectionPtr, const std::string& message){
			connectionPtr->setMaxReadIdleTime(90);
			connectionPtr->read();
			MY_INSTANCE(EndpointServer2).acceptRequest(message, connectionPtr);

		}

		void SocketIoHandler::messageSent(const boost::shared_ptr<Connection> connectionPtr, const string& msg){
			string userId_str = connectionPtr->getAttribute("userId");
			if(userId_str.empty()){
				return  ;
			}
			LOG_DEBUG("SocketIoHandler::messageSent => begin userId="<<userId_str);
			long userId;
			try{
				userId = lexical_cast<long>(userId_str.c_str());

			}catch(...){
			LOG_DEBUG("SocketIoHandler::messageSent => failure userId="<<userId_str);
				return ;
			}
	//		LOG_DEBUG("SocketIoHandler::messageSent => sucess msg = "<<msg);
			MY_INSTANCE(EndpointServer2).notifySent(connectionPtr, userId, msg);
		}

	}
}
