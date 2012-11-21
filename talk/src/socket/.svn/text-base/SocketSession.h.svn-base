/**
* @file SocketSession.h
* @brief	保存一个手机接入的会话信息
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_HTTP_SERVER_SocketSession_H_
#define TALK_HTTP_SERVER_SocketSession_H_

#include <string>
#include <deque>
#include <ctime>
#include <vector>
#include <boost/enable_shared_from_this.hpp>
#include <boost/shared_ptr.hpp>
//#include "Message.h"
#include "utils/MyLock.h"
#include "pugixml/Tag.h"
#include "ice_src/Utils.h"
#include "constant/MessageType.h"
#include "talk/Session.h"
namespace mtalk{
namespace socket{

class SessionListener;

class SocketSession : public mtalk::talk::Session
{
public :
	SocketSession(std::string sessionId);
	
	~SocketSession();

     void   initXMPPTagHandler(boost::shared_ptr<tagParser::TagHandler> handler);

     bool   feed(const std::string msg);

	/**
	* @brief	该SocketSession的新链接到来时检查rid是否正确。
	* 			如果正确则更新SocketSession中保存的connection
	* 			如果旧的connection依然存在，返回超时信息
	* 			如果rid异常，返回false
	*
	* @param	rid
	* @param	response
	*
	* @return	
	*/
//	com::xiaonei::wap::talk::Result updateConnection(const long rid, const long connectionId);

//	std::string buildResponse(const long rid, const com::xiaonei::wap::talk::Result& result);

//	com::xiaonei::wap::talk::Result checkRid(const long rid);

	/**
	* @brief	往该SocketSession的接入设备推送消息，主要推送接口。
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
	bool deliver(const long fromId, const std::string message, const int type, const long mid);
	bool deliver(const long fromId, const std::string message, const mtalk::constant::MessageType::Type type, const long mid);

	
//	bool isHolding(){
//		return isHolding_;
//	}

    void close(bool notifyManagerDelete = true);
	/**
	* @brief	返回一个空response，用户旧connection timeout
	*/
	void responseEmpty();

	/**
	* @brief	设置最长hold时间
	*
	* @param	wait
	*/
	bool  check();

//	void setHold(const int hold) { hold_ = hold; }
//	int getHold() { return hold_; }

//	void setMaxRequests(const int maxRequests) { maxRequests_ = maxRequests; }
//	int getMaxRequests() { return maxRequests_; }

	void setMaxPause(const int maxPause) { maxPause_ = maxPause; }
	int getMaxPause() { return maxPause_; }


	long getLastRequestId() const { return lastRequestId_; }

	void setLastRequestId(const long rid) { lastRequestId_ = rid; }



	time_t getLastActivity() const { return lastActivity_; }
    void   setLastActivity(time_t timeNow) { lastActivity_ = timeNow; }

	time_t getInactivityTimeout() const { return inactivityTimeout_; }


private :
void internalClose();
    tagParser::TagParserPtr tagParserPtr_;	
//	bool checkAndResponse();

//	MessagePtr makePendingMsg(long rid);
		
	/**
	* @brief	推送消息的实际方法
	*
	* @param	message
	* @param	shutdown
	*
	* @return	
	*/
//	bool response(const std::string& message);
	
//	std::string packageMsg(MessagePtr mp);

//	int hold_;
	long lastRequestId_;
	long holdRequestId_;
	time_t lastActivity_;
	int maxRequests_;
	int maxPause_;
	bool isHolding_;
	time_t inactivityTimeout_;





	boost::mutex sentMutex_;
	boost::mutex pendingMutex_;

//	std::deque<MessagePtr> sentQueue_;
//	std::deque<talk::MsgNodePtr> pendingQueue_;



};
typedef boost::shared_ptr<SocketSession> SocketSessionPtr;
};
};
#endif //TALK_HTTP_SERVER_SocketSession_H_
