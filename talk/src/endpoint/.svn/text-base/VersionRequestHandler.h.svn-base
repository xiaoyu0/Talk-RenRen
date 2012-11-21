#ifndef TALK_ENDPOING_VERSION_REQUEST_HANDLER_H_
#define TALK_ENDPOING_VERSION_REQUEST_HANDLER_H_

#include "HttpRequestHandler.h"
#include "proxy/BoshServiceProxy.h"

namespace mtalk{
namespace endpoint{

	class VersionRequestHandler : public HttpRequestHandler{
	public :
		VersionRequestHandler();

		virtual ~VersionRequestHandler(){};

		void handler(HttpRequest& request, HttpResponse& response);

	private :
		boost::shared_ptr<mtalk::proxy::BoshServiceProxy> boshServiceProxyPtr_;
	};
};
};
#endif //TALK_ENDPOING_VERSION_REQUEST_HANDLER_H_
