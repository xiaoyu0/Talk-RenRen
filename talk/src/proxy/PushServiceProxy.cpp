#include "PushServiceProxy.h"
#include "Config.h"
#include "utils/TimeUtils.h"
#include "utils/MessageTypeUtil.h"
#include    "constant/MessageType.h"
#include    "pugixml/pugixml.hpp"
#include    "xmpp/JID.h"

#include <boost/lexical_cast.hpp>


using namespace std;
using namespace pugi;
using namespace mtalk::utils;
using namespace mtalk::xmpp;
using namespace mtalk::constant;
using namespace com::xiaonei::wap::push::talk;

namespace mtalk{
namespace proxy{

	PushServiceProxy::PushServiceProxy() : 
		SimpleZKProxy<MessageServicePrx>("PushIceService", ZK_TALK_PUSH, true, 300){

	}

	void PushServiceProxy::pushMessage(long fromId, long toId, int msgType, string message) {
        LOG_W(fromId, "PushServiceProxy::pushMessage", msgType, message);
		LOG_DEBUG("PushServiceProxy::pushMessage ==> fromId = " << fromId << "  toId = " << toId << " msgType = " << msgType);

		msgType = MessageTypeUtil::getMessageType(message); 	
		pugi::xml_document doc;	
		pugi::xml_parse_result result = doc.load(message.c_str());
		if(!result) {
			LOG_ERROR("PushServiceProxy::pushMessage parse xml failed , msg" << message);
			return;
		}
		
		pugi::xml_node node = doc.first_child();
		if(node.attribute("offline").as_bool()) {
			//offline标记 不用发push
			return;
		}
	
		if(strcmp(node.attribute("type").value(),"info") == 0) {
			//弱消息不push	
			return;
		}
		 
		int notifyId = 0;

		JID fromJID(node.attribute("from").value());
		string fromIdString;
		try { 
			fromIdString =  boost::lexical_cast<string>(fromJID.getUserId());
		} catch (std::exception& e) {
			LOG_ERROR("PushServiceProxy::pushMessage lexical_cast catch exception = " << e.what());
		} catch (...) {
			LOG_ERROR("PushServiceProxy::pushMessage lexical_cast catch exception");
		}

		
		string name = node.attribute("fname").value();
		map<string, string> paramMap;
		
		if((msgType & MessageType::GROUP_CHAT) == MessageType::GROUP_CHAT) {
			paramMap.insert(pair<string,string>("from", fromJID.getSessionId()));	
		}
		else {
			paramMap.insert(pair<string,string>("from", fromIdString));	
		}
		paramMap.insert(pair<string,string>("fromName", name));	
		paramMap.insert(pair<string,string>("count", "1"));	
		paramMap.insert(pair<string,string>("groupCount", "0"));	
		if((msgType & MessageType::PERSONAL) == MessageType::PERSONAL) {
		    paramMap.insert(pair<string,string>("personal", "true"));	
        }
		if((msgType & MessageType::CHAT) == MessageType::CHAT) {
			notifyId = 9994;
			xml_node body = node.child("body");
			if(!body) {
				LOG_ERROR("PushServiceProxy::pushMessage can't find child body, message = " << message);
				return;
			}
				
			string text = body.child_value("text");
			paramMap.insert(pair<string,string>("messageType", text));	
		} 
		else if((msgType & MessageType::EXPRESSION) == MessageType::EXPRESSION) {
			notifyId = 9996;
		}
		else if((msgType & MessageType::IMAGE) == MessageType::IMAGE) { 
			notifyId = 9997;
		}
		else if((msgType & MessageType::VOICE) == MessageType::VOICE) {
			notifyId = 9998;
		}

		if(notifyId == 0) {
			return;
		}
 
		if((msgType & MessageType::GROUP_CHAT) == MessageType::GROUP_CHAT) {
			notifyId += 10000;			
			paramMap.insert(pair<string,string>("roomId", fromIdString));	
		}
		
		MessageServicePrx proxy = getProxy(fromId);
		try {
			proxy->push4sixin(toId, 0, 0, notifyId, paramMap);
		    LOG_INFO("PushServiceProxy::push4sixin ==>  toId = " << toId << " notifyId = " << notifyId);
		} catch (std::exception& e) {
			LOG_ERROR("PushServiceProxy   proxy->push(...) catch exception = " << e.what());
		} catch (...) {
			LOG_ERROR("PushServiceProxy   proxy->push(...) catch exception");
		} 	
			
	}

	void PushServiceProxy::feedIOSPush(long fromId,long toId, int feedType, long feedId){
        char buf[256];
        snprintf(buf, sizeof(buf), "[feedId=%ld]", feedId);
        LOG_W(fromId, "PushServiceProxy::feedIOSPush", feedType, buf);
		LOG_DEBUG("PushServiceProxy::feedIOSPush ==> fromId = " << fromId << "  toId = " << toId << " feedType = " << feedType);
		MessageServicePrx proxy = getProxy(fromId);
		
		string feedPushStr;
		switch (feedType) {
			case 502 :
				feedPushStr.assign("发表了一条状态");
				break;
			case 701 :
				feedPushStr.assign("上传了一张照片");
				break;
			case 709 :
				feedPushStr.assign("上传了多张照片");
				break;
			default :
				feedPushStr.assign("有一条新鲜事,快来读吧");
		}
		string fromIdStr = boost::lexical_cast<string>(fromId);
		string feedIdStr = boost::lexical_cast<string>(feedId);
		string feedTypeStr = boost::lexical_cast<string>(feedType);

		ParamMap paramMap;
		paramMap.insert(pair<string, string>("from", fromIdStr));
		paramMap.insert(pair<string, string>("messageType", feedPushStr));
		paramMap.insert(pair<string, string>("feedId", feedIdStr));
		paramMap.insert(pair<string, string>("type", feedTypeStr));
		

		MilliTimer tStart;
		try {
			proxy->push(toId, feedType, paramMap);
		} catch (std::exception& e) {
			cout << "PushServiceProxy   proxy->push(...) catch exception = " << e.what() << endl;
			LOG_FEED(feedType << "|" << fromId << "|" << toId << "|" << "PushServiceProxy   proxy->push(...) catch exception = " << e.what());
		} catch (...){
			cout << "PushServiceProxy   proxy->push(...) catch unknown exception " << endl;	
			LOG_FEED(feedType << "|" << fromId << "|" << toId << "|" << "PushServiceProxy   proxy->push(...) catch unknown exception = ");
		}
		LOG_TIME("PushServiceProxy::push ice call time | " << tStart.elapsed());
		
		stringstream os;
		os << fromIdStr << feedPushStr;
		//专门打的特别关注feed日志
	//	LOG_FEED(feedType <<"|" << fromId << "|" << toId << "|" << "message = " << os.str());
	}

};
};
