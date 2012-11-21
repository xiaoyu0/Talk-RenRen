/**
* @file XMPPProcessor.h
* @brief	xmpp处理器的基础方法,完成三大类消息的分发，
* 			子类需要完成各类消息router的实现
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_XMPP_XMPP_PROCESSOR_H_
#define TALK_XMPP_XMPP_PROCESSOR_H_

#include <map>
#include <string>
#include <boost/shared_ptr.hpp>
#include "talk/Session.h"
#include "ProcessHandler.h"
#include "ProcessResult.h"
#include "PacketRouter.h"
#include "pugixml/pugixml.hpp"

namespace mtalk{
namespace xmpp{

 typedef boost::shared_ptr<mtalk::talk::Session> SessionPtr; 
	class XMPPProcessor{
	public :
		typedef boost::shared_ptr<PacketRouter> PacketRouterPtr;
		XMPPProcessor(std::string endpoint):
			endpoint_(endpoint){}

		/**
		* @brief	初始化三类消息的router
		*
		* @param	messageRouterPtr
		* @param	presenceRouterPtr
		* @param	iqRouterPtr
		*/
		void initRouter(PacketRouterPtr messageRouterPtr, PacketRouterPtr presenceRouterPtr, PacketRouterPtr iqRouterPtr){
			messageRouterPtr_ = messageRouterPtr;
			presenceRouterPtr_ = presenceRouterPtr;
			iqRouterPtr_ = iqRouterPtr;
		}

		virtual ~XMPPProcessor(){};

		/**
		* @brief	xmpp消息分发处理主方法
		*
		* @param	sessionPtr
		* @param	node
		*
		* @return	
		*/
		ProcessResult process(mtalk::talk::SessionPtr sessionPtr, const pugi::xml_node& node);

		std::string getEndpoint(){
			return endpoint_;
		}
	
	private :
		PacketRouterPtr messageRouterPtr_;
		PacketRouterPtr presenceRouterPtr_;
		PacketRouterPtr iqRouterPtr_;

		std::string endpoint_;

	};
};
};
#endif //TALK_XMPP_XMPP_PROCESSOR_H_
