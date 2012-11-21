#ifndef _MTALK_MUC_MUCHINT_ENGLISH_
#define _MTALK_MUC_MUCHINT_ENGLISH_

#include <vector>
#include <boost/enable_shared_from_this.hpp>
#include <boost/thread.hpp>
#include "types.h"
#include "MucRoom.h"


namespace mtalk{
namespace muc{
	struct Member;

	class MucHint{
	public :
		MucHint(){}
		
		~MucHint(){}

		// room creation
		std::string roomCreated2CreatorHint(int version, Gid_t creatorId, long roomId, std::vector<Member>& initialMembers);
		
		std::string roomCreated2InviteeHint(int version, Gid_t inviteeId, long roomId, Member creatorIdDetail, std::vector<Member>& initialMembers);
		
		// leave room
		std::string leaveRoom2OthersHint(int version, Gid_t existingId, long roomId, Member exitorIdDetail);
		
		// invitation
		std::string invitation2inviteeHint(int version, Gid_t inviteeId, long roomId, Member invitorDetail, std::vector<Member>& inviteeDetail, std::vector<Member>& allMemberDetail);

		std::string invitation2SelfHint(int version, Gid_t invitorId, long roomId, std::vector<Member>& invitees);

		std::string invitation2existingHint(int version, Gid_t existingId, long roomId, Member invitorIdDetail, std::vector<Member>& invitees);
		
		//subject change
		std::string subjectChangeHint(int version, Gid_t toId, long roomId, Member& actorDetail, std::string& subjectStr);
		
		std::string subjectChange2SenderHint(int version, Gid_t senderId, long roomId, std::string& subjectStr);
		
		//kick occupant
		std::string kickOccupant2kickerHint(int version, Gid_t actorId, long roomId, std::vector<Member>& kickeesDetail);

		std::string kickOccupant2kickeeHint(int version, Gid_t kickId, long roomId, Member actorDetail);

		std::string kickOccupant2existingHint(int version, Gid_t existingId, long roomId, Member actorIdDetail, std::vector<Member> kickeesDetail);
		
		//destroy room
		std::string roomDestroyed2MemberHint(int version, Gid_t toId, long roomId);
		
		//room not exist
		std::string roomNotExistHint(int version, Gid_t toId, long roomId);
	
		//hexie
		std::string hexieStanzaHint(Gid_t senderId, long roomId, std::string& chatStr);
	
	public :
		void setUserDomain(std::string domain);
	
	// derived class need to access it
	protected :
		std::string domainStr_;
		std::string domain_;


	};

	inline void MucHint::setUserDomain(std::string domain){
		domain_ = domain;
		domainStr_ = domain_.insert(0, 1, '@');
	}


}; // namespace muc
}; // namespace mtalk

#endif // _MTALK_MUC_MUCHINT_ENGLISH_
