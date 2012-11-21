#include <sstream>
#include <boost/timer.hpp>
#include <boost/lexical_cast.hpp>
#include "BoshRequestHandler.h"
#include "utils/MyLogger.h"
#include "EndpointServer.h"
#include "xmpp/JID.h"
#include "ice_src/Utils.h"
#include "bosh/BoshErrorBuilder.h"
#include "constant/ResultCode.h"
#include "proxy/ProxyRegister.h"
#include  "utils/MyLogger.h"

using namespace std;
using namespace mtalk::constant;
using namespace mtalk::utils;
using namespace mtalk::bosh;
using namespace mtalk::proxy;
using namespace pugi;

namespace mtalk{
namespace endpoint{

	BoshRequestHandler::BoshRequestHandler(){
		boshServiceProxyPtr_ = MY_INSTANCE(ProxyRegister).getProxy<BoshServiceProxy>("boshProxy");
	}

	void BoshRequestHandler::boshHandler(HttpRequest& request, HttpResponse& response){
		xml_node body = request.getMsgNode();

		string ridStr = body.attribute("rid").value();
		long rid;
		try{
			rid = boost::lexical_cast<long>(ridStr);
		} catch (boost::bad_lexical_cast &){
			rid = 0;
		}
		if(rid <= 0){
			response.response(BoshErrorBuilder::itemNotFound("rid not found"));
			return;
		}

		com::xiaonei::wap::talk::Result result;

		string sessionId = request.getSessionId();

		xml_attribute fromAttr = body.attribute("from");

		if(!sessionId.empty()){
			//非首次请求
			result = boshServiceProxyPtr_->updateSession(sessionId, response.getConnectionId(), request.getBody());
		} else {
			//首次请求
			if(!fromAttr){
				response.response(BoshErrorBuilder::itemNotFound("sid or from not found"), HttpResponse::OK, true);
				return;
			}

			mtalk::xmpp::JID from(fromAttr.value());
			if(from.getUserId() <= 0){
					response.response(BoshErrorBuilder::itemNotFound("userId error"), HttpResponse::OK, true);
					return;
			}
			if(from.getEndpoint() != "talk.sixin.com"){
					long  userRenRenId = from.getUserId();
					long  userSixinId = changer_.getSixinIdByRenRenId(userRenRenId);
					if(userSixinId == -1){
						response.response(BoshErrorBuilder::itemNotFound("can not found bound sixin id  error"), HttpResponse::OK, true);
						return ;
					}
					string renRenIdStr;
					try{
						renRenIdStr = boost::lexical_cast<string>(userRenRenId);
					} catch (boost::bad_lexical_cast &){
						renRenIdStr = "0";
					LOG_ERROR("renrenid to string faliure renrenid="<<userRenRenId);
					}
					body.append_attribute("renren_id").set_value(renRenIdStr.c_str());
					from.setUserId(userSixinId);
					fromAttr.set_value(from.toString().c_str());
					stringstream os;
					body.print(os, "\t", pugi::format_raw);
					result = boshServiceProxyPtr_->createSession(from.getUserId(), response.getConnectionId(), (os.str()));
			//		response.response(BoshErrorBuilder::itemNotFound("endpoint error"), HttpResponse::OK, true);
			//		return;
			}else if(from.getEndpoint() == "talk.sixin.com"){
					result = boshServiceProxyPtr_->createSession(from.getUserId(), response.getConnectionId(), request.getBody());
			}


		//	LOG_ACTION("createSession|"<<from.getUserId()<<"|"<<request.getRemoteAddress()<<"|"<<request.getBody());
		}

		switch(result.code){
		case ResultCode::OK :
			//延长connection的超时时间，hold住connection
			response.getConnection()->setMaxReadIdleTime(300);
			break;
		case ResultCode::AUTH_FAILURE :
			LOG_INFO("auth failure "<< response.getConnection()->getAttribute("userId"));
		case ResultCode::SESSION_NOT_FOUND :
		case ResultCode::RID_TOO_LARGE :
		case ResultCode::AUTH_FORBIDDEN :
		case ResultCode::FROM_NOT_FOUND :
			response.response(result.msg, HttpResponse::OK, true);
			break;
		case ResultCode::PROXY_NOT_FOUND :
			response.response(BoshErrorBuilder::itemNotFound("sessionId or userId not found (proxy change)"), HttpResponse::OK, true);
			break;
		case ResultCode::PARAM_ERROR :
			response.response(BoshErrorBuilder::itemNotFound("userId or sessionId error"), HttpResponse::OK, true);
			break;
		default :

			xml_document doc ;
			xml_parse_result xmlResult = doc.load(result.msg.c_str());
			xml_node body_node = doc.first_child();
			stringstream os ;
			for(xml_node message_node = body_node.first_child(); message_node; message_node = message_node.next_sibling()){
				//在此转换
				string domain = response.getConnection()->getAttribute("serverDomain");
				if(domain != "talk.sixin.com"){
					domain = "talk.m.renren.com" ;
				}
				if(changer_.changBack(domain , message_node) == -1){
					continue;
				}
			}

			body_node.print(os, "\t", pugi::format_raw);
			response.response(os.str());

			break;
		}	
	}

};
};
