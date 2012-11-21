#include "Packet.h"
#include "JID.h"
#include "utils/MyLogger.h"

#include <string>
#include <sstream>
#include <iostream>
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>

using namespace std;
using namespace pugi;
using namespace boost;

namespace mtalk{
namespace muc{

	Packet::Packet (string sessionId):sessionId_(sessionId){
	
	}

	Packet::Packet (string stanzaStr,string sessionId):sessionId_(sessionId), stanzaStr_(stanzaStr){

		docPtr_ = make_shared<pugi::xml_document>();
		docPtr_->load(stanzaStr.c_str());
		nodePtr_ = make_shared<xml_node>(docPtr_->first_child());
		
		init();
		stringstream ss;

		if (nodePtr_->empty()){
			LOG_DEBUG("Packet::Packet(string) ==> nodePtr_->is empty");
		}
		nodePtr_->print(ss, "\t", pugi::format_raw);
		string str = ss.str();
		LOG_DEBUG("Packet::Packet ==> stanzaStr = " << str);
	}
	
	bool Packet::init(){
		/*if (element.empty()){
			LOG_DEBUG("Packet::init ==> nodePtr_->is empty --- parameter");
		}
		nodePtr_->append_copy(element);
		if (nodePtr_->empty()){
			LOG_DEBUG("Packet::init ==> nodePtr_->is empty after  append_copy");
		}*/
		stringstream ss;
		nodePtr_->print(ss, "\t", pugi::format_raw);
		string str = ss.str();
		LOG_DEBUG("Packet::Packet ==> nodePtr_->str = " << str);
		
		string to = nodePtr_->attribute("to").value();
		if (!to.empty()){
			toJID_ = JID(to);
		}

		string from = nodePtr_->attribute("from").value();
		if (!from.empty()){
			fromJID_ = JID(from);
		}

		if (!strcmp(nodePtr_->name(), "message")){
			type_ = Packet::MESSAGE;
		}
		else if (!strcmp(nodePtr_->name(), "presence")){
			type_ = Packet::PRESENCE;
		}
		else{ 
			type_ = Packet::IQ;
		}

		if (nodePtr_->empty()){
			LOG_DEBUG("Packet::Packet(xml_node) ==> nodePtr_->is empty");
		}
		return true;
	}

	JID Packet::getTo() const{
		return toJID_;
	
	//	string to = nodePtr_->attribute("to").value();
	//	return JID(to);
	}

	JID Packet::getFrom() const{
		return fromJID_;
		
	//	string from = nodePtr_->attribute("to").value();
	//	return JID(from);
	}

	void Packet::setTo(JID toJID){
		toJID_ = toJID;
	
		xml_attribute toAttr = nodePtr_->attribute("to");
		toAttr.set_value(toJID.toString().c_str());

	}

	void Packet::setFrom(JID fromJID){
		fromJID_ = fromJID;

		xml_attribute fromAttr = nodePtr_->attribute("from");
		fromAttr.set_value(fromJID.toString().c_str());

	}
	
	string Packet::toString() const{
//		return stanzaStr_;
		string str;
		if (nodePtr_->empty()){
			LOG_DEBUG("Packet::toString ==> nodePtr_->is empty");
		}else {
			stringstream ss;
			nodePtr_->print(ss, "\t", pugi::format_raw);
			str = ss.str();
			LOG_DEBUG("Packet::toString ==> nodePtr_->str = " << str);
		}
		return str;
	}

	string Packet::getAttributeValue(const string attrName) const{
		string attrValue;	
		if (nodePtr_->empty()){
			LOG_DEBUG("Packet::getAttributeValue ==> nodePtr_->is empty ");
			return attrValue;
		}
		/*stringstream ss;
		nodePtr_->print(ss, "\t", pugi::format_raw);
		string elementStr = ss.str();
		LOG_DEBUG("Packet::getAttributeValue ==> nodePtr_->str = " << elementStr);*/
		LOG_DEBUG("Packet::getAttribute ==> attrName.c_str() =" << attrName.c_str());
		xml_attribute attribute = nodePtr_->attribute(attrName.c_str());
		if (attribute.empty()){
			LOG_DEBUG("Packet::getAttributeValue ==> attrName :" << attrName << "  is empty");
			return attrValue;
		}
		attrValue = attribute.value();
		LOG_DEBUG("Packet::getAttributeValue ==> attrName = " << attrName << "  attrValue = " << attrValue);
		return attrValue;
		//这里没进行全面的检查，当attribute不存在时，返回 null handle,什么叫null handle?	
	}

	void Packet::setAttributeValue(const string attrName, const string attrValue){
		//没有加上这个 attribute
        xml_attribute attr = nodePtr_->attribute(attrName.c_str());
        if(!attr.empty()){
            attr.set_value(attrValue.c_str());
        }else{
            nodePtr_->append_attribute(attrName.c_str()).set_value(attrValue.c_str());
        }
	}

	Element Packet::getChildElement(string name, string xmppNamespace) const{
		Element element = nodePtr_->child(name.c_str());
		if (xmppNamespace == element.attribute("xmlns").value()){
			return element;
		}
		return Element();
	}


	Element Packet::getChildElement(string name) const{
		return nodePtr_->child(name.c_str());
	}

	Element Packet::addChildElement(string name, string xmppNamespace){
		Element x;
		x.set_name(name.c_str());
		x.append_attribute("xmlns").set_value(xmppNamespace.c_str());
		nodePtr_->append_copy(x);
		return x;
	}
		
};
};
