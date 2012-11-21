/**
* @file MucServer.h
* @brief muc主server, 单例使用
* @author wang.yu@renren-inc.com  chenxi.hou@renren-inc.com
* @version 1.0
* @date 2012-05-14
*/
#ifndef TALK_MUC_MULTICHATSERVICE_H_
#define TALK_MUC_MULTICHATSERVICE_H_

#include <string>
#include <map>
#include <boost/shared_ptr.hpp>
#include <boost/thread.hpp>

#include "utils/MyLock.h"
#include "zk/ZKListener.h"
#include "zk/ZKManager.h"

#include "types.h"
#include "JID.h"
#include "Packet.h"
#include "MucRoom.h"
#include "MucUser.h"
#include "RoomServiceProxy.h"

#include "MucErrorMessage.h"

namespace mtalk{
namespace muc{
	class MucRoom;	
	class MucUser;

	typedef boost::shared_ptr<MucRoom> RoomPtr;
	typedef boost::shared_ptr<MucUser> MucUserPtr;
	const int USER_POOL_SIZE = 100;
	typedef std::map<Gid_t, MucUserPtr> SubPool;
	typedef std::string CLIENTID;

	class MucServer{
	public :
		MucServer ();

		void start();

		void stop(); 

		void init(int serverId, int serverPort, std::string& zkServers);

		void processStanza(std::string stanzaStr);
		
		void processPacket (Packet& packet);
		
		RoomPtr getChatRoom(Gid_t invokeId, long roomId);

		void createRoom(Gid_t ownerId, Packet& creatPacket);

		void addUser(MucUserPtr user); 

		void updateClusterInfo(int index, int count);

		// 五个群聊功能点接口
		
		void destroyRoom(Gid_t userId,long roomId,CLIENTID id,std::string sessionId);

		void queryRoom(Gid_t userId,long roomId,CLIENTID id,std::string sessionId);

		void uploadVersion(Gid_t userId,std::map<long,int> mapRoomTime,CLIENTID id,std::string sessionId, bool isSixin = false);

		void saveToContact(Gid_t userId,long roomId,CLIENTID id,std::string sessionId, bool isSixin = false);

		void getFromContact(Gid_t userId,bool withMembers,CLIENTID id,std::string sessionId, bool isSixin = false);

		// 五个功能点实现所需的工具函数
		
		bool isMember(Gid_t userId,std::vector<Gid_t>& members);


		// 群聊中直接回复应答报文的若干函数

		// 销毁房间
		void destroyRoomChecked(Gid_t userId,com::xiaonei::wap::mtalk::muc::Room room,CLIENTID id,std::string sessionId);
		void destroyRoomToOwner(long roomId,Gid_t userId,CLIENTID id,std::string sessionId);
		void destroyRoomToMembers(long roomId, Gid_t userId,com::xiaonei::wap::mtalk::muc::Room roomInfo,std::string sessionId);
		void destroyRoomFail(long roomId,Gid_t userId,com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus status,CLIENTID id,std::string sessionId);
		void destroyRoomInfo(com::xiaonei::wap::mtalk::muc::Room room);

		// 查询房间成员信息
		void queryRoomToInvoker(long roomId,Gid_t invokeId,CLIENTID id,com::xiaonei::wap::mtalk::muc::Room roominfo,com::xiaonei::wap::mtalk::muc::MemberMap memberMap,std::string sessionId);

		void queryRoomFail(long roomId,Gid_t userId,CLIENTID id,com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus status,std::string sessionId);

		// 上传时间戳
		void uploadVersionFail(Gid_t userId,CLIENTID id,com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus status,std::string sessionId, bool isSixin = false);
		void uploadVersionInfo(long roomId, Gid_t userId,com::xiaonei::wap::mtalk::muc::Room room,std::string sessionId, bool isSixin = false);

		// 保存房间到通讯录
		void saveToContactSuccess(Gid_t userId,long roomId,CLIENTID id,std::string sessionId, bool isSixin = false);
		void saveToContactFail(long roomId, Gid_t userId, CLIENTID id, com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus status, std::string sessionId, bool isSixin = false);

		// 从通讯录删除房间
		void deleteFromContact(Gid_t userId,long roomId,CLIENTID id,std::string sessionId, bool isSixin = false);
		void deleteFromContactSuccess(Gid_t userId,long roomId,CLIENTID id,std::string sessionId, bool isSixin = false);
		void deleteFromContactFail(long roomId, Gid_t userId, CLIENTID id, com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus status, std::string sessionId, bool isSixin = false);

		// 从通讯录取房间
		void getFromContactToInvoker(Gid_t userId, com::xiaonei::wap::mtalk::muc::RoomList roomListInfo, CLIENTID id, std::string sessionId, bool isSixin = false);
		void getFromContactFail(Gid_t userId, CLIENTID id, com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus status, std::string sessionId, bool isSixin = false);
		
	private :
		MucUserPtr getChatUser(JID from);

		int getPoolIndex(int from);

		SubPool userPools_[USER_POOL_SIZE];

		boost::shared_mutex mus_[USER_POOL_SIZE];

		int serverId_;

		int serverPort_;

		boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr_;

		std::map<Gid_t, MucUserPtr> users_;

		std::map<long, RoomPtr> rooms_;

	};

	inline int MucServer::getPoolIndex(int from){
		return (from % USER_POOL_SIZE);
	}

	class MucServerZKListener : public mtalk::zk::ZKListener{
	public :
		MucServerZKListener(){}

		MucServerZKListener(const std::string& path, const int serverId, const short serverPort);
		
		virtual void zkHandle(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr, const std::string& path, const mtalk::zk::ZKEventType event);

		std::string getNodePath() const;

	private :
		virtual void updateConfig(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr);
		void registeServer(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr);

		std::string path_;
		int serverId_;
		short serverPort_;
		std::string nodePath_;
		std::string nodeName_;
		std::string nodeAddress_;
	};

	inline std::string MucServerZKListener::getNodePath() const {
		return nodePath_;
	}

}; // namespace muc
}; // namespace mtalk

#endif // TALK_MUC_MULTICHATSERVICE_H_
