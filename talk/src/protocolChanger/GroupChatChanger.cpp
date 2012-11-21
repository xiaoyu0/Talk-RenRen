#include "ProtocolChanger.h"
#include "utils/MyLogger.h"
#include "xmpp/JID.h"

#include <vector>
#include <string>
#include <map>


#define  COME_CONTENT  "给你发来"
#define  INFO_CONTENT "，您当前版本过低，无法跟其进行聊天，请安装最新私信版本：mdown.renren.com/soft/sixinclientshow.do"


using namespace pugi;
using namespace std;
using namespace mtalk::proxy;
using namespace mtalk::xmpp;

namespace mtalk{
namespace protocolChang{

    bool GroupChatChanger::upToGidProcess(long fromId, xml_node& node){
        LOG_DEBUG("GroupChatChanger::toGidProcess ==> fromId = " << fromId);

        //转fromId
        stringstream ss;
        ss << fromId;
        string fromIdStr = ss.str();
        long fromSixinId = bindServiceProxyPtr_->getSixinId(fromIdStr, com::renren::sixin::account::RenRenID);
        if(-1 == fromSixinId){
            LOG_ERROR("GroupChatChanger::upToGidProcess ==> bindServiceProxy failure, return fromIdSixin == -1");
            return false;
        }

        ss.str("");
        ss << fromSixinId << "@talk.sixin.com";
        string newFromAttr = ss.str();
        node.attribute("from").set_value(newFromAttr.c_str());

        string stanzaRoot = node.name();
        if(stanzaRoot == "message"){
            //invitation
            xml_node xNode = node.child("x");
            if(!xNode.empty()){
                xml_node invite = xNode.child("invite");
                if(!invite.empty()){
                    return upSendInvitation(fromId, node);
                }
            }
            return true;
        }else if (stanzaRoot == "presence"){
            //create room
            xml_node xNode = node.child("x");
            if(!xNode.empty()){
                xml_node invite = xNode.child("invite");
                if(!invite.empty()){
                    return upCreateRoom(fromId, node);
                }
            }
            return true;
        }else if (stanzaRoot == "iq"){
            string iqType = node.attribute("type").value();
            if(iqType == "set"){
                xml_node query = node.child("query");
                if(!query.empty()){
                    if(!query.child("item").empty()){
                        return upKickOccupant(fromId, node);
                    }
                }
            }
            return true;
        }else{
            // error
            return true;
        }
    }

    bool GroupChatChanger::downToUidProcess(long toId, xml_node& node){
        LOG_DEBUG("GroupChatChanger::downToUidProcess ==> toId = " << toId);
        
        //转toId
        string torenrenIdStr = bindServiceProxyPtr_->getBundAccountId(toId, com::renren::sixin::account::RenRenID);
        if(torenrenIdStr == ""){
            LOG_ERROR("GroupChatChanger::downToUidProcess ==> bindServiceProxy failure, return torenrenIdStr == \"\"");
            return false;
        }
        string newToStr = torenrenIdStr + "@talk.m.renren.com";
        node.attribute("to").set_value(newToStr.c_str());
        
        //转from中的resource,即群成员id    
        string fromStr = node.attribute("from").value();
        JID fromjid(fromStr);
        string roomMemberGidStr = fromjid.getSessionId();
        //有resource则转
        if(!roomMemberGidStr.empty()){
            long roomMemberGid;
            try{
                roomMemberGid = boost::lexical_cast<long>(roomMemberGidStr);
            }
            catch(...){
                LOG_DEBUG("GroupChatChanger::downToUidProcess ==> toId = " << toId);
                return false;
            }

            //得到新属性，且在node中替换
            string roomMemberUidStr = bindServiceProxyPtr_->getBundAccountId(roomMemberGid, com::renren::sixin::account::RenRenID);
            fromjid.setSessionId(roomMemberUidStr);
            node.attribute("from").set_value(fromjid.toString().c_str());
			

			LOG_DEBUG("GroupChatChanger::downToUidProcess ==> toId = " << toId << "  resourceId after transfer = " << roomMemberUidStr);
			//如果得到的resource为这个，则转为私信助手的feed提醒
			if(roomMemberUidStr == "478849448"){

				stringstream ss;
				node.print(ss, "\t", pugi::format_raw);
				string nodeStr = ss.str();

				LOG_INFO("GroupChatChanger::downToUidProcess ==> toId = " << toId << "  processPureSixinAccount: before processPureSixinAccount stanza = " << nodeStr);
				processPureSixinAccount(node);

				ss.str("");
				node.print(ss, "\t", pugi::format_raw);
				nodeStr = ss.str();

				LOG_INFO("GroupChatChanger::downToUidProcess ==> toId = " << toId << "  processPureSixinAccount: after processPureSixinAccount stanza = " << nodeStr);
			}

        }

        string stanzaRoot = node.name();
        if(stanzaRoot == "message"){

        }else if(stanzaRoot == "presence"){
            xml_attribute idAttr = node.attribute("id");
			xml_attribute typeAttr = node.attribute("type");
            if(idAttr.empty() && typeAttr.empty()){
                xml_node xNode = node.child("x");
                if(!xNode.empty()){

					/*// room destroyed to member	
					if(xNode.child("destroy")){
						LOG_DEBUG("GroupChatChanger::downToUidProcess ==> <destroy/> contained , room destroryed stanza");
						return true;
					}*/
					
					// down Invitation(to invitee, to existing)	
					xml_node invite = xNode.child("invite");
                    if(!invite.empty()){
						return downInvitation(toId, node);
                    }
                    //downCreateRoom2Invitee
                    if(!xNode.child("item").empty()){
                        return downCreateRoom2Invitee(toId, node);
                    }

                    
                }
            }

			string presenceType = typeAttr.value();
            if(presenceType == "unavailable"){
                xml_node xNode = node.child("x");
                if(!xNode.empty()){
                   
					// room destroyed to member	
					if(xNode.child("destroy")){
						LOG_DEBUG("GroupChatChanger::downToUidProcess ==> <destroy/> contained , room destroryed stanza");
						return true;
					}

					xml_node item = xNode.child("item");
                    if(!item.empty()){
                        xml_node actor = item.child("actor");
                        if(actor.empty()){
							string affiliationStr = item.attribute("affiliation").value();
							if(affiliationStr == "outcast"){
                            	//kickOccupant to existing 
                            	return downKickOccupant2Existing(toId, node);   
							}else{
								// leave room
				     			return downLeaveRoom(toId, node);    
							} 
                        }else{
                            //kickOccupant to kickee 
                            return downKickOccupant2Kickee(toId, node);
                        }
                    }
                }
                return true;
            }

            return true;
        }else if(stanzaRoot == "iq"){
            xml_node query = node.child("query");
            if(!query.empty()){

				//检查是不是踢人的回执, 这种不用再解析内部转换了
				string xmlnsStr = query.attribute("xmlns").value(); 
				if(xmlnsStr == "http://jabber.org/protocol/muc#owner"){
					return true;
				}

                xml_node contact = query.child("contact");
                if(contact.empty()){
                    //query room
                    return downQueryRoom(toId, node);
                }else{
                    //getAllRoomsInfo
                    return downGetAllRoomsInfo(toId, node);
                }
            }
            return true;
        }else{
            // error
            return true;
        }
        return true;
    }

    bool GroupChatChanger::upSendInvitation(long fromId, xml_node& node){
        LOG_DEBUG("GroupChatChanger::upSendInvitation ==> fromId = " << fromId);
        vector<string> inviteeStrVec;
        xml_node xNode = node.child("x");
        for(xml_node invite = xNode.child("invite"); !invite.empty(); invite = invite.next_sibling("invite")){
            string inviteeStr = invite.attribute("to").value();
            inviteeStrVec.push_back(inviteeStr);
			LOG_DEBUG("GroupChatChanger::upSendInvitation ==> invitee = " << inviteeStr);
        }
		if(inviteeStrVec.empty()){
			return true;
		}


        map<string, long> sixinIdMap = bindServiceProxyPtr_->getSixinIdMap(inviteeStrVec, com::renren::sixin::account::RenRenID);
        if(sixinIdMap.size() == 0){
			LOG_DEBUG("GroupChatChanger::upSendInvitation ==> fromId=" << fromId << "sixinIdMap.size() == 0, return false");
            return false;
        }

		for(map<string, long>::iterator it = sixinIdMap.begin(); it != sixinIdMap.end(); it++){
			LOG_DEBUG("GroupChatChanger::upSendInvitaion ==> key = " << it->first << "  value = " << it->second);
		}
        
        //转换    
        for(xml_node invite = xNode.child("invite"); !invite.empty(); invite = invite.next_sibling("invite")){
            string inviteeStr = invite.attribute("to").value();
            if(!sixinIdMap.count(inviteeStr)){
				LOG_DEBUG("GroupChatChanger::upSendInvitation ==> don't find invitee in Map , invitee = " << inviteeStr);
                return false;
            }

            std::string str;
            try {

                str=boost::lexical_cast<string>(sixinIdMap[inviteeStr]);

            } catch( boost::bad_lexical_cast& e){

                str="000";
            }
            invite.attribute("to").set_value(str.c_str());
        }
        return true;
    }

    bool GroupChatChanger::upCreateRoom(long fromId, xml_node& node){
        LOG_DEBUG("GroupChatChanger::upCreateRoom ==> fromId = " << fromId);
        
        vector<string> inviteeStrVec;
        xml_node xNode = node.child("x");
        if(xNode.empty()){
            return true;    
        }
        LOG_DEBUG("GroupChatChanger::before for ======");
        for(xml_node invite = xNode.child("invite"); !invite.empty(); invite = invite.next_sibling("invite")){
            string inviteeStr = invite.attribute("to").value();
            inviteeStrVec.push_back(inviteeStr);
			LOG_DEBUG("GroupChatChanger::upCreateRoom ==> invitee = " << inviteeStr); 
        }
		LOG_DEBUG("GroupChatChanger::upCreateRoom ==> vector size = " << inviteeStrVec.size());

        LOG_DEBUG("GroupChatChanger::after for ======");
        map<string, long> sixinIdMap = bindServiceProxyPtr_->getSixinIdMap(inviteeStrVec, com::renren::sixin::account::RenRenID);
        LOG_DEBUG("GroupChatChanger::after bindSerivceProxyPtr_-> ======");
        if(sixinIdMap.size() == 0){
            return false;
        }
        
		// debug, 打出map的key,value	
		for(map<string, long>::iterator it = sixinIdMap.begin(); it != sixinIdMap.end(); it++){
			LOG_DEBUG("GroupChatChanger::upSendInvitaion ==> key = " << it->first << "  value = " << it->second);
		}
        

        //转换    
        for(xml_node invite = xNode.child("invite"); !invite.empty(); invite = invite.next_sibling()){
            string inviteeStr = invite.attribute("to").value();
            if(!sixinIdMap.count(inviteeStr)){
                return false;
            }

            std::string str;

            try {

                str=boost::lexical_cast<string>(sixinIdMap[inviteeStr]);

            } catch( boost::bad_lexical_cast& e){

                str="000";
            }

            invite.attribute("to").set_value(str.c_str());

//            invite.attribute("to").set_value(sixinIdMap[inviteeStr]);
        }
        return true;
    }


    bool GroupChatChanger::upKickOccupant(long fromId, xml_node& node){
        LOG_DEBUG("GroupChatChanger::upKickOccupant ==> fromId = " << fromId);
        
        vector<string> kickIdStrVec;
        xml_node query = node.child("query");
        for(xml_node item = query.child("item"); !item.empty(); item = item.next_sibling()){
            string kickIdStr = item.attribute("nick").value();    
            kickIdStrVec.push_back(kickIdStr);
        }

        //转换
        map<string, long> sixinIdMap = bindServiceProxyPtr_->getSixinIdMap(kickIdStrVec, com::renren::sixin::account::RenRenID);
        if(sixinIdMap.size() == 0){
            return false;
        }

        //替换
        for(xml_node item = query.child("item"); !item.empty(); item = item.next_sibling()){
            string kickIdStr = item.attribute("nick").value();
            if(!sixinIdMap.count(kickIdStr)){
                return false;
            }

            std::string str;
            try {

                str=boost::lexical_cast<string>(sixinIdMap[kickIdStr]);

            } catch( boost::bad_lexical_cast& e){

                str="000";
            }


            item.attribute("nick").set_value(str.c_str());
        }
        return true;
    }


    bool GroupChatChanger::downCreateRoom2Invitee(long toId, xml_node& node){
        LOG_DEBUG("GroupChatChanger::downCreateRoom2Invitee ==> toId = " << toId);
        vector<long> memberIdVec;
        xml_node xNode = node.child("x");
        for(xml_node item = xNode.child("item"); !item.empty(); item = item.next_sibling()){
			string memberIdStr = item.attribute("jid").value();
            long memberId;
			try{
            	memberId = boost::lexical_cast<long>(memberIdStr);
			}catch(...){
				LOG_ERROR("GroupChatChanger::downCreateRoom2Invitee => boost::lexical_cast error");
			}
            memberIdVec.push_back(memberId);
        }

        //转换
        map<long, string> accountIdMap = bindServiceProxyPtr_->getBundAccountIdMap(memberIdVec, com::renren::sixin::account::RenRenID);
        if(accountIdMap.size() == 0){
            return false;
        }

        //替换
        for(xml_node item = xNode.child("item"); !item.empty(); item = item.next_sibling()){

			string memberIdStr = item.attribute("jid").value();
            long memberId = boost::lexical_cast<long>(memberIdStr);

            if(!accountIdMap.count(memberId)){
                return false;
            }
            item.attribute("jid").set_value(accountIdMap[memberId].c_str());
        }        
        return true;
    }

    bool GroupChatChanger::downInvitation(long toId, pugi::xml_node& node){
        LOG_DEBUG("GroupChatChanger::downInvitation2Invitee ==> toId = " << toId);
        vector<long> memberIdVec;
        xml_node xNode = node.child("x");
        for(xml_node item = xNode.child("item"); !item.empty(); item = item.next_sibling()){
			string memberIdStr = item.attribute("jid").value();
            long memberId = boost::lexical_cast<long>(memberIdStr);

            memberIdVec.push_back(memberId);
        }

        //转换
        map<long, string> accountIdMap = bindServiceProxyPtr_->getBundAccountIdMap(memberIdVec, com::renren::sixin::account::RenRenID);
        if(accountIdMap.size() == 0){
            return false;
        }
		
		//替换<invite>里的from
		xml_node invite = xNode.child("invite");
		if(!invite.empty()){
			string fromStr = invite.attribute("from").value();
			JID from(fromStr);
			long invitorId = from.getUserId();	
        	string renrenIdStr = bindServiceProxyPtr_->getBundAccountId(invitorId, com::renren::sixin::account::RenRenID);
			LOG_DEBUG("GroupChatChanger::downInvitation ==> invitorId(sixin) = " << invitorId << "  invitorId(renren) = " << renrenIdStr);	
			
			//这里如果from取失败了，不认为失败，因为客户端不太关心这个值	
			stringstream ss;
			ss << renrenIdStr << "@talk.m.renren.com";
			string newFromStr = ss.str();
			invite.attribute("from").set_value(newFromStr.c_str());
			
		}

        //替换
        for(xml_node item = xNode.child("item"); !item.empty(); item = item.next_sibling()){
            string memberIdStr = item.attribute("jid").value();
            long memberId = boost::lexical_cast<long>(memberIdStr);
			
			if(!accountIdMap.count(memberId)){
                return false;
            }
            item.attribute("jid").set_value(accountIdMap[memberId].c_str());
        }        

        return true;
    }
        
    /*bool GroupChatChanger::downInvitation2Existing(int toId, pugi::xml_node& node){
        LOG_DEBUG("GroupChatChanger::downInvitation2Existing ==> toId = " << toId);
        

        return true;
    }*/
    
    bool GroupChatChanger::downKickOccupant2Kickee(long toId, pugi::xml_node& node){
        LOG_DEBUG("GroupChatChanger::downKickOccupant2Kickee ==> toId = " << toId);
        
        xml_node actor = node.first_element_by_path("presence/x/item/actor");
        if(actor.empty()){
            return true;
        }

		string actorIdStr = actor.attribute("nick").value();
        long actorId = boost::lexical_cast<long>(actorIdStr);
			
        string accountIdStr = bindServiceProxyPtr_->getBundAccountId(actorId, com::renren::sixin::account::RenRenID);
        actor.attribute("nick").set_value(accountIdStr.c_str());
        return true;
    }
        
    bool GroupChatChanger::downKickOccupant2Existing(long toId, pugi::xml_node& node){
        LOG_DEBUG("GroupChatChanger::downKickOccupant2Existing ==> toId = " << toId);
        
        vector<long> kickeeIdVec;
        xml_node xNode = node.child("x");
        for(xml_node item = xNode.child("item"); !item.empty(); item = item.next_sibling("item")){
			string kickIdStr = item.attribute("nick").value();
            long kickId = 0;
			try{
            	kickId = boost::lexical_cast<long>(kickIdStr);
			}catch(exception& e){
				LOG_ERROR("GroupChatChanger::downKickOccupant2Existing ==> boost:lexical_cast error e = " << e.what());
			}

            kickeeIdVec.push_back(kickId);
        }

        //转换
        map<long, string> accountIdMap = bindServiceProxyPtr_->getBundAccountIdMap(kickeeIdVec, com::renren::sixin::account::RenRenID);
        if(accountIdMap.size() == 0){
            return false;
        }

        //替换
        for(xml_node item = xNode.child("item"); !item.empty(); item = item.next_sibling("item")){

			string kickIdStr = item.attribute("nick").value();
            long kickId = boost::lexical_cast<long>(kickIdStr);

            if(!accountIdMap.count(kickId)){
                return false;
            }
            item.attribute("nick").set_value(accountIdMap[kickId].c_str());
        }        

        return true;
    }
        
    bool GroupChatChanger::downLeaveRoom(long toId, pugi::xml_node& node){
        LOG_DEBUG("GroupChatChanger::downLeaveRoom ==> toId = " << toId);
        xml_node item = node.first_element_by_path("/presence/x/item");
        if(item.empty()){
			LOG_DEBUG("GroupChatChanger::downLeaveRoom ==> item node not exist , toId = " << toId);
            return true;
        }

		string leaveIdStr = item.attribute("jid").value();
        long leaveId = boost::lexical_cast<long>(leaveIdStr);

        string accountIdStr = bindServiceProxyPtr_->getBundAccountId(leaveId, com::renren::sixin::account::RenRenID);
        item.attribute("jid").set_value(accountIdStr.c_str());
    
        return true;
    }
        
    bool GroupChatChanger::downQueryRoom(long toId, pugi::xml_node& node){
        LOG_DEBUG("GroupChatChanger::downQueryRoom ==> toId = " << toId);
        
        vector<long> memberIdVec;
        xml_node query = node.child("query");
        for(xml_node item = query.child("item"); !item.empty(); item = item.next_sibling()){
            string memberIdStr = item.attribute("jid").value();
            long memberId = boost::lexical_cast<long>(memberIdStr);
			
			memberIdVec.push_back(memberId);
        }
		//不需要转换
		if(memberIdVec.size() == 0){
			return true;
		}		

        //转换
        map<long, string> accountIdMap = bindServiceProxyPtr_->getBundAccountIdMap(memberIdVec, com::renren::sixin::account::RenRenID);
        if(accountIdMap.size() == 0){
            return false;
        }

        //替换
        for(xml_node item = query.child("item"); !item.empty(); item = item.next_sibling()){
            string memberIdStr = item.attribute("jid").value();
            long memberId = boost::lexical_cast<long>(memberIdStr);
			
			if(!accountIdMap.count(memberId)){
                return false;
            }
            item.attribute("jid").set_value(accountIdMap[memberId].c_str());
        }

        return true;
    }
        
    bool GroupChatChanger::downGetAllRoomsInfo(long toId, pugi::xml_node& node){
        LOG_DEBUG("GroupChatChanger::downGetAllRoomsInfo ==> toId = " << toId);
        
        xml_node query = node.child("query");
        
        for(xml_node itemNode = query.child("item"); !itemNode.empty(); itemNode = itemNode.next_sibling()){
            vector<long> memberIdVec;
            for(xml_node item = itemNode.child("item"); !item.empty(); item = item.next_sibling()){
				string memberIdStr = item.attribute("jid").value();
            	long memberId = boost::lexical_cast<long>(memberIdStr);
			
                memberIdVec.push_back(memberId);
            }

            //转换
            map<long, string> accountIdMap = bindServiceProxyPtr_->getBundAccountIdMap(memberIdVec, com::renren::sixin::account::RenRenID);
            if(accountIdMap.size() == 0){
                return false;
            }

            //替换
            for(xml_node item = query.child("item"); !item.empty(); item = item.next_sibling()){
				string memberIdStr = item.attribute("jid").value();
            	long memberId = boost::lexical_cast<long>(memberIdStr);

                if(!accountIdMap.count(memberId)){
                    return false;
                }
                item.attribute("jid").set_value(accountIdMap[memberId].c_str());
            }


        }
        
        return true;
    }
};
};
