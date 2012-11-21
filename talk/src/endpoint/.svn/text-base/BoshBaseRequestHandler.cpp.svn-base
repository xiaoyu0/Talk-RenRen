#include "BoshBaseRequestHandler.h"
#include "bosh/BoshErrorBuilder.h"

using namespace std;
using namespace pugi;
using namespace mtalk::bosh;

namespace mtalk{
namespace endpoint{

	void BoshBaseRequestHandler::handler(HttpRequest& request, HttpResponse& response){
	
		xml_document doc;
		xml_parse_result xmlResult = doc.load(request.getBody().c_str());

		if(!xmlResult && !doc.child("body")){
			response.response(BoshErrorBuilder::badRequest(xmlResult.description()), HttpResponse::OK, true);
			return;
		}

		xml_node body = doc.child("body");

		string domain = body.attribute("to").value();
		if(domain != "talk.sixin.com"){
			domain = "talk.m.renren.com";
		}
		if(!domain.empty()){
				response.getConnection()->setAttribute("serverDomain", domain);
		}
		string sessionId = body.attribute("sid").value();
		request.setSessionId(sessionId);

		request.setMsgNode(body);

		boshHandler(request, response);

	}

};
};
