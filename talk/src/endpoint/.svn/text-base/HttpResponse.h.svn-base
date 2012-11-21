/**
* @file HttpResponse.h
* @brief	http response object
* 			包含了标准http response体的构造方法。
* 			已经标准http码定义
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_ENDPOINT_HTTP_RESPONSE_H_
#define TALK_ENDPOINT_HTTP_RESPONSE_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "net/Connection.h"

namespace mtalk{
namespace endpoint{
	class HttpResponse{
	public :
		typedef enum {
			OK = 200,
			BAD_REQUEST = 400,
			FORBIDDEN = 403,
			NOT_FOUND = 404,
			INTERNAL_SERVER_ERROR = 500
		} StatusType;

		typedef enum {
			EVENT_START = 0,
			EVENT_FIRST_ACCESS = 1,
			EVENT_UPDATE_CONNECTION = 2,
			EVENT_ERROR_REQUEST = 3,
			EVENT_WAIT_PUSH = 4,
			EVENT_PUSH_OLD_MSG = 5,
			EVENT_NOT_FOUND = 6,
		} EventType;

		HttpResponse();
		
		HttpResponse(mtalk::net::ConnectionPtr connectionPtr);

		HttpResponse(const HttpResponse& response);

		EventType getEvent() const {return event_;};

		void setEvent(const EventType event){
			event_ = event;
		}

		/**
		* @brief	更新response中所保存的connection对象
		*
		* @param	rid
		* @param	response
		*/
		void updateConnection(mtalk::net::ConnectionPtr connectionPtr);

		~HttpResponse();

		void setStatus(StatusType status){
			status_ = status;
		}

		StatusType getStatus() const {
			return status_;
		}

		long getCid() const {
			if(!connectionPtr_){
				return -1;
			} else {
				return connectionPtr_->getId();
			}
		}

		long getRid() const{
			return rid_;
		}

		void setRid(const long rid){
			rid_ = rid;
		}

		/**
		* @brief	返回一个响应的标准方法
		* 			参数指定body体，http标准码，以及是否需要关闭链接
		*
		* @param	content
		* @param	StatusType
		* @param	shutdown
		*
		* @return	
		*/
		bool response(const std::string& content,const StatusType = OK, bool shutdown = false, const std::string& contentType = "text/xml;charset=UTF-8") ;
		bool responseErr(const std::string& content = "") ;

		mtalk::net::ConnectionPtr getConnection(){
			return connectionPtr_;
		}

		long getConnectionId(){
			if(connectionPtr_){
				return connectionPtr_->getId();
			} else {
				return -1;
			}
		}

	private :
		bool deliver(const std::string& message) ;
		bool deliver(StatusType status, int cache_time, bool is_gzip, 
			bool keep_alive, const std::string& ext_headers, 
			const std::string& body, const std::string& content_type) ;
		StatusType status_;
		long rid_;
		mtalk::net::ConnectionPtr connectionPtr_;
		EventType event_;
	};

};
};
#endif //TALK_ENDPOINT_HTTP_RESPONSE_H_
