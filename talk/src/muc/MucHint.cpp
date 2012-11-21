#include "MucHint.h"
#include "MucErrorMessage.h"
#include "pugixml/pugixml.hpp"

#include "proxy/ProxyRegister.h"
#include "proxy/SixinUserInfoProxy.h"

#include "utils/TimeUtils.h"
#include "utils/XmlUtils.h"

#include <sstream>
#include <boost/lexical_cast.hpp>


using namespace std;
using namespace mtalk::muc;
using namespace mtalk::proxy;
using namespace mtalk::utils;
using namespace pugi;


namespace mtalk{
namespace muc{
	
	string MucHint::roomCreated2CreatorHint(int version, Gid_t  creatorId, long roomId, vector<Member>& initialMembers){
		LOG_DEBUG("MucHint::roomCreated2CreatorHint ==> creatorId = " << creatorId << " roomId = " << roomId);
		stringstream ss;
//		stringstream ss1;
		stringstream names1;
//		ss << "你创建了群聊，邀请了";
		int numNotSupportMuc = 0;
		int num = 0;

		for(vector<Member>::iterator it = initialMembers.begin(); it != initialMembers.end(); it++){
			if (it->id == creatorId){
				continue;
			}
			//查询安装情况
			bool userSupportMuc = MY_INSTANCE(ProxyRegister).getProxy<SixinUserInfoProxy>("sixinUserProxy")->supportMuc(it->id);
			if (!userSupportMuc){
				numNotSupportMuc++;
//				ss1 << it->name << " ";
//				names1 << it->name << " ";
			}
			if (num++ != 0){
				names1 << ", ";
			}
			names1 << it->name;
		}
		
		// 模板参数
		ss.str("");
		ss << roomId << "@muc.m.renren.com";
		string argfrom = ss.str();
		ss.str("");
		ss << creatorId << domainStr_;
		string argto = ss.str();
		ss.str("");
		string inviteesName = names1.str();	
        XmlUtils::xmlEncode(inviteesName);
		
		long time = getCurrentTimeMSec();
		ss <<"<message from='"<<argfrom<<"' to='"<<argto<<"' type='info' time='"<<time<<"'>"
		   <<"<body type='text' version='" << version << "'>"
           <<"<template id='10003' >"
           <<"<para id='20000'>"
           <<"<par>"<<inviteesName<<"</par>"
		   <<"</para></template>"
           <<"</body></message>";
            

//		ss << "<template id='1' time='" << time << "'>"
//		   << "<para>" << argfrom << "</para>"
//		   << "<para>" << argto << "</para>"
//		   << "<para>info</para>"
//		   << "<para>text</para>"
//		   << "<para>" << version << "</para>"
//		   << "<para id='20000'>"
//		   << "<par>" << inviteesName << "</par>"
//		   << "</para></template>";

		
		return ss.str();
	}

	string MucHint::roomCreated2InviteeHint(int version, Gid_t inviteeId, long roomId, Member creatorIdDetail, std::vector<Member>& initialMembers){
		LOG_DEBUG("MucHint::roomCreator2InviteeHint ==> creatorId = " << creatorIdDetail.id << "  inviteeId = " << inviteeId << "  roomId = " << roomId);
		
		stringstream ss;
		int i = 0; // i used to control last ","
		for(vector<Member>::iterator it = initialMembers.begin(); it != initialMembers.end(); it++){
			// skip invitee and room owner
			if ((it->id == inviteeId) || (it->id == creatorIdDetail.id)){
				i++;
				continue;
			}
			
			ss << "、" << it->name;
		}
		
		//模板参数
		string inviteesName = ss.str();
		string creatorName = creatorIdDetail.name;
		ss.str("");
		ss << roomId << "@muc.m.renren.com";
		string argfrom = ss.str();
		ss.str("");
		ss << inviteeId << domainStr_;
		string argto = ss.str();
		
		ss.str("");
	
	
		long time = getCurrentTimeMSec();
        XmlUtils::xmlEncode(creatorName);
        XmlUtils::xmlEncode(inviteesName);
        ss <<"<message from='"<<argfrom<<"' to='"<<argto<<"' type='info' time='"<<time<<"'>"
		   <<"<body type='text' version='" << version << "'>"
           <<"<template id='10003' >"
           <<"<para id='20005'>"
           <<"<par>"<<creatorName<<"</par>"
           <<"<par>"<<inviteesName<<"</par>"
		   <<"</para></template>"
           <<"</body></message>";



//		ss << "<template id='1' time='" << time << "'>"
//		   << "<para>" << argfrom << "</para>"
//		   << "<para>" << argto << "</para>"
//		   << "<para>info</para>"
//		   << "<para>text</para>"
//		   << "<para>" << version << "</para>"
//		   << "<para id='20005'>"
//		   << "<par>" << creatorName << "</par>"
//		   << "<par>" << inviteesName << "</par>"
//		   << "</para></template>";

		
		return ss.str();
	}
	
	
	string MucHint::leaveRoom2OthersHint(int version, Gid_t existingId, long roomId, Member exitorIdDetail){
		LOG_DEBUG("MucHint::leaveRoom2OthersHint ==> exitorId =  " << exitorIdDetail.id << "  roomId = " << roomId);
		stringstream ss;
		
		//模板参数
		string exitorName = exitorIdDetail.name;
		ss.str("");
		ss << roomId << "@muc.m.renren.com";
		string argfrom = ss.str();
		ss.str("");
		ss << existingId << domainStr_;
		string argto = ss.str();
		
		ss.str("");
        XmlUtils::xmlEncode(exitorName);

		long time = getCurrentTimeMSec();
        ss <<"<message from='"<<argfrom<<"' to='"<<argto<<"' type='info' time='"<<time<<"'>"
		   <<"<body type='text' version='"<<version<< "'>"
           <<"<template id='10003' >"
           <<"<para id='20004'>"
           <<"<par>"<<exitorName<<"</par>"
		   <<"</para></template>"
           <<"</body></message>";

//		ss << "<template id='1' time='" << time << "'>"
//		   << "<para>" << argfrom << "</para>"
//		   << "<para>" << argto << "</para>"
//		   << "<para>info</para>"
//		   << "<para>text</para>"
//		   << "<para>" << version << "</para>"
//		   << "<para id='20004'>"
//		   << "<par>" << exitorName << "</par>"
//		   << "</para></template>";

		return ss.str();
	}


	string MucHint::invitation2inviteeHint(int version, Gid_t inviteeId, long roomId, Member invitorDetail, vector<Member>& invitees, vector<Member>& allMemberDetail){
		LOG_DEBUG("MucHint::invitation2inviteeHint ==> invitorId = " << invitorDetail.id << " roomId = " << roomId);
		stringstream ss;
	//	ss << invitorDetail.name << "邀请你";
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
		string inviteesName = ss.str();

		stringstream ss2;
		int i = 0;
		bool hasExisting = false;
		for (it = allMemberDetail.begin(); it != allMemberDetail.end(); it++){
			//here the display ignore invitees and invitor
			if (inviteeSet.count(it->id) || it->id == invitorDetail.id){
				continue;
			}
			if (i++ != 0){		
				ss2 << ", ";
			}
			ss2 << it->name;
		}
		if (i != 0){
			hasExisting = true;
		}
		int configKey = hasExisting?20006:20005;
		
		
		string existingsName = ss2.str();
		string invitorName = invitorDetail.name;
		ss.str("");
		ss << roomId << "@muc.m.renren.com";
		string argfrom = ss.str();
		ss.str("");
		ss << inviteeId << domainStr_;
		string argto = ss.str();
	
		ss.str("");
	
		long time = getCurrentTimeMSec();

        XmlUtils::xmlEncode(invitorName);
        XmlUtils::xmlEncode(inviteesName);
        XmlUtils::xmlEncode(existingsName);

        ss <<"<message from='"<<argfrom<<"' to='"<<argto<<"' type='info' time='"<<time<<"'>"
		   <<"<body type='text' version='"<<version<< "'>"
           <<"<template id='10003' >"
           <<"<para id='"<<configKey<<"'>"
           <<"<par>"<<invitorName<<"</par>"
		   <<"<par>"<<inviteesName<<"</par>"
		   <<"<par>"<<existingsName<<"</par>"
		   <<"</para></template>"
           <<"</body></message>";


//		ss << "<template id='1' time='" << time << "'>"
//		   << "<para>" << argfrom << "</para>"
//		   << "<para>" << argto << "</para>"
//		   << "<para>info</para>"
//		   << "<para>text</para>"
//		   << "<para>" << version << "</para>"
//		   << "<para id='" << configKey << "'>"
//		   << "<par>" << invitorName << "</par>"
//		   << "<par>" << inviteesName << "</par>";
//		if(hasExisting){
//		   ss << "<par>" << existingsName << "</par>";
//		}
//		ss << "</para></template>";

		return ss.str();
	}


	string MucHint::invitation2SelfHint(int version, Gid_t invitorId, long roomId, vector<Member>& invitees){
		LOG_DEBUG("MucHint::invitation2SelfHint ==> invitorId = " << invitorId <<  "  roomId = " << roomId);
		stringstream ss;
		for(vector<Member>::iterator it = invitees.begin(); it != invitees.end(); it++){
			if (it != invitees.begin()){
				ss << ", ";
			}
			ss << it->name;
		}

		string inviteesName = ss.str();
		
		ss.str("");
		ss << roomId << "@muc.m.renren.com";
		string argfrom = ss.str();
		ss.str("");
		ss << invitorId << domainStr_;
		string argto = ss.str();
	
		ss.str("");
        XmlUtils::xmlEncode(inviteesName);
		
		long time = getCurrentTimeMSec();
        ss <<"<message from='"<<argfrom<<"' to='"<<argto<<"' type='info' time='"<<time<<"'>"
		   <<"<body type='text' version='"<<version<< "'>"
           <<"<template id='10003' >"
           <<"<para id='20007'>"
           <<"<par>"<<inviteesName<<"</par>"
		   <<"</para></template>"
           <<"</body></message>";


//		ss << "<template id='1' time='" << time << "'>"
//		   << "<para>" << argfrom << "</para>"
//		   << "<para>" << argto << "</para>"
//		   << "<para>info</para>"
//		   << "<para>text</para>"
//		   << "<para>" << version << "</para>"
//		   << "<para id='20007'>"
//		   << "<par>" << inviteesName << "</par>"
//		   << "</para></template>";

		return ss.str();
	}


	string MucHint::invitation2existingHint(int version, Gid_t existingId, long roomId, Member invitorIdDetail, vector<Member>& invitees){
		LOG_DEBUG("MucHint::invitation2existingHint ==> invitorId = " << invitorIdDetail.id << "existingId = " << existingId);
		stringstream ss;
		for (vector<Member>::iterator it = invitees.begin(); it != invitees.end(); it++){
			if (it != invitees.begin()){
				ss << ", ";
			}
			ss << it->name;
		}
		
		//模板参数
		string inviteesName = ss.str();
		string invitorName = invitorIdDetail.name;		
		ss.str("");
		ss << roomId << "@muc.m.renren.com";
		string argfrom = ss.str();
		ss.str("");
		ss << existingId << domainStr_;
		string argto = ss.str();
		
		ss.str("");
        XmlUtils::xmlEncode(invitorName);
        XmlUtils::xmlEncode(inviteesName);
		long time = getCurrentTimeMSec();
        ss <<"<message from='"<<argfrom<<"' to='"<<argto<<"' type='info' time='"<<time<<"'>"
		   <<"<body type='text' version='"<<version<< "'>"
           <<"<template id='10003' >"
           <<"<para id='20008'>"
           <<"<par>"<<invitorName<<"</par>"
           <<"<par>"<<inviteesName<<"</par>"
		   <<"</para></template>"
           <<"</body></message>";


//		ss << "<template id='1' time='" << time << "'>"
//		   << "<para>" << argfrom << "</para>"
//		   << "<para>" << argto << "</para>"
//		   << "<para>info</para>"
//		   << "<para>text</para>"
//		   << "<para>" << version << "</para>"
//		   << "<para id='20008'>"
//		   << "<par>" << invitorName << "</par>"
//		   << "<par>" << inviteesName << "</par>"
//		   << "</para></template>";


		return ss.str();
	}


	string MucHint::subjectChangeHint(int version, Gid_t toId, long roomId, Member& actorDetail, string& subjectStr){
		LOG_DEBUG("MucHint::subjectChangeHint ==> toId = " << toId << " roomId = " << roomId);
		
		//模板参数
		string actorName = actorDetail.name;
		stringstream ss;
		ss << roomId << "@muc.m.renren.com";
		string argfrom = ss.str();
		ss.str("");
		ss << toId << domainStr_;
		string argto = ss.str();
		
		ss.str("");
		XmlUtils::xmlEncode(actorName);
		long time = getCurrentTimeMSec();
	//      XmlUtils::xmlEncode(subjectStr);
		ss <<"<message from='"<<argfrom<<"' to='"<<argto<<"' type='info' time='"<<time<<"'>"
		    <<"<body type='text' version='"<<version<< "'>"
		    <<"<template id='10003' >"
		    <<"<para id='20009'>"
		    <<"<par>"<<actorName<<"</par>"
		    <<"<par>"<<subjectStr<<"</par>"
		    <<"</para></template>"
		    <<"</body></message>";


//		ss << "<template id='1' time='" << time << "'>"
//		   << "<para>" << argfrom << "</para>"
//		   << "<para>" << argto << "</para>"
//		   << "<para>info</para>"
//		   << "<para>text</para>"
//		   << "<para>" << version << "</para>"
//		   << "<para id='20009'>"
//		   << "<par>" << actorName << "</par>"
//		   << "<par>" << subjectStr << "</par>"
//		   << "</para></template>";


		return ss.str();
	}

	
	string MucHint::subjectChange2SenderHint(int version, Gid_t senderId, long roomId, string& subjectStr){
		LOG_DEBUG("MucHint::subjectChange2SenderHint ==> senderId = " << senderId << " roomId = " << roomId);
		
		stringstream ss;
		ss << roomId << "@muc.m.renren.com";
		string argfrom = ss.str();
		ss.str("");
		ss << senderId << domainStr_;
		string argto = ss.str();
		
		ss.str("");
		XmlUtils::xmlEncode(subjectStr);
		long time = getCurrentTimeMSec();
		ss <<"<message from='"<<argfrom<<"' to='"<<argto<<"' type='info' time='"<<time<<"'>"
		   <<"<body type='text' version='"<<version<< "'>"
		   <<"<template id='10003' >"
		   <<"<para id='20010'>"
		   <<"<par>"<<subjectStr<<"</par>"
		   <<"</para></template>"
		   <<"</body></message>";

//		ss << "<template id='1' time='" << time << "'>"
//		   << "<para>" << argfrom << "</para>"
//		   << "<para>" << argto << "</para>"
//		   << "<para>info</para>"
//		   << "<para>text</para>"
//		   << "<para>" << version << "</para>"
//		   << "<para id='20010'>"
//		   << "<par>" << subjectStr << "</par>"
//		   << "</para></template>";

		return ss.str();
	}


	string MucHint::kickOccupant2kickeeHint(int version, Gid_t kickId, long roomId, Member actorDetail){
		LOG_DEBUG("MucHint::kickOccupant2kickeeHint ==> kickId = " << kickId << " roomId = " << roomId);
		
		string actorName = actorDetail.name;
		stringstream ss;
		ss << roomId << "@muc.m.renren.com";
		string argfrom = ss.str();
		ss.str("");
		ss << kickId << domainStr_;
		string argto = ss.str();
		
		ss.str("");
        XmlUtils::xmlEncode(actorName);
		long time = getCurrentTimeMSec();
        ss <<"<message from='"<<argfrom<<"' to='"<<argto<<"' type='info' time='"<<time<<"'>"
		   <<"<body type='text' version='"<<version<< "'>"
           <<"<template id='10003' >"
           <<"<para id='20011'>"
           <<"<par>"<<actorName<<"</par>"
		   <<"</para></template>"
           <<"</body></message>";

//		ss << "<template id='1' time='" << time << "'>"
//		   << "<para>" << argfrom << "</para>"
//		   << "<para>" << argto << "</para>"
//		   << "<para>info</para>"
//		   << "<para>text</para>"
//		   << "<para>" << version << "</para>"
//		   << "<para id='20011'>"
//		   << "<par>" << actorName << "</par>"
//		   << "</para></template>";

		return ss.str();
	}


	string MucHint::kickOccupant2kickerHint(int version, Gid_t actorId, long roomId, std::vector<Member>& kickeesDetail){
		LOG_DEBUG("MucHint::kickOccupant2kickerHint ==> actorId = " << actorId << " roomId = " << roomId);
		stringstream ss;
		for (vector<Member>::iterator it = kickeesDetail.begin(); it != kickeesDetail.end(); it++){
			if (it != kickeesDetail.begin()){
				ss << ", ";
			}
			ss << it->name;
		}

		//模板参数
		string kickeesName = ss.str();
		ss.str("");
		ss << roomId << "@muc.m.renren.com";
		string argfrom = ss.str();
		ss.str("");
		ss << actorId << domainStr_;
		string argto = ss.str();
		
		ss.str("");
        XmlUtils::xmlEncode(kickeesName);
		long time = getCurrentTimeMSec();
        ss <<"<message from='"<<argfrom<<"' to='"<<argto<<"' type='info' time='"<<time<<"'>"
		   <<"<body type='text' version='"<<version<< "'>"
           <<"<template id='10003' >"
           <<"<para id='20012'>"
           <<"<par>"<<kickeesName<<"</par>"
		   <<"</para></template>"
           <<"</body></message>";

//		ss << "<template id='1' time='" << time << "'>"
//		   << "<para>" << argfrom << "</para>"
//		   << "<para>" << argto << "</para>"
//		   << "<para>info</para>"
//		   << "<para>text</para>"
//		   << "<para>" << version << "</para>"
//		   << "<para id='20012'>"
//		   << "<par>" << kickeesName << "</par>"
//		   << "</para></template>";


		return ss.str();
	}


	string MucHint::kickOccupant2existingHint(int version, Gid_t existingId, long roomId, Member actorIdDetail, vector<Member> kickeesDetail){
		LOG_DEBUG("MucHint::kickOccupant2existingHint ==> actorId = " << actorIdDetail.id << " roomId = " << roomId);
		
		stringstream ss;
		for(vector<Member>::iterator it = kickeesDetail.begin(); it != kickeesDetail.end(); it++){
			if (it != kickeesDetail.begin()){
				ss << ", ";
			}
			ss << it->name;	
		}

		//模板参数
		string kickeesName = ss.str();
		string actorName = actorIdDetail.name;
		ss.str("");
		ss << roomId << "@muc.m.renren.com";
		string argfrom = ss.str();
		ss.str("");
		ss << existingId << domainStr_;
		string argto = ss.str();
		
		ss.str("");
		long time = getCurrentTimeMSec();
        XmlUtils::xmlEncode(actorName);
        XmlUtils::xmlEncode(kickeesName);
        ss <<"<message from='"<<argfrom<<"' to='"<<argto<<"' type='info' time='"<<time<<"'>"
		   <<"<body type='text' version='"<<version<< "'>"
           <<"<template id='10003' >"
           <<"<para id='20013'>"
           <<"<par>"<<actorName<<"</par>"
           <<"<par>"<<kickeesName<<"</par>"
		   <<"</para></template>"
           <<"</body></message>";
  

//		ss << "<template id='1' time='" << time << "'>"
//		   << "<para>" << argfrom << "</para>"
//		   << "<para>" << argto << "</para>"
//		   << "<para>info</para>"
//		   << "<para>text</para>"
//		   << "<para>" << version << "</para>"
//		   << "<para id='20013'>"
//		   << "<par>" << actorName << "</par>"
//		   << "<par>" << kickeesName << "</par>"
//		   << "</para></template>";


		return ss.str();
	}


	string MucHint::hexieStanzaHint(Gid_t senderId, long roomId, string& chatStr){
		LOG_DEBUG("MucHint::hexieStanza ==> senderId = " << senderId << " roomId" << roomId);
		string msg = utils::XmlUtils::getPartWorlds(chatStr, 8);
		stringstream ss;
		if (chatStr.size() > 24){
			msg.append("...");
		}

		ss.str("");
		ss << roomId << "@muc.m.renren.com";
		string argfrom = ss.str();
		ss.str("");
		ss << senderId << domainStr_;
		string argto = ss.str();
		
		ss.str("");

		long time = getCurrentTimeMSec();
        XmlUtils::xmlEncode(msg);
        ss <<"<message from='"<<argfrom<<"' to='"<<argto<<"' type='info' time='"<<time<<"'>"
		   <<"<body type='text' version=''>"
           <<"<template id='10003' >"
           <<"<para id='20014'>"
           <<"<par>"<<msg<<"</par>"
		   <<"</para></template>"
           <<"</body></message>";

  
//		ss << "<template id='1' time='" << time << "'>"
//		   << "<para>" << argfrom << "</para>"
//		   << "<para>" << argto << "</para>"
//		   << "<para>info</para>"
//		   << "<para>text</para>"
//		   << "<para id='20014'>"
//		   << "<par>" << msg << "</par>"
//		   << "</para></template>";

		return ss.str();
	}


	string MucHint::roomDestroyed2MemberHint(int version, Gid_t toId, long roomId){
		LOG_DEBUG("MucHint::roomDestroyed2MemberHint ==>");
		
		stringstream ss;	
		ss << roomId << "@muc.m.renren.com";
		string argfrom = ss.str();
		ss.str("");
		ss << toId << domainStr_;
		string argto = ss.str();
		
		ss.str("");
		long time = getCurrentTimeMSec();
		ss <<"<message from='"<<argfrom<<"' to='"<<argto<<"' type='info' time='"<<time<<"'>"
		   <<"<body type='text' version='"<<version<< "'>"
		   <<"<template id='10003' >"
		   <<"<para id='20015'>"
		   <<"</para></template>"
		   <<"</body></message>";

//		ss << "<template id='1' time='" << time << "'>"
//		   << "<para>" << argfrom << "</para>"
//		   << "<para>" << argto << "</para>"
//		   << "<para>info</para>"
//		   << "<para>text</para>"
//		   << "<para>" << version << "</para>"
//		   << "<para id='20015'/>"
//		   << "</template>";


		return ss.str();
	}


	string MucHint::roomNotExistHint(int version, Gid_t toId, long roomId){
		LOG_DEBUG("MucHint::roomNotExistHint ==> toId = " << toId << " roomId = " << roomId);

		stringstream ss;
		ss << roomId << "@muc.m.renren.com";
		string argfrom = ss.str();
		ss.str("");
		ss << toId << domainStr_;
		string argto = ss.str();
		
		ss.str("");
		long time = getCurrentTimeMSec();
        ss <<"<message from='"<<argfrom<<"' to='"<<argto<<"' type='info' time='"<<time<<"'>"
		   <<"<body type='text' version='"<<version<< "'>"
           <<"<template id='10003' >"
           <<"<para id='20015'>"
		   <<"</para></template>"
           <<"</body></message>";


//		ss << "<template id='1' time='" << time << "'>"
//		   << "<para>" << argfrom << "</para>"
//		   << "<para>" << argto << "</para>"
//		   << "<para>info</para>"
//		   << "<para>text</para>"
//		   << "<para>" << version << "</para>"
//		   << "<para id='20015'/>"
//		   << "</template>";


		return ss.str();

	}

};
};
