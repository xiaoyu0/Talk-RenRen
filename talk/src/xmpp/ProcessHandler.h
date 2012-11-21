/**
* @file ProcessHandler.h
* @brief	一条xmpp具体消息的处理handler interface
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_XMPP_PROCESS_HANDLER_H_
#define TALK_XMPP_PROCESS_HANDLER_H_

#include <string>
#include "pugixml/pugixml.hpp"
#include "ProcessResult.h"
#include "talk/Session.h"

namespace mtalk{
namespace xmpp{

	class ProcessHandler{
	public :
		virtual ~ProcessHandler(){}

		/**
		* @brief	handler 方法
		*
		* @param	node
		*
		* @return	
		*/
		virtual ProcessResult handler(mtalk::talk::SessionPtr sessionPtr, const pugi::xml_node& node) = 0;
	};
};
};
#endif //TALK_XMPP_PROCESS_HANDLER_H_
