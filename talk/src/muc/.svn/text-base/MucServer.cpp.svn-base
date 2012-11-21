#include <utility>
#include <vector>
#include <iostream>
#include <boost/lexical_cast.hpp>

#include "MucServer.h"
#include "StanzaStringFactory.h"
#include "RoomServiceProxy.h"
#include "proxy/MucServiceProxy.h"

#include "proxy/ProxyRegister.h"
#include "proxy/TalkServiceProxy.h"
#include "proxy/SixinUserInfoProxy.h"
#include "proxy/HistoryServiceProxy.h"

#include "utils/Singleton.h"
#include "utils/MyLogger.h"
#include "utils/IpAddr.hpp"
#include "pugixml/pugixml.hpp"
#include "Config.h"

#include "user_name_client.h"

using namespace std;
using namespace mtalk::proxy;
using namespace mtalk::utils;
using namespace mtalk::zk;
using namespace mtalk::constant;
using namespace pugi;
using namespace com::xiaonei::wap::mtalk::muc;
using namespace xce::client;

#define PREFIX "http://m.renren.com/s/"

namespace mtalk{
namespace muc{
	
	MucServer::MucServer():
		zkManagerPtr_(new ZKManager()){
	
	}
	
	void MucServer::start(){
		LOG_INFO("MucServer::start  ==> started");
	}

	void MucServer::stop(){
		LOG_INFO("MucServer::stop ==> stoped");
	}

	void MucServer::init(int serverId, int serverPort, string& zkServers){

		serverId_ = serverId;
		serverPort_ = serverPort;
		
		zkManagerPtr_->init(zkServers);
		
		//注册proxy	,talkServiceProxy
		boost::shared_ptr<TalkServiceProxy> talkServiceProxyPtr(new TalkServiceProxy());	
		MY_INSTANCE(ProxyRegister).registerProxy("TalkProxy", talkServiceProxyPtr);
		zkManagerPtr_->addListener(talkServiceProxyPtr->getZKPath(), talkServiceProxyPtr);
		LOG_INFO("MucServer::init ==> init talkServiceProxy");
		
		//RoomServicrProxy
		boost::shared_ptr<RoomServiceProxy> roomServiceProxyPtr(new RoomServiceProxy());	
		MY_INSTANCE(ProxyRegister).registerProxy("roomProxy", roomServiceProxyPtr);
		zkManagerPtr_->addListener(roomServiceProxyPtr->getZKPath(), roomServiceProxyPtr);
		LOG_INFO("MucServer::init ==> init roomServiceProxy");

		//UserSixinInfoProxy
		boost::shared_ptr<SixinUserInfoProxy> sixinUserInfoProxyPtr(new SixinUserInfoProxy());
		MY_INSTANCE(ProxyRegister).registerProxy("sixinUserProxy", sixinUserInfoProxyPtr);
		zkManagerPtr_->addListener(sixinUserInfoProxyPtr->getZKPath(), sixinUserInfoProxyPtr);
		LOG_INFO("MucServer::init ==> init UserSixinInfoProxy");
		
		//cloud store service
		boost::shared_ptr<HistoryServiceProxy> historyServiceProxyPtr(new HistoryServiceProxy());
		MY_INSTANCE(ProxyRegister).registerProxy("historyProxy", historyServiceProxyPtr);
		zkManagerPtr_->addListener(historyServiceProxyPtr->getZKPath(), historyServiceProxyPtr);
		LOG_INFO("MucServer::init ==> init HistoryServiceProxy");
		
		boost::shared_ptr<MucServerZKListener> mucServerZKListener(new MucServerZKListener(ZK_MUC_PATH, serverId_, serverPort_));
	
		zkManagerPtr_->addListener(ZK_MUC_PATH, mucServerZKListener);
		zkManagerPtr_->addListener(mucServerZKListener->getNodePath(), mucServerZKListener);
	}
	
	void MucServer::processStanza(string stanzaStr){
		//做一些 协议检查...
		Packet packet(stanzaStr);
		processPacket(packet);
	}

	void MucServer::processPacket(Packet& packet){
		//cout << "MucServer::processPacket" << endl;
		string str = packet.toString();
		LOG_DEBUG("MucServer::processPacket ==> packet str = " << str);
		getChatUser(packet.getFrom())->process(packet);	
	}

	MucUserPtr MucServer::getChatUser(JID from){
		/*int fromId = from.getNodeId();
		int index = getPoolIndex(fromId);
		
		//读用读锁
		WriteLock writeLock(mus_[index]);
		//ReadLock readLock(mus_[index]);	
		SubPool& subPool = userPools_[index];

		map<int, MucUserPtr>::iterator it = subPool.find(fromId);
		if (it != subPool.end()){
			return it->second;
		}
	//	readLock.unlock();
		
		//写用写锁
		MucUserPtr mucUserPtr(new MucUser(from));
		// load user info from DB
	//	MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->loadUser(from, mucUserPtr);	
		subPool.insert(pair<int, MucUserPtr>(fromId, mucUserPtr));
		return mucUserPtr;*/
		
		//完全的无状态
		MucUserPtr mucUserPtr(new MucUser(from));
		return mucUserPtr;
	}

	RoomPtr MucServer::getChatRoom(Gid_t invokeId, long roomId){
		
		// 也就是这里可以有个缓冲	
		/*map<long, RoomPtr>::iterator it = rooms_.find(roomId);
		if (it != rooms_.end()){
			return (it->second);	
		}*/

		RoomPtr newRoomPtr(new MucRoom(roomId));
		MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->getRoom(invokeId, roomId, newRoomPtr);
		//rooms_.insert(pair<long, RoomPtr>(roomId, newRoomPtr));
		return newRoomPtr;
	}

	void MucServer::createRoom(Gid_t ownerId, Packet& createPacket){
		LOG_DEBUG("MucServer::createRoom ==> ownerId = " << ownerId);
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
			string stanzaStr = MY_INSTANCE(StanzaStringFactory).roomCreatederror(MucErrorType::RoomCreationNoInvitee, ownerId, id);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(ownerId, sessionId, stanzaStr, false);
			return ;
		}
		for ( ; !invite.empty(); invite = invite.next_sibling("invite")){
			Gid_t inviteeId = invite.attribute("to").as_int();
			if (inviteeId == ownerId){
				//invite self
				continue;
			}
			initialMembers.push_back(inviteeId);
		}

		RoomPtr roomPtr(new MucRoom());
		MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->createRoom(ownerId, initialMembers, roomPtr);
		
		// room creation failure
		if (!roomPtr->roomOK()){
			string stanzaStr = MY_INSTANCE(StanzaStringFactory).roomCreatederror(roomPtr->getStatusCode(), ownerId, id);
			LOG_DEBUG("MucServer::createRoom ==> roomCreatederror stanza to talk ,  stanzaStr = " << stanzaStr);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(ownerId, sessionId, stanzaStr, false);
			return ;
		}
		
		int version = roomPtr->getVersion();
			
		//add owner
		initialMembers.push_back(ownerId);
		vector<Member> initialMemberDetail = roomPtr->getMemberDetail(initialMembers);
		Member creatorDetail = roomPtr->getMemberDetail(ownerId);
		
		// send notice to user that don't support muc, on behalf of room creator
		vector<Gid_t> inviteesToNotice;
		MY_INSTANCE(StanzaStringFactory).getInviteesToNotice(initialMembers, inviteesToNotice);
		for (vector<Gid_t>::iterator it = inviteesToNotice.begin(); it != inviteesToNotice.end(); it++){
			if (*it == ownerId){
				continue;
			}
			string stanzaStr = MY_INSTANCE(StanzaStringFactory).roomCreated2InviteeNotSupportMuc(*it, creatorDetail, initialMemberDetail);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->push(ownerId, *it, stanzaStr, MessageType::CHAT); //单聊
		}

		// inform room creator
		long roomId = roomPtr->getId();
		string roomSubject = roomPtr->getSubject();
		string stanzaStr = MY_INSTANCE(StanzaStringFactory).roomCreated2Creator(ownerId, roomId, version, id, roomSubject);
		LOG_DEBUG("MucServer::createRoom ==> roomCreated2creator stanza to talk ,  stanzaStr = " << stanzaStr);
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(ownerId, sessionId, stanzaStr, false);
		stanzaStr = MY_INSTANCE(StanzaStringFactory).roomCreated2CreatorHint(version, ownerId, roomId, initialMemberDetail);
		LOG_DEBUG("MucServer::createRoom ==> roomCreated2creator Hint !! stanza to talk ,  stanzaStr = " << stanzaStr);
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(ownerId, sessionId, stanzaStr, true);

		// inform initial members
		vector<Gid_t>::iterator it = initialMembers.begin();
		for ( ; it != initialMembers.end(); it++){
			if (*it == ownerId){
				//不要向群主广播了
				continue;
			}
			string roomName = roomPtr->getSubject();
			string stanzaStr = MY_INSTANCE(StanzaStringFactory).roomCreated2Invitee(*it, ownerId, roomPtr->getId(), version, roomName, initialMemberDetail);
			LOG_DEBUG("MucServer::createRoom ==> roomCreated2invitee  stanza to talk ,  stanzaStr = " << stanzaStr);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomPtr->getId(), *it, stanzaStr, false);
		
			// hint to existing
			stanzaStr = MY_INSTANCE(StanzaStringFactory).roomCreated2InviteeHint(version, *it, roomPtr->getId(), creatorDetail, initialMemberDetail);
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomPtr->getId(), *it, stanzaStr, true);
		}
	}

	void MucServer::addUser(MucUserPtr userPtr){
		users_.insert(pair<Gid_t, MucUserPtr>(userPtr->getId(), userPtr));	
	}

	void MucServer::updateClusterInfo(int index, int count){
		LOG_INFO("MucServer::updateClusterInfo ==> clear user map");
		for (int i=0 ; i < USER_POOL_SIZE ; i++){
			WriteLock writeLock(mus_[i]);
			userPools_[i].clear();
		}
	}

	/*void MucServer::destroyRoom(Gid_t userId,long roomId,CLIENTID id,string sessionId){
		// 需要鉴权
		// 调用getRoomH接口，查看房间的成员构成信息

		RetRoom retroom = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->getRoomH(userId,roomId);

	    LOG_DEBUG("MucServer::destroyRoom getRoomH( userId = " << userId << " roomId="  << roomId << ") status=" << retroom.status);

		switch(retroom.status){
			case Success:
				// 查看发起者是否房主，鉴权
				if( userId == retroom.roomInfo.creater ){
					// 房间存在且发起人为房主，可以正常销毁房间 

					destroyRoomChecked(userId, retroom.roomInfo, id, sessionId);
				}
				else{
					// 返回无权限错误 
					//destroyRoomFail(roomId, userId , NoPermission, id ,sessionId);	
				}
				
				break;
			default:
				// 房间不存在，返回100错误
				//destroyRoomFail(roomId, userId, retroom.status, id, sessionId);
				break;
		}
	}

	void MucServer::destroyRoomChecked(Gid_t userId,Room room,CLIENTID id,string sessionId){
		 // userId 已经经过鉴权，是房主，且roomId索引的房间已经存在
         // 调用exitRoom接口
		long roomId = room.id;

         RetRoom retroom = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->exitRoom(userId,roomId);

	     LOG_DEBUG("MucServer::destroyRoom exitRoom( userId = " << userId << " roomId="  << roomId << ") status=" << retroom.status);

         switch(retroom.status){
             case Destory:
                 // 通知房主操作成功
                 destroyRoomToOwner(roomId,userId,id,sessionId);
                 // 通知各个普通成员(非房主)房间已销毁
                 //destroyRoomToMembers(roomId,userId,retroom.roomInfo,sessionId);
				 // 弱提示房主以外的成员
				 //destroyRoomInfo(room);
                 break;
             default:
                 // 实际使用了 RoomNotExist 和 NotInRoom 两种返回值
                 // 如果操作未完成，通知房主操作失败
                 //destroyRoomFail(roomId,userId,retroom.status,id,sessionId);
                 break;
          }
     }

	void MucServer::destroyRoomToOwner(long roomId,Gid_t userId,CLIENTID id,string sessionId){
		// iq 报文通知房主房间已销毁
		ostringstream os;
		os << "<iq"  
		   << " from='" << roomId << "@muc.m.renren.com'"
		   << " to='" << userId << "@talk.m.renren.com'"
		   << " id='" << id <<"'"
		   << " type='result'/>";

	    LOG_DEBUG("MucServer::destroyRoomToOwner mucReturn( roomId=" << roomId << " userId = " << userId << " sessionId="  << sessionId << " isSave=" << false << ")");

		// iq 报文只发给发起的session
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn( userId, sessionId, os.str(), false);
	}

	void MucServer::destroyRoomToMembers(long roomId,Gid_t userId,Room room,string sessionId){
		// 向非房主的普通成员发送 presence 报文通知群的销毁
		// 提取memberIds和version
		vector<Gid_t>& memberIds = room.memberIds;
		int version = room.version;

		// 遍历普通成员
		for(unsigned int i=0;i<memberIds.size();i++){
			// 排除房主
			if(memberIds[i] == userId){
				continue;
			}

			// 生成 presence 报文
			ostringstream os;
			os << "<presence"
			   << " from='"<< roomId << "@muc.m.renren.com/" << memberIds[i] <<"'"
			   << " to='" << memberIds[i] << "@talk.m.renren.com'"
			   << " type='unavailable'>"
			   <<   "<x xmlns='http://jabber.org/protocol/muc#user' version='" << version << "'>"
			   <<     "<item affiliation='none'/>"
			   <<     "<destroy/>"
			   <<   "</x>"
			   << "</presence>";

	     	LOG_DEBUG("MucServer::destroyRoomToMembers distribute( roomId=" << roomId << " toId =" << memberIds[i] << " isSave=" << false <<")");

			// 给每个成员的所有会话发送群解散的 presence 报文
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId, memberIds[i], os.str(), false);
		}
	} 

	void MucServer::destroyRoomInfo(com::xiaonei::wap::mtalk::muc::Room room){
		long roomId = room.id;
		int  version= room.version;

		for(MemberIdList::iterator it = room.memberIds.begin(); it != room.memberIds.end(); it++){
			//	跳过房主，不通知房主
			if (*it == room.creater) continue;
			
			//	通知的目标用户
			Gid_t userId = *it;

			//	组成弱提示文本
			ostringstream os;
			os	<<	"<message"
				<<	" from='" << roomId << "@muc.m.renren.com'"
				<<	" to='" << userId << "@talk.m.renren.com'"
				<<	" type='info'>"
				<<		"<body type='text' version='" << version <<"'>"
				<<			"<text>抱歉，该群已被解散。</text>"
				<<		"</body>"
				<<	"</message>";

			// 打日志
			LOG_DEBUG("MucServer::destroyRoomInfo distribute( userId = " << userId << " roomId = " << roomId <<  " isSave=" << true << ")" );
			
			// 给talk
			MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->distribute(roomId, userId, os.str(), true);
		}
	}

	void MucServer::destroyRoomFail(long roomId,Gid_t userId,RoomOperateErrorStatus status,CLIENTID id,string sessionId){ 
		int code;
		switch (status){
			case RoomNotExist:
				code = 100;	// 解散的房间不存在
				break;
			case NoPermission:
				code = 600;	// 请求解散人非房主
				break;
			default:
				code = 404;	// 未知的网络错误
				break;
		}
		// iq 报文通知操作的失败
		ostringstream os; 
		os << "<iq"
		   << " from='" << roomId <<"@muc.m.renren.com'"
		   << " to='" << userId <<"@talk.m.renren.com'"
		   << " id='" << id <<"'"
		   << " type='error'>"
		   <<  "<error type='cancel' code='" << code << "' msg='" << getErrorMsg(code) <<"'/>"
		   << "</iq>";

	    LOG_DEBUG("MucServer::destroyRoomFail mucReturn( userId=" << userId << " sessionId =" <<  sessionId << " isSave=" << false <<")" << " status=" << status << " code=" << code);

		// iq 报文只发给发起操作的会话
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn( userId, sessionId,os.str(), false);
	}



	void MucServer::queryRoom(Gid_t userId,long roomId,CLIENTID id,string sessionId){
		// 调用getRoomH接口
	    LOG_DEBUG("MucServer::queryRoom getRoomH( userId = " << userId << " roomId="  << roomId << ") " );

		RetRoom retroom = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->getRoomH(userId,roomId);

	    LOG_DEBUG("MucServer::queryRoom getRoomH( userId = " << userId << " roomId="  << roomId << ") status=" << retroom.status);

		switch(retroom.status){
			case Success:
				// 查看发起者是不是房间的成员
				if( isMember(userId,retroom.roomInfo.memberIds) ){
					MemberMap memberMap = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->getMemberDetail(userId,retroom.roomInfo.memberIds);
					// 如果查询到各个成员的信息,返回给查询人
					if(!memberMap.empty()){
						queryRoomToInvoker(roomId,userId,id,retroom.roomInfo,memberMap,sessionId);
					}
					else{	
						// 查询成员信息失败
						queryRoomFail(roomId,userId,id,Unknown,sessionId);	
					}
				}
				else{
					// 查询人不是房间的成员，无权查询
					queryRoomFail(roomId,userId,id,NoPermission,sessionId);	
				}
				
				break;
			default:
				// 房间不存在
				// 实际只处理 RoomNotExist:
				queryRoomFail(roomId,userId,id,retroom.status,sessionId);
				break;
		}
		// 2.看调用是否成功
		// 3.若成功继续在成员列表中寻找userId
		// 4.若找到则再次调用getMemberDetail接口获得房间信息
		// 5.如果调用成功将房间信息通知给请求者即userId
		// 6.如果以上过程的查找或者调用不成功，分情况返回错误报文给请求者
	}

	void MucServer::queryRoomToInvoker(long roomId, Gid_t invokerId, CLIENTID id, Room room, MemberMap memberMap,std::string sessionId){
		// iq 报文返回房间的成员信息给查询人

		// 提取Room对象中的创建者、房间名和版本号信息
		int owner = room.creater;
		string subject = room.name;
		int version = room.version;

		ostringstream os;
		os << "<iq"
	   	   << " from='" << roomId <<"@muc.m.renren.com'"
	   	   << " to='" << invokerId <<"@talk.m.renren.com'"
	   	   << " id='" << id << "'"
	   	   << " type='result'>"
      	   <<  "<query xmlns='http://jabber.org/protocol/muc#user' prefix='" << PREFIX << "' version='" << version << "'>"
      	   <<    "<subject>" << subject << "</subject>";
		for(MemberMap::iterator i=memberMap.begin(); i != memberMap.end();i++){
			::com::xiaonei::wap::mtalk::muc::Member& member  = i -> second;
			os << "<item"
			   << " affiliation='" << ((member.id== owner)? "owner":"member")  << "'"
			   << " jid='" << member.id << "'"
			   << " isFriend='" << ((member.isFriend == true)?"true":"false") <<"'"
			   << " url='" << member.tinyUrl << "'"
			   << " headurl='" << member.headUrl << "'"
			   << " name='" << member.name << "'/>";
		}
      	os << "</query>"
		<< "</iq>";

	    LOG_DEBUG("MucServer::queryRoomToInvoker mucReturn( invokerId=" << invokerId << " roomId=" << roomId << " sessionId = " << sessionId << " isSave=" << false << ")");
		// iq 报文不进离线，且只发给查询房间信息的会话
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(invokerId,sessionId,os.str(),false);
	}


	void MucServer::queryRoomFail(long roomId,Gid_t userId,CLIENTID id,RoomOperateErrorStatus status,string sessionId){
		int code;
		switch (status){
			case RoomNotExist:
				code = 100; // 查询的房间不存在
				break;
			case NoPermission:
				code = 610; // 只有群成员才可以查询群信息
				break;
			default:
				code = 404;	// 未知的网络错误
				break;
		}
		// iq 报文通知操作的失败
		// iq错误报文 返回 查询失败
		ostringstream os;
		os << "<iq"
	   	   << " from='" << roomId << "@muc.m.renren.com'"
	   	   << " to='" << userId << "@talk.m.renren.com'"
	   	   << " id='" << id <<"'"
	   	   << " type='error'>"
	   	   <<  "<error type='cancel' code='" << code << "' msg='" << getErrorMsg(code) <<"'/>"
		   << "</iq>";

	    LOG_DEBUG("MucServer::queryRoomFail mucReturn( userId=" << userId << " roomId=" << roomId << " sessionId = " << sessionId << " isSave=" << false << ")" << " status=" << status << " code=" << code);

		// iq 错误报文不进离线，且只发给查询房间信息的会话
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId,sessionId,os.str(),false);
	}

	void MucServer::uploadVersion(Gid_t userId, map<long,int> mapRoomTime, CLIENTID id, std::string sessionId, bool isSixin){
		LOG_DEBUG("Entered uploadVersion===========================================");
		// presence 报文对上传版本号请求进行应答

		// 获得房间资料，组成 check 元素部分报文
		ostringstream checkContent;
		// 用以填充check子节点的两个属性：update 和 isMember
		string updateValue;
		string isMemberValue;

		// 遍历该用户各个房间的版本号信息，生成一系列check元素
		for(map<long,int>::iterator it = mapRoomTime.begin(); it != mapRoomTime.end() ; it++){
			long roomId = it->first;
			int version = it->second;
			// 取房间资料
			RetRoom retroom = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->getRoomH(userId,roomId);

			if(retroom.status == RoomNotExist){
				// 房间不存在的情况下，需要告诉给客户端，因此不能将这种情况作为错误进行处理，将isMember置为"noRoom"予以区分
				isMemberValue = "noRoom";
				// 房间不存在，客户端必须更新，删除房间
				updateValue = "true";

				// 房间不存在的时候下发弱提示，通知解散
				uploadVersionInfo(roomId, userId, retroom.roomInfo,sessionId);
			}
			else if(retroom.status == Success ){
				// 房间存在的情况下，正常取得房间，判断是否成员

				if(isMember(userId,retroom.roomInfo.memberIds)){
					// 还是成员的情况
					isMemberValue = "true";
					// 一切正常（既有房间，又是成员，比较版本号，确定是否需要更新）
					updateValue = retroom.roomInfo.version != version ? "true":"false";
					LOG_DEBUG("MucServer::uploadVersion uploaded_version = " << version << " server_version = " << retroom.roomInfo.version);
				}
				else{
					// 已经被踢，不再是成员的情况
					isMemberValue = "false";
					// 虽然房间存在，但是已经不再是成员，客户端必须更新，删除房间
					updateValue = "true";
				}
				
			}
			else{
				// 一旦房间资料取得不成功，结束整个过程
				uploadVersionFail(userId,id,retroom.status,sessionId);
				// 直接返回
				return;
			}

			// 比较上传的版本号和DB中的版本号，根据房间资料生成一个check元素
			checkContent << "<check"
			<< " from='" << roomId << "'"
			<< " update='" << updateValue << "'"
			<< " isMember='" <<  isMemberValue  << "'/>";
		}

		// 生成完整的presence报文，将上面生成的若干check报文组入
		ostringstream os;
		os  << "<presence"
			<< " from='muc.m.renren.com'"
			<< " to='" << userId << "@talk.m.renren.com'"
			<< " id='" << id << "'"
			<< " type='result'>"
			<< 	"<x xmlns='http://jabber.org/protocol/muc#user'>"
			<< 		checkContent.str()
			<< 	"</x>"
 			<< "</presence>";
	

	    LOG_DEBUG("MucServer::uploadVersion mucReturn( userId=" << userId << " sessionId = " << sessionId << " isSave=" << false << ")");

		// presence 报文不进离线，且只发给上传版本号的会话
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId,sessionId,os.str(),false);

	}

	void MucServer::uploadVersionInfo(long roomId, Gid_t userId, Room room,string sessionId, bool isSixin){
		int version = room.version;
		
		// 组成报文
		ostringstream os;
		os	<<	"<message"
			<<	" from='" << roomId << "@muc.m.renren.com'"
			<<	" to='" << userId << "@talk.m.renren.com'"
			<<	" type='info'>"
		  	<<		"<body type='text' version='" << version <<"'>"
		   	<<			"<text>抱歉，这个群被解散了~</text>"
		   	<<		"</body>"
		  	<<	"</message>";

		// 打日志
	    LOG_DEBUG("MucServer::uploadVersionInfo mucReturn( userId=" << userId << " roomId = " << roomId << " sessionId = " << sessionId << " isSave=" << true << ")" );

		// 给talk
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId,sessionId,os.str(),true);
	}

	void MucServer::uploadVersionFail(Gid_t userId,CLIENTID id,RoomOperateErrorStatus status,string sessionId, bool isSixin){
		// 上传版本号失败报文为 presence 类型
		// 只有db调用时才调用此函数，所以有code=404
		int code = 404;

		ostringstream os;
		os << "<presence"
	       << " from='muc.m.renren.com'"
	       << " to='" << userId << "@talk.m.renren.com'"
	       << " id='" << id << "'"
	       << " type='error'>"
	       <<  "<error type='cancel'  code='" << code << "' msg='" << getErrorMsg(code) << "'/>"
		   << "</presence>";
		
	    LOG_DEBUG("MucServer::uploadVersionFail mucReturn( userId=" << userId << " sessionId = " << sessionId << " isSave=" << false << ")" << " status=" << status << " code=" << code);
		// presence 错误报文不进离线，且只发给上传版本号的会话
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId,sessionId,os.str(),false);

	}

	void MucServer::saveToContact(Gid_t userId,long roomId,CLIENTID id,string sessionId, bool isSixin){
		// iq 报文保存通讯录
		// 调用db接口	
        RoomOperateErrorStatus status = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->saveRoomToContact(userId, roomId)    ;
        switch(status){
            case Success:
                saveToContactSuccess(userId,roomId,id,sessionId);
                break;
            default:
				saveToContactFail(roomId, userId, id, status, sessionId);
                break;
        }       

//		// 检查用户当前是否还是存入的roomId的成员
//		RetRoom retroom = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->getRoomH(userId, roomId);
//
//		// 成功取得房间信息
//		if (retroom.status == Success){
//			// 检查权限，看是否是该房间的成员
//			if(isMember(userId,retroom.roomInfo.memberIds)){
//				// 查看之前是否已经保存到通讯录了
//				RetRoomList retRoomList = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->getSavedUserRoomList(userId, false);
//				// 检查db调用的结果
//				if(retRoomList.status == Success){
//					RoomList roomList = retRoomList.roomListInfo;
//					for(int i=0;i< roomList.size();i++){
//						if(roomId == roomList[i].id){
//							// 通讯录获取的房间列表中找到此次要保存的房间号，出错返回
//							saveToContactFail(roomId, userId, id, AlreadyInRooom, sessionId);
//							return;
//						}
//					}
//					// 通过for循环检查，要保存的房间之前没有保存过
//
//					// 还是成员，允许保存群组信息到通讯录
//					RoomOperateErrorStatus status = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->saveRoomToContact(userId, roomId);
//
//					switch(status){
//						case Success:
//							//2.若调用成功，向请求者返回成功报文
//							saveToContactSuccess(userId, roomId, id, sessionId);
//							break;
//
//						default:
//							//3.若不成功，返回失败报文
//							saveToContactFail(roomId, userId, id, status, sessionId);
//							break;
//					}
//				}
//				else{
//					// db 操作失败
//					saveToContactFail(roomId, userId, id, Unknown, sessionId);
//				}
//
//			}
//			else{
//				// 已经被踢掉，返回“不在房间”错误
//				saveToContactFail(roomId, userId, id, NoPermission, sessionId);
//			}
//		}
//		// 未能取得房间信息
//		else{
//			saveToContactFail(roomId, userId, id, retroom.status, sessionId);
//		}
//
	}

	void MucServer::saveToContactSuccess(Gid_t userId,long roomId,CLIENTID id,std::string sessionId, bool isSixin){
		// iq 报文通报通讯录操作成功

		ostringstream os;
		os << "<iq"
		   << " from='" << roomId << "@muc.m.renren.com'"
		   << " to='" << userId << "@talk.m.renren.com'"
		   << " id='" << id << "'"
		   << " type='result'/>";

	    LOG_DEBUG("MucServer::saveToContactSuccess mucReturn( userId=" << userId << " sessionId = " << sessionId << " isSave=" << false << ")");
		// iq 报文不进离线，且只发给进行通讯录保存操作的会话
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId,sessionId,os.str(),false);

	}

	void MucServer::saveToContactFail(long roomId, Gid_t userId, CLIENTID id, RoomOperateErrorStatus status, std::string sessionId, bool isSixin){
		int code;
		switch (status){
			case RoomNotExist:
				code = 100;	// 保存的房间不存在
				break;
			case AlreadyInContact:
				code = 40;	// 房间此前已经得到了保存
				break;
			case NotInRoom:
				code = 620;	// 只有群成员才可以将群到保存到通讯录
				break;
			default:
				code = 404;	// 未知的网络错误
				break;
		}
	
		// iq 报文通知保存通讯录操作失败

		ostringstream os;
		os << "<iq"
		   << " from='" << roomId << "@muc.m.renren.com'"
		   << " to='" << userId << "@talk.m.renren.com'"
		   << " id='" << id << "'"
		   << " type='error'>"
	   	   <<  "<error type='cancel' code='" << code << "' msg='" << getErrorMsg(code) <<"'/>"
		   << "</iq>";

	    LOG_DEBUG("MucServer::saveToContactFail mucReturn( userId=" << userId << " sessionId = " << sessionId << " isSave=" << false << ")" << " status=" << status << " code=" << code);

		// iq 错误报文不进离线，且只发给进行通讯录保存操作的会话
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId,sessionId,os.str(),false);
	}


	void MucServer::deleteFromContact(Gid_t userId,long roomId,CLIENTID id,string sessionId, bool isSixin){
		// iq 报文删除通讯录
		// 调用db接口	
        RoomOperateErrorStatus status = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->deleteRoomFromContact(userId, roomId);
        switch(status){
            case Success:
                deleteFromContactSuccess(userId,roomId,id,sessionId);
                break;
            default:
				deleteFromContactFail(roomId, userId, id, status, sessionId);
                break;
        }       
	}


	void MucServer::deleteFromContactSuccess(Gid_t userId,long roomId,CLIENTID id,std::string sessionId, bool isSixin){
		// iq 报文通报通讯录删除操作成功

		ostringstream os;
		os << "<iq"
		   << " from='" << roomId << "@muc.m.renren.com'"
		   << " to='" << userId << "@talk.m.renren.com'"
		   << " id='" << id << "'"
		   << " type='result'/>";

	    LOG_DEBUG("MucServer::deleteFromContactSuccess mucReturn( userId=" << userId << " sessionId = " << sessionId << " isSave=" << false << ")");
		// iq 报文不进离线，且只发给进行通讯录删除操作的会话
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId,sessionId,os.str(),false);

	}


	void MucServer::deleteFromContactFail(long roomId, Gid_t userId, CLIENTID id, RoomOperateErrorStatus status, std::string sessionId, bool isSixin){
		int code;
		switch (status){
			case RoomNotExist:
				code = 100;	// 删除的房间不存在于db中
				break;
			case NotInContact:
				code = 50;	// 房间不在通讯录里 
				break;
			case NotInRoom:
				code = 630;	// 只有群成员才可以将群从通讯录删除
				break;
			default:
				code = 404;	// 未知的网络错误
				break;
		}
	
		// iq 报文通知删除通讯录操作失败

		ostringstream os;
		os << "<iq"
		   << " from='" << roomId << "@muc.m.renren.com'"
		   << " to='" << userId << "@talk.m.renren.com'"
		   << " id='" << id << "'"
		   << " type='error'>"
	   	   <<  "<error type='cancel' code='" << code << "' msg='" << getErrorMsg(code) <<"'/>"
		   << "</iq>";

	    LOG_DEBUG("MucServer::deleteFromContactFail mucReturn( userId=" << userId << " roomId=" << roomId << " sessionId = " << sessionId << " isSave=" << false << ")" << " status=" << status << " code=" << code);

		// iq 错误报文不进离线，且只发给进行通讯录保存操作的会话
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId,sessionId,os.str(),false);
	}



	void MucServer::getFromContact(Gid_t userId, bool withMembers, CLIENTID id, string sessionId, bool isSixin){
		// iq 报文从通讯录获得房间的成员信息

		// 1.调用GetFromContact接口，获得房间ID，名字的列表，以及每个房间的用户列表
		RetRoomList retroomlist = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->getSavedUserRoomList(userId, true);

		switch(retroomlist.status){
			case Success:
				// 2.如果调用成功，则向请求方返回报文
		   		getFromContactToInvoker(userId,retroomlist.roomListInfo,id,sessionId);
		   		break;

			default:
				// 3.如果以上调用不成功，返回相应的失败报文给请求方
		   		getFromContactFail(userId,id,retroomlist.status,sessionId);
		   		break;
		}
	}

	void MucServer::getFromContactToInvoker(Gid_t userId,RoomList roomlist,CLIENTID id,string sessionId, bool isSixin){
		// iq 报文返回通讯录中所保存房间的信息

		// 获得房间信息
		vector<Room> roomVector;
		// 获得对应的成员信息
		vector<MemberMap> memberMapVector;

		unsigned int i;
		for(i=0;i<roomlist.size();i++){
			// 取得每个房间资料中的用户id列表
//			RetRoom retroom = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->getRoomH(userId,roomlist[i].id);
//			// 不能取得房间信息的情况
//			if(retroom.status != Success){
//				break;
//			}

			roomVector.push_back(roomlist[i]);

			// 取得房间的成员信息
			MemberMap memberMap = MY_INSTANCE(ProxyRegister).getProxy<RoomServiceProxy>("roomProxy")->getMemberDetail(userId,roomlist[i].memberIds);
			// 不能取得成员信息的情况
			if(memberMap.empty()){
				break;
			}
			// 保存用户资料到memberMapVector变量中
			memberMapVector.push_back(memberMap);
			
		}

		// for循环提前终止，说明调用存在异常的情况，回复错误报文
		if(i!=roomlist.size()){
		   	getFromContactFail(userId,id,Unknown,sessionId);
			return;
		}
		
		ostringstream roomContent;
		// 准备各个房间的成员信息
		for(i=0;i<roomlist.size();i++){
			 // 生成一个房间的item节点
			 roomContent<<"<item roomId='" << roomVector[i].id <<"' roomname='" << roomVector[i].name << "'>";
				// 生成房间内嵌套的各个成员的 item 节点
				for(MemberMap::iterator it = memberMapVector[i].begin();it!=memberMapVector[i].end();it++){
					::com::xiaonei::wap::mtalk::muc::Member member = it->second;
					roomContent << "<item affiliation='" << ((member.id == roomVector[i].creater)?"owner":"member") 
								<< "' jid='" << member.id 
								<< "' name='" << member.name 
								<< "' url='" << member.tinyUrl 
								<< "' headurl='" << member.headUrl 
								<< "'/>";
				}
			 roomContent<<"</item>";
		}
		
		// 准备应答报文	
		ostringstream os;
		os  << "<iq"
			<< " from='muc.m.renren.com'"
			<< " to='" << userId << "@talk.m.renren.com'"
			<< " id='" << id << "'"
			<< " type='result'>"
			<< 		"<query  xmlns='http://jabber.org/protocol/muc#user'>"
			<< 			"<contact prefix='" << PREFIX << "'>"
			<< 				roomContent.str()
			<< 			"</contact>"
    		<<		"</query>"
			<< "</iq>";

	    LOG_DEBUG("MucServer::getFromContactToInvoker mucReturn( userId=" << userId << " sessionId = " << sessionId << " isSave=" << false << ")");
		// iq 报文不进离线，且只发给进行通讯录获取操作的会话
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId,sessionId,os.str(),false);

	}

	void MucServer::getFromContactFail(Gid_t userId,CLIENTID id,RoomOperateErrorStatus status,string sessionId, bool isSixin){
		// iq 报文返回获取通讯录失败的情况
		// 只有db操作失败的情况下调用此函数
		int code = 404;

		ostringstream os;
		os <<"<iq"
		   <<" from='muc.m.renren.com'"
		   <<" to='" << userId << "@talk.m.renren.com'"
		   <<" id='" << id << "'"
		   <<" type='error'>"
	   	   <<  "<error type='cancel' code='" << code << "' msg='" << getErrorMsg(code) <<"'/>"
		   <<"</iq>";

	    LOG_DEBUG("MucServer::getFromContactFail mucReturn( userId=" << userId << " sessionId = " << sessionId << " isSave=" << false << ")" << " status=" << status << " code=" << code);
		// iq 错误报文不进离线，且只发给进行通讯录获取操作的会话
		MY_INSTANCE(ProxyRegister).getProxy<TalkServiceProxy>("TalkProxy")->mucReturn(userId,sessionId,os.str(),false);

	}
		
	bool MucServer::isMember(Gid_t userId,std::vector<Gid_t>& members){
		// 检查某个id是否在id列表中，判断一个用户是否一个群的成员

		vector<Gid_t>::iterator resultIt = find( members.begin(), members.end(), userId );
		if ( resultIt == members.end()){
			return false;	
		}
		else{ 
			return true;	
		}
	}*/


	MucServerZKListener::MucServerZKListener(const string& path, const int serverId, const short serverPort):
	path_(path),
	serverId_(serverId),
	serverPort_(serverPort){
			nodeName_ = "server-" + boost::lexical_cast<string>(serverId_);
			nodePath_ = path_ + "/" + nodeName_;
			string ipAddr = MyUtil::IpAddr::inner();
			nodeAddress_ = ipAddr + ':' + boost::lexical_cast<string>(serverPort_);
	}
	

	void MucServerZKListener::zkHandle(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr, const std::string& path, const mtalk::zk::ZKEventType event){
		switch(event){
				case ZK_CHILD_CHANGED :
					LOG_INFO("MucServerZKListener::zkHanlde => path [" << path << "] children changed, start update");
					if(path == path_){
						updateConfig(zkManagerPtr);
					}
					LOG_INFO("MucServerZKListener::zkHanlde => path [" << path << "] listener update finish");
					break;
				case ZK_SESSION_EXPIRED :
					LOG_INFO("MucServerZKListener::zkHanlde => path [" << path << "] session expired, start update");
					registeServer(zkManagerPtr);
					updateConfig(zkManagerPtr);
					LOG_INFO("MucServerZKListener::zkHanlde => path [" << path << "] listener update finish");
					break;
				case ZK_LISTENER_INIT :
					LOG_INFO("MucServerZKListener::zkHanlde => path [" << path << "] listener init, start update");
					if(path == path_){
						registeServer(zkManagerPtr);
						updateConfig(zkManagerPtr);
					}
					LOG_INFO("MucServerZKListener::zkHanlde => path [" << path << "] listener update finish");
					break;
			};
	}


	void MucServerZKListener::updateConfig(boost::shared_ptr<ZKManager> zkManagerPtr){
		vector<string> serverList;
		zkManagerPtr->getChildren(path_, serverList);

		vector<int> serverIds;
		for (size_t i=0; i < serverList.size(); i++){
			string serverName(serverList[i]);
			size_t pos = serverName.find('-');
			if (pos == string::npos){
				continue;
			}
			int serverId = boost::lexical_cast<int>(serverName.substr(pos+1));
			serverIds.push_back(serverId);
		}

		sort(serverIds.begin(), serverIds.end());
		int index = 0;
		int count = serverIds.size();

        for(size_t i= 0; i < serverIds.size(); i++){
            if(serverId_ == serverIds[i]){
                index = i; 
                break;
            }    
        }    

        LOG_INFO("TalkServerZKListener::updateConfig => cluster info : index = " << index << " count = " << count);

		MY_INSTANCE(MucServer).updateClusterInfo(index, count);
	}

	void MucServerZKListener::registeServer(boost::shared_ptr<ZKManager> zkManagerPtr){
		LOG_INFO("MucServerZKListener::registeServer ==> register this muc node");
		zkManagerPtr->createNode(path_, nodeName_, nodeAddress_);
	}

};
};
