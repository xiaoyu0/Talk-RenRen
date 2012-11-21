#include "StanzaStringFactory.h"
#include "MucErrorMessage.h"
#include "pugixml/pugixml.hpp"

#include "proxy/ProxyRegister.h"
#include "proxy/SixinUserInfoProxy.h"

#include "utils/XmlUtils.h"
#include "utils/TimeUtils.h"

#include <sstream>
#include <boost/lexical_cast.hpp>


using namespace std;
using namespace mtalk::muc;
using namespace mtalk::proxy;
using namespace mtalk::utils;
using namespace pugi;

namespace mtalk{
namespace muc{

	StanzaStringFactory::StanzaStringFactory(){
        prefix_ = "http://";
	}

	void StanzaStringFactory::getInviteesToNotice(vector<Gid_t>& initialMembers, vector<Gid_t>& inviteesToNotice){
		for (vector<Gid_t>::iterator it = initialMembers.begin(); it != initialMembers.end(); it++){
			bool userSupportMuc = MY_INSTANCE(ProxyRegister).getProxy<SixinUserInfoProxy>("sixinUserProxy")->supportMuc(*it);
			if (!userSupportMuc){
				inviteesToNotice.push_back(*it);
			}
		}
	}
	
	string StanzaStringFactory::roomCreated2Creator(Gid_t creatorId, long roomId, int version, string& id, string& subject){
		LOG_DEBUG("StanzaStringFactory::roomCreator2Creator ==> creatorId = " << creatorId << "  roomId = " << roomId << "  id = " << id);
		stringstream ss;
		ss << "<presence from='" << roomId << "@muc.m.renren.com/" << creatorId << "' to='" << creatorId 
		   << domainStr_ << "' id='" << id << "'>"
		   << "<x xmlns='http://jabber.org/protocol/muc#user' version='" << version << "'>"
		   << "<item affiliation='owner'/>"
		   << "<subject>" << subject << "</subject>"
		   << "<status code='110'/>"
		   << "<status code='201'/>"
		   << "</x></presence>";
		return ss.str();
	}

	string StanzaStringFactory::roomCreated2CreatorHint(int version, Gid_t creatorId, long roomId, vector<Member>& initialMembers){
		LOG_DEBUG("StanzaStringFactory::roomCreated2CreatorHint ==> creatorId = " << creatorId << " roomId = " << roomId);
		stringstream ss;
		stringstream ss1;
		ss << "你创建了群聊，邀请了"; int numNotSupportMuc = 0; int num = 0;
		for(vector<Member>::iterator it = initialMembers.begin(); it != initialMembers.end(); it++){
			if (it->id == creatorId){
				continue;
			}
			//查询安装情况
			bool userSupportMuc = MY_INSTANCE(ProxyRegister).getProxy<SixinUserInfoProxy>("sixinUserProxy")->supportMuc(it->id);
			if (!userSupportMuc){
				numNotSupportMuc++;
				ss1 << it->name << " ";
			}
			if (num++ != 0){
				ss << "、";
			}
			ss << it->name;
		}
//		ss << "; " << endl;
		if (numNotSupportMuc){
			ss1 << " 未安装或更新私信,不支持群聊,快去邀请吧";
		}

		//string hintStr = ss.str() + ss1.str(); //去除安装情况提示
		string hintStr = ss.str();
	
		ss.str("");
		ss << "<message from='" << roomId << "@muc.m.renren.com' "
		   << "to='" << creatorId << domainStr_ << "' type='info'>"
		   << "<body type='text' version='" << version << "'>"
		   << "<text>" << hintStr << "</text></body></message>";
		
		return ss.str();
	}
	
	string StanzaStringFactory::roomCreated2Invitee(Gid_t inviteeId, Gid_t creatorId, long roomId, int version, string& subject, std::vector<Member>& initialMembers){
		LOG_DEBUG("StanzaStringFactory::roomCreator2Invitee ==> creatorId = " << creatorId << "  inviteeId = " << inviteeId << "  roomId = " << roomId);
		stringstream ss;
		ss << "<presence from='" << roomId << "@muc.m.renren.com/" << creatorId << "' to='" << inviteeId
		   << domainStr_ << "'> "
		   << "<x xmlns='http://jabber.org/protocol/muc#user' version='" << version << "' prefix='" << prefix_ << "'>"
		   << "<subject>" << subject << "</subject>";

		vector<Member>::iterator it = initialMembers.begin();
		for ( ; it != initialMembers.end(); it++){
			if (it->id == creatorId){
				ss << "<item affiliation='owner' jid='" << it->id << "' name='" << it->name << "' url='" << it->url << "' headurl='" << it->headUrl << "'/>";
				continue;
			}
			ss << "<item affiliation='member' jid='" << it->id << "' name='" << it->name << "' url='" << it->url << "' headurl='" << it->headUrl << "'/>";
		}

		ss << "</x></presence>";
		return ss.str();
	}

	string StanzaStringFactory::roomCreated2InviteeHint(int version, Gid_t inviteeId, long roomId, Member creatorIdDetail, std::vector<Member>& initialMembers){
		LOG_DEBUG("StanzaStringFactory::roomCreator2InviteeHint ==> creatorId = " << creatorIdDetail.id << "  inviteeId = " << inviteeId << "  roomId = " << roomId);
		stringstream ss;
		ss << creatorIdDetail.name << "创建了群聊,邀请了你";
		int i = 0; // i used to control last ","
		for(vector<Member>::iterator it = initialMembers.begin(); it != initialMembers.end(); it++){
			// skip invitee and room owner
			if ((it->id == inviteeId) || (it->id == creatorIdDetail.id)){
				i++;
				continue;
			}
			
			ss << "、" << it->name;
		}
		//把ss最后一个char吐出来
		string hintStr = ss.str();
		ss.str("");
		ss << "<message from='" << roomId << "@muc.m.renren.com' to='"
		   << inviteeId << domainStr_ << "' type='info'><body type='text' version='" << version << "'>" 
		   << "<text>" << hintStr << "</text></body></message>";

		return ss.str();
	}

	string StanzaStringFactory::roomCreated2InviteeNotSupportMuc(Gid_t toId, Member& ownerDetail, std::vector<Member>& initialMembers){
		Gid_t ownerId = ownerDetail.id;
		LOG_DEBUG("StanzaStringFactory::roomCreated2InviteeNotSupportMuc ==> ownerId = " << ownerId << " toId = " << toId);
		stringstream ss;
		ss << "我刚拉了你";
		for (vector<Member>::iterator it = initialMembers.begin(); it != initialMembers.end(); it++){
			if (it->id == ownerId || it->id == toId){
				continue;
			}
			ss << "、" << it->name;
		}
		ss << "一起群聊，快下载最新私信吧http://mobile.renren.com";
		string chatStr = ss.str();
		ss.str("");

		ss << "<message from='" << ownerId << domainStr_ << "' "
		   << "to='" << toId << domainStr_ << "' type='chat' "
		   << "fname='" << ownerDetail.name << "'>"
		   << "<body type='text'>"
		   << "<text>" << chatStr << "</text></body></message>";

		return ss.str();
	}

	string StanzaStringFactory::roomCreatederror(int statusCode, Gid_t ownerId, string& id){
		LOG_DEBUG("StanzaStringFactory::roomCreatederror ==> creatorId = " << ownerId << "  id = " << id << "  statusCode = " << statusCode);
		int code=0;
		string msg;

		switch (statusCode){
		//case com::xiaonei::wap::mtalk::muc::RoomNotExist :
		//	code = 100; msg = getErrorMsg(code); break;
		case MucErrorType::RoomIsFull :
			code = 10;  msg = getErrorMsg(code); break;
		case MucErrorType::CreatedRoomIsFull :
			code = 0;  msg = getErrorMsg(code);break;
		case MucErrorType::RoomCreationNoInvitee :
			code = 110;   msg = getErrorMsg(code); break;
		case MucErrorType::IllegalArgument:
			code = 110;   msg = getErrorMsg(code); break;
		case MucErrorType::ServerError:
			code = 660;   msg = getErrorMsg(code); break;
		
		// 负id
		case MucErrorType::IllegalId:
			code = 710;   msg = getErrorMsg(code); break;

		default :
			code = 404 ;  msg = getErrorMsg(code);break;
		}

		int key = getErrorCodeKey(code);
		stringstream ss;
		ss << ownerId << domainStr_;
		string toarg = ss.str();
		ss.str("");

        ss <<"<presence from='muc.m.renren.com' to='"<<toarg<<"' id='"<<id<<"' type='error'>"
           <<"<template id='6'>"
		   <<"<para>"<<code<<"</para>"
		   <<"<para id='"<<key<<"'/>"
           <<"</template></presence>";


//		ss << "<template id='3'>"
//		   << "<para>muc.m.renren.com</para>"
//		   << "<para>" << toarg << "</para>"
//		   << "<para>" << id << "</para>"
//		   << "<para>" << code << "</para>"
//		   << "<para id='" << key << "'/>"
//		   << "</template>";

		return ss.str();
	}

	string StanzaStringFactory::leaveRoom2Self(Gid_t exitorId, int version, long roomId, string& id){
		LOG_DEBUG("StanzaStringFactory::leaveRoom2Self ==> exitorId = " << exitorId << "  roomId = " << roomId);
		stringstream ss;
		ss << "<presence from='" << roomId << "@muc.m.renren.com/" << exitorId << "' "
		   << "to='" << exitorId << domainStr_ << "' id='" << id << "' type='unavailable'>"
		   << "<x xmlns='http://jabber.org/protocol/muc#user' version='" << version << "'>"
		   << "<item affiliation='none' jid='" << exitorId << "'/>"
		   << "<status code='110'/>"
		   << "</x></presence>";

		return ss.str();
	}
	
	string StanzaStringFactory::leaveRoom2Others(Gid_t existingId, Gid_t exitorId, int version, long roomId, string& subject){
		LOG_DEBUG("StanzaStringFactory::leaveRoom2Others ==>  exitorId = " << exitorId << "  existingId = " << existingId << "  roomId = " << roomId);
		stringstream ss;
		ss << "<presence from='" << roomId << "@muc.m.renren.com/" << exitorId << "' "
		   << "to='" << existingId << domainStr_ << "' type='unavailable'>"
		   << "<x xmlns='http://jabber.org/protocol/muc#user' version='" << version << "'>"
		   << "<subject>" << subject << "</subject>"
		   << "<item affiliation='none' jid='" << exitorId << "'/>"
		   << "</x></presence>";

		return ss.str();
	}

	string StanzaStringFactory::leaveRoomError(int statusCode, Gid_t exitorId, long roomId, string& id){
		LOG_DEBUG("StanzaStringFactory::leaveRoomError ==> exitorId =  " << exitorId << "  roomId = " << roomId << "  statusCode = " << statusCode);
		int code=0;
		string msg;
		com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus errorStatus = (com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus)statusCode;
		switch (errorStatus){
		case com::xiaonei::wap::mtalk::muc::RoomNotExist :
			code = 100; msg = getErrorMsg(code); break;
		case com::xiaonei::wap::mtalk::muc::NoPermission :
		case com::xiaonei::wap::mtalk::muc::NotInRoom:
		    code = 90;  msg = getErrorMsg(code); break;
		default :
			code = 404 ;  msg = getErrorMsg(code);
		}

		int key = getErrorCodeKey(code);
		stringstream ss;
		ss << exitorId << domainStr_;
		string toarg = ss.str();
		ss.str("");
        ss <<"<presence from='"<<roomId<<"@muc.m.renren.com' to='"<<toarg<<"' id='"<<id<<"' type='error'>"
           <<"<template id='6'>"
		   <<"<para>"<<code<<"</para>"
		   <<"<para id='"<<key<<"'/>"
           <<"</template></presence>";

//		ss << "<template id='3'>"
//		   << "<para>" << roomId << "@muc.m.renren.com</para>"
//		   << "<para>" << toarg << "</para>"
//		   << "<para>" << id << "</para>"
//		   << "<para>" << code << "</para>"
//		   << "<para id='" << key << "'/>"
//		   << "</template>";

		return ss.str();
	}

	string StanzaStringFactory::leaveRoom2OthersHint(int version, Gid_t existingId, long roomId, Member exitorIdDetail){
		LOG_DEBUG("StanzaStringFactory::leaveRoom2OthersHint ==> exitorId =  " << exitorIdDetail.id << "  roomId = " << roomId);
		stringstream ss;
		ss << exitorIdDetail.name << "退出了群";
		string hintStr = ss.str();
		ss.str("");
		ss << "<message from='" << roomId << "@muc.m.renren.com' to='"
		   << existingId << domainStr_ << "' type='info'><body type='text' version='" << version << "'>"
		   << "<text>" << hintStr << "</text></body></message>";
		
		return ss.str();
	}


	string StanzaStringFactory::sendPublicMessage(Gid_t toId, Gid_t senderId, int version, long roomId, Packet& packet, bool& send2Offline) try{
		stringstream ss;
		xml_node messageNode = packet.element();
		xml_node node = messageNode.first_child();

		string fname = messageNode.attribute("fname").value();
		// 带feed聊天要带上feed属性	
		bool withFeed = false;

		for (; !node.empty(); node = node.next_sibling()){
			string nodeName = node.name();
			if (nodeName == "feed"){
				withFeed = true;
			}
			if (nodeName == "body"){  //add version to body
				xml_attribute versionAttr = node.attribute("version");
				if (versionAttr.empty()){
					string versionStr = boost::lexical_cast<string>(version);
					node.append_attribute("version") = versionStr.c_str();
				}
				string bodyType = node.attribute("type").value();
				if (bodyType == "action"){
					send2Offline = false;
				}
			}
			LOG_DEBUG("StanzaStringFactory::sendPublicMessage ==> in messageNode  node name = " << nodeName);
			node.print(ss, "\t", pugi::format_raw);
		}
		string chatStr = ss.str();

		LOG_DEBUG("StanzaStringFactory::sendPublicMessage ==> senderId = " << senderId << "  roomId = " << roomId << "  toId = " << toId << "  chatStr = " << chatStr);
		ss.str("");
		
		//取当前时间,广播的消息都要加上
		long currentTime = getCurrentTimeMSec();

		if (!withFeed){
			ss << "<message from='" << roomId << "@muc.m.renren.com/" << senderId << "' "
		  	   << "to='" << toId << domainStr_ << "' type='groupchat' fname='" << fname << "' time='" << currentTime << "'>"
		   	   << chatStr << "</message>";
		} else{
			ss << "<message from='" << roomId << "@muc.m.renren.com/" << senderId << "' "
		  	   << "to='" << toId << domainStr_ << "' type='groupchat' feed='true' fname='" << fname << "' time='" << currentTime << "'>"
		   	   << chatStr << "</message>";
		}

		return ss.str();
	} catch (exception& e){
		LOG_DEBUG("StanzaStringFactory::sendPublicMessage ==> exception = " << e.what());
		string tmp;
		return tmp;
	}

	string StanzaStringFactory::sendPublicMessage2Sender(Gid_t senderId, long roomId, string& id){
		LOG_DEBUG("StanzaStringFactory::sendPublicMessage2Sender ==> senderId = " << senderId << "  roomId = " << roomId);
		stringstream ss;
		ss << "<message from='" << roomId << "@muc.m.renren.com/" << senderId << "' "
		   << "to='" << senderId << domainStr_ << "' id='" << id << "' type='groupchat'>"
		   << "</message>";
		
		return ss.str();
	}

	string StanzaStringFactory::sendPublicMessageError(int statusCode, Gid_t senderId, long roomId, string& id){
		LOG_DEBUG("StanzaStringFactory::sendPublicMessageError ==> senderId = " << senderId << "  roomId = " << roomId << "  statusCode = " << statusCode);
		int code=0;
		string msg;
		switch (statusCode){
				case MucErrorType::RoomNotExist :
						code = 100; msg = getErrorMsg(code); break;
				case MucErrorType::NotInRoom :
                case MucErrorType::sendMsgNotInRoom :
						code = 200; msg = getErrorMsg(code); break;
				default :
						code = 404 ; msg = getErrorMsg(code);
		}

		int key = getErrorCodeKey(code);
		stringstream ss;
		ss << senderId << domainStr_;
		string toarg = ss.str();
		ss.str("");
        ss <<"<message from='"<<roomId<<"@muc.m.renren.com' to='"<<toarg<<"' id='"<<id<<"' type='error'>"
           <<"<template id='6'>"
		   <<"<para>"<<code<<"</para>"
		   <<"<para id='"<<key<<"'/>"
           <<"</template></message>";


//		ss << "<template id='2'>"
//		   << "<para>" << roomId << "@muc.m.renren.com</para>"
//		   << "<para>" << toarg << "</para>"
//		   << "<para>" << id << "</para>"
//		   << "<para>" << code << "</para>"
//		   << "<para id='" << key << "'/>"
//		   << "</template>";

		return ss.str();
	}

	string StanzaStringFactory::invitation2invitee(Gid_t inviteeId, Gid_t invitorId, Gid_t roomOwnerId, long roomId, int version, string& subject, std::vector<Member>& allMembers){
		LOG_DEBUG("StanzaStringFactory::invitation2invitee ==> invitorId = " << invitorId << "inviteeId = " << inviteeId << "  roomId = " << roomId);
		stringstream ss;
		ss << "<presence from='" << roomId << "@muc.m.renren.com/" << invitorId << "' "
		   << "to='" << inviteeId << domainStr_ << "'>"
		   << "<x xmlns='http://jabber.org/protocol/muc#user' prefix='" << prefix_ << "' version='" << version << "'>"
		   << "<subject>" << subject << "</subject>"
		   << "<invite from='" << invitorId << domainStr_ << "' totype='invitee'/>"; 
		vector<Member>::iterator it = allMembers.begin();
		// allMembers里面有没有owner?
		for ( ; it != allMembers.end(); it++){
			if (roomOwnerId == it->id){
				ss << "<item affiliation='owner' jid='" << it->id << "' name='" << it->name << "' url='" << it->url << "' headurl='" << it->headUrl << "'/>";
				continue;
			}
			ss << "<item affiliation='member' jid='" << it->id << "' name='" << it->name << "' url='" << it->url << "' headurl='" << it->headUrl << "'/>";
		}
		ss << "</x></presence>";
		return ss.str();
	}

	string StanzaStringFactory::invitation2existing(Gid_t existingId, Gid_t invitorId, Gid_t roomOwnerId, int version, long roomId, string& subject, std::vector<Member> invitees){
		LOG_DEBUG("StanzaStringFactory::invitation2existing ==> invitorId = " << invitorId << "existingId = " << existingId << "  roomId = " << roomId);
		stringstream ss;
		ss << "<presence from='" << roomId << "@muc.m.renren.com/" << invitorId << "' "
		   << "to='" << existingId << domainStr_ << "'>"
		   << "<x xmlns='http://jabber.org/protocol/muc#user' prefix='" << prefix_ << "' version='" << version << "'>"
		   << "<subject>" << subject << "</subject>"
		   << "<invite from='" << invitorId << domainStr_ << "' totype='existing'/>"; 

		vector<Member>::iterator it = invitees.begin();
		for ( ; it != invitees.end(); it++){
			/*if (roomOwnerId == it->id){
				//skip room owner
				continue;
			}*/
			ss << "<item affiliation='member' jid='" << it->id << "' name='" << it->name << "' url='" << it->url << "' headurl='" << it->headUrl << "'/>";
		}
		ss << "</x></presence>";
		return ss.str();
	}

	string StanzaStringFactory::invitation2inviteeHint(int version, Gid_t inviteeId, long roomId, Member invitorDetail, vector<Member>& invitees, vector<Member>& allMemberDetail){
		LOG_DEBUG("StanzaStringFactory::invitation2inviteeHint ==> invitorId = " << invitorDetail.id << " roomId = " << roomId);
		stringstream ss;
		ss << invitorDetail.name << "邀请你";
		set<Gid_t> inviteeSet;
		vector<Member>::iterator it = invitees.begin();
		for (; it != invitees.end(); it++){
			inviteeSet.insert(it->id);
			if (it->id == inviteeId){
				//skip invitee
				continue;
			}
			// here display invitees
			ss << "、" << it->name;	
		}
		ss << "进入了群";
		stringstream ss2;
		int i = 0;
		for (it = allMemberDetail.begin(); it != allMemberDetail.end(); it++){
			//here the display ignore invitees and invitor
			if (inviteeSet.count(it->id) || it->id == invitorDetail.id){
				continue;
			}
			if (i++ != 0){		
				ss2 << "、";
			}
			ss2 << it->name;
		}
		if (i != 0){
			ss << ",群里面有";
		}
		string hintStr = ss.str() + ss2.str();

		ss.str("");
		ss << "<message from='" << roomId << "@muc.m.renren.com' "
		   << "to='" << inviteeId << domainStr_ << "' type='info'>"
		   << "<body type='text' version='" << version << "'>"
		   << "<text>" << hintStr << "</text></body></message>";

		return ss.str();
	}

	string StanzaStringFactory::invitation2Self(Gid_t invitorId, Gid_t roomOwnerId, long roomId, string& id, string& subject){
		LOG_DEBUG("StanzaStringFactory::invitation2Self ==> invitorId = " << invitorId <<  "  roomId = " << roomId);
		stringstream ss;
		ss << "<message from='" << roomId << "@muc.m.renren.com/" << invitorId << "' "
		   << "to='" << invitorId << domainStr_ << "' id='" << id << "'>"
		   <<"</message>";
		return ss.str();
	}

	string StanzaStringFactory::invitation2SelfHint(int version, Gid_t invitorId, long roomId, vector<Member>& invitees){
		LOG_DEBUG("StanzaStringFactory::invitation2SelfHint ==> invitorId = " << invitorId <<  "  roomId = " << roomId);
		stringstream ss;
		ss << "你邀请";
		for(vector<Member>::iterator it = invitees.begin(); it != invitees.end(); it++){
			if (it != invitees.begin()){
				ss << "、";
			}
			ss << it->name;
		}
		ss << "加入了群";
		string hintStr = ss.str();
		ss.str("");

		ss << "<message from='" << roomId << "@muc.m.renren.com' "
		   << "to='" << invitorId << domainStr_ << "' type='info'>"
		   << "<body type='text' version='" << version << "'>"
		   << "<text>" << hintStr << "</text></body></message>";
		return ss.str();
	}

	string StanzaStringFactory::invitation2existingHint(int version, Gid_t existingId, long roomId, Member invitorIdDetail, vector<Member>& invitees){
		LOG_DEBUG("StanzaStringFactory::invitation2existingHint ==> invitorId = " << invitorIdDetail.id << "existingId = " << existingId);
		stringstream ss;
		ss << invitorIdDetail.name << "邀请";
		for (vector<Member>::iterator it = invitees.begin(); it != invitees.end(); it++){
			if (it != invitees.begin()){
				ss << "、";
			}
			ss << it->name;
		}
		ss << "加入了群";
		string hintStr = ss.str();
		ss.str("");
		ss << "<message from='" << roomId << "@muc.m.renren.com' to='"
		   << existingId << domainStr_ << "' type='info'><body type='text' version='" << version << "'>"
		   << "<text>" << hintStr << "</text></body></message>";
		return ss.str();
	}

	string StanzaStringFactory::invitationError(int statusCode, Gid_t invitorId, long roomId, string& id){
		LOG_DEBUG("StanzaStringFactory::invitation2Error ==> invitorId = " << invitorId << "  roomId = " << roomId << "  statusCode = " << statusCode);
		int code = 0;
		string msg;
		com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus errorStatus = (com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus)statusCode;
		switch (errorStatus){
		case com::xiaonei::wap::mtalk::muc::RoomNotExist :
			code = 100; msg = getErrorMsg(code); break;
		case com::xiaonei::wap::mtalk::muc::RoomIsFull :
			code = 10;  msg = getErrorMsg(code); break;
		case com::xiaonei::wap::mtalk::muc::NotInRoom:
			code = 60; msg = getErrorMsg(code); break;
		default :
		    code = 404; msg = getErrorMsg(code);
		}

		int key = getErrorCodeKey(code);
		stringstream ss;
		ss << invitorId << domainStr_;
		string toarg = ss.str();
		ss.str("");
        ss <<"<message from='"<<roomId<<"@muc.m.renren.com' to='"<<toarg<<"' id='"<<id<<"' type='error'>"
           <<"<template id='6'>"
		   <<"<para>"<<code<<"</para>"
		   <<"<para id='"<<key<<"'/>"
           <<"</template></message>";

//		ss << "<template id='2'>"
//		   << "<para>" << roomId << "@muc.m.renren.com</para>"
//		   << "<para>" << toarg << "</para>"
//		   << "<para>" << id << "</para>"
//		   << "<para>" << code << "</para>"
//		   << "<para id='" << key << "'/>"
//		   << "</template>";

		return ss.str();
	}

	string StanzaStringFactory::subjectChange(Gid_t toId, Gid_t senderId, int version, long roomId, string& subjectStr){
		LOG_DEBUG("StanzaStringFactory::subjectChange ==> senderId = " << senderId << " toId = " << toId << " roomId = " << roomId << " subjectStr = " << subjectStr);
		stringstream ss;
		ss << "<message from='" << roomId << "@muc.m.renren.com/" << senderId << "' "
		   << "to='" << toId << domainStr_ << "'>"
		   << "<subject version='" << version << "'>" << subjectStr << "</subject>" 
		   << "</message>";

		return ss.str();
	}
	
	string StanzaStringFactory::subjectChangeHint(int version, Gid_t toId, long roomId, Member& actorDetail, string& subjectStr){
		LOG_DEBUG("StanzaStringFactory::subjectChangeHint ==> toId = " << toId << " roomId = " << roomId);
		stringstream ss;
		ss << actorDetail.name << "修改群名为\"" << subjectStr << "\"";
		string hintStr = ss.str();

		ss.str("");
		ss << "<message from='" << roomId << "@muc.m.renren.com' "
		   << "to='" << toId << domainStr_ << "' type='info'>"
		   << "<body type='text' version='" << version << "'>"
		   << "<text>" << hintStr << "</text></body></message>";
		return ss.str();
	}
	
	string StanzaStringFactory::subjectChange2Sender(Gid_t senderId, int version, long roomId, string& subjectStr, string& id){
		LOG_DEBUG("StanzaStringFactory::subjectChange2Sender  ==> senderId = " << senderId << " roomId = " << roomId << " subjectStr = " << subjectStr);
		stringstream ss;
		ss << "<message from='" << roomId << "@muc.m.renren.com' "
		   << "to='" << senderId << domainStr_ << "' id='" << id << "' type='result'>"
		   << "<x version='" << version << "'>"
		   << "<subject>" << subjectStr << "</subject></x>"
		   << "</message>";
		
		return ss.str();
	}
	
	string StanzaStringFactory::subjectChange2SenderHint(int version, Gid_t senderId, long roomId, string& subjectStr){
		LOG_DEBUG("StanzaStringFactory::subjectChange2SenderHint ==> senderId = " << senderId << " roomId = " << roomId);
		stringstream ss;
		ss << "你修改群名为\"" << subjectStr << "\"";
		string hintStr = ss.str();
		ss.str("");
		ss << "<message from='" << roomId << "@muc.m.renren.com' "
		   << "to='" << senderId << domainStr_ << "' type='info'>"
		   << "<body type='text' version='" << version << "'>"
		   << "<text>" << hintStr << "</text></body></message>";
		return ss.str();
	}

	string StanzaStringFactory::subjectChangeError(int statusCode, Gid_t senderId, long roomId, string& id){
		LOG_DEBUG("StanzaStringFactory::subjectChangeError ==> senderId = " << senderId << "  roomId = " << roomId << "  statusCode = " << statusCode);
		int code = 0;
		string msg;
		com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus errorStatus = (com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus)statusCode;
		switch (errorStatus){
		case com::xiaonei::wap::mtalk::muc::RoomNotExist :
			code = 100; msg = getErrorMsg(code) ; break;
		case com::xiaonei::wap::mtalk::muc::NoPermission :
			code = 70;  msg = getErrorMsg(code) ; break;
		case com::xiaonei::wap::mtalk::muc::SubjectIsEmpty :
			code = 20;   msg = getErrorMsg(code) ; break;
		default :
		    code = 404; msg = getErrorMsg(code) ;
		}
		
		int key = getErrorCodeKey(code);
		stringstream ss;
		ss << senderId << domainStr_;
		string toarg = ss.str();
		ss.str("");
        ss <<"<message from='muc.m.renren.com' to='"<<toarg<<"' id='"<<id<<"' type='error'>"
           <<"<template id='6'>"
		   <<"<para>"<<code<<"</para>"
		   <<"<para id='"<<key<<"'/>"
           <<"</template></message>";


//		ss << "<template id='2'>"
//		   << "<para>muc.m.renren.com</para>"
//		   << "<para>" << toarg << "</para>"
//		   << "<para>" << id << "</para>"
//		   << "<para>" << code << "</para>"
//		   << "<para id='" << key << "'/>"
//		   << "</template>";


		return ss.str();

	}

	string StanzaStringFactory::kickOccupant2kickee(Gid_t actorId, Gid_t kickId, int version, long roomId){
		LOG_DEBUG("StanzaStringFactory::kickOccupant2kickee ==> actorId = " << actorId << "  kickId = " << kickId << "  roomId = " << roomId);
		stringstream ss;
		ss << "<presence from='" << roomId << "@muc.m.renren.com/" << kickId
		   << "' to='" << kickId << domainStr_ << "' type='unavailable'>"
		   << "<x xmlns='http://jabber.org/protocol/muc#user' version='" << version << "'>"
		   << "<item affiliation='outcast'>"
		   << "<actor nick='" << actorId << "'/>"
		   << "</item></x></presence>";

		return ss.str();
	}

	string StanzaStringFactory::kickOccupant2kickeeHint(int version, Gid_t kickId, long roomId, Member actorDetail){
		LOG_DEBUG("StanzaStringFactory::kickOccupant2kickeeHint ==> kickId = " << kickId << " roomId = " << roomId);
		stringstream ss;
		ss << "抱歉,你被" << actorDetail.name << "移出了群";
		string hintStr = ss.str();
		ss.str("");

		ss << "<message from='" << roomId << "@muc.m.renren.com' "
		   << "to='" << kickId << domainStr_ << "' type='info'>"
		   << "<body type='text'>"
		   << "<text>" << hintStr << "</text></body></message>";
		return ss.str();
	}

	string StanzaStringFactory::kickOccupant2kicker(Gid_t actorId, int version, long roomId, string& id, string& subject){
		LOG_DEBUG("StanzaStringFactory::kickOccupant2kicker ==> actorId = " << actorId << " roomId = " << roomId);
		stringstream ss;
		ss << "<iq from='" << roomId << "@muc.m.renren.com' to='" << actorId
		   << domainStr_ << "' type='result' id = '" << id << "'>" 
		   << "<query xmlns='http://jabber.org/protocol/muc#owner' version='" << version << "'/>"
		   << "</iq>";

		return ss.str();
	}

	string StanzaStringFactory::kickOccupant2kickerHint(int version, Gid_t actorId, long roomId, std::vector<Member>& kickeesDetail){
		LOG_DEBUG("StanzaStringFactory::kickOccupant2kickerHint ==> actorId = " << actorId << " roomId = " << roomId);
		stringstream ss;
		ss << "你把";
		for (vector<Member>::iterator it = kickeesDetail.begin(); it != kickeesDetail.end(); it++){
			if (it != kickeesDetail.begin()){
				ss << "、";
			}
			ss << it->name;
		}
		ss << "移出了群";
		string hintStr = ss.str();

		ss.str("");
		ss << "<message from='" << roomId << "@muc.m.renren.com' "
		   << "to='" << actorId << domainStr_ << "' type='info'>"
		   << "<body type='text' version='" << version << "'>"
		   << "<text>" << hintStr << "</text></body></message>";
		
		return ss.str();
	}

	string StanzaStringFactory::kickOccupant2existing(Gid_t actorId, Gid_t existingId, int version, long roomId, std::string& subject, vector<Gid_t> kickeeVec){
		LOG_DEBUG("StanzaStringFactory::kickOccupant2existing ==> actorId = " << actorId <<  " roomId = " << roomId);
		stringstream ss;
		ss << "<presence from='" << roomId << "@muc.m.renren.com/" << actorId
		   << "' to='" << existingId << domainStr_ << "' type='unavailable'>"
		   << "<x xmlns='http://jabber.org/protocol/muc#user' version='" << version << "'>"
		   << "<subject>" << subject << "</subject>";
		for (vector<Gid_t>::iterator it = kickeeVec.begin() ; it != kickeeVec.end(); it++){
			ss << "<item nick='" << *it << "' affiliation='outcast'/>";
		}
		ss << "</x></presence>";

		return ss.str();
	}
	

	string StanzaStringFactory::kickOccupant2existingHint(int version, Gid_t existingId, long roomId, Member actorIdDetail, vector<Member> kickeesDetail){
		LOG_DEBUG("StanzaStringFactory::kickOccupant2existingHint ==> actorId = " << actorIdDetail.id << " roomId = " << roomId);
		stringstream ss;
		ss << actorIdDetail.name << "把";
		for(vector<Member>::iterator it = kickeesDetail.begin(); it != kickeesDetail.end(); it++){
			if (it != kickeesDetail.begin()){
				ss << "、";
			}
			ss << it->name;	
		}
		ss << "移出了群";
		string hintStr = ss.str();
		ss.str("");
		ss << "<message from='" << roomId << "@muc.m.renren.com' to='"
		   << existingId << domainStr_ << "' type='info'><body type='text' version='" << version << "'>"
		   << "<text>" << hintStr << "</text></body></message>";

		return ss.str();
	}
	
	string StanzaStringFactory::kickOccupantError(int statusCode, Gid_t kickerId, long roomId, string& id, string selfDefinedErrorStr){
		LOG_DEBUG("StanzaStringFactory::kickOccupantError ==> kickerId = " << kickerId << "  roomId = " << roomId << "  statusCode = " << statusCode);
		int code = 0;
		string msg;
		if (statusCode != 526){
			com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus errorStatus = (com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus)statusCode;
			switch (errorStatus){
			case com::xiaonei::wap::mtalk::muc::RoomNotExist :
				code = 100; msg = getErrorMsg(code); break;
			case com::xiaonei::wap::mtalk::muc::NoPermission:
				code = 80;  msg = getErrorMsg(code); break;
			case com::xiaonei::wap::mtalk::muc::NotInRoom:
				code = 30; msg = getErrorMsg(code) ; break;
			default :
				code = 404; msg = getErrorMsg(code) ;
			}
		} else {
			code = 1;
			msg = selfDefinedErrorStr;
		}
		
		int key = getErrorCodeKey(code);
		stringstream ss;
		ss << kickerId << domainStr_;
		string toarg = ss.str();
		ss.str("");
        ss <<"<iq from='"<<roomId<<"@muc.m.renren.com' to='"<<toarg<<"' id='"<<id<<"' type='error'>"
           <<"<template id='6'>"
		   <<"<para>"<<code<<"</para>"
		   <<"<para id='"<<key<<"'/>"
           <<"</template></iq>";


//		ss << "<template id='4'>"
//		   << "<para>" << roomId << "@muc.m.renren.com</para>"
//		   << "<para>" << toarg << "</para>"
//		   << "<para>" << id << "</para>"
//		   << "<para>" << code << "</para>"
//		   << "<para id='" << key << "'/></template>";
		
		return ss.str();
	}

	string StanzaStringFactory::hexieStanza(Gid_t senderId, long roomId, string& id, string& chatStr){
		LOG_DEBUG("StanzaStringFactory::hexieStanza ==> senderId = " << senderId << " roomId" << roomId);
		stringstream ss;
		ss << "<message from='" << roomId << "@muc.m.renren.com' "
		   << "to='" << senderId << domainStr_ << "' type='error' id='" << id << "'>"
		   << "<error type='cancel' code='120' msg='违禁词'/>"
		   << "</message>";
		   
	   	return ss.str();
	}

	string StanzaStringFactory::hexieStanzaHint(Gid_t senderId, long roomId, string& chatStr){
		LOG_DEBUG("StanzaStringFactory::hexieStanza ==> senderId = " << senderId << " roomId" << roomId);
		string msg = utils::XmlUtils::getPartWorlds(chatStr, 8);
		stringstream ss;
		if (chatStr.size() > 24){
			msg.append("...");
		}

		ss << "<message from='" << roomId << "@muc.m.renren.com' "
		   << "to='" << senderId << domainStr_ << "' type='info'>"
		   << "<body type='text'>"
		   << "<text>您发送的内容\"" << msg << "\"包含敏感内容,请调整后再发</text></body></message>";

		return ss.str();
	}

	string StanzaStringFactory::roomDestroyed2Owner(Gid_t ownerId, long roomId, string& id){
		LOG_DEBUG("StanzaStringFactory::roomDestroyed2Owner ==> ownerId = " << ownerId << "  roomId = " << roomId);
		stringstream ss;
		ss << "<iq"  
		   << " from='" << roomId << "@muc.m.renren.com'"
		   << " to='" << ownerId << domainStr_ << "' "
		   << " id='" << id <<"'"
		   << " type='result'/>";
		return ss.str();
	}

	string StanzaStringFactory::roomDestroyed2Member(Gid_t memberId, int version, long roomId){
		LOG_DEBUG("StanzaStringFactory::roomDestroyed2Member ==> memberId = " << memberId << "  roomId = " << roomId);
		stringstream ss;
		ss << "<presence"
		   << " from='"<< roomId << "@muc.m.renren.com/" << memberId <<"'"
		   << " to='" << memberId << domainStr_ << "' "
		   << " type='unavailable'>"
		   <<   "<x xmlns='http://jabber.org/protocol/muc#user' version='" << version << "'>"
		   <<     "<item affiliation='none'/>"
		   <<     "<destroy/>"
		   <<   "</x>"
		   << "</presence>";

		return ss.str();
	}

	string StanzaStringFactory::roomDestroyed2MemberHint(int version, Gid_t toId, long roomId){
		LOG_DEBUG("StanzaStringFactory::roomDestroyed2MemberHint ==>");
		stringstream ss;
		ss  <<	"<message"
			<<	" from='" << roomId << "@muc.m.renren.com'"
			<<	" to='" << toId << domainStr_ << "' "
			<<	" type='info'>"
			<<		"<body type='text' version='" << version <<"'>"
			<<			"<text>抱歉，该群已被解散。</text>"
			<<		"</body>"
			<<	"</message>";
		return ss.str();
	}

	string StanzaStringFactory::roomDestroyedError(int statusCode, Gid_t fromId, long roomId, string& id){
		LOG_DEBUG("StanzaStringFactory::roomDestroyedError ==> statusCode = " << statusCode << "  fromId = " << fromId << "  roomId = " << roomId);
		int code;
		switch (statusCode){
			case MucErrorType::RoomNotExist:
				code = 100;	// 解散的房间不存在
				break;
			case MucErrorType::NoPermission:
				code = 600;	// 请求解散人非房主
				break;
			default:
				code = 404;	// 未知的网络错误
				break;
		}

		int key = getErrorCodeKey(code);
		stringstream ss;
		ss << fromId << domainStr_;
		string toarg = ss.str();
		ss.str("");
        ss <<"<iq from='"<<roomId<<"@muc.m.renren.com' to='"<<toarg<<"' id='"<<id<<"' type='error'>"
           <<"<template id='6'>"
		   <<"<para>"<<code<<"</para>"
		   <<"<para id='"<<key<<"'/>"
           <<"</template></iq>";


//		ss << "<template id='4'>"
//		   << "<para>" << roomId << "@muc.m.renren.com</para>"
//		   << "<para>" << toarg << "</para>"
//		   << "<para>" << id << "</para>"
//		   << "<para>" << code << "</para>"
//		   << "<para id='" << key << "'/></template>";
		
		return ss.str();
	}

	string StanzaStringFactory::getRoomError(int statusCode, Gid_t fromId, long roomId, std::string& id){
		LOG_DEBUG("StanzaStringFactory::getRoomError ==> statusCode = " << statusCode << " fromId = " << fromId << " roomId = " << roomId);
		int code;
		switch(statusCode){
			case MucErrorType::RoomNotExist:
				code = 100;
				break;
			case MucErrorType::NoPermission:
				code = 610;
				break;
			default:
				code = 404;
				break;
		}

		int key = getErrorCodeKey(code);
		stringstream ss;
		ss << fromId << domainStr_;
		string toarg = ss.str();
		ss.str("");
        ss <<"<iq from='"<<roomId<<"@muc.m.renren.com' to='"<<toarg<<"' id='"<<id<<"' type='error'>"
           <<"<template id='6'>"
		   <<"<para>"<<code<<"</para>"
		   <<"<para id='"<<key<<"'/>"
           <<"</template></iq>";


//		ss << "<template id='4'>"
//		   << "<para>" << roomId << "@muc.m.renren.com</para>"
//		   << "<para>" << toarg << "</para>"
//		   << "<para>" << id << "</para>"
//		   << "<para>" << code << "</para>"
//		   << "<para id='" << key << "'/></template>";
		
		return ss.str();
	}

	string StanzaStringFactory::queryRoomInfo(int version, Gid_t fromId, Gid_t ownerId, long roomId, string& subject, string& id, vector<Member>& membersDetail){
		LOG_DEBUG("StanzaStringFactory::queryRoomInfo ==> fromId = " << fromId << " roomId = " << roomId);
		stringstream ss;
		ss << "<iq from='" << roomId << "@muc.m.renren.com' "
		   << "to='" << fromId << domainStr_ << "' "
		   << "id='" << id << "' type='result'>"
		   << "<query xmlns='http://jabber.org/protocol/muc#user' prefix='" << prefix_ 
		   << "' version='" << version << "'>"
		   << "<subject>" << subject << "</subject>";

		for(vector<Member>::iterator it = membersDetail.begin(); it != membersDetail.end(); it++){
			if(it->id == ownerId){
				ss << "<item affiliation='owner' jid='" << it->id << "' isFriend='" << ((it->isFriend == true)?"true":"false") << "' url='" << it->url << "' headurl='" << it->headUrl << "' name='" << it->name << "' rflag='" << it->relationFlag << "'/>";
				continue;
			}
			ss << "<item affiliation='member' jid='" << it->id << "' isFriend='" << ((it->isFriend == true)?"true":"false") << "' url='" << it->url << "' headurl='" << it->headUrl << "' name='" << it->name << "' rflag='" << it->relationFlag << "'/>";

		}
		ss << "</query></iq>";
		return ss.str();
	}

	string StanzaStringFactory::saveRoomToContact(Gid_t toId, long roomId, string& id){
		LOG_DEBUG("StanzaStringFactory::saveRoomToContact ==> toId = " << toId << " roomId = " << roomId);
		stringstream ss;
		ss << "<iq from='" << roomId << "@muc.m.renren.com' "
		   << "to='" << toId << domainStr_ << "' "
		   << "id='" << id << "' type='result'/>";
		return ss.str();
	}

	string StanzaStringFactory::saveRoomToContactError(int statusCode, Gid_t toId, long roomId, string& id){
		LOG_DEBUG("StanzaStringFactory::saveRoomToContact ==> toId = " << toId << " roomId = " << roomId);

		int code;	
		switch (statusCode){
			case MucErrorType::RoomNotExist:
				code = 100;	// 保存的房间不存在
				break;
			case MucErrorType::AlreadyInContact:
				code = 40;	// 房间此前已经得到了保存
				break;
			case MucErrorType::NotInRoom:
				code = 620;	// 只有群成员才可以将群到保存到通讯录
				break;
			default:
				code = 404;	// 未知的网络错误
				break;
		}

		int key = getErrorCodeKey(code);
		stringstream ss;
		ss << toId << domainStr_;
		string toarg = ss.str();
		ss.str("");
        ss <<"<iq from='"<<roomId<<"@muc.m.renren.com' to='"<<toarg<<"' id='"<<id<<"' type='error'>"
           <<"<template id='6'>"
		   <<"<para>"<<code<<"</para>"
		   <<"<para id='"<<key<<"'/>"
           <<"</template></iq>";


//		ss << "<template id='4'>"
//		   << "<para>" << roomId << "@muc.m.renren.com</para>"
//		   << "<para>" << toarg << "</para>"
//		   << "<para>" << id << "</para>"
//		   << "<para>" << code << "</para>"
//		   << "<para id='" << key << "'/></template>";
		
		return ss.str();
	}

	string StanzaStringFactory::deleteRoomFromContact(Gid_t toId, long roomId, string& id){
		LOG_DEBUG("StanzaStringFactory::deleteRoomFromContact ==> toId = " << toId << " roomId = " << roomId);
		stringstream ss;
		ss << "<iq from='" << roomId << "@muc.m.renren.com' "
		   << "to='" << toId << domainStr_ << "' "
		   << "id='" << id << "' type='result'/>";
	
		return ss.str();
	}

	string StanzaStringFactory::deleteRoomFromContactError(int statusCode, Gid_t toId, long roomId, string& id){
		LOG_DEBUG("StanzaStringFactory::deleteRoomFromContact ==> toId = " << toId << " roomId = " << roomId);
		
		int code = 100;	
		switch (statusCode){
			case MucErrorType::RoomNotExist:
				code = 100;	// 删除的房间不存在于db中
				break;
			case MucErrorType::NotInContact:
				code = 50;	// 房间不在通讯录里 
				break;
			case MucErrorType::NotInRoom:
				code = 630;	// 只有群成员才可以将群从通讯录删除
				break;
			default:
				code = 404;	// 未知的网络错误
				break;
		}
		
		int key = getErrorCodeKey(code);
		stringstream ss;
		ss << toId << domainStr_;
		string toarg = ss.str();
		ss.str("");
        ss <<"<iq from='"<<roomId<<"@muc.m.renren.com' to='"<<toarg<<"' id='"<<id<<"' type='error'>"
           <<"<template id='6'>"
		   <<"<para>"<<code<<"</para>"
		   <<"<para id='"<<key<<"'/>"
           <<"</template></iq>";


//		ss << "<template id='4'>"
//		   << "<para>" << roomId << "@muc.m.renren.com</para>"
//		   << "<para>" << toarg << "</para>"
//		   << "<para>" << id << "</para>"
//		   << "<para>" << code << "</para>"
//		   << "<para id='" << key << "'/></template>";
		
		return ss.str();
	}

	string StanzaStringFactory::checkRooms(Gid_t toId, string& id, string& checkContent){
		LOG_DEBUG("StanzaStringFactory::checkRooms ==> toId = " << toId);
		stringstream ss;
		ss << "<presence from='muc.m.renren.com' to='" << toId << domainStr_ << "' "
		   << "id='" << id << "' type='result'>"
		   << "<x xmlns='http://jabber.org/protocol/muc#user'>" << checkContent << "</x>"
		   << "</presence>";
		return ss.str();
	}

	string StanzaStringFactory::checkRoomsError(Gid_t toId, string& id){
		int code = 404;	

		int key = getErrorCodeKey(code);
		stringstream ss;
		ss << toId << domainStr_;
		string toarg = ss.str();
		ss.str("");
        ss <<"<iq from='muc.m.renren.com' to='"<<toarg<<"' id='"<<id<<"' type='error'>"
           <<"<template id='6'>"
		   <<"<para>"<<code<<"</para>"
		   <<"<para id='"<<key<<"'/>"
           <<"</template></iq>";


//		ss << "<template id='4'>"
//		   << "<para>muc.m.renren.com</para>"
//		   << "<para>" << toarg << "</para>"
//		   << "<para>" << id << "</para>"
//		   << "<para>" << code << "</para>"
//		   << "<para id='" << key << "'/></template>";
		
		return ss.str();
	}

	string StanzaStringFactory::getSavedRoomItem(boost::shared_ptr<MucRoom>& roomPtr){
		LOG_DEBUG("StanzaStringFactory::getSavedRoomItem ==> ");
		Gid_t ownerId = roomPtr->getOwner();
		vector<Member> membersDetail = roomPtr->getMembersDetail();
		stringstream ss;
		long roomId = roomPtr->getId();
		string subject = roomPtr->getSubject();
		ss << "<item roomId='" << roomId << "' roomname='" << subject << "'>";
		for(vector<Member>::iterator it = membersDetail.begin(); it != membersDetail.end(); it++){
			if(it->id == ownerId){
				ss << "<item affiliation='owner' jid='" << it->id << "' name='" << it->name << "' url='" << it->url << "' headurl='" << it->headUrl << "'/>";
				continue;
			}
			ss << "<item affiliation='member' jid='" << it->id << "' name='" << it->name << "' url='" << it->url << "' headurl='" << it->headUrl << "'/>";
		}
		ss << "</item>";
		return ss.str();
	}

	string StanzaStringFactory::getSavedRooms(Gid_t toId, std::string& id, std::string& roomItemsStr){
		LOG_DEBUG("StanzaStringFactory::getSavedRooms ==> toId = " << toId);
		stringstream ss;
		ss << "<iq from='muc.m.renren.com' to='" << toId << domainStr_ << "' "
		   << "id='" << id << "' type='result'>"
		   << "<query xmlns='http://jabber.org/protocol/muc#user'>"
		   << "<contact prefix='" << prefix_ << "'>"
		   << roomItemsStr
		   << "</contact></query></iq>";

		return ss.str();
	}

};
};
