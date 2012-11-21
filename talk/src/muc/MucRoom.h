/** * @file Room.h
* @brief 代表一个房间对象,执行各种房间内的操作
* @author wang.yu@renren-inc.com
* @version 1.0
* @date 2012-05-14
*/
#ifndef TALK_MUC_ROOM_H_
#define	TALK_MUC_ROOM_H_

#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>

#include <string>
#include <map>
#include <set>
#include <vector>

#include "types.h"
#include "MucServer.h"
#include "MucHint.h"
#include "Packet.h"
#include "JID.h"
#include "StanzaStringFactory.h"
#include "ice_src/RoomService.h"

namespace mtalk{
namespace muc{

	struct Member{
		Gid_t id;
		bool isFriend;
		int relationFlag;
		std::string name;
		std::string url;
		std::string headUrl;
	};
	
	
	class MucRoom : public boost::enable_shared_from_this<MucRoom>{
	public :	
		typedef boost::shared_ptr<MucRoom> RoomPtr;
	
	public :
		MucRoom (){}

		MucRoom (long roomId);

		void sendPublicMessage(Packet& packet, Gid_t senderId, std::string id);
	
		void leaveRoom(Gid_t leaveId, std::string& id, std::string& sessionId);

		void sendInvitation(Gid_t invitorId, std::vector<Gid_t> inviteeVec, std::string& id, std::string& sessionId);

		void joinRoom(Gid_t roleId);

		void queryMember(Gid_t fromId, std::string& id, std::string& sessionId);

		void kickOccupant(Gid_t actorId, std::string& id, std::string& sessionId, std::vector<Gid_t> kickIds);

		void changeSubject(Gid_t fromId, std::string& subjectStr, std::string& id, std::string& sessionId);

		void destroyRoom(Gid_t fromId, std::string& id, std::string& sessionId);

		void queryRoomInfo(std::string& id, std::string& sessionId);

		bool loadConfig();

		void setMemberList(std::vector<Gid_t>& memberVec);

		void setMemberDetail(com::xiaonei::wap::mtalk::muc::MemberGidMap& memberMap);

		long getId();

		void setRoomId(long roomId);

		Gid_t getOwner();

		void setOwner(Gid_t ownerId);

		void setSubject(std::string subject);
		
		com::xiaonei::wap::mtalk::muc::MemberGidMap getMemberMap();

		std::string getSubject();


		std::vector<Member> getMemberDetail(std::vector<Gid_t> memberIds);
		
		std::vector<Member> getMemberDetail(std::set<Gid_t> memberIds);
		
		Member getMemberDetail(Gid_t memberId);

		std::vector<Member> getMembersDetail();

	public :

		int getStatusCode();

		void setStatusCode(int statusCode);

		bool roomOK();

		void setUpdateTime(long updateTime);

		long getUpdateTime();

		void setVersion(int version);

		int getVersion();

		bool isSixin();

		void isSixin(bool isSixin);

		void setStanzaFactory(boost::shared_ptr<StanzaStringFactory> stanzaFactoryPtr);
		
		void setMucHint(boost::shared_ptr<MucHint> mucHintPtr);

		bool hasMember(Gid_t userId);

	private :
		void mucDownMessageLog(Gid_t toId, Packet& packet);

		bool hexieCheck(Gid_t senderId, std::string& id, Packet& packet);

		bool hexieCheck(Gid_t senderId, std::string& id, std::string& str);

		void iqHandleItem(Element& item, Gid_t fromId);

		void destroySelf();
		
		Gid_t ownerId_;
		
		/**
		* @brief  memberMap_是memberList_的超集，至少包含memberList_中所有id的详细信息,也会在必要情况下多包含一些id的信息，用于之后使用
		*/
		com::xiaonei::wap::mtalk::muc::MemberGidMap memberMap_;

		
		/**
		* @brief memberList_都是准确反应此交操作之后的群成员
		*/
		std::set<Gid_t> memberList_;

		long roomId_;

		std::string roomSubject_;
		
		int statusCode_;

		long updateTime_;

		int version_;

		/**
		* @brief 引入独立账户体系后在DB中有两张表，一个是为人人用户的，一个是新的，用于区分，domain是不一样的
		*/
		bool isSixin_;
		
		// 从mucUser来初始化
		boost::shared_ptr<StanzaStringFactory> stanzaFactoryPtr_;
		
		boost::shared_ptr<MucHint> mucHintPtr_;
	};



	inline long MucRoom::getId(){
		return roomId_;
	}

	inline Gid_t MucRoom::getOwner(){
		return ownerId_;
	}

	inline void MucRoom::setOwner(Gid_t ownerId){
		ownerId_ = ownerId;
	}

	inline std::string MucRoom::getSubject(){
		return roomSubject_;
	}

	inline void MucRoom::setStatusCode(int statusCode){
		statusCode_ = statusCode;
	}

	inline int MucRoom::getStatusCode(){
		return statusCode_;
	}

	inline com::xiaonei::wap::mtalk::muc::MemberGidMap MucRoom::getMemberMap(){
		return memberMap_;
	}

	inline bool MucRoom::roomOK(){
		if (statusCode_ == com::xiaonei::wap::mtalk::muc::Success){
			return true;
		}
		return false;
	}

	inline void MucRoom::setUpdateTime(long updateTime){
		updateTime_ = updateTime;
	}

	inline long MucRoom::getUpdateTime(){
		return updateTime_;
	}

	inline void MucRoom::setRoomId(long roomId){
		roomId_ = roomId;
	}

	inline void MucRoom::setVersion(int version){
		version_ = version;
	}

	inline int MucRoom::getVersion(){
		return version_;
	}

	inline bool MucRoom::isSixin(){
		return isSixin_;
	}

	inline void MucRoom::isSixin(bool isSixin){
		isSixin_ = isSixin;
	}

	inline void MucRoom::setStanzaFactory(boost::shared_ptr<StanzaStringFactory> stanzaFactoryPtr){
		stanzaFactoryPtr_ = stanzaFactoryPtr;
	}

	inline void MucRoom::setMucHint(boost::shared_ptr<MucHint> mucHintPtr){
		mucHintPtr_ = mucHintPtr;
	}
	inline bool MucRoom::hasMember(Gid_t userId){
		if(memberList_.count(userId)){
			return true;
		}
		return false;
	}

}; // namespace muc
}; // namespace mtalk
#endif // TALK_MUC_ROOM_H_
