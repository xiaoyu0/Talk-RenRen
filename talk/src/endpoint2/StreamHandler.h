#ifndef TALK_HTTP_SERVER_HTTP_STREAM_HANDLER_H_
#define TALK_HTTP_SERVER_HTTP_STREAM_HANDLER_H_

#include <boost/shared_ptr.hpp>
#include <string>
#include "proxy/SocketServiceProxy.h"
#include "net/Connection.h"
	namespace mtalk{
		namespace endpoint2{
		//	typedef boost::shared_ptr<net::Connection> ConnectionPtr;

			class StreamHandler {
				public :
					StreamHandler();

					virtual ~StreamHandler();

					/**
					 * @brief    对接受的请求做基础的处理
					 *
					 * @param    request
					 * @param    response
					 */
					void handler(const std::string& request, net::ConnectionPtr& connectionPtr);


				private :
                    std::string generateErr(const std::string& errMsg);
					boost::shared_ptr<proxy::SocketServiceProxy> socketServiceProxyPtr_;
			};

	};
};

#endif //TALK_HTTP_SERVER_SERVER_REQUEST_HANDLER_H_

