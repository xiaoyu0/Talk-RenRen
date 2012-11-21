/**
* @file Packet.h
* @brief 一个xmpp stanza,包装的pugixml 
* @author wang.yu@renren-inc.com
* @version 1.0
* @date 2012-05-14
*/
#ifndef TALK_MUC_PACKET_H_
#define TALK_MUC_PACKET_H_

#include <string>
#include <boost/shared_ptr.hpp>

#include "pugixml/pugixml.hpp"
#include "types.h"
#include "JID.h"

namespace mtalk{
namespace muc{

	typedef pugi::xml_node Element;

	class Packet{
	public :
		typedef enum {
			MESSAGE,
			PRESENCE,
			IQ
		} PacketType; 

		Packet (std::string sessionId);
		Packet (std::string stanzaStr,std::string sessionId);

		Element element() const;

		JID getTo() const; 
		JID getFrom() const;

		void setTo(JID toJID);
		void setFrom(JID fromJID);

		std::string toString() const;

		std::string getAttributeValue(const std::string attrName) const;
		void setAttributeValue(const std::string attrName, const std::string attrValue);

		Element getFirstChildElement();

		//<message/>专有的
		Element getChildElement(const std::string name, const std::string xmppNamespace) const; 
		Element getChildElement(const std::string name) const; 
		Element addChildElement(const std::string name, const std::string xmppNamespace);

		Element delChildElement(const std::string name, const std::string xmppNamespace);
		
		std::string getSessionId() const;
		PacketType packetType() const;

	private :
		bool init();
	
		JID  toJID_; // Cache to and from JIDs
		JID  fromJID_;
		boost::shared_ptr<pugi::xml_document> docPtr_;
		boost::shared_ptr<pugi::xml_node> nodePtr_;
		PacketType type_;
		std::string sessionId_;
		std::string stanzaStr_;
	};

	inline Element Packet::element() const{
		return *nodePtr_;
	}

	inline std::string Packet::getSessionId() const{
		return sessionId_;
	}

	inline Packet::PacketType Packet::packetType() const {
		return type_;
	}

	inline Element Packet::getFirstChildElement(){
		return nodePtr_->first_child();
	}

}; // namespace muc
}; // namespace mtalk

#endif // TALK_MUC_PACKET_H_
