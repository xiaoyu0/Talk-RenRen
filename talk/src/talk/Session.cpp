#include <ctime>
#include <limits.h>
#include <iostream>
#include <sstream>
#include <string>
#include <boost/lexical_cast.hpp>
#include <boost/shared_ptr.hpp>
#include "Session.h"
#include "bosh/BoshServer.h"
#include "SessionListener.h"
#include "bosh/BoshErrorBuilder.h"
#include "constant/ResultCode.h"
#include "utils/MyLogger.h"

using namespace std;
using namespace mtalk::constant;
using namespace mtalk::utils;

namespace mtalk{
namespace talk{

	Session::Session(string sessionId)
		:
		wait_(60),
		sessionId_(sessionId),
		supportMsgType_(17),
		isBackGround_(0),
		userId_(0),
		renrenId_(0),
		sendNotSupExpCoun_(0),
		heartBeatCount_(0),
		auth_(false) {
	
	

		srand(time(NULL));
		authPrefix_ = boost::lexical_cast<string>(rand());
		LOG_DEBUG("Session::Session => Create : sid : " << sessionId_ );
	}

  	Session::~Session(){
		LOG_DEBUG("Session::~Session => Destroy session : sid = " << sessionId_ << " , uid = " << userId_);
	}


	
	void Session::addSessionListener(boost::shared_ptr<SessionListener> listener){
		sessionListeners_.push_back(listener);
	}

	void Session::setManagerDeleteListener(boost::shared_ptr<SessionListener> listener){
		managerListenerPtr_ = listener;
	}

	void Session::addSupportType(const MessageType::Type type){
		supportMsgType_ |= (int)type;
	}

	void Session::delSupportType(const MessageType::Type type){
		supportMsgType_ &= ~((int)type);
	}

	void Session::delAllSupportType(){
		supportMsgType_ = 0;
	}

	bool Session::supportMsgType(const int type) {
		return (supportMsgType_ & (int)type) == type;
    }

	bool Session::supportMsgType(const MessageType::Type type){
		return supportMsgType((int)type);
	}

	int Session::getSessionType(){
		if(cAppId_ == 170979 ||
				cAppId_ == 166012||
				cAppId_ == 169485||
				cAppId_ == 215928||   //for 官方androd客户端appid
				cAppId_ == 215897||   //for 官方iphone客户端appid
				cAppId_ == 166011||
				cAppId_ == 169486||
				cAppId_ == 159371
		  ){

			return 2; //私信session
		}else if (cAppId_ == 153629 ||
				cAppId_ == 185292 ||
				cAppId_ == 153627 ||
				cAppId_ == 160590 ||
				cAppId_ == 185047 ||
				cAppId_ == 175592){

			return 1; //官方客户端
		} else if (cAppId_ == 111111 ||
				cAppId_ == 208078 ||
				cAppId_ == 208079 ||
				cAppId_ == 208080 ||
				cAppId_ == 208081 ||
				cAppId_ == 208082 ||
				cAppId_ == 208083
				){

			return 3; //私信3.0

		}
		return 1;
	}

	void Session::setV(const int v){
		switch(v){
		case 1 :
			//only chat
			supportMsgType_ = MessageType::CHAT | MessageType::PRESENCE;
			break;
		case 2 :
			//chat and notify
			supportMsgType_ = MessageType::CHAT | MessageType::NOTIFY
				| MessageType::PRESENCE;
			break;
		case 3 :
			supportMsgType_ = MessageType::CHAT | MessageType::NOTIFY | MessageType::PRESENCE;
			break;
		case 4 :
			//chat, action, voice and offline
			supportMsgType_ = MessageType::CHAT | MessageType::OFFLINE
				| MessageType::VOICE | MessageType::ACTION | MessageType::PRESENCE | MessageType::NOTIFY;
			break;
		case 5 :
			//chat, action, voice, image, lbs and offline
			supportMsgType_ = MessageType::CHAT | MessageType::OFFLINE | MessageType::IMAGE
				| MessageType::VOICE | MessageType::ACTION | MessageType::LBS;
			break;
		case 6 :
			//chat and offline for ipad2.5
			supportMsgType_ = MessageType::CHAT | MessageType::OFFLINE | MessageType::PRESENCE;
			break;
		case 7 :
			//chat, action, voice, image, expression and offline for sixin
			supportMsgType_ = MessageType::CHAT | MessageType::OFFLINE | MessageType::IMAGE
				| MessageType::VOICE | MessageType::ACTION | MessageType::PRESENCE
				| MessageType::EXPRESSION | MessageType::NOTIFY;
			break;
		case 8 :
			// v7 plus im_feed and feed_chat miuns PRESENCE
			supportMsgType_ = MessageType::CHAT | MessageType::OFFLINE | MessageType::IMAGE
				| MessageType::VOICE | MessageType::ACTION
				| MessageType::EXPRESSION | MessageType::NOTIFY | MessageType::FEED | MessageType::IM_FEED;
			break;
		case 9 :
			//chat, action, and offline    iphone 5.0 支持feed推送
			supportMsgType_ = MessageType::CHAT | MessageType::OFFLINE
				  | MessageType::NOTIFY | MessageType::IM_FEED;
			break;
		case 10 :
			//chat, voice and offline  for android_renren 5.5+
			supportMsgType_ = MessageType::CHAT | MessageType::OFFLINE
				| MessageType::VOICE;
			break;
		case 11 :
			supportMsgType_ = MessageType::IM_FEED;
			break;
		case 12 :
			supportMsgType_ = MessageType::CHAT | MessageType::OFFLINE | MessageType::IMAGE
				| MessageType::VOICE | MessageType::ACTION | MessageType::GROUP_CHAT 
				| MessageType::EXPRESSION | MessageType::NOTIFY | MessageType::FEED | MessageType::IM_FEED;
			break;

		case 13 :
			//chat, action, voice and offline    android 5.1 
			supportMsgType_ = MessageType::CHAT | MessageType::OFFLINE
				| MessageType::NOTIFY;
			break;
		
		case 15 : //sixin 3.0 
			supportMsgType_ = MessageType::CHAT | MessageType::OFFLINE | MessageType::IMAGE 
					| MessageType::VOICE | MessageType::ACTION | MessageType::ENTITY | MessageType::GROUP_CHAT
					| MessageType::EXPRESSION | MessageType::PERSONAL | MessageType::FEED | MessageType::IM_FEED 
                    | MessageType::SYSTEM ;
			break;
		case 16 :
			//chat, voice and offline im_feed, notify for iphone_renren 5.5+
			supportMsgType_ = MessageType::CHAT | MessageType::OFFLINE
				| MessageType::VOICE | MessageType::IM_FEED | MessageType::NOTIFY;
			break;

		default :
			supportMsgType_ = MessageType::CHAT | MessageType::PRESENCE;
		}
		v_ = v;
	}

	int Session::getV(){
		return v_;
	}

};
};
