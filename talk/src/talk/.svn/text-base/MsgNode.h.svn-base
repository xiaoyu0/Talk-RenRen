#ifndef TALK_TALK_MSG_NODE_H_
#define TALK_TALK_MSG_NODE_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "constant/MessageType.h"
#include "Config.h"

#ifdef MSG_ACK_TIME_LOG
#include <ctime>
#endif //MSG_ACK_TIME_LOG

namespace mtalk{
namespace talk{

	/**
	* @brief	待发送的消息体
	*/
	struct MsgNode{
		long from;
		std::string msg;
		long mid;
		int type;
#ifdef MSG_ACK_TIME_LOG
		long time;
		int appId;
		long fromId;
		std::string version;
#endif //MSG_ACK_TIME_LOG
	};
	
	typedef boost::shared_ptr<MsgNode> MsgNodePtr;

};
};
#endif //TALK_TALK_MSG_NODE_H_
