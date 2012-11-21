#include "RoomServiceProxy.h"
#include "Config.h"
#include "utils/MyLock.h"

#include <exception>

using namespace std;
using namespace mtalk::proxy;
using namespace com::xiaonei::wap::mtalk::muc;
using namespace mtalk::utils;

namespace mtalk{
namespace muc{
	RoomServiceProxy::RoomServiceProxy() :
		SimpleZKProxy<RoomServicePrx>("MucDBIceService", ZK_ROOM_DB_PATH , false, 1200){
			
	}

	RoomServiceProxy::~RoomServiceProxy(){

	}

	bool RoomServiceProxy::createRoom(Gid_t creatorId, vector<Gid_t> initialMembers, boost::shared_ptr<MucRoom> roomPtr){
	    ReadLock lock(mutex_);
		LOG_DEBUG("RoomServiceProxy::createRoom ==> creatorId = " << creatorId << "  initialMembers.size() == " << initialMembers.size());
		RoomServicePrx proxy = getProxy(creatorId);

		if (!proxy){
			LOG_ERROR("RoomServiceProxy::createRoom ==> Room DB proxy get failure");
			return false;
		}
		
		RetRoom retRoom; 
		try{
			retRoom = proxy->createRoomNew(creatorId, initialMembers, "");
		} catch (exception& e){
			LOG_ERROR("RoomServiceProxy::createRoom ==> proxy->createRoom  exception = " << e.what());
			return false;
		}
		LOG_DEBUG("RoomServiceProxy::createRoom ==> new roomId = " << retRoom.roomInfo.id << "  room name = " << retRoom.roomInfo.name);

		roomPtr->setStatusCode(int(retRoom.status));
		if (!roomPtr->roomOK()){
			LOG_DEBUG("RoomServiceProxy::createRoom ==> room status no OK");
			return true;
		}
		
		roomPtr->setRoomId(retRoom.roomInfo.id);
		vector<Gid_t> memberIdVec = retRoom.roomInfo.memberGids;
		roomPtr->setMemberList(memberIdVec);
		roomPtr->setSubject(retRoom.roomInfo.name);
		roomPtr->setVersion(retRoom.roomInfo.version);
		roomPtr->setOwner(retRoom.roomInfo.creater);
		
		MemberGidMap memberMap;
		try{	
			memberMap = getRoomMemberDetail(creatorId, memberIdVec);
		}catch(exception& e){
			LOG_ERROR("RoomServiceProxy::createRoom ==> proxy->getMemberDetail exception = " << e.what());		
		}
		roomPtr->setMemberDetail(memberMap);
		return true;
	}

	bool RoomServiceProxy::getRoom(Gid_t invokeId, long roomId, boost::shared_ptr<MucRoom>& roomPtr){
	    ReadLock lock(mutex_);
		RoomServicePrx proxy = getProxy(invokeId);
		
		if (!proxy){
			LOG_ERROR("RoomServiceProxy::getRoom ==> Room DB proxy get failure");
			return false;
		}
		RetRoom retRoom; 
		try{
			retRoom = proxy->getRoomNew(roomId);
		} catch (exception& e){
			LOG_ERROR("RoomServiceProxy::getRoom ==> proxy->getRoom exception = " << e.what());		
		}
		
		roomPtr->setStatusCode(int(retRoom.status));
		if (!roomPtr->roomOK()){
			LOG_DEBUG("RoomServiceProxy::getRoom ==> room status not OK");
			return false;
		}

		vector<Gid_t> memberIdVec = retRoom.roomInfo.memberGids;
		LOG_DEBUG("RoomServiceProxy::getRoom ==> memberGids size = " << memberIdVec.size());

		roomPtr->setRoomId(retRoom.roomInfo.id);
		roomPtr->setMemberList(memberIdVec);
		roomPtr->setSubject(retRoom.roomInfo.name);
		roomPtr->setUpdateTime(retRoom.roomInfo.updateTime);
		roomPtr->setVersion(retRoom.roomInfo.version);
		roomPtr->setOwner(retRoom.roomInfo.creater);
		
		/*MemberGidMap memberMap;
		try{	
			memberMap = getRoomMemberDetail(invokeId, memberIdVec);
		}catch(exception& e){
			LOG_ERROR("RoomServiceProxy::getRoom ==> proxy->getMemberDetail exception = " << e.what());		
		}
		roomPtr->setMemberDetail(memberMap);*/
		return true;	
	}


	bool RoomServiceProxy::getRoomDetail(Gid_t invokeId, long roomId, boost::shared_ptr<MucRoom>& roomPtr){
		ReadLock lock(mutex_);
		RoomServicePrx proxy = getProxy(invokeId);
		
		if (!proxy){
			LOG_ERROR("RoomServiceProxy::getRoomDetail ==> Room DB proxy get failure");
			return false;
		}
		RetRoom retRoom; 
		try{
			retRoom = proxy->getRoomNew(roomId);
		} catch (exception& e){
			LOG_ERROR("RoomServiceProxy::getRoomDetail ==> proxy->getRoom exception = " << e.what());		
		}
		
		roomPtr->setStatusCode(int(retRoom.status));
		if (!roomPtr->roomOK()){
			LOG_DEBUG("RoomServiceProxy::getRoomDetail ==> room status not OK");
			return false;
		}

		vector<Gid_t> memberIdVec = retRoom.roomInfo.memberGids;
		LOG_DEBUG("RoomServiceProxy::getRoomDetail ==> memberGids size = " << memberIdVec.size());

		roomPtr->setRoomId(retRoom.roomInfo.id);
		roomPtr->setMemberList(memberIdVec);
		roomPtr->setSubject(retRoom.roomInfo.name);
		roomPtr->setUpdateTime(retRoom.roomInfo.updateTime);
		roomPtr->setVersion(retRoom.roomInfo.version);
		roomPtr->setOwner(retRoom.roomInfo.creater);
		
		MemberGidMap memberMap;
		try{	
			memberMap = getRoomMemberDetail(invokeId, memberIdVec);
		}catch(exception& e){
			LOG_ERROR("RoomServiceProxy::getRoomDetail  ==> proxy->getMemberDetail exception = " << e.what());		
		}
		roomPtr->setMemberDetail(memberMap);
		return true;	
	}


	bool RoomServiceProxy::addRoomMember(Gid_t invitorId, long roomId, vector<Gid_t> newMembers, vector<Gid_t>& realNewMembers, boost::shared_ptr<MucRoom> roomPtr){
	    ReadLock lock(mutex_);
		RoomServicePrx proxy = getProxy(invitorId);
		if (!proxy){
			LOG_ERROR("RoomServiceProxy::addRoomMember ==> Room DB proxy get failure");
			return false;
		}	
	
		RetRoom retRoom;

		try{
			retRoom = proxy->addUserToRoomNew(invitorId, roomId, newMembers, realNewMembers);
		} catch (exception& e){
			LOG_ERROR("RoomServiceProxy::addRoomMember ==> proxy->addUserToRoom exception = " << e.what());
			return false;	
		}
		
		roomPtr->setStatusCode(int(retRoom.status));
		if (!roomPtr->roomOK()){
			return true;
		}
		
		vector<Gid_t> memberIdVec = retRoom.roomInfo.memberGids;

		LOG_DEBUG("RoomServiceProxy::addRoomMember ==> memberIdVec size = " << memberIdVec.size());
		LOG_DEBUG("RoomServiceProxy::addRoomMember ==> realNewMembers size = " << realNewMembers.size());

		roomPtr->setRoomId(retRoom.roomInfo.id);
		roomPtr->setMemberList(memberIdVec);
		roomPtr->setSubject(retRoom.roomInfo.name);
		roomPtr->setVersion(retRoom.roomInfo.version);
		roomPtr->setOwner(retRoom.roomInfo.creater);
		
		//这里可能会有一个优化策略

		MemberGidMap memberMap;
		try{	
			memberMap = getRoomMemberDetail(invitorId, memberIdVec);
		}catch(exception& e){
			LOG_ERROR("RoomServiceProxy::addRoomMember ==> proxy->getMemberDetail exception = " << e.what());	
		}
		roomPtr->setMemberDetail(memberMap);
		
		return true;
	}

	bool RoomServiceProxy::removeRoomMember(Gid_t kickerId, long roomId, vector<Gid_t> removeMembers, vector<Gid_t>& realRemoveMembers, boost::shared_ptr<MucRoom>& roomPtr){
		LOG_DEBUG("RoomServiceProxy::removeRoomMember ==> kickerId = " << kickerId << "  roomId = " << roomId);
		ReadLock lock(mutex_);
		RoomServicePrx proxy = getProxy(kickerId);
		if (!proxy){
			LOG_ERROR("RoomServiceProxy::removeRoomMember ==> Room DB proxy get failure");
			return false;
		}
	
		RetRoom retRoom;

		try{
			retRoom = proxy->removeUserFromRoomNew(kickerId, roomId, removeMembers, realRemoveMembers);
		} catch (exception& e){
			LOG_ERROR("RoomServiceProxy::removeRoomMember ==> proxy->removeUserFromRoom exception = " << e.what());	
		}
		
		roomPtr->setStatusCode(int(retRoom.status));
		if (!roomPtr->roomOK()){
			return false;
		}
		
		LOG_DEBUG("RoomServiceProxy::removeRoomMember ==> the realRemoveMembers size = " << realRemoveMembers.size());
		vector<Gid_t> memberIdVec = retRoom.roomInfo.memberGids;
		LOG_DEBUG("RoomServiceProxy::removeRoomMember ==> the room members size(after kick) = " << memberIdVec.size());
		roomPtr->setMemberList(memberIdVec);
			
		roomPtr->setRoomId(retRoom.roomInfo.id);
		roomPtr->setSubject(retRoom.roomInfo.name);
		roomPtr->setVersion(retRoom.roomInfo.version);
		roomPtr->setOwner(retRoom.roomInfo.creater);
		
		MemberGidMap memberMap;
		try{
			// for hint , include the remove members information in memberMap_
			memberIdVec.insert(memberIdVec.end(), realRemoveMembers.begin(), realRemoveMembers.end());
			memberMap = getRoomMemberDetail(kickerId, memberIdVec);
		}catch(exception& e){
			LOG_ERROR("RoomServiceProxy::remveRoomMember ==> proxy->getMemberDetail exception = " << e.what());		
		}
		roomPtr->setMemberDetail(memberMap);
		return true;
	}

	bool RoomServiceProxy::changeSubject(Gid_t invokeId, long roomId, string& subject, boost::shared_ptr<MucRoom>& roomPtr){
		LOG_DEBUG("RoomServiceProxy::changeSubject ==> invokeId = " << invokeId << "  roomId = " << roomId << "subjectStr = " << subject);
	    ReadLock lock(mutex_);
		RoomServicePrx proxy = getProxy(invokeId);
		if (!proxy){
			LOG_ERROR("RoomServiceProxy::changeSubject ==> Room DB proxy get failure");
			return false;
		}

		RetRoom retRoom;

		try{
			retRoom = proxy->changeRoomSubjectNew(invokeId, roomId, subject);
		} catch (exception& e){
			LOG_ERROR("RoomServiceProxy::changeSubject ==> proxy->getRoom exception = " << e.what());		
		}
	
		roomPtr->setStatusCode(int(retRoom.status));
		if (!roomPtr->roomOK()){
			return false;
		}
		
		vector<Gid_t> memberIdVec = retRoom.roomInfo.memberGids;
		LOG_DEBUG("RoomServiceProxy::changeSubject ==> fromDB memberGids size = " << memberIdVec.size());
		roomPtr->setMemberList(memberIdVec);
			
		roomPtr->setRoomId(retRoom.roomInfo.id);
		roomPtr->setSubject(retRoom.roomInfo.name);
		roomPtr->setVersion(retRoom.roomInfo.version);
		roomPtr->setOwner(retRoom.roomInfo.creater);
		
		MemberGidMap memberMap;
		try{
			memberMap = getRoomMemberDetail(invokeId, memberIdVec);
		}catch(exception& e){
			LOG_ERROR("RoomServiceProxy::getRoom ==> proxy->getMemberDetail exception = " << e.what());		
		}
		roomPtr->setMemberDetail(memberMap);

		return true;
	}

	bool RoomServiceProxy::leaveRoom(Gid_t leaveId, long roomId, boost::shared_ptr<MucRoom>& roomPtr){
		LOG_DEBUG("RoomServiceProxy::leaveRoom ==> leaveId = " << leaveId << "  roomId = " << roomId);
		ReadLock lock(mutex_);
		RoomServicePrx proxy = getProxy(leaveId);
		if (!proxy){
			LOG_ERROR("RoomServiceProxy::leaveRoom ==> Room DB proxy get failure");
			return false;
		}	
	
		RetRoom retRoom;

		try{
			retRoom = proxy->exitRoomNew(leaveId, roomId);
		} catch (exception& e){
			LOG_ERROR("RoomServiceProxy::leaveRoom ==> exception = " << e.what());	
			//用不用return false?
		}
		
		roomPtr->setStatusCode(int(retRoom.status));
		if (!roomPtr->roomOK()){
			return false;
		}
		
		roomPtr->setRoomId(retRoom.roomInfo.id);
		vector<Gid_t> memberIdVec = retRoom.roomInfo.memberGids;
		roomPtr->setMemberList(memberIdVec);
		roomPtr->setOwner(retRoom.roomInfo.creater);
		roomPtr->setSubject(retRoom.roomInfo.name);
		roomPtr->setVersion(retRoom.roomInfo.version);
		
		MemberGidMap memberMap;
		try{
			memberIdVec.push_back(leaveId); // for hint, need detail of leaveId
			memberMap = getRoomMemberDetail(leaveId, memberIdVec);
		}catch(exception& e){
			LOG_DEBUG("RoomServiceProxy::getRoom ==> proxy->getMemberDetail exception = " << e.what());		
		}
		roomPtr->setMemberDetail(memberMap);
		return true;
	}

	bool RoomServiceProxy::saveRoomToContact(Gid_t userId, long roomId, int& error){
		LOG_DEBUG("RoomServiceProxy::saveRoomToContact ==> userId = " << userId << " roomId = " << roomId);
		ReadLock lock(mutex_);
		RoomServicePrx proxy = getProxy(userId);
		if (!proxy){
			LOG_ERROR("RoomServiceProxy::leaveRoom ==> Room DB proxy get failure");
			error = 22;
			return false;
		}
		using namespace com::xiaonei::wap::mtalk::muc;
		//com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus error;
		RoomOperateErrorStatus errorStatus;
		try{
			errorStatus = proxy->saveRoomToContactNew(userId, roomId);
			error = errorStatus;
		} catch (exception& e){
			LOG_ERROR("RoomServiceProxy::saveRoomToContact ==> exception = " << e.what());
			//这里好像有些不严谨,是否应 return false
		}
		if (errorStatus == Success){
			LOG_DEBUG("RoomServiceProxy::saveRoomToContact ==> save success");
			return true;
		}
		LOG_DEBUG("RoomServiceProxy::saveRoomToContact ==> save error errorStatus = " << errorStatus);
		return false;
	}

	bool RoomServiceProxy::deleteRoomFromContact(Gid_t userId, long roomId, int& error){
		LOG_DEBUG("RoomServiceProxy::deleteRoomFromContact ==> userId = " << userId << " roomId = " << roomId);
		ReadLock lock(mutex_);
		RoomServicePrx proxy = getProxy(userId);
		if (!proxy){
			LOG_ERROR("RoomServiceProxy::leaveRoom ==> Room DB proxy get failure");
			error = 22;
			return false;
		}
		using namespace com::xiaonei::wap::mtalk::muc;
		//com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus error;
		RoomOperateErrorStatus errorStatus;
		try{
			errorStatus = proxy->deleteRoomFromContactNew(userId, roomId);
			error = errorStatus;
		} catch (exception& e){
			LOG_ERROR("RoomServiceProxy::deleteRoomFromContact ==> exception = " << e.what());	
		}
		if (errorStatus == Success){
			LOG_DEBUG("RoomServiceProxy::deleteRoomFromContact ==> delete success");
			return true;
		}
		LOG_DEBUG("RoomServiceProxy::deleteRoomFromContact ==> delete error errorStatus = " << errorStatus);
		return false;
	}

	bool RoomServiceProxy::getUserRooms(Gid_t userId, vector<RoomPtr>& roomPtrVec){
		LOG_DEBUG("RoomServiceProxy::getUserRooms ==> userId = " << userId);
		ReadLock lock(mutex_);
		RoomServicePrx proxy = getProxy(userId);
		if (!proxy){
			LOG_ERROR("RoomServiceProxy::leaveRoom ==> Room DB proxy get failure");
			return false;
		}
		RetRoomList retRoomList;
		try{
			retRoomList = proxy->getSavedUserRoomListNew(userId, true);
		}catch (exception& e){
			LOG_ERROR("RoomServiceProxy::getUserRooms ==> exception = " << e.what());
			return false;
		}
		RoomOperateErrorStatus errorStatus = retRoomList.status;
		RoomList roomList = retRoomList.roomListInfo;
		if(errorStatus == Success){
			for(vector<Room>::iterator it = roomList.begin(); it != roomList.end(); it++){
				RoomPtr roomPtr(new MucRoom());
				roomPtr->setRoomId(it->id);
				vector<Gid_t> memberIdVec = it->memberGids;
				roomPtr->setMemberList(memberIdVec);
				roomPtr->setOwner(it->creater);
				roomPtr->setSubject(it->name);
				roomPtr->setVersion(it->version);
				
				// member detail
				MemberGidMap memberMap;
				try{
					memberMap = getRoomMemberDetail(userId, memberIdVec);
				}catch(exception& e){
					LOG_DEBUG("RoomServiceProxy::getRoom ==> proxy->getMemberDetail exception = " << e.what());		
				}
				roomPtr->setMemberDetail(memberMap);
				roomPtrVec.push_back(roomPtr);
				LOG_DEBUG("RoomServiceProxy::getUserRooms ==> roomId == " << roomPtr->getId() << "  ownerId == " << roomPtr->getOwner());
			}
			LOG_DEBUG("RoomServiceProxy::getUserRooms ==> roomPtrVec.size() == " << roomPtrVec.size());
		}
		return true;
	}

	void RoomServiceProxy::loadUser(Gid_t userId, boost::shared_ptr<MucUser>& userPtr){

	}

	// 群聊五接口相关代理
	RetRoom RoomServiceProxy::exitRoom(Gid_t userId, long roomId){
		ReadLock lock(mutex_);
		RoomServicePrx proxy = getProxy(userId);
		RetRoom ret;
		if(!proxy){
			ret.status = Unknown;
			return ret;
		}
		
		LOG_DEBUG("RoomServiceProxy::exitRoom => exitor = " << userId << " roomId=" << roomId);

		try{

			ret = proxy->exitRoomNew(userId, roomId);

		}catch(std::exception& e){
			std::cout<<"RoomServiceProxy exitRoom catch exception = "<<e.what()<<std::endl;
			ret.status = Unknown;
		}catch(...){
			std::cout<<"RoomServiceProxy exitRoom catch unknown excepion"<<std::endl;
			ret.status = Unknown;
		}

		return ret;
	}


	RetRoom RoomServiceProxy::getRoomH(Gid_t userId,long roomId){
  	    ReadLock lock(mutex_);
  	    RoomServicePrx proxy = getProxy(userId);
  	    RetRoom ret;
  	    if(!proxy){
  	        ret.status = Unknown;
  	        return ret;
  	    }
		LOG_DEBUG("RoomServiceProxy::getRoomH => userId = " << userId << " roomId=" << roomId);

  	    try{
            ret = proxy->getRoomNew(roomId);
 	    }catch(std::exception& e){
  	        std::cout<<"RoomServiceProxy getRoomH catch exception = "<<e.what()<<std::endl;
            ret.status = Unknown;
  	    }catch(...){
  	        std::cout<<"RoomServiceProxy getRoomH catch unknown excepion"<<std::endl;
  	    	ret.status = Unknown;
  	    }

  	    return ret;
    }


	MemberGidMap RoomServiceProxy::getMemberDetail(Gid_t invokerId, MemberGidList members){
	    ReadLock lock(mutex_);
	    RoomServicePrx proxy = getProxy(invokerId);
	    MemberGidMap ret;
	    if(!proxy){
	        return ret;
	    }

	    LOG_DEBUG("RoomServiceProxy::getMemberDetail => invokerId = " << invokerId);
		for(size_t i=0;i<members.size();i++){
			LOG_DEBUG("Member Number " << i << ":"  << members[i]);
		}

	    try{
	    	ret = getRoomMemberDetail(invokerId, members);
	    }catch(std::exception& e){
	        std::cout<<"RoomServiceProxy getMemberDetail catch exception = "<<e.what()<<std::endl;
	    	return MemberGidMap();
	    }catch(...){
	        std::cout<<"RoomServiceProxy getMemberDetail catch unknown excepion"<<std::endl;
	    	return MemberGidMap();
	    }

	    return ret;
	}

	RoomOperateErrorStatus RoomServiceProxy::saveRoomToContact(Gid_t userId, long roomId){
	    ReadLock lock(mutex_);
	    RoomServicePrx proxy = getProxy(userId);
		
		RoomOperateErrorStatus status;

	    if(!proxy){
	        return Unknown;
	    }

	    LOG_DEBUG("RoomServiceProxy::saveRoomToContact userId= " << userId << " roomId=" << roomId );

	    try{
	    	status = proxy->saveRoomToContactNew(userId, roomId);
	    }catch(std::exception& e){
	        std::cout<<"RoomServiceProxy saveRoomToContact catch exception = "<<e.what()<<std::endl;
	        return Unknown;
	    }catch(...){
	        std::cout<<"RoomServiceProxy saveRoomToContact catch unknown excepion"<<std::endl;
	        return Unknown;
	    }

	    return status;
	}

	RoomOperateErrorStatus RoomServiceProxy::deleteRoomFromContact(Gid_t userId, long roomId){
	    ReadLock lock(mutex_);
	    RoomServicePrx proxy = getProxy(userId);
		
		RoomOperateErrorStatus status;

	    if(!proxy){
	        return Unknown;
	    }

	    LOG_DEBUG("RoomServiceProxy::deleteRoomFromContact userId= " << userId << " roomId=" << roomId );

	    try{
			// 调用db的代理接口
	    	status = proxy->deleteRoomFromContactNew(userId, roomId);
	    }catch(std::exception& e){
	        std::cout<<"RoomServiceProxy deleteRoomFromContact catch exception = "<<e.what()<<std::endl;
	        return Unknown;
	    }catch(...){
	        std::cout<<"RoomServiceProxy deleteRoomFromContact catch unknown excepion"<<std::endl;
	        return Unknown;
	    }

	    return status;
	}

	RetRoomList RoomServiceProxy::getSavedUserRoomList(Gid_t userId, bool withMembers){
	    ReadLock lock(mutex_);
	    RoomServicePrx proxy = getProxy(userId);
	    RetRoomList ret;
	    if(!proxy){
			ret.status = Unknown;
	        return ret;
	    }

	    LOG_DEBUG("RoomServiceProxy::getSavedUserRoomList=> userId = " << userId << " withMembers="  << withMembers);

	    try{
	    	ret = proxy->getSavedUserRoomListNew(userId, withMembers);
	    }catch(std::exception& e){
	        std::cout<<"RoomServiceProxy getSavedUserRoomList catch exception = "<<e.what()<<std::endl;
			ret.status = Unknown;
	        return ret;
	    }catch(...){
	        std::cout<<"RoomServiceProxy getSavedUserRoomList catch unknown excepion"<<std::endl;
			ret.status = Unknown;
	        return ret;
	    }

	    return ret;
	}

    
    MemberGidMap RoomServiceProxy::getRoomMemberDetail(Gid_t callId, vector<Gid_t>& memberIdVec){
	LOG_DEBUG("RoomServiceProxy::getRoomMemberDetail ==> callId = " << callId);
	
	ReadLock lock(mutex_);
	RoomServicePrx proxy = getProxy(callId);
	   
	MemberGidMap memberMap;
	MemberGidMap smallMemberMap;
	int n = 0;
	vector<Gid_t> smallVec;
	for(vector<Gid_t>::iterator it = memberIdVec.begin(); it != memberIdVec.end(); it++){
	    smallVec.push_back(*it); 
	    if(++n % 5 == 0){
		smallMemberMap = proxy->getMemberDetailNew(callId, smallVec);
		memberMap.insert(smallMemberMap.begin(), smallMemberMap.end());
		smallVec.clear();
		continue;
	    }
	}
	if(n % 5 != 0){
	    smallMemberMap = proxy->getMemberDetailNew(callId, smallVec);
	    memberMap.insert(smallMemberMap.begin(), smallMemberMap.end());
	}
	return memberMap;
    }

};
};
