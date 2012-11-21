/*
 * =====================================================================================
 *
 *       Filename:  MessageTypeUtil.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年09月07日 16时20分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jun.liu (), jun.liu@renren-inc.com
 *        Company:  renren-inc
 *
 * =====================================================================================
 */

#include    "MessageTypeUtil.h"
#include    "constant/MessageType.h"
#include    "pugixml/pugixml.hpp"
#include <iostream>
#include <string.h>
using namespace std;
using namespace pugi;
using namespace mtalk::constant;

namespace mtalk {
namespace utils {

	int MessageTypeUtil::getMessageType(const std::string& message) {
		int type = 0;
		if(!message.empty()) {

			xml_document doc;
			pugi::xml_parse_result xmlResult = doc.load(message.c_str());
			//是不是xml
			if(!xmlResult){
				return type;
			}

			xml_node node = doc.first_child();
            
            string nodeName = node.name();
			//是不是message节
			if(nodeName != "message" ){
				return type;
			}
			
			xml_attribute typeAtt = node.attribute("type");
			//没有type属性
			if(!typeAtt) {
				return type;
			}

			if(strcmp(typeAtt.value(), "groupchat") == 0) {
				//群聊
				type = type | MessageType::GROUP_CHAT;
			}
			else if(strcmp(typeAtt.value() , "personal") == 0) {
				//私密消息
				type = type | MessageType::PERSONAL;
			}
			else if(strcmp(typeAtt.value() , "system") == 0) {
				//系统消息
				type = type | MessageType::SYSTEM;
			}

			//离线
			xml_attribute offlineAtt = node.attribute("offline");
			if(offlineAtt && offlineAtt.as_bool()) {
				type = type | MessageType::OFFLINE;
			}
			//具体类型
			xml_node body = node.child("body");
			if(body) {
				xml_attribute bodyTypeAtt = body.attribute("type");
				//没有type属性
				if(bodyTypeAtt) {
					if(strcmp(bodyTypeAtt.value(), "text") == 0) {
						//文本
						type = type | MessageType::CHAT;
					}
					else if(strcmp(bodyTypeAtt.value(), "image") == 0) {
						//图片
						type = type | MessageType::IMAGE;
					}
					else if(strcmp(bodyTypeAtt.value(), "voice") == 0) {
						//语音
						type = type | MessageType::VOICE;
					}
					else if(strcmp(bodyTypeAtt.value() , "action") == 0) {
						//动作
						type = type | MessageType::ACTION;
					}
					else if(strcmp(bodyTypeAtt.value() , "lbs") == 0) {
						//lbs
						type = type | MessageType::LBS;
					}
					else if(strcmp(bodyTypeAtt.value() , "expression") == 0) {
						//炫酷表情
						type = type | MessageType::EXPRESSION;
					}
				}
			}
		}
		return type;
	}

};
};
