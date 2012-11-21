/**
* @file MsgTypeIqProcessHandler.h
* @brief	设置推送消息类型的iq消息处理
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-15
*/
#ifndef TALK_XMPP_MSG_TYPE_IQ_PROCESS_HANDLER_H_
#define TALK_XMPP_MSG_TYPE_IQ_PROCESS_HANDLER_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "pugixml/pugixml.hpp"
#include "ProcessResult.h"
#include "ProcessHandler.h"

namespace mtalk{
namespace xmpp{

	class MsgTypeIqProcessHandler : public ProcessHandler{
	public :
		MsgTypeIqProcessHandler(){};
		virtual ~MsgTypeIqProcessHandler(){}

		ProcessResult handler(mtalk::talk::SessionPtr sessionPtr, const pugi::xml_node& node);
	private :
	
	};
};
};
#endif //TALK_XMPP_MSG_TYPE_IQ_PROCESS_HANDLER_H_
