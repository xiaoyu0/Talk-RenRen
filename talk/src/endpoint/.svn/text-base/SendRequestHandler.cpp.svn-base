#include <string>
#include <sstream>
#include <boost/timer.hpp>
#include <boost/lexical_cast.hpp>
#include "pugixml/pugixml.hpp"
#include "SendRequestHandler.h"
#include "utils/MyLogger.h"
#include "utils/TalkSchemaValidater.h"
#include "EndpointServer.h"
#include "xmpp/JID.h"
#include "ice_src/Utils.h"
#include "bosh/BoshErrorBuilder.h"
#include "constant/ResultCode.h"
#include "proxy/ProxyRegister.h"
#include "xmpp/JID.h"
#include <sstream>

using namespace std;
using namespace mtalk::constant;
using namespace mtalk::bosh;
using namespace mtalk::utils;
using namespace mtalk::proxy;
using namespace mtalk::xmpp;
using namespace pugi;

namespace mtalk{
namespace endpoint{

	SendRequestHandler::SendRequestHandler(){
		boshServiceProxyPtr_ = MY_INSTANCE(ProxyRegister).getProxy<BoshServiceProxy>("boshProxy");
	}

	void SendRequestHandler::boshHandler(HttpRequest& request, HttpResponse& response){
		xml_node body = request.getMsgNode();

		//校验xml
		TalkSchemaValidater::validate(request.getBody());

		com::xiaonei::wap::talk::Result result;

		if(!request.getSessionId().empty()){
			//非首次请求
			string originalSendMsg = request.getBody();
			xml_document doc ;
			doc.load(originalSendMsg.c_str());
			xml_node body_node = doc.first_child();
			
			for(xml_node message_node = body_node.first_child(); message_node; message_node = message_node.next_sibling()){
					//在此转换
					JID from(message_node.attribute("from").value());
					if( changer_.changToSixin(from.getEndpoint(),message_node) == -1 ){ 

							response.response(BoshErrorBuilder::itemNotFound("bound sixin ID  not found"), HttpResponse::OK, true);
							return ; 
					}
			}
			stringstream os ;
			body_node.print(os, "\t", pugi::format_raw);
			result = boshServiceProxyPtr_->sendMessage(request.getSessionId(), response.getConnectionId(), os.str()) ;
		} else {
			response.response(BoshErrorBuilder::itemNotFound("sid not found"), HttpResponse::OK, true);
			return;
		}
		if(result.code == ResultCode::SESSION_CLOSE){
			response.response(result.msg, HttpResponse::OK, true);
		} else{
			response.response(result.msg);
		}
		return;
	}
	
};
};
