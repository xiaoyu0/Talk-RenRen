#include <ctime>
#include "HttpResponse.h"
#include "utils/MyLogger.h"

using namespace std;
using namespace mtalk::utils;
using namespace mtalk::net;

namespace mtalk{
namespace endpoint{

		HttpResponse::HttpResponse():
			event_(EVENT_START){
			LOG_DEBUG("HttpResponse::HttpResponse => Created");
		}

		HttpResponse::HttpResponse(ConnectionPtr connectionPtr):
			connectionPtr_(connectionPtr),
			event_(EVENT_START){
			LOG_DEBUG("HttpResponse::HttpResponse => Created : cid = " << connectionPtr->getId());
		}

		HttpResponse::HttpResponse(const HttpResponse& response){
			connectionPtr_ = response.connectionPtr_;
			LOG_DEBUG("HttpResponse::HttpResponse => Created (copy) : cid = " << connectionPtr_->getId());
		}

		HttpResponse::~HttpResponse(){
			if(connectionPtr_){
				LOG_DEBUG("HttpResponse::~HttpResponse => Destroy : cid = " << connectionPtr_->getId());
			} else {
				LOG_DEBUG("HttpResponse::~HttpResponse => Destroy");
			}
		}

		void HttpResponse::updateConnection(ConnectionPtr connectionPtr){
			connectionPtr_ = connectionPtr;
			LOG_DEBUG("HttpResponse::updateConnection => cid = " << connectionPtr_->getId());
		}
		bool HttpResponse::deliver(const string& message) {
			LOG_DEBUG("HttpResponse::deliver => begin : cid = " << connectionPtr_->getId() << "\n =====HTTP begin====\n " << message << "\n =====HTTP end====\n" );
			if(connectionPtr_->write(message)){
				if(!connectionPtr_->containsAttribute("keep-alive")){
					LOG_DEBUG("HttpResponse::deliver => success (not keep alive) : cid = " << connectionPtr_->getId());
				} else {
					LOG_DEBUG("HttpResponse::deliver => success (keep alive) : cid = " << connectionPtr_->getId());
				}
				return true;
			} else {
				LOG_WARN("HttpResponse::deliver => failure (socket close) : cid =  " << connectionPtr_->getId());
				return false;
			}
		}


		bool HttpResponse::deliver(StatusType status, int cache_time, bool is_gzip, 
				bool keep_alive, const string& ext_headers, 
				const string& body, const string& content_type) {
			LOG_DEBUG("HttpResponse::deliver => begin : " << body);
			ostringstream res;
			switch(status){
				case OK :
					res << "HTTP/1.1 200 OK\r\n";
					break;
				case BAD_REQUEST :
					res << "HTTP/1.0 400 Bad Request\r\n";
					break;
				case FORBIDDEN :
					res << "HTTP/1.1 403 Forbidden\r\n";
					break;
				case NOT_FOUND :
					res << "HTTP/1.1 404 Not Found\r\n";
					break;
				case INTERNAL_SERVER_ERROR :
					res << "HTTP/1.1 500 Internal Server Error\r\n";
					break;
			}

			if (is_gzip && !body.empty()) {
				res << "Content-Encoding: gzip\r\n";
			}

			res << "Server: XNHttpServer1.0\r\n" << "Content-Type: "<<content_type
				<<"\r\n";
			if(!body.empty()){
				res << "Content-Length: "<< body.length()<<"\r\n";
			}

			if(ext_headers != "")
				res << ext_headers;

			if (keep_alive) {
				res << "Connection: keep-alive\r\n" << "Keep-Alive: 300\r\n";
			} else {
				res << "Connection: close\r\n";
			}
			if (cache_time > 0 && status == 200) {
				res << "Cache-Control: max-age="<< cache_time << "\r\n";
				time_t t = time(NULL)+cache_time;
				res << "Expires: "<< gmtime(&t)<< "\r\n";
			} else if (cache_time == -1) {
				res << "Cache-Control: max-age="<<60*60*24*10<<"\r\n";
				time_t t = time(NULL)+60*60*24*10;
				res << "Expires: "<< gmtime(&t)<< "\r\n";
			} else if (cache_time == 0) {
				res << "Cache-Control: no-cache"<< "\r\n"
					<< "Expires: Thu, 01 Jan 1970 00:00:00 GMT"<< "\r\n";
			}
			res << "\r\n";
			if(!body.empty()){
				res.write(body.c_str(), body.length());
			}
			return deliver(res.str());
		}

		bool HttpResponse::response(const string& content,const StatusType status, bool shutdown, const string& contentType) {
			if(!connectionPtr_ && connectionPtr_->isConnected()){
				LOG_DEBUG("HttpResponse::response => failure (no active connection)");
				return false;
			}
			if(shutdown)
				connectionPtr_->removeAttribute("keep-alive");
			return deliver(status, 0, false, 
				(connectionPtr_->containsAttribute("keep-alive") && !shutdown),
				"", content, contentType);
		}
		
		bool HttpResponse::responseErr(const string& content) {
			if(!connectionPtr_ && connectionPtr_->isConnected()){
				LOG_DEBUG("HttpResponse::responseErr => failure (no active connection)");
				return false;
			}
			return deliver(FORBIDDEN, 0, false, true, "", content, "text/xml;charset=UTF-8");
		}
};
};
