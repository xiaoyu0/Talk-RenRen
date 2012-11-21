#include "ProtocolChanger.h"
#include "utils/Singleton.h"

#include <boost/lexical_cast.hpp>
#include "utils/MyLogger.h"
#include "utils/TimeUtils.h"

#define  COME_CONTENT  "给你发来"
#define  INFO_CONTENT "，您当前版本过低，无法跟其进行聊天，请安装最新私信版本：http://mdown.renren.com/soft/sixinclientshow.do"


using namespace mtalk::utils;
using namespace std;
namespace mtalk{
    namespace protocolChang{

            Changer::~Changer(){}
            Changer::Changer(){
                    bindServiceProxyPtr_ = MY_INSTANCE(proxy::ProxyRegister).getProxy<proxy::BindServiceProxy>("accountBindServiceProxy");
                    LOG_INFO("bindServiceProxyPtr_::bindServiceProxyPtr_ constructor ");
                    if(!bindServiceProxyPtr_.get()){
                            LOG_ERROR("accountBindServiceProxy get failure");
                    }
            }


            long  Changer::getRenRenIdBySiXinId(long sixinId){
                    LOG_DEBUG("Changer::getRenRenIdBySiXinId ==> begin  sixinId = "<<sixinId);

                    string  renrenIdStr = bindServiceProxyPtr_->getBundAccountId(sixinId,com::renren::sixin::account::RenRenID);
                    if(renrenIdStr.empty()){
                            return -1 ;
                    }

                    long renrenId = -1 ; 
                    try{
                            renrenId = boost::lexical_cast<long>(renrenIdStr);
                    }catch(...){
                    LOG_DEBUG("Changer::getRenRenIdBySiXinId ==> failue  sixinId= "<<sixinId);
                            return -1;
                    }
                    LOG_DEBUG("Changer::getRenRenIdBySiXinId ==> return sixinId = "<<sixinId<<"  renrenId = "<<renrenId);
                    return renrenId;
            };


            long  Changer::getSixinIdByRenRenId(long renrenId){
                    LOG_DEBUG("Changer::getSixinIdByRenRenId ==> begin  renrenId = "<<renrenId);
                    string renrenIdStr ;
                    try{
                            renrenIdStr = boost::lexical_cast<string>(renrenId);
                    }catch(...){
                    LOG_DEBUG("Changer::getSixinIdByRenRenId ==> failue  renrenId = "<<renrenId);
                            return -1 ;
                    }
                    long sixinId = bindServiceProxyPtr_->getSixinId(renrenIdStr, com::renren::sixin::account::RenRenID);
                    LOG_DEBUG("Changer::getSixinIdByRenRenId ==> return renrenId = "<<renrenId<<"  sixinId = "<<sixinId);
                    return sixinId;

            };


			std::map<long, long> Changer::getRenRenIdSeqBySiXinIds(std::vector<long> sixinIds){
					LOG_DEBUG("Changer::getRenRenIdSeqBySiXinIds ==> begin  sixinIdCount = "<<sixinIds.size());
					std::map<long, std::string> sixinId2RenRenIdsMap;
					std::map<long, long> sixinIds2RenRenIdsMap1;
					sixinId2RenRenIdsMap = bindServiceProxyPtr_->getBundAccountIdMap(sixinIds, com::renren::sixin::account::RenRenID);
					map<long, string>::iterator it = sixinId2RenRenIdsMap.begin();
					for(; it != sixinId2RenRenIdsMap.end() ; it++){
							long id = 0;
							try{
									id = boost::lexical_cast<long>(it->second);
							}catch(...){
									LOG_WARN("Changer::getRenRenIdSeqBySiXinIds ==> cast exception ");
											continue;
							}
							sixinIds2RenRenIdsMap1[it->first] = id ;


					}
					return sixinIds2RenRenIdsMap1;
			}

			std::map<long, long> Changer::getSiXinIdSeqByRenRenIds(std::vector<long> renrenIds){
					LOG_DEBUG("Changer::getSiXinIdSeqByRenRenIds ==> begin  renrenIdCount = "<<renrenIds.size());
					std::vector<string> renrenStrIds;
					std::vector<long>::iterator it = renrenIds.begin();
					for(; it != renrenIds.end(); it++){
							string id;
							try{
									id = boost::lexical_cast<string>(*it);
							}catch(...){
									LOG_WARN("Changer::getSiXinIdSeqByRenRenIds==> cast exception ");
									continue;
							}
									renrenStrIds.push_back(id);
					}
					std::map<string, long> renrenId2SiXinIdsMap;
					std::map<long, long> renrenId2SiXinIdsMap1;
					renrenId2SiXinIdsMap = bindServiceProxyPtr_->getSixinIdMap(renrenStrIds, com::renren::sixin::account::RenRenID);
					map<string, long>::iterator iter = renrenId2SiXinIdsMap.begin();
					for(; iter != renrenId2SiXinIdsMap.end() ; iter++){
							long id = 0;
							try{
									id = boost::lexical_cast<long>(iter->first);
							}catch(...){
									LOG_WARN("Changer::getRenRenIdSeqBySiXinIds ==> cast exception ");
											continue;
							}
							renrenId2SiXinIdsMap1[id] = iter->second;
					}
					return renrenId2SiXinIdsMap1;

			}




            com::renren::sixin::account::BindAccountEnum   Changer::getUserAccountType(const mtalk::xmpp::JID& jid){
                    if(strcmp(jid.getEndpoint().c_str(), "talk.m.renren.com") == 0){
                            return  com::renren::sixin::account::RenRenID;
                    }
                    return  com::renren::sixin::account::RenRenID;
            }





            long  ChatChanger::changToSixin(const std::string& clientDomin, pugi::xml_node& xmlNode, long savedSixin){

                    pugi::xml_attribute  fromAttribute = xmlNode.attribute("from");
                    pugi::xml_attribute  toAttribute = xmlNode.attribute("to");

                    long sixinId = 0 ;
                    if(fromAttribute){

                            mtalk::xmpp::JID from(fromAttribute.value());        

                            LOG_DEBUG("ChatChanger::changToSixin ==> begin fromId = "<<fromAttribute.value()<<" to = "<<toAttribute.value());

                            long userId = from.getUserId();
                            if(0 == savedSixin){
                                    sixinId = getSixinIdByRenRenId(userId);
                                    if(sixinId == -1){
                                            return -1 ;
                                    }
                            }else {
                                    sixinId = savedSixin ;
                            }
                            from.setUserId(sixinId);
                            if(strcmp(from.getEndpoint().c_str(),"talk.renren.com") == 0){
								from.setEndpoint("talk.m.renren.com");
								fromAttribute.set_value(from.toString().c_str());
                            }
                            fromAttribute.set_value(from.toString().c_str());
                    }

                    if(toAttribute){

                            mtalk::xmpp::JID to(toAttribute.value());        
                            long toUserId = to.getUserId();
                            long toSixinId = getSixinIdByRenRenId(toUserId);
                            if( toSixinId == -1){
                                    return -1 ;
                            }
                            to.setUserId(toSixinId);
                            if(strcmp(to.getEndpoint().c_str(),"talk.m.renren.com") == 0){
                            }

                            toAttribute.set_value(to.toString().c_str());
                    }
                    return sixinId ;
            }





            long  ChatChanger::changBack(const std::string& clientDomin, pugi::xml_node& xmlNode, long savedRenRenId){
                    pugi::xml_attribute  toAttribute ;
                    pugi::xml_attribute  fromAttribute ;



                    if(strcmp(xmlNode.attribute("type").value(),"notify") == 0){
							//return 0 ;
                            toAttribute = xmlNode.attribute("toId");
                            fromAttribute = xmlNode.attribute("fromId");

                    }else {
                            toAttribute = xmlNode.attribute("to");
                            fromAttribute = xmlNode.attribute("from");
                    }

                    LOG_DEBUG("ChatChanger::changBack ==> begin fromId = "<<fromAttribute.value()<<" to = "<<toAttribute.value());
                    long toRenRenId = 0;
                    if(toAttribute){

                            mtalk::xmpp::JID to(toAttribute.value());        
                            long toUserId = to.getUserId();
                            if(0 == savedRenRenId){
                                    toRenRenId = getRenRenIdBySiXinId(toUserId);
                                    if(toRenRenId == -1){
                                            return -1 ;
                                    }
                            }else {
                                    toRenRenId = savedRenRenId ;
                            }
                            to.setUserId(toRenRenId);
                            if(strcmp(to.getEndpoint().c_str(),"talk.sixin.com") == 0){
                                    to.setEndpoint("talk.m.renren.com");
                            }
                            toAttribute.set_value(to.toString().c_str());
                    }

                    if(fromAttribute){    

                            mtalk::xmpp::JID from(fromAttribute.value());        
                            long fromUserId = from.getUserId();
                            long fromRenRenId = getRenRenIdBySiXinId(fromUserId);
                            if(fromRenRenId == -1){
                                    return -1 ;
							}else if(fromRenRenId == 478849448){
									processPureSixinAccount(xmlNode);
							}

							from.setUserId(fromRenRenId);
                            fromAttribute.set_value(from.toString().c_str());
                    }
                    return toRenRenId ;
        }


        long  GroupChatChanger::changToSixin(const std::string& clientDomin, pugi::xml_node& xmlNode, long savedSixin){
            pugi::xml_attribute  fromAttribute = xmlNode.attribute("from");
            mtalk::xmpp::JID from(fromAttribute.value());        
            long fromId = from.getUserId();
            stringstream ss;
            xmlNode.print(ss, "\t", pugi::format_raw);
            string nodeStr = ss.str();
            LOG_INFO("GroupChatChanger::changeToSixin ==> before change : fromId = " << fromId << "xmlNode = " << nodeStr);    

            bool result = upToGidProcess(fromId, xmlNode);
            if(!result){
                LOG_ERROR("GroupChatChanger::changeToSixin failure ==> ")
                return -1;
            }
            LOG_DEBUG("GroupChatChange::changeToSixin ==> after GroupChatChanger::upToGidProcess");
            ss.str("");
            xmlNode.print(ss, "\t", pugi::format_raw);
            nodeStr = ss.str();
            LOG_INFO("GroupChatChanger::changeToSixin ==> after  change : fromId = " << fromId << "xmlNode = " << nodeStr);        
            return  0;
        }

        long  GroupChatChanger::changBack(const std::string& clientDomin, pugi::xml_node& xmlNode, long savedRenRenId){
            pugi::xml_attribute  toAttribute = xmlNode.attribute("to");
            mtalk::xmpp::JID to(toAttribute.value());        
            long toId = to.getUserId();
            
            stringstream ss;
            xmlNode.print(ss, "\t", pugi::format_raw);
            string nodeStr = ss.str();
            LOG_INFO("GroupChatChanger::changeBack ==> before change : toId = " << toId << "xmlNode = " << nodeStr);        

            bool result = downToUidProcess(toId, xmlNode);
            if(!result){
                LOG_ERROR("GroupChatChanger::changeBack failure ==> ")
                return -1;
            }
            
            ss.str("");
            xmlNode.print(ss, "\t", pugi::format_raw);
            nodeStr = ss.str();
            LOG_INFO("GroupChatChanger::changeBack ==> after change : toId = " << toId << "xmlNode = " << nodeStr);        

            return  0;
        }


        ProtocolChanger::ProtocolChanger(){}

        ProtocolChanger::~ProtocolChanger(){}

        long  ProtocolChanger::changToSixin(std::string clientDomin, pugi::xml_node& xmlNode, long savedSixin){
                LOG_DEBUG("ProtocolChanger::changToSixin == > begin  clientDomain = "
                            << clientDomin <<" from = "<< xmlNode.attribute("from").value() << " to = " <<xmlNode.attribute("to").value());
                
                //检查to是否是到群聊的
                string toStr = xmlNode.attribute("to").value();
                mtalk::xmpp::JID  tojid(toStr);
                string toDomain = tojid.getEndpoint();
                LOG_DEBUG("ProtocolChanger::changeToSixin ==> toDomain = " << clientDomin);

                if(strcmp(clientDomin.c_str(), "talk.m.renren.com") == 0 || strcmp(clientDomin.c_str(), "talk.renren.com") == 0){
                        if(toDomain == "muc.m.renren.com"){
                                return    groupChatChanger_.changToSixin(clientDomin, xmlNode, savedSixin);
                        }else{
                                return    chatChanger_.changToSixin(clientDomin, xmlNode, savedSixin);
                        }
                }
                return 0;
        }




        long ProtocolChanger::changBack(std::string clientDomin, pugi::xml_node& xmlNode, long savedRenRenId){
                LOG_DEBUG("ProtocolChanger::changBack = > begin  clientDomain = "
                            << clientDomin <<" from = "<< xmlNode.attribute("from").value() << " to = " <<xmlNode.attribute("to").value());
                
                //检查from是否是从群聊来的
                string fromStr = xmlNode.attribute("from").value();
                mtalk::xmpp::JID fromjid(fromStr);
                string fromDomain = fromjid.getEndpoint();

                if(strcmp(clientDomin.c_str(), "talk.m.renren.com") == 0 || strcmp(clientDomin.c_str(), "talk.renren.com") == 0){
                        if(fromDomain == "muc.m.renren.com"){
                                return     groupChatChanger_.changBack(clientDomin, xmlNode, savedRenRenId);
                        }else{
                                return    chatChanger_.changBack(clientDomin, xmlNode, savedRenRenId);
                        }
                }
                return 0;
        }
		

		//processPureSixinAccount做为基类的函数，在两个派生类中都使用
		void Changer::processPureSixinAccount(pugi::xml_node& xmlNode){
				LOG_DEBUG("ProtocolChanger::processPureSixinAccount ==> begin ");
				xmlNode.append_attribute("feed").set_value("true");
				pugi::xml_node feedNode= xmlNode.append_child();
				feedNode.set_name("feed");
				int id = getCurrentTimeMSec();
				feedNode.append_attribute("id").set_value(id);
				feedNode.append_attribute("type").set_value(502);
				string typeStr = xmlNode.child("body").attribute("type").value();
				string fname = xmlNode.attribute("fname").value();
				stringstream ss;
				ss << fname;
				if(typeStr == "text"){
						ss<<COME_CONTENT<<"一条消息";

				}else if(typeStr == "image"){
						ss<<COME_CONTENT<<"一张图片";

				}else if(typeStr == "voice"){
						ss<<COME_CONTENT<<"一条语音";

				}else if(typeStr == "expression"){
						ss<<COME_CONTENT<<"一个表情";

				}else{
						ss<<COME_CONTENT<<"一条未知消息";

				}
				ss<<INFO_CONTENT;

				feedNode.append_attribute("description").set_value(ss.str().c_str());
				xmlNode.attribute("fname").set_value("私信助手");	
		}

    }
}
