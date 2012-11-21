#include "MucRoom.h"
#include "StanzaStringFactory.h"
#include "antispam_client.h"

#include "utils/Singleton.h"
#include "utils/MyLogger.h"
#include "utils/XmlUtils.h"
#include "utils/TimeUtils.h"

#include "constant/MessageType.h"
#include "pugixml/pugixml.hpp"

#include "proxy/ProxyRegister.h"
#include "proxy/TalkServiceProxy.h"
#include "proxy/HistoryServiceProxy.h"

#include <sys/time.h>
#include <unistd.h>

#include <vector>
#include <algorithm>

using namespace std;
using namespace mtalk::proxy;
using namespace mtalk::constant;
using namespace mtalk::utils;
using namespace pugi;
using namespace xce::antispam;

namespace mtalk{
namespace muc{
	
	MucRoom::MucRoom(long roomId):roomId_(roomId), statusCode_(0){
			
	}

	void MucRoom::sendPublicMessage(Packet& packet, Gid_t senderId, string id){
		string sessionId = packet.getSessionId();
		
		if (!memberList_.count(senderId)){
			//不是群成员,  error
			string stanzaStr = stanzaFactoryPtr_->sendPublicMessageError(MucErrorType::sendMsgNotInRoom, senderId, roomId_, id);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(senderId, sessionId, stanzaStr, true);
			return ;
		}

		//store message to history
		long timeMsec = getCurrentTimeMSec();
		vector<Gid_t> membersVec(memberList_.begin(), memberList_.end());
        stringstream ss;
        ss << timeMsec;
        
        //因为要存历史记录，给上行的加上time属性
        packet.setAttributeValue("time", ss.str());
		MY_INSTANCE(ProxyRegister).getProxy<HistoryServiceProxy>("historyProxy")->saveMsg4Group(roomId_, ownerId_, senderId, membersVec, packet.toString(), timeMsec);
		

		//先给sender回馈
		string stanzaStr = stanzaFactoryPtr_->sendPublicMessage2Sender(senderId, roomId_, id);
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(senderId, sessionId, stanzaStr, false);
		LOG_DEBUG("MucRoom::sendPublicMessage ==> to sender senderId = " << senderId << " stanzaStr = " << stanzaStr);
							
		// hexie check
		
		/*try{
			if (!hexieCheck(senderId, id, packet)){
				LOG_DEBUG("MucRoom::sendPublicMessage ==> hexie check failed , return . senderId = " << senderId);
				return ;
			}
		}catch(exception& e){
			LOG_ERROR("MucRoom::sendPublicMessage ==> hexieCheck error , error = " << e.what());
		}*/
		
		set<Gid_t>::iterator it = memberList_.begin();
		LOG_DEBUG("MucRoom::sendPublicMessage ==> memberList_.size = " << memberList_.size());
		bool send2Offline = true;
        map<Gid_t, string> historyMsgMap;
		try {
				for ( ; it != memberList_.end(); it++){
						if (*it == senderId){
							//	string stanzaStr = stanzaFactoryPtr_->sendPublicMessage2Sender(senderId, roomId_, id);
							//	MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(senderId, sessionId, stanzaStr, false);
							//	LOG_DEBUG("MucRoom::sendPublicMessage ==> to sender senderId = " << senderId << " stanzaStr = " << stanzaStr);
								continue ;
						}
						string stanzaStr = stanzaFactoryPtr_->sendPublicMessage(*it, senderId, version_, roomId_, packet, send2Offline);
						MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *it, stanzaStr, send2Offline);
						LOG_DEBUG("MucRoom::sendPublicMessage ==> to occupant occupantId = " << *it <<  "stanzaStr = "  << stanzaStr);
                        
                        //save to history
                        historyMsgMap[*it] = stanzaStr;

						// muc log
						mucDownMessageLog(*it, packet);
				}
		}catch (exception& e){
			LOG_ERROR("MucRoom::sendPublicMessage ==> error in for exception=" << e.what());
		}

        // down store to history message
		MY_INSTANCE(ProxyRegister).getProxy<HistoryServiceProxy>("historyProxy")->saveMsg4GroupDown(roomId_, ownerId_, senderId, historyMsgMap, timeMsec);
	}

	void MucRoom::sendInvitation(Gid_t invitorId, vector<Gid_t> inviteeVec, string& id, string& sessionId){
		LOG_DEBUG("MucRoom::sendInvitation ==> invitorId = " << invitorId);
		vector<Gid_t> allMembers;
		allMembers.assign(memberList_.begin(), memberList_.end());
		//allMembers.insert(allMembers.end(), inviteeVec.begin(), inviteeVec.end());
		vector<Member> allMembersDetail = getMemberDetail(allMembers);
		vector<Member> inviteesDetail = getMemberDetail(inviteeVec);
		Member invitorDetail = getMemberDetail(invitorId);
		
		//若实际邀请的人都在群里，只给invitor回一个成功
		if (inviteeVec.empty()){
			string stanzaStr = stanzaFactoryPtr_->invitation2Self(invitorId, ownerId_, roomId_, id, roomSubject_);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(invitorId, sessionId, stanzaStr, false);
			return ;
		}

		// inform invitees
		vector<Gid_t>::iterator it = inviteeVec.begin();
		for ( ; it != inviteeVec.end(); it++){
			string stanzaStr = stanzaFactoryPtr_->invitation2invitee(*it, invitorId, ownerId_, roomId_, version_, roomSubject_, allMembersDetail);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *it, stanzaStr, false);
			LOG_DEBUG("MucRoom::sendInvitation ==> to new invitee id = " << *it << " stanzaStr = " << stanzaStr);
			stanzaStr = mucHintPtr_->invitation2inviteeHint(version_, *it, roomId_, invitorDetail, inviteesDetail, allMembersDetail);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *it, stanzaStr, true);
			LOG_DEBUG("MucRoom::sendInvitation ==> to new invitee Hint !! id = " << *it << " stanzaStr = " << stanzaStr);
		}

		// inform existing occupants
		set<Gid_t>::iterator iter = memberList_.begin();
		for ( ; iter != memberList_.end(); iter++){
			if (*iter == invitorId){
				//回执 to invitor
				string stanzaStr = stanzaFactoryPtr_->invitation2Self(invitorId, ownerId_, roomId_, id, roomSubject_);
				MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(invitorId, sessionId, stanzaStr, false);
				
				//presence 2 invitor
				stanzaStr = stanzaFactoryPtr_->invitation2existing(*iter, invitorId, ownerId_, version_, roomId_, roomSubject_, inviteesDetail);
				MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *iter, stanzaStr, false);
	
				//hint to invitor 
				stanzaStr = mucHintPtr_->invitation2SelfHint(version_, invitorId, roomId_, inviteesDetail);
				MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(invitorId, sessionId, stanzaStr, true);

				//room name changed to invitor
				/*stanzaStr = stanzaFactoryPtr_->subjectChange(*iter, invitorId, version_, roomId_, roomSubject_);
				MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *iter, stanzaStr, true);*/
				
				continue;
			}

			if (find(inviteeVec.begin(), inviteeVec.end(), *iter) != inviteeVec.end()){
				//skip invitee
				continue;
			}
			string stanzaStr = stanzaFactoryPtr_->invitation2existing(*iter, invitorId, ownerId_, version_, roomId_, roomSubject_, inviteesDetail);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *iter, stanzaStr, false);
			
			// hint to existing
			Member invitorDetail = getMemberDetail(invitorId);	
			stanzaStr = mucHintPtr_->invitation2existingHint(version_, *iter, roomId_, invitorDetail, inviteesDetail);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *iter, stanzaStr, true);
			LOG_DEBUG("MucRoom::sendInvitation ==> to existing occupant id = " << *iter << " stanzaStr = " << stanzaStr);
		}
	}

	void MucRoom::changeSubject(Gid_t senderId, string& subjectStr, string& id, string& sessionId){
		LOG_DEBUG("MucRoom::changeSubject ==> senderId = " << senderId << "subjectStr = " << roomSubject_);
		set<Gid_t>::iterator it = memberList_.begin();
		LOG_DEBUG("MucRoom::changeSubject ==> memberList_ size = " << memberList_.size());
		Member actorDetail = getMemberDetail(senderId);
		for (; it != memberList_.end(); it++){
			if (*it == senderId){
				string stanzaStr = stanzaFactoryPtr_->subjectChange2Sender(senderId, version_, roomId_, roomSubject_, id);
				MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(senderId, sessionId, stanzaStr, true);
				LOG_DEBUG("MucRoom::changeSubject ==> to sender Id = " << senderId << "  stanzaStr = " << stanzaStr);
				// hint to sender	
				stanzaStr = mucHintPtr_->subjectChange2SenderHint(version_, senderId, roomId_, roomSubject_);
				MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(senderId, sessionId, stanzaStr, true);
				continue ;
			}
			string stanzaStr = stanzaFactoryPtr_->subjectChange(*it, senderId, version_, roomId_, roomSubject_);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *it, stanzaStr, true);
			LOG_DEBUG("MucRoom::changeSubject ==> to occupant Id = " << *it << "  stanzaStr = " << stanzaStr);
			stanzaStr = mucHintPtr_->subjectChangeHint(version_, *it, roomId_, actorDetail, roomSubject_);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *it, stanzaStr, true);
		}
	}

	void MucRoom::setMemberList(vector<Gid_t>& memberVec){
		vector<Gid_t>::iterator it = memberVec.begin();
		for ( ; it != memberVec.end(); it++){
			memberList_.insert(*it);
		}
	}

	void MucRoom::setMemberDetail(com::xiaonei::wap::mtalk::muc::MemberGidMap& memberMap){
		//using namespace com::xiaonei::wap::mtalk::muc;
		/*map<int, ::com::xiaonei::wap::mtalk::muc::Member>::itertator it = memberMap.begin();
		for (; it != memberMap.end(); it++){
			Member memberDetail;
			memberDetail.id = (it->second).id;
			memberDetail.name = (it->second).name;
			memberDetail.url = (it->second).url;
		}*/
		memberMap_ = memberMap;
	}

	vector<Member> MucRoom::getMemberDetail(vector<Gid_t> memberIds){
		vector<Member> memberDetailVec;
		vector<Gid_t>::iterator it = memberIds.begin();
		for ( ; it != memberIds.end(); it++){
			if (!memberMap_.count(*it)){
				// an error message
				continue;
			}
			//Member memberDetail = memberMap_[*it];
			com::xiaonei::wap::mtalk::muc::Member memberInfo = memberMap_[*it];
			Member memberDetail;
			memberDetail.id = memberInfo.id;
			memberDetail.isFriend = memberInfo.isFriend;
			memberDetail.name = memberInfo.name;
			memberDetail.relationFlag = memberInfo.extFlag;	

            //对MucDB取过来的url前面的http://给截掉
            string url = memberInfo.tinyUrl;
            if(url.find("http://") != string::npos){
				url.erase(0, 7);
			}
			memberDetail.url = url;

            string headUrl = memberInfo.tinyUrl;
            if(headUrl.find("http://") != string::npos){
				headUrl.erase(0, 7);
			}
			memberDetail.headUrl = headUrl;



			memberDetailVec.push_back(memberDetail);	
		}
		return memberDetailVec;
	}

	vector<Member> MucRoom::getMemberDetail(set<Gid_t> memberIds){
		vector<Gid_t> members(memberIds.begin(), memberIds.end());
		return getMemberDetail(members);
	}

	Member MucRoom::getMemberDetail(Gid_t memberId){
		Member memberDetail;
		if (memberMap_.count(memberId) == 0){
			return memberDetail;
		}
		com::xiaonei::wap::mtalk::muc::Member memberInfo = memberMap_[memberId];
		memberDetail.id = memberInfo.id;
		memberDetail.isFriend = memberInfo.isFriend;
		memberDetail.name = memberInfo.name;
		memberDetail.url = memberInfo.tinyUrl;
		memberDetail.headUrl = memberInfo.headUrl;
		
		return memberDetail;
	}

	vector<Member> MucRoom::getMembersDetail(){
		return getMemberDetail(memberList_);
	}
	

	void MucRoom::kickOccupant(Gid_t actorId, string& id, string& sessionId, vector<Gid_t> kickIds){
		LOG_DEBUG("MucRoom::kickOccupant ==> actorId = " << actorId);

		if (kickIds.empty()){
			//容错，可能会出现客户端短时间内多次重复操作,出现过android客户端1秒钟把同一个人踢了两次
			string stanzaStr = stanzaFactoryPtr_->kickOccupant2kicker(actorId, version_, roomId_, id, roomSubject_);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(actorId, sessionId, stanzaStr, false);
			return ;	
		}
		
		// for hint 
		Member actorDetail = getMemberDetail(actorId);
		vector<Member> kickIdsDetail = getMemberDetail(kickIds);
	
		// inform kicked id
		vector<Gid_t>::iterator it = kickIds.begin();
		for ( ; it != kickIds.end(); it++){
			string stanzaStr = stanzaFactoryPtr_->kickOccupant2kickee(actorId, *it, version_, roomId_);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *it, stanzaStr, false);
			stanzaStr = mucHintPtr_->kickOccupant2kickeeHint(version_, *it, roomId_, actorDetail);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *it, stanzaStr, true);
		}
		
		//inform existing
		set<Gid_t>::iterator setIt = memberList_.begin();
		for ( ; setIt != memberList_.end(); setIt++){
			if (*setIt == actorId){
				continue;
			}
			
			string stanzaStr = stanzaFactoryPtr_->kickOccupant2existing(actorId, *setIt, version_, roomId_, roomSubject_, kickIds);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *setIt, stanzaStr, false);
			
				
			stanzaStr = mucHintPtr_->kickOccupant2existingHint(version_, *setIt, roomId_, actorDetail, kickIdsDetail);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *setIt, stanzaStr, true);
		}

		//inform kicker ,回执
		string stanzaStr = stanzaFactoryPtr_->kickOccupant2kicker(actorId, version_, roomId_, id, roomSubject_);
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(actorId, sessionId, stanzaStr, false);
		
		// presence to kicker
		stanzaStr = stanzaFactoryPtr_->kickOccupant2existing(actorId, actorId, version_, roomId_, roomSubject_, kickIds);
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *setIt, stanzaStr, false);

		// kicker hint
		stanzaStr = mucHintPtr_->kickOccupant2kickerHint(version_, actorId, roomId_, kickIdsDetail);
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, actorId, stanzaStr, true);

		// room name to kicker
		/*stanzaStr = stanzaFactoryPtr_->subjectChange(actorId, actorId, version_, roomId_, roomSubject_);
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, actorId, stanzaStr, true);*/
				
	}


	void MucRoom::leaveRoom(Gid_t leaveId, string& id, string& sessionId){
		// to exitor self
		string stanzaStr = stanzaFactoryPtr_->leaveRoom2Self(leaveId, version_, roomId_, id);
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(leaveId, sessionId, stanzaStr, false);
		// broadcast
		set<Gid_t>::iterator it = memberList_.begin();
		for ( ; it != memberList_.end(); it++){
			if (*it == leaveId){
				// skip leaveId 既然有leaveId怎么取不到detail?
				continue;
			}
			string stanzaStr = stanzaFactoryPtr_->leaveRoom2Others(*it, leaveId, version_, roomId_, roomSubject_);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *it, stanzaStr, false);
			
			// hint to exising
			Member leaveIdDetail = getMemberDetail(leaveId); //这里以取到吗
			stanzaStr = mucHintPtr_->leaveRoom2OthersHint(version_, *it, roomId_, leaveIdDetail);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *it, stanzaStr, true);
		}
	}

	void MucRoom::destroyRoom(Gid_t fromId, string& id, string& sessionId){
		LOG_DEBUG("MucRoom::destroyRoom ==> fromId = " << fromId);
		if (ownerId_ != fromId){
			//error stanza
			string stanzaStr = stanzaFactoryPtr_->roomDestroyedError(MucErrorType::NoPermission, fromId, roomId_, id);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(ownerId_, sessionId, stanzaStr, false);
			return ;
		}
		// this pointer
		RoomPtr roomPtr = shared_from_this();
		MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->leaveRoom(ownerId_ ,roomId_, roomPtr);
		
		// to owner
	     	string stanzaStr = stanzaFactoryPtr_->roomDestroyed2Owner(ownerId_, roomId_, id);
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(fromId, sessionId, stanzaStr, false);

		for(set<Gid_t>::iterator it = memberList_.begin(); it != memberList_.end(); it++){
			if (*it == ownerId_){
				continue;
			}
			//stanza to member
			stanzaStr = stanzaFactoryPtr_->roomDestroyed2Member(*it, version_, roomId_);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *it, stanzaStr, false);

			// hint to member
			stanzaStr = mucHintPtr_->roomDestroyed2MemberHint(version_, *it, roomId_);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, *it, stanzaStr, true);
		}
	}

	bool MucRoom::hexieCheck(Gid_t senderId, string& id, Packet& packet){
		LOG_DEBUG("MucRoom::hexieCheck ==> ");
		xml_node messageNode = packet.element();
		xml_node body = messageNode.child("body");
		if (body.empty()){
			return true;
		}
		xml_attribute type = body.attribute("type");
		if (type.empty()){
			return true;
		}
		string typeName = type.value();
		if (typeName != "text"){
			return true;
		}

        #ifndef INTERNATIONAL
		// hexie check	
		string chatStr = body.child_value("text");
		CheckType checkType = RENREN_MESSAGE;
		int antispamResult = AntispamClient::ozeinContent(senderId, roomId_, checkType , chatStr, "127.0.0.1");
		if(antispamResult == 30){
			string stanzaStr = stanzaFactoryPtr_->hexieStanza(senderId, roomId_, id, chatStr);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, senderId, stanzaStr, false);
			stanzaStr = mucHintPtr_->hexieStanzaHint(senderId, roomId_, chatStr);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, senderId, stanzaStr, false);
			return false;
		}
        #endif
		return true;
	}

	bool MucRoom::hexieCheck(Gid_t senderId, string& id, string& chatStr){
        #ifndef INTERNATIONAL
		CheckType checkType=RENREN_MESSAGE;
		int antispamResult = AntispamClient::ozeinContent(senderId, roomId_, checkType , chatStr, "127.0.0.1");
		if(antispamResult == 30){
			string stanzaStr = stanzaFactoryPtr_->hexieStanza(senderId, roomId_, id, chatStr);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId_, senderId, stanzaStr, false);
			return false;
		}
        #endif
		return true;
	}

	void MucRoom::mucDownMessageLog(Gid_t toId, Packet& packet){
		LOG_DEBUG("MucRoom::mucDownMessageLog ==>");
		xml_node messageNode = packet.element();
		xml_node body = messageNode.child("body");
		if (body.empty()){
			return ;
		}
		xml_attribute typeAttr = body.attribute("type");
		if (typeAttr.empty()){
			return ;
		}
		
		MessageType::Type msgType = MessageType::CHAT;
		string typeValue = typeAttr.value();
		if (typeValue == "text"){
			msgType = MessageType::CHAT;	
		} else if (typeValue == "image"){
			msgType = MessageType::IMAGE;	
		} else if (typeValue == "voice"){
			msgType = MessageType::VOICE;
		} else if (typeValue == "expression"){
			msgType = MessageType::EXPRESSION;	
		}

		xml_node feed = messageNode.child("feed");
		if (!feed.empty()){
			msgType = MessageType::Type(msgType | MessageType::FEED);
		}
		
		/*RLOG_MUC_ACTION("push|" << roomId_ << "|" << toId << "|"
						<< "|"
						<< "|"
						<< "|"
						<< msgType << "|");*/

		LOG_ACTION("mucPush|" << roomId_ << "|" << toId << "|"
						<< "|"
						<< "|"
						<< "|"
						<< msgType);
		
	}

	void MucRoom::setSubject(std::string subject){
		XmlUtils::xmlEncode(subject);
		roomSubject_ = subject;
	}

	void MucRoom::queryMember(Gid_t invokeId, string& id, string& sessionId){
	//	map<int,bool> roomMembers; //bool means is friend or not
		vector<Gid_t> members(memberList_.begin(), memberList_.end());
		vector<Member> membersDetail = getMemberDetail(members);
		string stanzaStr = stanzaFactoryPtr_->queryRoomInfo(version_, invokeId, ownerId_, roomId_, roomSubject_, id, membersDetail);
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(invokeId, sessionId, stanzaStr, false);
	}

	void MucRoom::destroySelf(){
		LOG_DEBUG("MucRoom::destroySelf ==> room self destroyed roomId = " << roomId_);
				
	}

};
};
