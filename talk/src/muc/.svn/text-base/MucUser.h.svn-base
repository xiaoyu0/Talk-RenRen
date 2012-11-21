/**
* @file MucUser.h
* @brief 抽象Muc中的一个user 
* @author wang.yu@renren-inc.com
* @version 1.0
* @date 2012-05-14
*/
#ifndef TALK_MUC_MucUSER_H_
#define TALK_MUC_MucUSER_H_

#include <map>
#include <set>
#include <string>
#include <boost/shared_ptr.hpp> 

#include "utils/MyLock.h"
#include "types.h"
#include "MucServer.h"
#include "Packet.h"
#include "JID.h"
#include "MucRoom.h"
#include "StanzaStringFactory.h"
#include "MucHint.h"

namespace mtalk{
namespace muc{
	class MucRoom;
	class StanzaStringFactory;
	class MucHint;

	class MucUser{
	public :
		MucUser(Gid_t userId);
		
		MucUser(JID user);

		void addRole(long roomId);
		void removeRole(long roomId);
	
		void process(Packet& packet);
		void processMessage(Packet& message);
		void processPresence(Packet& presence);
		void processIQ(Packet& IQ);

		JID getAddress();
		
		Gid_t getId();

		boost::shared_ptr<MucRoom> getRoom(long roomId);
		
		boost::shared_ptr<MucRoom> getRoomDetail(long roomId);
		
	private :
		//创建房间
		void createRoom(Packet& packet);
		
		//销毁房间
		void destroyRoom(long roomId, std::string& id, std::string& sessionId);

		//更新用户的所有rooms
		void updateRooms(std::map<long, int>& roomVersions, std::string& id, std::string& sessionId);
		
		//保存至通讯录
		void saveRoomToContact(long roomId, std::string& id, std::string& sessionId);
		
		//从通迅录中删除
		void deleteRoomFromContact(long roomId, std::string& id, std::string& sessionId);
		
		//从通讯录获取所有的群信息
		void getRoomsFromContact(std::string& id, std::string& sessionId);
		
		//查询群信息
		void queryRoom(long roomId, std::string& id, std::string& sessionId);

	private :
		
		bool hexieCheck(Gid_t senderId, long roomId, std::string& id, std::string& str);


		Gid_t userId_;
		
		//是不是独立账户体系的
		bool isNewSixin_;

		JID realJID_;

		std::string jidDomain_;
		
		std::set<long> roomsIn_;

		boost::shared_mutex mutex_;
		
		//因为每个包过来设置的状态变得不一样了，所以把这两个处理类给每个user一份
		boost::shared_ptr<StanzaStringFactory> stanzaStringFactoryPtr_;

		boost::shared_ptr<MucHint> mucHintPtr_;
	};

	inline Gid_t MucUser::getId(){
		return userId_;
	}

	inline JID MucUser::getAddress(){
		return realJID_;
	}
};
};

#endif // TALK_MUC_MUCUSER_H_
