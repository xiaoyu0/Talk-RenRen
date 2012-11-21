#ifndef TALK_ENDPOINT_BOSH_BASE_REQUEST_HANDLER_H_
#define TALK_ENDPOINT_BOSH_BASE_REQUEST_HANDLER_H_

#include "HttpRequestHandler.h"

namespace mtalk{
namespace endpoint{

	class BoshBaseRequestHandler : public HttpRequestHandler{
	public :
		BoshBaseRequestHandler(){};

		virtual ~BoshBaseRequestHandler(){};

		void handler(HttpRequest& request, HttpResponse& response);

		virtual void boshHandler(HttpRequest& request, HttpResponse& response) = 0;

	private :
	};
};
};
#endif //TALK_ENDPOINT_BOSH_BASE_REQUEST_HANDLER_H_
