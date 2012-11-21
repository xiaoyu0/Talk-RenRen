#include <sstream>
#include <boost/make_shared.hpp>

#include "MucUser.h"
#include "StanzaStringFactory.h"

#include "proxy/ProxyRegister.h"
#include "proxy/TalkServiceProxy.h"
#include "utils/MyLock.h"
#include "constant/MessageType.h"

#include "antispam_client.h"

#include "ice_src/RoomService.h"


using namespace std;
using namespace mtalk::proxy;
using namespace mtalk::utils;
using namespace mtalk::constant;
using namespace pugi;
using namespace xce::antispam;

namespace mtalk{
namespace muc{
	
	MucUser::MucUser(Gid_t userId):userId_(userId){

	}

	MucUser::MucUser(JID jid):realJID_(jid){
		userId_ = realJID_.getNodeId();
		jidDomain_ = realJID_.getDomain();
		
		LOG_INFO("MucUser::MucUser ==> jidDomain = " << jidDomain_);
		stanzaStringFactoryPtr_ = boost::make_shared<StanzaStringFactory>();
		stanzaStringFactoryPtr_->setUserDomain(jidDomain_);
		//取user的语言，设置具体的MucHint类
		mucHintPtr_ = boost::make_shared<MucHint>();
		mucHintPtr_->setUserDomain(jidDomain_);
	}

	void MucUser::addRole(long roomId){
		roomsIn_.insert(roomId);
	}

	void MucUser::removeRole(long roomId){
		
		set<long>::iterator iter = roomsIn_.find(roomId);
		if (iter != roomsIn_.end()){
			roomsIn_.erase(iter);
		}
	}

	void MucUser::process(Packet& packet){
		if (packet.packetType() == Packet::MESSAGE){
			LOG_DEBUG("MucUser::process ==> a message stanza  , str = " << packet.toString());
			processMessage(packet);
		}
		else if (packet.packetType() == Packet::PRESENCE){
			LOG_DEBUG("MucUser::process ==> a presence stanza  , str = " << packet.toString());
			processPresence(packet);
		}
		else if (packet.packetType() == Packet::IQ){ 
			LOG_DEBUG("MucUser::process ==> a iq stanza  , str = " << packet.toString());
			processIQ(packet);
		}
	}

	void MucUser::processMessage(Packet& messagePacket){
		JID recipient = messagePacket.getTo();
		long roomId = recipient.getNodeId();
		string id = messagePacket.getAttributeValue("id");
		string sessionId = messagePacket.getSessionId();
		
		/*if (!roomsIn_.count(roomId)){
			return ;
		}*/
		
		string type = messagePacket.getAttributeValue("type");
		//群聊发送信息
		if (type == "groupchat"){
			LOG_DEBUG("MucUser::processMessage ==> message attribute type = groupchat");
			RoomPtr roomPtr = getRoom(roomId);
			roomPtr->setStanzaFactory(stanzaStringFactoryPtr_);
			roomPtr->setMucHint(mucHintPtr_);
			// room not ok
			if (!roomPtr->roomOK()){
				string stanzaStr = stanzaStringFactoryPtr_->sendPublicMessageError(roomPtr->getStatusCode(), userId_, roomId, id);
				MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, true);
				return ;
			}
			roomPtr->sendPublicMessage(messagePacket, userId_, id);
			return ;
		}
		
		Element userInfo = messagePacket.getChildElement("x", "http://jabber.org/protocol/muc#user");
		if (!userInfo.empty()){ // invitation
			LOG_DEBUG("MucUser::processMessage ==> xNode exist it's invitation");
			vector<Gid_t> inviteeVec;
			for(Element invite = userInfo.child("invite") ; !invite.empty(); invite = invite.next_sibling("invite")){
				
				string inviteeIdStr = invite.attribute("to").value();
				Gid_t inviteeId = 0;
				try{
					inviteeId = boost::lexical_cast<Gid_t>(inviteeIdStr);
				}catch(exception& e){
					LOG_ERROR("MucUser::createRoom ==> inviteeStr to long error  e.what() = " << e.what());
					continue;
				}
 
				LOG_DEBUG("MucUser::processMessage ==> in invitation invitee to = " << inviteeId);
				inviteeVec.push_back(inviteeId);
			}
			LOG_DEBUG("MucUser::processMessage ==> inviteeVec size = " << inviteeVec.size());
			//作一个排重处理	
			sort(inviteeVec.begin(), inviteeVec.end());
			vector<Gid_t>::iterator it = unique(inviteeVec.begin(), inviteeVec.end());
			inviteeVec.resize(it - inviteeVec.begin());
			LOG_DEBUG("MucUser::processMessage ==> inviteeVec real size(after unique) = " << inviteeVec.size());

			RoomPtr roomPtr = getRoom(roomId);
			roomPtr->setStanzaFactory(stanzaStringFactoryPtr_);
			roomPtr->setMucHint(mucHintPtr_);
			// room not ok
			vector<Gid_t> realNewInviteeVec;
			MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->addRoomMember(userId_, roomId, inviteeVec, realNewInviteeVec, roomPtr);
			LOG_DEBUG("MucUser::processMessage ==> realNewIinvitee size = " << realNewInviteeVec.size());
			// room not ok
			if (!roomPtr->roomOK()){
				string stanzaStr = stanzaStringFactoryPtr_->invitationError(roomPtr->getStatusCode(), userId_, roomId, id);
				MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, true);
				return ;
			}
			roomPtr->sendInvitation(userId_, realNewInviteeVec, id, sessionId);
			return ;
		} 

		Element subject = messagePacket.getChildElement("subject");
		// change subject
		if (!subject.empty()){
			LOG_DEBUG("MucUser::processMessage ==> subject node exist : change subject");
			string subjectStr = subject.child_value();
			
			// hexie roomName
			if (!hexieCheck(userId_, roomId, id, subjectStr)){
				return ;
			}

			RoomPtr roomPtr = getRoom(roomId);
			roomPtr->setStanzaFactory(stanzaStringFactoryPtr_);
			roomPtr->setMucHint(mucHintPtr_);

			// room not ok
			MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->changeSubject(userId_, roomId, subjectStr, roomPtr);
				
			if (!roomPtr->roomOK()){
				string stanzaStr = stanzaStringFactoryPtr_->subjectChangeError(roomPtr->getStatusCode(), userId_, roomId, id);
				MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, true);
				LOG_DEBUG("MucUser::processMessage ==> changeSubject error to sender stanzaStr = " << stanzaStr);
				return ;
			}
			roomPtr->changeSubject(userId_, subjectStr, id, sessionId);
			return ;
		}
	}

	void MucUser::processPresence(Packet& presencePacket){
		//目前的协议presence用来创群和退群
		LOG_DEBUG("MucUser::processPresence ==> presencePacket str = " << presencePacket.toString());
		JID recipient = presencePacket.getTo();
		long roomId = recipient.getNodeId();
		Gid_t fromId = presencePacket.getFrom().getNodeId();
		string id = presencePacket.getAttributeValue("id");
		string sessionId = presencePacket.getSessionId();
		xml_node xNode = presencePacket.getChildElement("x");

		LOG_DEBUG("MucUser::processPresence ==> fromId = " << fromId << "  roomId = " << roomId << "  id = " << id << " sessionId = " << sessionId);

		if (!xNode.empty()){
			LOG_DEBUG("MucUser::processPresence ==> xNode exist");
			xml_attribute xmlns = xNode.attribute("xmlns");
			LOG_DEBUG("MucUser::processPresence ==> xmlns = " << xmlns.value());
			if (xmlns.empty()){
				LOG_DEBUG("MucUser::processPresence ==> in xNode, xmlns is empty, return");
				// error
				return ;
			}
			string xmlnsValue = xmlns.value();
			if (xmlnsValue == "http://jabber.org/protocol/muc"){
				xml_node checkNode = xNode.child("check");
				if (!checkNode.empty()){
					//客户端上传时间信息
					map<long, int> roomVersions;
					for ( ; !checkNode.empty() ; checkNode = checkNode.next_sibling("check")){
						string roomIdStr = checkNode.attribute("to").value();
						long roomId = 0;
						try {
							roomId = boost::lexical_cast<long>(roomIdStr);
						}catch (exception& e){
							LOG_ERROR("MucUser::processPresence ==>  catch boost::lexical_cast exception = " << e.what());
							cout << "MucUser::processPresence ==>  catch boost::lexical_cast exception = " << e.what() << endl;
						}
						int version = checkNode.attribute("version").as_int();
						roomVersions.insert(pair<long, int>(roomId, version));
						LOG_DEBUG("MucUser::processPresence ==> check room , roomId = " << roomId << "  version = " << version);
					}
					updateRooms(roomVersions, id, sessionId);
					//MY_INSTANCE(MucServer).uploadVersion(userId_, roomVersions, id, sessionId);
					return ;
				} else {
					LOG_DEBUG("MucUser::processPresence ==> checkNode in xNode is empty()");
	
				}
				// create room
				createRoom(presencePacket);
				//MY_INSTANCE(MucServer).createRoom(fromId, presencePacket);
				return ;
			} else if (xmlnsValue == "http://jabber.org/protocol/muc#user"){
				// query user room info
				queryRoom(roomId, id, sessionId);
				//MY_INSTANCE(MucServer).queryRoom(userId_, roomId, id, sessionId);
				return ;
			}
		}

		LOG_DEBUG("MucUser::processPresence ==> xNode is empty");
		string type = presencePacket.getAttributeValue("type");
		if (type == "unavailable"){
			// leave room
			/*if (!roomsIn_.count(roomId)){
				// error, 要退的群不存在
				return ;
			}*/

			removeRole(roomId);
			RoomPtr roomPtr(new MucRoom(roomId));
			roomPtr->setStanzaFactory(stanzaStringFactoryPtr_);
			roomPtr->setMucHint(mucHintPtr_);
			// room not ok
			MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->getRoom(userId_, roomId, roomPtr);
			if (!roomPtr->roomOK()){
				string stanzaStr = stanzaStringFactoryPtr_->leaveRoomError(roomPtr->getStatusCode(), userId_, roomId, id);
				MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, false);
				return ;
			}
			if (roomPtr->getOwner() == userId_){
				string stanzaStr = stanzaStringFactoryPtr_->leaveRoomError(com::xiaonei::wap::mtalk::muc::NoPermission, userId_, roomId, id);
				MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, false);
				return ;
			}
			
			MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->leaveRoom(userId_, roomId, roomPtr);
				
			if (!roomPtr->roomOK()){
				string stanzaStr = stanzaStringFactoryPtr_->leaveRoomError(roomPtr->getStatusCode(), userId_, roomId, id);
				MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, false);
				return ;
			}
	
			roomPtr->leaveRoom(fromId, id, sessionId);
		}

	}

	void MucUser::processIQ(Packet& iqPacket){
		string iqtype = iqPacket.getAttributeValue("type");
		JID to = iqPacket.getTo();
		long roomId = to.getNodeId();
		JID from = iqPacket.getFrom();
		Gid_t fromId = from.getNodeId();
		string id = iqPacket.getAttributeValue("id");
		string sessionId = iqPacket.getSessionId();
		
		LOG_DEBUG("MucUser::processIQ ==> roomId = " << roomId << "  id = " << id << "  from = " << fromId);
		if (!roomId){
			//error
		}

		if (roomId){
			if (!roomsIn_.count(roomId)){
				// error, room doesnot exist
			}
		}

		if (iqtype == "get"){ // get room member list
			LOG_DEBUG("MucUser::processIQ ==> type = get");
			xml_node query = iqPacket.getChildElement("query", "http://jabber.org/protocol/muc#user");
			if (query.empty()){
				// error
				LOG_DEBUG("MucUser::processIQ ==> query child element(with the right namespace name) is empty");
				return ;
			}

			xml_node contact = query.child("contact");
			if (!contact.empty()){
				// get user contact rooms
				getRoomsFromContact(id, sessionId);	
				//MY_INSTANCE(MucServer).getFromContact(userId_, roomId, id, sessionId);
			}
			else{
				queryRoom(roomId, id, sessionId);
				//MY_INSTANCE(MucServer).queryRoom(userId_, roomId, id, sessionId);
			}
		}
			
		if (iqtype == "set"){ // here kick someone
			LOG_DEBUG("MucUser::processIQ ==> type = set");
			Element query = iqPacket.getChildElement("query");
			if (query.empty()){
				LOG_DEBUG("MucUser::processIQ ==> <query> is empty");
				return ;
			}
		
			xml_node destroy = query.child("destroy");
			//destroy room
			if (!destroy.empty()){
				destroyRoom(roomId, id, sessionId);	
			//	MY_INSTANCE(MucServer).destroyRoom(fromId, roomId, id, sessionId);
				return ;
			}
			
			xml_node contact = query.child("contact");
			if (!contact.empty()){
				xml_attribute contactType = contact.attribute("type");
				if (contactType.empty()){
					return ;	
				}
				string contactActionStr = contactType.value();
				if (contactActionStr == "save"){
					// save room to contact
					saveRoomToContact(roomId, id, sessionId);
					//MY_INSTANCE(MucServer).saveToContact(userId_, roomId, id, sessionId);
				}else if (contactActionStr == "delete"){
					//delete from contack
					deleteRoomFromContact(roomId, id, sessionId);
					//MY_INSTANCE(MucServer).deleteFromContact(userId_, roomId, id, sessionId);
				}
				return ;
			}
			
			LOG_DEBUG("MucUser::processIQ ==> here kick someone actorId = " << fromId);
			vector<Gid_t> membersToKick;

			for (xml_node item = query.child("item") ;!item.empty(); item = item.next_sibling("item")){

				string nickIdStr = item.attribute("nick").value();
				Gid_t kickId = 0;
				try{
					kickId = boost::lexical_cast<Gid_t>(nickIdStr);
				}catch(exception& e){
					LOG_ERROR("MucUser::ProcessIQ ==> kickIdStr to long error  e.what() = " << e.what());
					continue;
				}

				if (kickId == userId_){
					// ignore when owner is kicking himself
					continue;
				}
				membersToKick.push_back(kickId);
			}

			if (membersToKick.empty()){
				string errorStr = "item empty";
				string stanzaStr = stanzaStringFactoryPtr_->kickOccupantError(526, userId_, roomId, id, errorStr);
				MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, true);
				return ;
			}

			RoomPtr roomPtr(new MucRoom(roomId)); // 这里用removeUser那个接口来得到room信息？
			roomPtr->setStanzaFactory(stanzaStringFactoryPtr_);
			roomPtr->setMucHint(mucHintPtr_);
			
			vector<Gid_t> realRemoveMembers;
			
			MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->removeRoomMember(userId_, roomId, membersToKick, realRemoveMembers, roomPtr);
			// room not ok
			if (!roomPtr->roomOK()){
				string stanzaStr = stanzaStringFactoryPtr_->kickOccupantError(roomPtr->getStatusCode(), userId_, roomId, id);
				MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, true);
				return ;
			}
			/*if (userId_ != roomPtr->getOwner()){
				return ;
			}*/
			roomPtr->kickOccupant(userId_, id, sessionId, realRemoveMembers);
		}
	}

	bool MucUser::hexieCheck(Gid_t senderId, long roomId, std::string& id, std::string& chatStr){
        #ifndef INTERNATIONAL
        CheckType checkType=RENREN_MESSAGE;
		int antispamResult = AntispamClient::ozeinContent(senderId, roomId, checkType , chatStr, "127.0.0.1");
		if(antispamResult == 30){
			string stanzaStr = stanzaStringFactoryPtr_->hexieStanza(senderId, roomId, id, chatStr);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId, senderId, stanzaStr, false);
			return false;
		}
        #endif
		return true;
	}

	void MucUser::updateRooms(map<long, int>& roomVersions, string& id, string& sessionId){
		LOG_DEBUG("MucUser::updateRooms ==> userId = " << userId_);

		stringstream ss;
		string updateValue;
		string isMemberValue;
		for(map<long, int>::iterator it = roomVersions.begin(); it != roomVersions.end(); it++){
			long roomId = it->first;
			int version = it->second;
			LOG_DEBUG("MucUser::updateRooms ==> in for loop :  roomId = " << roomId << " version = " << version);
			//这个地方可能要重新设计，另外这里用轻量级的,不要detail信息
		//	RoomPtr roomPtr = getRoom(roomId); 
			RoomPtr roomPtr(new MucRoom(roomId));
			MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->getRoom(userId_, roomId, roomPtr);
		
			if(roomPtr->getStatusCode() == MucErrorType::Success){
				LOG_DEBUG("MucUser::updateRooms ==> room exist : userId = " << userId_ << " roomId = " << roomId <<" uploadVersion = " << version << " roomVersion = " << roomPtr->getVersion());
				updateValue = (version == roomPtr->getVersion())?"false":"true";
				isMemberValue = (roomPtr->hasMember(userId_))?"true":"false";
			}
			else if(roomPtr->getStatusCode() == MucErrorType::RoomNotExist){
				LOG_DEBUG("MucUser::updateRooms ==> room not exist : userId = " << userId_ << " roomId = " << roomId <<" uploadVersion = " << version << " roomVersion = " << roomPtr->getVersion());
				updateValue = (version == roomPtr->getVersion())?"false":"true";
				updateValue = "true";
				isMemberValue = "noRoom";

				//下发房间不存在的弱提示, 改成不下发了
			/*	string stanzaStr = mucHintPtr_->roomNotExistHint(version, userId_, roomId);
				MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId, userId_, stanzaStr, true);*/

			}
			ss << "<check from='" << roomId << "' update='" << updateValue << "' isMember='" << isMemberValue << "'/>";
		}
		string checkStr = ss.str();
		ss.str("");
		
		// stanzaStr, mucReturn;
		string stanzaStr = stanzaStringFactoryPtr_->checkRooms(userId_, id, checkStr);
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, false);
	}

	void MucUser::saveRoomToContact(long roomId, string& id, string& sessionId){
		LOG_DEBUG("MucUser::saveRoomToContact ==> userId = " << userId_ << " roomId = " << roomId);
		int statusCode;	
		//bool result = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->saveRoomToContact(userId_, roomId, statusCode);
		MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->saveRoomToContact(userId_, roomId, statusCode);
		/*if(!result){
			//server error
			return;
		}*/
		
		using namespace com::xiaonei::wap::mtalk::muc;
		if(statusCode == Success){
			//success stanza
			string stanzaStr = stanzaStringFactoryPtr_->saveRoomToContact(userId_, roomId, id);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, false);
			LOG_DEBUG("MucUser::saveRoomFromContact ==> userId = " << userId_ << " roomId=" << roomId << " stanzaStr = " << stanzaStr);
			return;
		}else{
			//error stanza
			string stanzaStr = stanzaStringFactoryPtr_->saveRoomToContactError(statusCode, userId_, roomId, id);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, false);
			LOG_DEBUG("MucUser::saveRoomFromContact ==> userId = " << userId_ << " roomId=" << roomId << " stanzaStr = " << stanzaStr);
			return;
		}
	}

	void MucUser::deleteRoomFromContact(long roomId, string& id, string& sessionId){
		LOG_DEBUG("MucUser::deleteRoomFromContact ==> userId = " << userId_ << " roomId = " << roomId);
		
		int statusCode;	
		bool result = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->deleteRoomFromContact(userId_, roomId, statusCode);
		/*if(!result){
			//server error
			return;
		}*/
		
		using namespace com::xiaonei::wap::mtalk::muc;
		if(result){
			//success stanza
			string stanzaStr = stanzaStringFactoryPtr_->deleteRoomFromContact(userId_, roomId, id);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, false);
			LOG_DEBUG("MucUser::deleteRoomFromContact ==> userId = " << userId_ << " roomId=" << roomId << " stanzaStr = " << stanzaStr);
			return;
		}else{
			//error stanza
			string stanzaStr = stanzaStringFactoryPtr_->deleteRoomFromContactError(statusCode, userId_, roomId, id);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, false);
			LOG_DEBUG("MucUser::deleteRoomFromContact ==> userId = " << userId_ << " roomId=" << roomId << " stanzaStr = " << stanzaStr);
			return;
		}
	}

	void MucUser::getRoomsFromContact(string& id, string& sessionId){
		LOG_INFO("MucUser::getRoomsFromContact ==> userId = " << userId_);
		
		vector<RoomPtr> roomPtrVec;
		bool result = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->getUserRooms(userId_, roomPtrVec);
		if(!result){
			//server error
			int statusCode = com::xiaonei::wap::mtalk::muc::Unknown;
			long roomId = 0;
			string stanzaStr = stanzaStringFactoryPtr_->getRoomError(statusCode, userId_, roomId, id);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, false);
			return;
		}

		//room items 
		string roomsInfoStr;
		for(vector<RoomPtr>::iterator it = roomPtrVec.begin(); it != roomPtrVec.end(); it++){
			string stanzaStr = stanzaStringFactoryPtr_->getSavedRoomItem(*it);
			roomsInfoStr.append(stanzaStr);
		}

		//return stanza
		string stanzaStr = stanzaStringFactoryPtr_->getSavedRooms(userId_, id, roomsInfoStr);
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, false);
	}

	void MucUser::createRoom(Packet& createPacket){
		LOG_INFO("MucUser::createRoom ==> ownerId = " << userId_);
		Gid_t ownerId = userId_;

		vector<Gid_t> initialMembers;
		string id = createPacket.getAttributeValue("id");
		string sessionId = createPacket.getSessionId();
		xml_node xNode = createPacket.getChildElement("x");
		if (xNode.empty()){
			return ;
		}
		xml_node invite = xNode.child("invite");
		if (invite.empty()){
			// error
			string stanzaStr = stanzaStringFactoryPtr_->roomCreatederror(MucErrorType::RoomCreationNoInvitee, ownerId, id);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(ownerId, sessionId, stanzaStr, false);
			return ;
		}
		for ( ; !invite.empty(); invite = invite.next_sibling("invite")){
			string inviteeIdStr = invite.attribute("to").value();
			Gid_t inviteeId = 0;
			try{
				inviteeId = boost::lexical_cast<Gid_t>(inviteeIdStr);
			}catch(exception& e){
				LOG_ERROR("MucUser::createRoom ==> inviteeStr to long error  e.what() = " << e.what());
				continue;
			}

			// for test ,测试的时候会传负的Id上来
			if(inviteeId < 0){
				string stanzaStr = stanzaStringFactoryPtr_->roomCreatederror(MucErrorType::IllegalId, ownerId, id);
				MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(ownerId, sessionId, stanzaStr, false);
				return;
			}
			// end for test


			if (inviteeId == ownerId){
				//invite self
				continue;
			}
			initialMembers.push_back(inviteeId);
		}

		//对创群时邀请的人作一个排重处理	
		sort(initialMembers.begin(), initialMembers.end());
		vector<Gid_t>::iterator it = unique(initialMembers.begin(), initialMembers.end());
		initialMembers.resize(it - initialMembers.begin());
		LOG_DEBUG("MucUser::processMessage ==> inviteeVec real size(after unique) = " << initialMembers.size());


		RoomPtr roomPtr(new MucRoom());
		roomPtr->setStanzaFactory(stanzaStringFactoryPtr_);
		roomPtr->setMucHint(mucHintPtr_);
		
		bool result = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->createRoom(ownerId, initialMembers, roomPtr);
		
		// mucDB error
		if(!result){
			string stanzaStr = stanzaStringFactoryPtr_->roomCreatederror(MucErrorType::ServerError, ownerId, id);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(ownerId, sessionId, stanzaStr, false);
			return;
		}

		// room creation failure
		if (!roomPtr->roomOK()){
			string stanzaStr = stanzaStringFactoryPtr_->roomCreatederror(roomPtr->getStatusCode(), ownerId, id);
			LOG_DEBUG("MucUser::createRoom ==> roomCreatederror stanza to talk ,  stanzaStr = " << stanzaStr);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(ownerId, sessionId, stanzaStr, false);
			return ;
		}
		
		int version = roomPtr->getVersion();
			
		//add owner
		initialMembers.push_back(ownerId);
		vector<Member> initialMemberDetail = roomPtr->getMemberDetail(initialMembers);
		Member creatorDetail = roomPtr->getMemberDetail(ownerId);
		
		// send notice to user that don't support muc, on behalf of room creator
		//暂时不通知，帐号接口不可靠 , (官方需求也要求不再发)
		/*vector<Gid_t> inviteesToNotice;
		stanzaStringFactoryPtr_->getInviteesToNotice(initialMembers, inviteesToNotice);
		for (vector<Gid_t>::iterator it = inviteesToNotice.begin(); it != inviteesToNotice.end(); it++){
			if (*it == ownerId){
				continue;
			}
			string stanzaStr = stanzaStringFactoryPtr_->roomCreated2InviteeNotSupportMuc(*it, creatorDetail, initialMemberDetail);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->push(ownerId, *it, stanzaStr, MessageType::CHAT); //单聊
		}*/

		// inform room creator
		long roomId = roomPtr->getId();
		string roomSubject = roomPtr->getSubject();
		string stanzaStr = stanzaStringFactoryPtr_->roomCreated2Creator(ownerId, roomId, version, id, roomSubject);
		LOG_DEBUG("MucUser::createRoom ==> roomCreated2creator stanza to talk ,  stanzaStr = " << stanzaStr);
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(ownerId, sessionId, stanzaStr, false);
		stanzaStr = mucHintPtr_->roomCreated2CreatorHint(version, ownerId, roomId, initialMemberDetail);
		LOG_DEBUG("MucUser::createRoom ==> roomCreated2creator Hint !! stanza to talk ,  stanzaStr = " << stanzaStr);
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(ownerId, sessionId, stanzaStr, true);

		// inform initial members
		for (vector<Gid_t>::iterator it = initialMembers.begin(); it != initialMembers.end(); it++){
			if (*it == ownerId){
				//不要向群主广播了
				continue;
			}
			string roomName = roomPtr->getSubject();
			string stanzaStr = stanzaStringFactoryPtr_->roomCreated2Invitee(*it, ownerId, roomPtr->getId(), version, roomName, initialMemberDetail);
			LOG_DEBUG("MucUser::createRoom ==> roomCreated2invitee  stanza to talk ,  stanzaStr = " << stanzaStr);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomPtr->getId(), *it, stanzaStr, false);
		
			// hint to existing
			stanzaStr = mucHintPtr_->roomCreated2InviteeHint(version, *it, roomPtr->getId(), creatorDetail, initialMemberDetail);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomPtr->getId(), *it, stanzaStr, true);
		}
	}

	void MucUser::destroyRoom(long roomId, string& id, string& sessionId){
		LOG_INFO("MucUser::destroyRoom ==> userId = " << userId_ << " roomId = " << roomId);
		RoomPtr roomPtr = getRoom(roomId);
		roomPtr->setStanzaFactory(stanzaStringFactoryPtr_);
		roomPtr->setMucHint(mucHintPtr_);
		
		if(!roomPtr->roomOK()){
			int statusCode = roomPtr->getStatusCode();
			string stanzaStr = stanzaStringFactoryPtr_->getRoomError(statusCode, userId_, roomId, id);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, false);
			return;
		}
		roomPtr->destroyRoom(userId_, id, sessionId);
	}

	void MucUser::queryRoom(long roomId, string& id, string& sessionId){
		LOG_INFO("MucUser::queryRoom ==> userId = " << userId_ << " roomId = " << roomId);
		RoomPtr roomPtr = getRoomDetail(roomId);
		roomPtr->setStanzaFactory(stanzaStringFactoryPtr_);
		roomPtr->setMucHint(mucHintPtr_);

		bool errorResponse = false;
		int statusCode = MucErrorType::Success;	
		if(!roomPtr->roomOK()){
			//error
			statusCode = roomPtr->getStatusCode();
			errorResponse = true;
		}else if(!roomPtr->hasMember(userId_)){
			statusCode = MucErrorType::NoPermission;	
			errorResponse = true;
		}

		if(errorResponse){
			string stanzaStr = stanzaStringFactoryPtr_->getRoomError(statusCode, userId_, roomId, id);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId_, sessionId, stanzaStr, false);
			return;
		}

		roomPtr->queryMember(userId_, id, sessionId);
	}
	
	RoomPtr MucUser::getRoom(long roomId){
		// 本地可能缓冲
		return MY_INSTANCE(MucServer).getChatRoom(userId_, roomId);
	}

	RoomPtr MucUser::getRoomDetail(long roomId){
		LOG_DEBUG("MucUser::getRoomDetail ==> roomId = " << roomId << "  userId = " << userId_);
		RoomPtr roomPtr(new MucRoom(roomId));
		MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->getRoomDetail(userId_, roomId, roomPtr);
		return roomPtr;
	}


};
};
