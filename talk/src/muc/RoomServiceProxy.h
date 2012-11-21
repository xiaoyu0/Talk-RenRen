#ifndef MTALK_MUC_ROOMSERVICEPROXY_H_
#define MTALK_MUC_ROOMSERVICEPROXY_H_

#include "proxy/SimpleZKProxy.h"
#include "ice_src/RoomService.h"

#include "types.h"
#include "MucUser.h"
#include "MucRoom.h"

namespace mtalk{
namespace muc{

class MucUser;

class RoomServiceProxy : public mtalk::proxy::SimpleZKProxy<com::xiaonei::wap::mtalk::muc::RoomServicePrx>{
public :
	typedef boost::shared_ptr<MucRoom> RoomPtr;

public :
	RoomServiceProxy();

	~RoomServiceProxy();

	bool createRoom(Gid_t creatorId, std::vector<Gid_t> initialMembers, boost::shared_ptr<MucRoom> roomPtr);
	
	//较轻的接口,获取房间的简单信息，只要成员id
	bool getRoom(Gid_t invokeId, long roomId, boost::shared_ptr<MucRoom>& roomPtr);
    
	//较重的接口,获取房间的详细信息，包括每个成员的详细信息
	bool getRoomDetail(Gid_t invokeId, long roomId, boost::shared_ptr<MucRoom>& roomPtr);

	bool addRoomMember(Gid_t invitorId, long roomId, std::vector<Gid_t> newMembers, std::vector<Gid_t>& realNewMembers, boost::shared_ptr<MucRoom> roomPtr);

	bool removeRoomMember(Gid_t kickerId, long roomId, std::vector<Gid_t> removeMembers, std::vector<Gid_t>& realRemoveMembers, boost::shared_ptr<MucRoom>& roomPtr);

	bool changeSubject(Gid_t invokeId, long roomId, std::string& subject, boost::shared_ptr<MucRoom>& roomPtr);

	bool leaveRoom(Gid_t userId, long roomId, boost::shared_ptr<MucRoom>& roomPtr);

	void queryMember(Gid_t userId, long roomId);

	void loadUser(Gid_t userId, boost::shared_ptr<MucUser>& userPtr);

	bool saveRoomToContact(Gid_t userId, long roomId, int& error);
	
	bool deleteRoomFromContact(Gid_t userId, long roomId, int& error);

	bool getUserRooms(Gid_t userId, std::vector<RoomPtr>& roomPtrVec);
	
	//群聊五接口相关代理接口		
	com::xiaonei::wap::mtalk::muc::RetRoom exitRoom(Gid_t userId, long roomId);

	com::xiaonei::wap::mtalk::muc::RetRoom getRoomH(Gid_t userId,long roomId);

	com::xiaonei::wap::mtalk::muc::MemberGidMap getMemberDetail(Gid_t invokerId, com::xiaonei::wap::mtalk::muc::MemberGidList members);

	com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus saveRoomToContact(Gid_t userId, long roomId);

	com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus deleteRoomFromContact(Gid_t userId, long roomId);

	com::xiaonei::wap::mtalk::muc::RetRoomList getSavedUserRoomList(Gid_t userId, bool withMembers);

private :
	 com::xiaonei::wap::mtalk::muc::MemberGidMap getRoomMemberDetail(Gid_t callId, std::vector<Gid_t>& memberIdVec);

};                          
                            		
}; // namespace muc         
}; // namespace mtalk       		
                            
#endif // MTALK_MUC_ROOMSERVICEPROXY_H_ 
