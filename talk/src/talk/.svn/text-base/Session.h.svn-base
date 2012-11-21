/**
 * @file Session.h
 * @brief	保存一个手机接入的会话信息
 * @author you.zhou@renren-inc.com
 * @version 1.0
 * @date 2011-07-06
 */
#ifndef TALK_HTTP_SERVER_Session_H_
#define TALK_HTTP_SERVER_Session_H_

#include <string>
#include <deque>
#include <ctime>
#include <vector>
#include <boost/enable_shared_from_this.hpp>
#include <boost/shared_ptr.hpp>
#include "bosh/Message.h"
#include "utils/MyLock.h"
#include "ice_src/Utils.h"
#include "constant/MessageType.h"
#include "constant/AuthType.h"

namespace mtalk{
	namespace talk{

		class SessionListener;

		class Session : public boost::enable_shared_from_this<Session> {
			public :
				Session(std::string sessionId);

				virtual	~Session();
				/*
				 * @brief	往该session的接入设备推送消息，主要推送接口。
				 * 			message应该是一个完整的xmpp节
				 * 			如果有hold的connection并成功发送返回true，
				 * 			否则message进入缓存队列，返回false
				 *
				 * @param	fromId
				 * @param	message
				 * @param	type
				 * @param	mid
				 *
				 * @return	
				 */
				virtual bool deliver(const long fromId, const std::string message, const constant::MessageType::Type type, const long mid) = 0;
				virtual bool deliver(const long fromId, const std::string message, const int type, const long mid) = 0;

				void start();

				/**
				 * @brief	关闭一个session，默认参数会通知session manager
				 * 			为防止session manager自行检测超时session形成死锁故加入可选参数
				 *
				 * @param	notifyManagerDelete
				 */
				virtual	void close(bool notifyManagerDelete = true) = 0;
				/**
				  提供给manager定时检测的接口
				 */
				virtual bool check() = 0;
				std::string getSessionId(){
					return sessionId_;
				}

				long getConnectionId(){
					return connectionId_;
				}
				void setConnectionId(long connectionId){
					connectionId_=connectionId;
				}
				/**
				 * @brief	添加监听器，目前仅会在session close时调用
				 * 			后续根据需要加入更多时间的监听
				 *
				 * @param	listener
				 */
				void addSessionListener(boost::shared_ptr<SessionListener> listener);

				/**
				 *@brief  获取session类型  私信或者官方；
				 **/
				int getSessionType();





				/**
				 * @brief	一个特殊监听器，用于session关闭时通知session manager删除该session
				 *
				 * @param	listener
				 */
				void setManagerDeleteListener(boost::shared_ptr<SessionListener> listener);
				
				void setBackGround(){ isBackGround_ = true; }
				void setForeGround(){ isBackGround_ = false; }
				bool isBackGround(){ return isBackGround_ ; }


				void sendNotSupExpCoun(int count){ sendNotSupExpCoun_ = count;}
				int  sendNotSupExpCoun(){ return sendNotSupExpCoun_ ;}
				
				void incHeartBeatCount(){ heartBeatCount_++ ;}
				int  heartBeatCount(){return heartBeatCount_ ;}
				void heartBeatCount(int count){ heartBeatCount_ = count;}

				void setLang(const std::string& lang) { lang_ = lang; }
				std::string getLang() { return lang_; }


				void setRenRenId(const long userId) { renrenId_ = userId; }


				long getRenRenId() const { return renrenId_; }


				void setUserId(const long userId) { userId_ = userId; }

				long getUserId() const { return userId_; }


				void setAuth(const bool auth){
					auth_ = auth;
				}

				bool getAuth() const { return auth_; }

				void setAuthType(const constant::AuthType::Type authType){
					authType_ = authType;
				}

				constant::AuthType::Type getAuthType() const { return authType_; }


				void setCAppId(const int cAppId) { cAppId_ = cAppId;}

				int getCAppId() const { return cAppId_;}

			    void setCFromId(const int cFromId) { cFromId_ = cFromId;}

				int getCFromId() const { return cFromId_;}

				void setCVersion(const std::string& cVersion) { cVersion_ = cVersion; }

				void setOnlineDeploy(const bool onlineDeploy) { onlineDeploy_ = onlineDeploy;}

				bool isOnlineDeploy() const { return onlineDeploy_; };

				std::string getCVersion() const { return cVersion_; }

				std::string getAuthPrefix() const { return authPrefix_; }

				void addSupportType(const mtalk::constant::MessageType::Type type);

				void delSupportType(const mtalk::constant::MessageType::Type type);

				void delAllSupportType();

				void setWait(const int wait) { wait_ = wait; }

				int getWait() { return wait_; }


				/**
				 * @brief	检测该session是否支持此消息类型
				 *
				 * @param	type
				 *
				 * @return	
				 */
				bool supportMsgType(const int type);
				bool supportMsgType(const mtalk::constant::MessageType::Type type);

				int getSuppotrMsgType(){return supportMsgType_;}

				void setV(const int v);

				int getV();
				
				void setDomain(std::string domain){ domain_ = domain; }

				std::string getDomain(){ return domain_ ;}

				boost::mutex selfMutex;

			protected :
				int wait_;

				std::string lang_;

				std::string sessionId_;

				int supportMsgType_;

				int v_;

				bool isBackGround_;

				long userId_;
				
				long renrenId_;

				long connectionId_;
			
				int  sendNotSupExpCoun_;
				
				int heartBeatCount_;
				
				std::string domain_ ;

				bool auth_;

				std::string authPrefix_;

				int cAppId_;
				int cFromId_;
				std::string cVersion_;

				bool onlineDeploy_;

				constant::AuthType::Type authType_;

				std::vector<boost::shared_ptr<SessionListener> > sessionListeners_;

				boost::shared_ptr<SessionListener> managerListenerPtr_;
				//
		};
		typedef  boost::shared_ptr<Session> SessionPtr;

	};
};
#endif //TALK_HTTP_SERVER_SESSION_H_
