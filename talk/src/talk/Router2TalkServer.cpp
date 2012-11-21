#include <sstream>
#include <ctime>
#include <boost/lexical_cast.hpp>
#include <boost/make_shared.hpp>
#include "TalkServer.h"
#include "bosh/BoshServer.h"
#include "socket/SocketServer.h"
#include "TalkSessionListener.h"
#include "xmpp/TalkXMPPProcessor.h"
#include "TalkXmppRequestHandler.h"
#include "pugixml/pugixml.hpp"
#include "utils/TimeUtils.h"
#include "utils/IpAddr.hpp"
#include "proxy/OfflineMsgServiceProxy.h"
#include "Config.h"
#include "xmpp/JID.h"
#include  <boost/foreach.hpp>
#include  "utils/TimeUtils.h"
#include  "utils/XmlUtils.h"
#include  "protocolChanger/ProtocolChanger.h"
#include "Router2TalkServer.h"

using namespace std;
using namespace mtalk::utils;
using namespace mtalk::constant;
using namespace mtalk::bosh;
using namespace mtalk::proxy;
using namespace mtalk::zk;
using namespace mtalk::im;
using namespace com::xiaonei::wap::talk::offline;
using namespace pugi;
using namespace mtalk::xmpp;




namespace mtalk{
	namespace talk{

		int   Router2TalkServer::packet_count = 0;

		Router2TalkServer::Router2TalkServer()
		{

		} 


		int Router2TalkServer::forwardIq(const std::string& xmppString)
		{  

			LOG_DEBUG("Router2TalkServer::forwardIq==>begin,Iq context:\n"<<xmppString.c_str());
			string msg = xmppString;
			xml_document doc;
			MessageType::Type iqType = MessageType::ENTITY;

				
			pugi::xml_parse_result result = doc.load(msg.c_str());
			if(!result || !doc.first_child())
			{
					return -1;
			}

			try{

				xml_node node= doc.first_child();

				std::string toStr = node.attribute("to").value();
				std::string fromStr = node.attribute("from").value();
				std::string iqtype = node.attribute("type").value(); 

				JID to(toStr);
				JID from(fromStr);

				long fromId = from.getUserId();
				long toId = to.getUserId();

				MY_INSTANCE(TalkServer).push(fromId,toId,xmppString,iqType);

			}catch(std::exception& e)
			{
				LOG_ERROR("Router2TalkServer::forwardIq ==> error. "<<e.what());
				return -2; 
			}catch(...){
				LOG_ERROR("Router2TalkServer::forwardIq ==> unkown error. ");
				return -3; 
			}

			packet_count++;

			return 0;
		}


		int Router2TalkServer::forwardPresence(const std::string& xmppString)
		{
			LOG_DEBUG("Router2TalkServer::forwardPresence==>begin,presence context:\n"<<xmppString.c_str());
			string msg = xmppString;
			MessageType::Type presenceType = MessageType::ENTITY;
			xml_document doc;

			pugi::xml_parse_result result = doc.load(msg.c_str());
			if(!result || !doc.first_child())
			{
					return -1;
			}

			try{
			
				xml_node node= doc.first_child();
				std::string toStr = node.attribute("to").value();
				std::string fromStr = node.attribute("from").value();
				std::string presenceTypeStr = node.attribute("type").value();

				JID to(toStr);
				JID from(fromStr);

				long fromId = from.getUserId();
				long toId = to.getUserId();

				MY_INSTANCE(TalkServer).push(fromId,toId,xmppString,presenceType);

			}catch(std::exception& e){

				LOG_ERROR("Router2TalkServer::forwardPresence ==> error. "<<e.what());
				return -2; 
			}catch(...){
				LOG_ERROR("Router2TalkServer::forwardPresence ==> unknown error. ");
				return -3; 
			}

			packet_count++;
			return 0;
		}


		int Router2TalkServer::forwardMessage(const std::string& xmppString)
		{
			LOG_DEBUG("Router2TalkServer::forwardMessage==>begin,message context:\n"<<xmppString.c_str());
			string msg = xmppString;
			MessageType::Type msgType = MessageType::ENTITY;
			xml_document doc;

			pugi::xml_parse_result result = doc.load(msg.c_str());
			if(!result || !doc.first_child())
			{
				return -1;
			}

			try{

				xml_node node= doc.first_child();
				std::string toStr = node.attribute("to").value();
				std::string fromStr = node.attribute("from").value();
				std::string typeStr = node.attribute("type").value();

				if(typeStr == "system")   //system message
				{
					msgType = MessageType::SYSTEM;   

				}
				JID to(toStr);
				JID from(fromStr);
				long fromId = from.getUserId();
				long toId = to.getUserId();

				MY_INSTANCE(TalkServer).push(fromId,toId,xmppString,msgType,-1);

			}catch(std::exception& e){
				LOG_ERROR("Router2TalkServer::forwardMessage ==> error. "<<e.what());
				return -2; 
			}catch(...){
				LOG_ERROR("Router2TalkServer::forwardMessage ==> unknown error. ");
				return -3; 
			}
			packet_count++;

			return 0;

		} 


	};
};



