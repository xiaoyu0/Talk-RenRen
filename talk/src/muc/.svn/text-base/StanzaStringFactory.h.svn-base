/**
* @file StanzaStringFactory.h
* @brief 回给客户端的协议工厂类，用于各情况下生成协议文本
* @author wang.yu@renren-inc.com
* @version 1.0
* @date 2012-05-28
*/
#ifndef MTALK_MUC_STANZA_STRING_FACTORY_H_
#define MTALK_MUC_STANZA_STRING_FACTORY_H_

#include <vector>
#include "Packet.h"
#include "types.h"
#include "MucRoom.h"

namespace mtalk{
namespace muc{

struct Member;
class MucRoom;

class StanzaStringFactory{
public :
	StanzaStringFactory();

	void getInviteesToNotice(std::vector<Gid_t>& initialMembers, std::vector<Gid_t>& inviteesToNotice);
	
	// creation
	std::string roomCreated2Creator(Gid_t creatorId, long roomId, int version, std::string& id, std::string& subject);
	
	std::string roomCreated2CreatorHint(int version, Gid_t creatorId, long roomId, std::vector<Member>& initialMembers);

	std::string roomCreated2Invitee(Gid_t inviteeId, Gid_t creatorId, long roomId, int version, std::string& subject, std::vector<Member>& initialMembers);

	std::string roomCreated2InviteeHint(int version, Gid_t inviteeId, long roomId, Member creatorIdDetail, std::vector<Member>& initialMembers);
	
	std::string roomCreated2InviteeNotSupportMuc(Gid_t toId, Member& ownerDetail, std::vector<Member>& initialMembers);
	
	std::string roomCreatederror(int statusCode, Gid_t ownerId, std::string& id);
	
	// leave room
	std::string leaveRoom2Self(Gid_t exitorId, int version, long roomId, std::string& id);

	std::string leaveRoom2Others(Gid_t existingId, Gid_t exitorId, int version, long roomId, std::string& subject);
	
	std::string leaveRoom2OthersHint(int version, Gid_t existingId, long roomId, Member exitorIdDetail);

	std::string leaveRoomError(int statusCode, Gid_t exitorId, long roomId, std::string& id);
	
	// send public message
	std::string sendPublicMessage(Gid_t toId, Gid_t senderId, int version, long roomId, Packet& packet, bool& send2Offline);
	
	std::string sendPublicMessage2Sender(Gid_t senderId, long roomId, std::string& id);

	std::string sendPublicMessageError(int statusCode, Gid_t senderId, long roomId, std::string& id);
	
	// invitation
	std::string invitation2invitee(Gid_t inviteeId, Gid_t invitorId, Gid_t roomOwnerId, long roomId, int version, std::string& subject, std::vector<Member>& allMembers);
	
	std::string invitation2inviteeHint(int version, Gid_t inviteeId, long roomId, Member invitorDetail, std::vector<Member>& inviteeDetail, std::vector<Member>& allMemberDetail);

	std::string invitation2Self(Gid_t invitorId, Gid_t roomOwnerId, long roomId, std::string& id, std::string& subject);
	
	std::string invitation2SelfHint(int version, Gid_t invitorId, long roomId, std::vector<Member>& invitees);
	
	std::string invitation2existing(Gid_t existingId, Gid_t invitorId, Gid_t roomOwnerId, int version, long roomId, std::string& subject, std::vector<Member> invitees);
	
	std::string invitation2existingHint(int version, Gid_t existingId, long roomId, Member invitorIdDetail, std::vector<Member>& invitees);

	std::string invitationError(int statusCode, Gid_t invitorId, long roomId, std::string& id);
	
	//change subject
	std::string subjectChange(Gid_t toId, Gid_t senderId, int version, long roomId, std::string& subjectStr);
	
	std::string subjectChangeHint(int version, Gid_t toId, long roomId, Member& actorDetail, std::string& subjectStr);
	
	std::string subjectChange2Sender(Gid_t senderId, int version, long roomId, std::string& subjectStr, std::string& id);
	
	std::string subjectChange2SenderHint(int version, Gid_t senderId, long roomId, std::string& subjectStr);
	
	std::string subjectChangeError(int statusCode, Gid_t senderId, long roomId, std::string& id);
	
	// kick occupant
	std::string kickOccupant2kicker(Gid_t actorId, int version, long roomId, std::string& id, std::string& subject);
	
	std::string kickOccupant2kickerHint(int version, Gid_t actorId, long roomId, std::vector<Member>& kickeesDetail);
	
	std::string kickOccupant2kickee(Gid_t actorId, Gid_t kickId, int version, long roomId);
	
	std::string kickOccupant2kickeeHint(int version, Gid_t kickId, long roomId, Member actorDetail);
	
	std::string kickOccupant2existing(Gid_t actorId, Gid_t existingId, int version, long roomId, std::string& subject, std::vector<Gid_t> kickeeVec);
	
	std::string kickOccupant2existingHint(int version, Gid_t existingId, long roomId, Member actorIdDetail, std::vector<Member> kickeesDetail);

	std::string kickOccupantError(int statusCode, Gid_t kickerId, long roomId, std::string& id, std::string selfDefinedErrorStr=std::string(""));
	
	// hexie
	std::string hexieStanza(Gid_t senderId, long roomId, std::string& id, std::string& chatStr);
	
	std::string hexieStanzaHint(Gid_t senderId, long roomId, std::string& chatStr);
	
	// destroy room
	std::string roomDestroyed2Owner(Gid_t ownerId, long roomId, std::string& id);
	
	std::string roomDestroyed2Member(Gid_t memberId, int version, long roomId);
	
	std::string roomDestroyed2MemberHint(int version, Gid_t toId, long roomId);
	
	std::string roomDestroyedError(int statusCode, Gid_t fromId, long roomId, std::string& id);

	std::string getRoomError(int statusCode, Gid_t fromId, long roomId, std::string& id);
	
	// query room
	std::string queryRoomInfo(int version, Gid_t fromId, Gid_t ownerId, long roomId, std::string& subject, std::string& id, std::vector<Member>& membersDetail);
	
	// save to contact
	std::string saveRoomToContact(Gid_t toId, long roomId, std::string& id);
	
	std::string saveRoomToContactError(int statusCode, Gid_t toId, long roomId, std::string& id);
	
	// delete from contact
	std::string deleteRoomFromContact(Gid_t toId, long roomId, std::string& id);
	
	std::string deleteRoomFromContactError(int statusCode, Gid_t toId, long roomId, std::string& id);
	
	// check rooms
	std::string checkRooms(Gid_t toId, std::string& id, std::string& checkContent);

	std::string checkRoomsError(Gid_t toId, std::string& id);

	// getSavedRooms
	std::string getSavedRoomItem(boost::shared_ptr<MucRoom>& roomPtr);

	std::string getSavedRooms(Gid_t toId, std::string& id, std::string& roomItemsStr);

public :
	void setUserDomain(std::string domain);

private :
	std::string prefix_;

	std::string toUserDomain_;

	std::string domainStr_;
};

inline void StanzaStringFactory::setUserDomain(std::string domain){
	toUserDomain_ = domain;
	domainStr_ = toUserDomain_.insert(0, 1, '@');
}

};
};
#endif //MTALK_MUC_STANZA_STRING_FACTORY_H_
