/**
* @file BoshRequestHandler.h
* @brief	一个bosh协议http请求处理处理基类
* 			子类需要实现对body内容的处理
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_BOSH_BOSH_REQUEST_HANDLER_H_
#define TALK_BOSH_BOSH_REQUEST_HANDLER_H_

#include <boost/shared_ptr.hpp>
#include "HttpRequest.h"
#include "HttpResponse.h"
#include "proxy/BoshServiceProxy.h"
#include "BoshBaseRequestHandler.h"
#include "protocolChanger/ProtocolChanger.h"


namespace mtalk{
namespace endpoint{
	
	class BoshRequestHandler : public BoshBaseRequestHandler{
	public :
		BoshRequestHandler();

		virtual ~BoshRequestHandler(){}
		
		/**
		* @brief	对接受的请求做处理
		*
		* @param	request
		* @param	response
		*/
		void boshHandler(HttpRequest& request, HttpResponse& response);

	private :

		boost::shared_ptr<mtalk::proxy::BoshServiceProxy> boshServiceProxyPtr_;
		protocolChang::ProtocolChanger changer_ ;

	};

};
};
#endif //TALK_BOSH_BOSH_REQUEST_HANDLER_H_
