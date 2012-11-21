/**
* @file HttpRequestHandler.h
* @brief	一个bosh协议http请求处理处理基类
* 			子类需要实现对body内容的处理
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_HTTP_SERVER_HTTP_REQUEST_HANDLER_H_
#define TALK_HTTP_SERVER_HTTP_REQUEST_HANDLER_H_

#include <boost/shared_ptr.hpp>
#include "HttpRequest.h"
#include "HttpResponse.h"

namespace mtalk{
namespace endpoint{
	
	class HttpRequestHandler {
	public :
		HttpRequestHandler(){};

		virtual ~HttpRequestHandler();
		
		/**
		* @brief	对接受的请求做基础的处理
		*
		* @param	request
		* @param	response
		*/
		void baseHandler(HttpRequest& request, HttpResponse& response);

		virtual void handler(HttpRequest& request, HttpResponse& response) = 0;

	private :
	};

};
};
#endif //TALK_HTTP_SERVER_SERVER_REQUEST_HANDLER_H_


