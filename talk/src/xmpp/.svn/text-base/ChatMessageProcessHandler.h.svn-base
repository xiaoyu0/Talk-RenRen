/**
* @file ChatMessageProcessHandler.h
* @brief	message type=chat类消息的实际处理handler
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_XMPP_CHAT_MESSAGE_PROCESS_HANDLER_H_
#define TALK_XMPP_CHAT_MESSAGE_PROCESS_HANDLER_H_

#include <boost/shared_ptr.hpp>
#include "pugixml/pugixml.hpp"
#include "ProcessResult.h"
#include "ProcessHandler.h"
#include "talk/Session.h"
#include "imAdapter/IMGateForPhoneAdapter.h"
#include "proxy/ShortUrlServiceProxy.h"
#include "protocolChanger/ProtocolChanger.h"
#include "JID.h"
#include "antispam_client.h"


using namespace xce::antispam;
namespace mtalk{
namespace xmpp{

       	class ChatMessageProcessHandler : public ProcessHandler{
	public :
		ChatMessageProcessHandler(boost::shared_ptr<mtalk::im::IMGateForPhoneAdapter> imGateForPhoneAdapterPtr);
		virtual ~ChatMessageProcessHandler(){}

		ProcessResult handler(::mtalk::talk::SessionPtr sessionPtr,const  pugi::xml_node& node_);
		int antispamCheck(long formGid, long toGid, std::string msg, CheckType type = RENREN_MESSAGE, std::string ip_address = "127.0.0.1");
			private :
		string getSMS(const pugi::xml_node& node);
		ProcessResult process(mtalk::talk::SessionPtr sessionPtr, const JID& from, const JID& to,  pugi::xml_node& node);
		ProcessResult processPersionalMsg(mtalk::talk::SessionPtr sessionPtr,const JID& from, const JID& to, pugi::xml_node& node_);

		boost::shared_ptr<mtalk::im::IMGateForPhoneAdapter> imGateForPhoneAdapterPtr_;
		boost::shared_ptr<mtalk::proxy::ShortUrlServiceProxy> shortUrlServiceProxyPtr_;
		void  sendIM(long fromId, long toId, const  std::string& msg, long msgkey = 0);
		protocolChang::ProtocolChanger  changer;
	};

};
};
#endif //TALK_XMPP_CHAT_MESSAGE_PROCESS_HANDLER_H_
