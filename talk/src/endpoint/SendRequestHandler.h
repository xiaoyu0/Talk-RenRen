/**
* @file SendRequestHandler.h
* @brief 为客户端提供的专门用户发送的信息的接口，
*        该接口接收到请求后会立即返回
*        不会出现holding的状态
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_ENDPOINT_REQUEST_HANDLER_H_
#define TALK_ENDPOINT_REQUEST_HANDLER_H_

#include <boost/shared_ptr.hpp>
#include "HttpRequest.h"
#include "HttpResponse.h"
#include "proxy/BoshServiceProxy.h"
#include "BoshBaseRequestHandler.h"
#include "protocolChanger/ProtocolChanger.h"

namespace mtalk{
namespace endpoint{
	
	class Session;
	typedef boost::shared_ptr<Session> SessionPtr;

	class SendRequestHandler :public BoshBaseRequestHandler {
	public :
		SendRequestHandler();

		virtual ~SendRequestHandler(){}
		
		/**
		* @brief	对接受的请求做处理
		*
		* @param	request
		* @param	response
		*/
		void boshHandler(HttpRequest& request, HttpResponse& response);

	private :

		/**
		* @brief	访问boshServer的代理
		*/
		boost::shared_ptr<mtalk::proxy::BoshServiceProxy> boshServiceProxyPtr_;
		protocolChang::ProtocolChanger changer_ ;

	};

};
};
#endif //TALK_ENDPOINT_REQUEST_HANDLER_H_
