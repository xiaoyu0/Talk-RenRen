#include <string>
#include <boost/algorithm/string.hpp>
#include "ChatMessageProcessHandler.h"
#include "JID.h"
#include "talk/TalkServer.h"
#include "constant/MessageType.h"
#include "constant/UserOnlineType.h"
#include "utils/Url.h"
#include "utils/MyLogger.h"
#include "utils/XmlUtils.h"
#include "utils/MsgTransform.h"
#include "utils/EmojiFilter.h"
#include "utils/MessageTails.h"
#include "utils/MessageTypeUtil.h"
#include "proxy/ProxyRegister.h"
#include "Config.h"
#include "user_name_client.h"
//#include "antispam_client.h"
#include "utils/Singleton.h"
#include "utils/TimeUtils.h"
#include "protocolChanger/ProtocolChanger.h"
#include "proxy/HistoryServiceProxy.h"
#include "proxy/RelationServiceProxy.h"
#include "proxy/BindServiceProxy.h"
#include "user_passport_client.h"


using namespace std;
using namespace pugi;
using namespace mtalk::utils;
using namespace mtalk::constant;
using namespace mtalk::im;
using namespace mtalk::proxy;
using namespace mtalk::talk;
using namespace boost::algorithm;
using namespace xce::client;
using namespace xce::antispam;

namespace mtalk{
    namespace xmpp{

	ChatMessageProcessHandler::ChatMessageProcessHandler(boost::shared_ptr<IMGateForPhoneAdapter> imGateForPhoneAdapterPtr):
	    imGateForPhoneAdapterPtr_(imGateForPhoneAdapterPtr){

		shortUrlServiceProxyPtr_ = MY_INSTANCE(ProxyRegister).getProxy<ShortUrlServiceProxy>("shortUrlProxy");
	//	changerPtr_.reset(new protocolChang::ProtocolChanger);
		LOG_INFO("ChatMessageProcessHandler::ChatMessageProcessHander => Created");

	    }

	ProcessResult ChatMessageProcessHandler::handler(SessionPtr sessionPtr,const  pugi::xml_node& node_){
	    string personalAttStr = node_.attribute("type").value();
	    stringstream ss;
	    node_.print(ss, "\t", pugi::format_raw);
	    LOG_DEBUG("ChatMessageProcessHandler::handler ==> node = " << ss.str());


	    pugi::xml_node node = node_;
	    JID to;
	    JID from;

	    vector<JID> ccList;
	    ProcessResult result;


	    long  t = getCurrentTimeMSec();
	    string tStr = boost::lexical_cast<string>(t);
	    //tStr = tStr + "000";
		node.append_attribute("time").set_value(tStr.c_str());
		long msgkey = MY_INSTANCE(TalkServer).generateMid();
		string msgkeyStr;
		try{
		msgkeyStr = boost::lexical_cast<string>(msgkey);
		}catch(...){}
		node.append_attribute("msgkey").set_value(msgkeyStr.c_str());



	    xml_attribute attr = node.attribute("to");
	    if(attr){
			to.parser(attr.value());
	    } else {
			result.setCode(ProcessResult::DATA_INCOMPLETE);
			result.setMsg("miss attr : to");
			return result;
	    }

	    attr = node.attribute("from");
	    if(attr){
			from.parser(attr.value());
	    } else {
			result.setCode(ProcessResult::DATA_INCOMPLETE);
			result.setMsg("miss attr : from");
            return result;
        }




        //判断是否是合法用户，是否被冻结,国内版本支持，国际版本不支持

#ifndef INTERNATIONAL  
        long from_renren_id =0;
        from_renren_id = changer.getRenRenIdBySiXinId(from.getUserId());
        if(from_renren_id != -1){

            int userSafeStatus = 0;
            int userStatus = 0;
            try{
                userSafeStatus = UserPassportClient::GetUserSafeStatus((int)from_renren_id); 
                userStatus = UserPassportClient::GetUserStatus((int)from_renren_id);

                LOG_DEBUG("ChatMessageProcessHandler::handler ==> checkStatus userSafeStatus= |"<<userSafeStatus<<"|"<< userStatus <<"|"<< "msg= "<<ss.str());
            } catch (...){

                userSafeStatus = 0;
                userStatus = 0;
                LOG_WARN("ChatMessageProcessHandler::handler ==> checkStatus Exception status = |"<<userSafeStatus);
            }
            if(userSafeStatus != 0 || userStatus ==6 ||userStatus == 7){ //非法用户，被冻结了

                    LOG_WARN("Chat account is forbidden to send message userid =|"<<from_renren_id<<"|");
                    result.setCode(ProcessResult::REFUSE);
                    result.setMsg("illegal user");
                    return result;
                }

            }
#endif


        //判断是否在黑名单中.目前只有国际版支持，国内版本不支持
#ifdef INTERNATIONAL  

        int Return = MY_INSTANCE(ProxyRegister).getProxy<RelationServiceProxy>("RelationServiceProxy")->isBlocked(to.getUserId(), from.getUserId()); 
        if(Return > 0)    //exist in black vcard_list.
        {

			string id = node.attribute("id").value();
			string typeStr = node.attribute("type").value();
			stringstream ss;
			ss << "<success id='";
			ss << id;
			ss << "' from='";
			ss << from.toString();
			ss << "' to='";
			ss << to.toString();
			ss << "'  type='";
			ss << typeStr;
			ss << "' />";
			//过滤body type='action' 动作类型包
			xml_node body = node.child("body");
			if(body){
				const char_t* msgType = body.attribute("type").value();
				if(strcmp(msgType, "action") == 0){
					result.setCode(ProcessResult::OK);
					result.setMsg(ss.str());
					return result;
				}
			} 
			LOG_INFO("ChatMessageProcessHandler::handler ==> "<<from.getUserId()<<" is refused by "<<to.getUserId());
			MY_INSTANCE(TalkServer).refuseInfo(sessionPtr, to, from);   //推送拒绝信息
			result.setMsg(ss.str());
			result.setCode(ProcessResult::OK);
			return result;
		}

#endif

	    xml_attribute fnameAttr = node.attribute("fname");

#ifndef INTERNATIONAL  
	    //国际版的不能取名字	
	    if(!fnameAttr){
		string fname(node.attribute("fname").value());
		int uid = 0;
		try{
			string uidstr = MY_INSTANCE(ProxyRegister).getProxy<BindServiceProxy>("accountBindServiceProxy")->getBundAccountId(from.getUserId(),com::renren::sixin::account::RenRenID);
			try{

				uid = boost::lexical_cast<int>(uidstr);


			} catch (boost::bad_lexical_cast& e){

				uid = 0;

			}
		    fname = UserNameClient::GetUserName(uid);

			LOG_DEBUG("ChatMessageProcessHandler::handler ==> "<<from.getUserId()<<" name"<<fname <<uid);
		}catch(...){
		    LOG_WARN("ChatMessageProcessHandler::handler ==> get UserName failure userId = "<<from.getUserId()<<"!"<<uid);
		}
		node.append_attribute("fname").set_value(fname.c_str());
	    }
#endif
	    node.append_attribute("fromCAppid").set_value(sessionPtr->getCAppId());

	    attr = node.attribute("cc");
	    if(attr){
		string ccStr(attr.value());
		vector<string> ccStrV;
		split(ccStrV, ccStr, is_any_of(","), token_compress_on);
		for(size_t i = 0; i < ccStrV.size(); ++i){
		    JID cc;
		    if(cc.parser(ccStrV[i])){
			ccList.push_back(cc);
		    }
		}
	    }

	    if(personalAttStr == "personal"){
			return 	processPersionalMsg(sessionPtr,from, to, node);
	    }
	    result = process(sessionPtr, from, to, node);

	    if(!ccList.empty() && result.getCode() == ProcessResult::OK){
			xml_node nodeCopy(node);
			nodeCopy.remove_attribute("cc");
			xml_attribute fromAttr = nodeCopy.attribute("from");
			for(size_t i = 0; i < ccList.size(); ++i){
				fromAttr.set_value(ccList[i].toString().c_str());
				process(sessionPtr, from, ccList[i], nodeCopy);
			}
	    }

	    if(result.getCode() == ProcessResult::OK) {
			vector<long> idV;
			idV.push_back(to.getUserId());
			for(size_t i = 0; i < ccList.size(); ++i){
				idV.push_back(ccList[i].getUserId());
			}
			string id = node.attribute("id").value();
			string typeStr = node.attribute("type").value();
			ostringstream os;
			os << "<success id='";
			os << id;
			os << "' from='";
			os << from.toString();
			os << "' to='";
			os << to.toString();
			os << "' type='";
			os << typeStr;
			os<<"'>";
			if(node.attribute("withStat")){
				vector<int> stat = MY_INSTANCE(TalkServer).getUsersOnlineStatSeq(idV);
				os << "<onlineStat id='" 
					<< to.getUserId()
					<< "' stat='"
					<< ( stat[0] ? "online" : "offline")
					<< "' sendSMS='"
					<< ( stat[0] ? "false" : "true")
					<< "' />";
				for(size_t i = 0; i < ccList.size(); ++i){
					os << "<onlineStat id='"
						<< ccList[i].getUserId()
						<< "' stat='"
						<< ( stat[i + 1] ? "online" : "offline")
						<< "' sendSMS='"
						<< ( stat[i + 1] ? "false" : "true")
						<< "' />";
				}
			}
			if(node.attribute("withSMS")){
				string sms = getSMS(node);
				if(!sms.empty()){
					//	os << "<sms>" << sms << "</sms>";
				}
			}
			os << "</success>";
			result.setMsg(os.str());
	    }
	    return result;
	}

	string ChatMessageProcessHandler::getSMS(const pugi::xml_node& node){
	    string url(WAP_PAGE_URL);
	    url.append("?app=sixin");

	    xml_node body = node.child("body");
	    if(body){
		const char_t* msgType = body.attribute("type").value();
		const char_t* fromName = node.attribute("fname").value();
		string msg;
		ostringstream os;
		if(strcmp(msgType, "text") == 0){
		    for(xml_node text = body.first_child(); text; text = text.next_sibling()){
			if(strcmp(text.name(), "text") == 0){
			    string textValue = text.child_value();
			    msg.append(textValue);
			}
		    }
		    os << fromName << "：" << msg;
		} else if(strcmp(msgType, "multimedia") == 0){
		} else if(strcmp(msgType, "image") == 0){
		    xml_node image = body.child("image");
		    if(image){
			const char_t* mainUrl = image.attribute("large").value();
			url.append("&type=img&imgurl=");
			url.append(urlEncode(mainUrl));
		    }
		    os << fromName << "给你发来一张图片：" << shortUrlServiceProxyPtr_->create(url);
		} else if(strcmp(msgType, "lbs") == 0){
		    xml_node lbs = node.child("lbs");
		    string lat("0");
		    string lon("0"); if(lbs){ lat = lbs.child("lat").child_value();
			lon = lbs.child("lon").child_value();
		    }
		    url.append("&type=map&lat=");
		    url.append(lat);
		    url.append("&lon=");
		    url.append(lon);
		    os << fromName << "给你发来一条位置信息：" << shortUrlServiceProxyPtr_->create(url);
		} else if(strcmp(msgType, "expression") == 0){
		    xml_node text = body.child("text");
		    string expressionStr = text.child_value();
		    trim(expressionStr);
		    expressionStr = expressionStr.substr(1, expressionStr.size() - 2);
		    string encodeStr = urlEncode(expressionStr);
		    url.append("&type=bigface&faceid=");
		    url.append(encodeStr);
		    os << fromName << "给你发来一个炫酷表情：" << shortUrlServiceProxyPtr_->create(url);
		} else if(strcmp(msgType, "voice") == 0){
		    xml_node audio = body.child("audio");
		    if(audio){
			url.append("&type=audio&audiourl=");
			url.append(urlEncode(audio.attribute("fullurl").value()));
		    }
		    os << fromName << "给你发来一条语音留言：" << shortUrlServiceProxyPtr_->create(url);
		}
		return os.str();
	    }
	    return "";
	}

	ProcessResult ChatMessageProcessHandler::process(SessionPtr sessionPtr, const JID& from, const JID& to,  pugi::xml_node& node){
	    string msg;
	    string extLog = "0";
	    MessageType::Type msgType = MessageType::CHAT;
	    ProcessResult result;
		
	    // 提feed属性,有就是一条随feed的聊天
	    long feedId = 0;
	    int feedType = 0;
	    bool withFeed = false;
	    xml_attribute feedAttr = node.attribute("feed");
	    if (!feedAttr.empty()) {
			//一些关于feed attribute的错误处理
			if (strcmp(feedAttr.value(), "true")){
				cout << feedAttr.value() << endl;
				result.setCode(ProcessResult::XML_SYNTAX_ERROR);
				result.setMsg("the value of feed attribute can only be 'true'");
				return result;
			}
			if (!node.child("feed")){
				result.setCode(ProcessResult::DATA_INCOMPLETE);
				result.setMsg("lack feed node");
				return result;
			}

			withFeed = true;
			xml_node feed = node.child("feed");
			string feedIdStr = feed.attribute("id").value();
			feedId = boost::lexical_cast<long>(feedIdStr);
			feedType = feed.attribute("type").as_int();

			xml_node feedbody = node.child("feed");
			if (!feedbody.empty()){
				ostringstream os;
				feedbody.print(os, "\t", pugi::format_raw);
				string osStr = os.str();
#ifndef INTERNATIONAL
				int antiCheckResult = 0;
				antiCheckResult = antispamCheck(from.getUserId(),to.getUserId(),osStr);
				if(antiCheckResult){// forbidden
					MY_INSTANCE(TalkServer).antispamInfo(sessionPtr, from, to, osStr);
					result.setCode(ProcessResult::OK);
					return result;
				}
					
#endif    
			}
	    }


	    xml_node body = node.child("body");
	    if(body) {
			const char_t* msgTypeStr = body.attribute("type").value();
			const char_t* actionType = "0";
			bool sendToIM = false;

			if (withFeed){
				sendToIM = true;
			}

			string context;
			ostringstream os;
			if(strcmp(msgTypeStr, "text") == 0){
				//普通文本内容
				node.print(os, "\t", pugi::format_raw);
				string osStr = os.str();
				LOG_DEBUG("ChatMessageProcessHandler::process ==> in node process node = " << osStr);
				for(xml_node text = body.first_child(); text; text = text.next_sibling()){
					if(strcmp(text.name(), "text") == 0){
						string textValue = text.child_value();
						msg.append(textValue);
						XmlUtils::xmlEncode(msg);
						MY_INSTANCE(EmojiFilter).filter(msg);
						context = msg;
						text.first_child().set_value(msg.c_str());
					}
				}

#ifndef INTERNATIONAL
				int antiCheckResult = 0;
				antiCheckResult = antispamCheck(from.getUserId(),to.getUserId(),msg);
				if(antiCheckResult){// forbidden
					MY_INSTANCE(TalkServer).antispamInfo(sessionPtr, from, to, msg);
					result.setCode(ProcessResult::OK);
					return result;
				}

#endif



				replace_all(context, "|", "");
				replace_all(context, "\n", "");

				sendToIM = true;
				msgType = MessageType::CHAT;

			} else if(strcmp(msgTypeStr, "multimedia") == 0){
				//多媒体内容
				node.print(os, "\t", pugi::format_raw);
				msg = MsgTransform::voice2text(node);
				LOG_TRACE("ChatMessageProcessHandler::handler => voice2text : voice = [" << os.str() << "] msg = [" << msg << "]");

				sendToIM = true;
			} else if(strcmp(msgTypeStr, "image") == 0){
				//image
				node.print(os, "\t", pugi::format_raw);

				msg = MsgTransform::image2text(node);
				LOG_TRACE("ChatMessageProcessHandler::handler => image2text : image = [" << os.str() << "] msg = [" << msg << "]");

				sendToIM = true;
				msgType = MessageType::IMAGE;
			} else if(strcmp(msgTypeStr, "vibrate") == 0){
				//震动
				node.print(os, "\t", pugi::format_raw);
				msgType = MessageType::VIBRATE;
			} else if(strcmp(msgTypeStr, "action") == 0){
				//用户行为
				actionType = body.attribute("action").value();
				node.remove_attribute("msgkey");
				node.print(os, "\t", pugi::format_raw);
				msgType = MessageType::ACTION;
			} else if(strcmp(msgTypeStr, "lbs") == 0){
				//lbs
				node.print(os, "\t", pugi::format_raw);

				msg = MsgTransform::lbs2text(node);
				LOG_TRACE("ChatMessageProcessHandler::handler => lbs2text : lbs = [" << os.str() << "] msg = [" << msg << "]");
				sendToIM = true;
				msgType = MessageType::LBS;
			} else if(strcmp(msgTypeStr, "expression") == 0){
				//expression
				node.print(os, "\t", pugi::format_raw);

				msg = MsgTransform::expression2text(node);
				LOG_TRACE("ChatMessageProcessHandler::handler => expression2text : expression = [" << os.str() << "] msg = [" << msg << "]");
				sendToIM = true;
				msgType = MessageType::EXPRESSION;
			} else if(strcmp(msgTypeStr, "voice") == 0){
				//voice
				node.print(os, "\t", pugi::format_raw);

				msg = MsgTransform::voice2text(node);
				LOG_TRACE("ChatMessageProcessHandler::handler => voice2text : voice = [" << os.str() << "] msg = [" << msg << "]");

				sendToIM = true;
				msgType = MessageType::VOICE;
			} else {
				result.setCode(ProcessResult::UNKNOWN_TYPE);
				result.setMsg("<failure><text>unknown body type</text></failure>");
				return result;
			} 

			// 加上 MessageType::FEED 类型
			if (withFeed){
				LOG_TRACE("ChatMessageProcessHandler::process ==> a feed message  , add MessageType::FEED to Type");
				msgType = MessageType::Type(msgType | MessageType::FEED);
			}


			//非文本类消息通过聊天系统推送
			//目前文本直接走talk的push通道
			MY_INSTANCE(TalkServer).remotePush(from.getUserId(), to.getUserId(), os.str(), msgType);

			if(msgType != MessageType::ACTION){
				//推送云存储
				MY_INSTANCE(ProxyRegister).getProxy<HistoryServiceProxy>
					("HistoryMessageServiceProxy")->saveMsg(from.getUserId(), to.getUserId(), 0, os.str(), time(NULL));
			}

			if(sendToIM && (to.getEndpoint() == "talk.m.renren.com" || to.getEndpoint() == "renren.sixin.com")){
				if (withFeed){ //如果是随feed聊天作特定的转换
					if (!(msgType & MessageType::CHAT)){ //随FEED的不是文本
						msg = MsgTransform::feed2text(node);
					} else { //随FEED的是文本
						string prefix = MsgTransform::feed2text(node);
						if (prefix.find('!') != string::npos){
							prefix.replace(prefix.find('!'),1 , ":");
						}
						msg.insert(0, prefix);
					}
				}

				MessageTails::addTail(sessionPtr->getCAppId(), msgType, msg);
				string flageStr("  ");
				msg.append(flageStr);
				long msgkey = 0;
				string msgkeyStr = node.attribute("msgkey").value();
				try{
					msgkey = boost::lexical_cast<long>(msgkeyStr);
				}catch(...){
				}	
				sendIM(from.getUserId(), to.getUserId(), msg, msgkey);
			}


			LOG_ACTION(msgTypeStr << "|" << from.getUserId() << "|"
					<< to.getUserId() << "|"
					<< sessionPtr->getCAppId() << "|" 
					<< sessionPtr->getCFromId() << "|"
					<< sessionPtr->getCVersion() << "|" 
					<< actionType << "|" << extLog << "|" << from.getEndpoint() << "|" << to.getEndpoint() << "|" << context  << "|" );

			RLOG_ACTION(msgTypeStr << "|" << from.getUserId() << "|"
					<< to.getUserId() << "|"
					<< sessionPtr->getCAppId() << "|" 
					<< sessionPtr->getCFromId() << "|"
					<< sessionPtr->getCVersion() << "|" 
					<< actionType << "|" << extLog << "|" << from.getEndpoint() << "|" << to.getEndpoint() << "|" << context  << "|" );
			return result;

	    } else {

			stringstream os;
			node.print(os, "\t", pugi::format_raw);
			MY_INSTANCE(TalkServer).remotePush(from.getUserId(), to.getUserId(), os.str(), MessageType::ENTITY);
			result.setCode(ProcessResult::OK);
			string id = node.attribute("id").value();
			xml_attribute att = node.attribute("type");
			string attStr = att.value();

			stringstream ss;
			ss<<"<success id='";
			ss<<id;
			os << "' from='";
			os << from.toString();
			os << "' to='";
			os << to.toString();
			ss<<"' type ='";
			ss<<attStr;
			ss<<"' />";
			result.setMsg(ss.str());
			if(msgType != MessageType::ACTION){
				//推送云存储
				MY_INSTANCE(ProxyRegister).getProxy<HistoryServiceProxy>
					("HistoryMessageServiceProxy")->saveMsg(from.getUserId(), to.getUserId(), 0, os.str(), time(NULL));
			}
			return result;
	    }
	}

	void ChatMessageProcessHandler::sendIM(long fromId, long toId, const std::string& msg, long msgkey){

#ifndef INTERNATIONAL  
	    imGateForPhoneAdapterPtr_->sendMessage(fromId, toId, msg, msgkey);
#endif
	}


	ProcessResult ChatMessageProcessHandler::processPersionalMsg(SessionPtr sessionPtr, const JID& from, const JID& to, pugi::xml_node& node_){
	    LOG_DEBUG("ChatMessageProcessHandler::processPersionalMsg= > begin fromId = "<< from.getUserId() <<" toId = " << to.getUserId());
	    ProcessResult result ;
	    stringstream os;
	    node_.print(os, "\t", pugi::format_raw);

#ifndef INTERNATIONAL
	    xml_node body = node_.child("body");
	    xml_node text =body.child("text");
		if(body && text){

			int antiCheckResult = 0;
			antiCheckResult = antispamCheck(from.getUserId(),to.getUserId(),text.child_value());
			if(antiCheckResult){// forbidden
				MY_INSTANCE(TalkServer).antispamInfo(sessionPtr, from, to, text.child_value());
				string id = node_.attribute("id").value();
				stringstream ss;
				ss<<"<success id='";
				ss<<id;
				ss << "' from='";
				ss << from.toString();
				ss << "' to='";
				ss << to.toString();
				ss<<"'  type='personal'/>";
				result.setMsg(ss.str());
				result.setCode(ProcessResult::OK);
				return result;
			}

		}

#endif    
	    string message = os.str();
	    int type = MessageTypeUtil::getMessageType(message); 
		MY_INSTANCE(TalkServer).remotePush(from.getUserId(), to.getUserId(), message, type);
		string msg("给你发来一条私密消息  ");
		long msgkey = 0;
		string msgkeyStr = node_.attribute("msgkey").value();
		try{
			msgkey = boost::lexical_cast<long>(msgkeyStr);
		}catch(...){
		}     


	    sendIM(from.getUserId(), to.getUserId(), msg, msgkey);
	    result.setCode(ProcessResult::OK);
	    string id = node_.attribute("id").value();
	    stringstream ss;
	    ss<<"<success id='";
	    ss<<id;
	    ss << "' from='";
		ss << from.toString();
		ss << "' to='";
		ss << to.toString();
		ss<<"'  type='personal'/>";
		result.setMsg(ss.str());
		return result;

	}
	int ChatMessageProcessHandler::antispamCheck(long fromGid, long toGid, string msg, CheckType type, string ip_address){

		int antispamResult = 0;

		try{

			long from_renren_id =-1;
			long to_renren_id = -1;
			from_renren_id = changer.getRenRenIdBySiXinId(fromGid);
			to_renren_id = changer.getRenRenIdBySiXinId(toGid);
			LOG_DEBUG("ChatMessageProcessHandler::antispam |"<< fromGid << "|"<< from_renren_id <<"|"<< toGid <<"|"<< to_renren_id <<"|"<< msg);
			antispamResult = AntispamClient::ozeinContent((int)from_renren_id, (int)to_renren_id,type , msg, ip_address);

		}catch(...){

			LOG_WARN("ChatMessageProcessHandler::antispam exception");
			return 0;
		}   

		if(antispamResult == PROHIBITED){
			//PROHIBITED = 30             // 违禁，不能发布
			//MY_INSTANCE(TalkServer).antispamInfo(sessionPtr, from, to, osStr);
			return 1;
		}   

		return 0;
	}


	};
};
