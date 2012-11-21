#include "HttpIoHandler.h"
#include "net/Connection.h"
#include "EndpointServer.h"
#include "utils/MyLogger.h"
#include <boost/lexical_cast.hpp>

using namespace std;
using namespace mtalk::net;
using namespace mtalk::utils;
using namespace boost;

namespace mtalk{
namespace endpoint{

	HttpIoHandler::HttpIoHandler(){
	}

	HttpIoHandler::~HttpIoHandler(){
	}

	void HttpIoHandler::connectionOpened(const boost::shared_ptr<Connection> connectionPtr){
		LOG_DEBUG("HttpIoHandler::connectionOpened => cid = " << connectionPtr->getId());
		connectionPtr->setMaxReadIdleTime(10);
		connectionPtr->read();
	}

	void HttpIoHandler::connectionClosed(const boost::shared_ptr<Connection> connectionPtr){
	}
	
	void HttpIoHandler::connectionIdle(const boost::shared_ptr<Connection> connectionPtr, const IdleStatus status){
		LOG_DEBUG("HttpIoHandler::connectionIdle => cid = " << connectionPtr->getId() << " status = " << status);

		if(status == READER_IDLE || status == BOTH_IDLE){
			LOG_DEBUG("HttpIoHandler::connectionIdle => check read timeout : cid = " << connectionPtr->getId());
			connectionPtr->close();
		}else{
			LOG_WARN("Cause socket release failure ?");
			connectionPtr->close();
		}
	}

	void HttpIoHandler::exceptionCaught(const boost::shared_ptr<Connection> connectionPtr, const boost::system::error_code& e){
		LOG_WARN("HttpIoHandler::exceptionCaught => cid = " << connectionPtr->getId() << " error = " << e.message());
		connectionPtr->close();
	}

	void HttpIoHandler::messageReceived(const boost::shared_ptr<Connection> connectionPtr, const std::string& message){
		string requestStr = connectionPtr->removeAttribute("request_segment");
		requestStr.append(message);
		HttpRequest request;
		HttpRequest::ParserResult result = request.parser(requestStr);
		if(result == HttpRequest::PARSER_CONTINUE){
			LOG_DEBUG("HttpIoHandler::messageReceived => receive a segment : cid = " << connectionPtr->getId());
			connectionPtr->setAttribute("request_segment", requestStr);
			connectionPtr->read();
			return;
		} else if(result == HttpRequest::PARSER_FAILURE){
			LOG_DEBUG("HttpIoHandler::messageReceived => receive a bad request : cid = " << connectionPtr->getId());
			HttpResponse response(connectionPtr);
			response.responseErr();
			return;
		} else {
			LOG_DEBUG("HttpIoHandler::messageReceived => parser request string success : cid = " 
					<< connectionPtr->getId() << "\n=====HTTP REQUEST START=====\n" << requestStr << "\n=====HTTP REQUEST END=====");
			connectionPtr->setMaxReadIdleTime(120);
			MY_INSTANCE(EndpointServer).acceptRequest(request, connectionPtr);
		}
	}

	void HttpIoHandler::messageSent(const boost::shared_ptr<Connection> connectionPtr, const string& message){
		string uid=connectionPtr->getAttribute("userId");
		long userId;
		try{

			userId = lexical_cast<long>(uid.c_str());

		}catch(...){
			userId=0 ;
		}

		LOG_DEBUG("HttpIoHandler::messageSent => id = " << connectionPtr->getId()<<"msg= "<<message);
		if(connectionPtr->containsAttribute("keep-alive")){
			int idleTime = time(NULL) - connectionPtr->getLastReadTime() + 10;
			connectionPtr->setMaxReadIdleTime(idleTime);
			connectionPtr->read();
		} else {
			connectionPtr->close();
		}
		MY_INSTANCE(EndpointServer).notifySent(connectionPtr,userId,message);

	}

};
};
