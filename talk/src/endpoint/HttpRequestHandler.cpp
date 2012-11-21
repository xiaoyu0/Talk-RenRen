#include <boost/timer.hpp>
#include "HttpRequestHandler.h"
#include "utils/MyLogger.h"

using namespace mtalk::utils;
using namespace pugi;

namespace mtalk{
namespace endpoint{

	HttpRequestHandler::~HttpRequestHandler(){
		LOG_DEBUG("HttpRequestHandler::~HttpRequestHandler => destory");
	}

	void HttpRequestHandler::baseHandler(HttpRequest& request, HttpResponse& response){
		boost::timer tStart;
		LOG_DEBUG("HttpRequestHandler::baseHandler => process request start");
	
		handler(request, response);

		LOG_DEBUG("HttpRequestHandler::baseHandler => process request end : cast time = " << tStart.elapsed() << "s");

	}
	
};
};
