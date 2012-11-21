#include <boost/make_shared.hpp>
#include "UserManager.h"
#include "utils/MyLogger.h"
#include "utils/Singleton.h"
#include "proxy/ProxyRegister.h"
#include "proxy/ImOnlineAdapterServiceProxy.h"
#include "bosh/BoshServer.h"
#include  <boost/foreach.hpp>

using namespace mtalk::bosh;
using namespace std;
using namespace mtalk::utils;
using namespace mtalk::im;
using namespace mtalk::constant;
using namespace mtalk::proxy;

namespace mtalk{
	namespace talk{

		UserManager::UserManager(boost::shared_ptr<IMGateForPhoneAdapter> imGateForPhoneAdapterPtr, boost::shared_ptr<mtalk::talk::OnlineStatManager> onlineStatManagerPtr) :
			imGateForPhoneAdapterPtr_(imGateForPhoneAdapterPtr),
			onlineStatManagerPtr_(onlineStatManagerPtr)	{
			}

		void UserManager::start(){
			imGateForPhoneAdapterPtr_->open();
			onlineStatManagerPtr_->start();
			LOG_DEBUG("UserManager::start => started");
		}

		void UserManager::stop(){
			LOG_DEBUG("UserManager::stop => stoped");
		}

		bool UserManager::bind(const SessionPtr sessionPtr){
		LOG_DEBUG("UserManager::bind user = " << sessionPtr->getUserId());

			long userId = sessionPtr->getUserId();
            LOG_W(userId, "UserManager::bind", -1, "");
			string sessionId = sessionPtr->getSessionId();

			int appId = sessionPtr->getCAppId();
			OnlineType::Type stat = appId2Type(appId);

			//在user把此次登录状态记入之前就检测是否此种类型有长在线 , 用于之后是否再次登录的判断
			//bool userHasLongOnline = onlineStatManagerPtr_->hasLongOnline(userId, stat);
		
			// 改成只要user有任何类型的长在线就不给它上线，和下线策略匹配	
			//bool userHasLongOnline = onlineStatManagerPtr_->hasLongOnline(userId);

			bool onlineTypeExist = false;

			bool islongOnline = sessionPtr->isOnlineDeploy();


			size_t poolIndex = getUserPoolsIndex(userId);
			string toBeRemoveSessionId;
			string type;
            {
                WriteLock lock(userPoolsMutex_[poolIndex]);
                SubPool& pool = userPools_[poolIndex];
                if(pool.find(userId) == pool.end()){
                    LOG_DEBUG("UserManager::bind not found UserId  user = " << sessionPtr->getUserId());
                    UserBufferPtr ubp = boost::make_shared<UserBuffer>(userId);
                    ubp->addSession(sessionPtr);
                    ubp->addType(stat);
                    LOG_DEBUG("UserManager::UserCountInc");
                    pool[userId] = ubp;

                    // store onlineType in OnlineStatManager
                    if (!islongOnline){
                        onlineStatManagerPtr_->addStat(userId, stat, false);
                    } else{
                        onlineStatManagerPtr_->addStat(userId, stat, true);
                    }

                    LOG_DEBUG("UserManager::bind => bind new user : uid = " << userId << " , sid = " << sessionId);
                    type = "new";
                } else {
                    LOG_DEBUG("UserManager::bind   found UserId  user = " << sessionPtr->getUserId());
                    UserBufferPtr ubp = pool[userId];
                    if (!ubp.get()){
                        return false;
                    }

                    // 判断这个onlineType是不是已经有了，有了就不再调im->online
                    onlineTypeExist = 1;//ubp->hasOnlineType(stat);

					toBeRemoveSessionId = ubp->addSession(sessionPtr);
					ubp->addType(stat);

                    // store onlineType	
                    if (!islongOnline){
						onlineStatManagerPtr_->addStat(userId, stat);
					} else{
						onlineStatManagerPtr_->addStat(userId, stat, true);
					}

					LOG_DEBUG("UserManager::bind => bind : uid = " << userId << " , sid = " << sessionId);
					type = "more";
				}
			}

			if(!toBeRemoveSessionId.empty()){
				talk::SessionPtr sessionPtr = MY_INSTANCE(BoshServer).getSession(toBeRemoveSessionId); 
				stringstream os;
				os<<"<message type='alert'>";
				os<<"<action type='terminate' />";
				os<<"<body type='text'>";
				os<<"<text>";
				if(sessionPtr->getLang() == "en_US"){
					os<<"You have to terminate, because your account login in another place.";
				}else{
					os<<"你的帐号在另一终端登录，被强行退出。";
				}
				os<<"</text>";
				os<<"</body>";
				os<<"</message>";
				sessionPtr->deliver(sessionPtr->getUserId(), os.str(), MessageType::CHAT, 0);
				sessionPtr->close();
			//	MY_INSTANCE(TalkServer).getSessionManager()->delSession(oldSessionId); 

			}

			LOG_ACTION("online|" << userId << "|0|"
					<< sessionPtr->getCAppId() << "|" 
					<< sessionPtr->getCFromId() << "|"
					<< sessionPtr->getCVersion() << "|"
					<< sessionPtr->getV() << "|" << type);
					//更新在线状态 , 要之前没有长在线且这种在线状态对这个user不存在才去im上线
			if (1 /*!userHasLongOnline && !onlineTypeExist*/){
				//imGateForPhoneAdapterPtr_->online(userId, sessionPtr->getCAppId());

				//imAdapter online
				MY_INSTANCE(ProxyRegister).getProxy<ImOnlineAdapterServiceProxy>("imAdapterServiceProxy")->online(userId,false);
			}

			return true;
		}

		void UserManager::unbind(const SessionPtr sessionPtr){
			long userId = sessionPtr->getUserId();
            LOG_W(userId, "UserManager::unbind", -1, "");

			string sessionId = sessionPtr->getSessionId();

			size_t poolIndex = getUserPoolsIndex(userId);
			bool sendOffline = false;
			string type;
			{
				WriteLock lock(userPoolsMutex_[poolIndex]);
				SubPool& pool = userPools_[poolIndex];
				SubPool::iterator it = pool.find(userId);
				if(it != pool.end() && (it->second).get()){
					if(it->second->clear(sessionPtr)){
						LOG_DEBUG("UserManager::UserCountDec");
						pool.erase(it);
						sendOffline = true;

						//del from OnlineStatManager,长在线的不用删除 
						OnlineType::Type sessionOnlineType = appId2Type(sessionPtr->getCAppId());
						LOG_DEBUG("UserManager::unbind ==> sessionOnlineType = " << sessionOnlineType);
						if (!sessionPtr->isOnlineDeploy() && (!onlineStatManagerPtr_->hasLongOnline(userId) || onlineStatManagerPtr_->hasLongOnline(userId, sessionOnlineType))){
							onlineStatManagerPtr_->delStat(userId);
						} else {
							sendOffline = false;	
						}

						type = "last";
					} else {
						//删除userId的一种在线状态,如果是长在线的不用删除
						if (!sessionPtr->isOnlineDeploy()){	
							int appId = sessionPtr->getCAppId();
							OnlineType::Type delType = appId2Type(appId);

							//返回true则应该去statManager中删
							if ((it->second)->delType(delType)){
								LOG_DEBUG("UserManager::unbind ==> delType type = " << delType << "userId = " << userId);
								onlineStatManagerPtr_->delStat(userId, delType);
							}
						}


						type = "more";
					}
				}else{
					sendOffline = true;
				}
			}

			LOG_ACTION("offline|" << userId << "|0|"
					<< sessionPtr->getCAppId() << "|" 
					<< sessionPtr->getCFromId() << "|"
					<< sessionPtr->getCVersion() << "|0|" << type);

			if(sendOffline){
					//imGateForPhoneAdapterPtr_->offline(userId,sessionPtr->getCAppId());
					MY_INSTANCE(ProxyRegister).getProxy<ImOnlineAdapterServiceProxy>("imAdapterServiceProxy")->offline(userId,false);
			}

			LOG_DEBUG("UserManager::unbind => unbind : uid = " << userId << " , sid = " << sessionId);
		}

		list<string> UserManager::getSessionIdList(const long userId){
			size_t poolIndex = getUserPoolsIndex(userId);
			ReadLock lock(userPoolsMutex_[poolIndex]);

			SubPool& pool = userPools_[poolIndex];
			if(pool.find(userId) == pool.end()){
				list<string> sessionList;
				return sessionList;
			}

			UserBufferPtr ubp = pool[userId];
			if (ubp.get()){
				LOG_DEBUG("UserManager::getSessionIdList => get list : uid = " << userId << " , list size = " << ubp->getSessionIdList().size());
				return ubp->getSessionIdList();
			}

			return list<string>();
		}

		list<string> UserManager::getNewSessionIdList(const long userId){
			size_t poolIndex = getUserPoolsIndex(userId);
			ReadLock lock(userPoolsMutex_[poolIndex]);

			SubPool& pool = userPools_[poolIndex];
			if(pool.find(userId) == pool.end()){
				list<string> sessionList;
				return sessionList;
			}

			UserBufferPtr ubp = pool[userId];
			if (ubp.get()){
				LOG_DEBUG("UserManager::getSessionIdList => get list : uid = " << userId << " , list size = " << ubp->getSessionIdList().size());
				return ubp->getNewSessionIdList();
			}

			return list<string>();
		}


		list<string> UserManager::getParticularSessionIdList(const long userId){
			list<string> sessionList=getSessionIdList(userId);
			LOG_DEBUG("UserManager::getPatricularSessionIdList => get list : uid = " << userId << " , list size = " << sessionList.size());
			if (sessionList.size()==0)
				return sessionList;
			list<string> srcSessionList = sessionList;
			list<string>::iterator it = sessionList.begin();

			for (; it != sessionList.end(); )
			{
				talk::SessionPtr sessionPtr = MY_INSTANCE(BoshServer).getSession((*it)); 
				if(!sessionPtr){
					it++;
					continue;
				}
				int c_appid = sessionPtr->getCAppId();
				if (c_appid !=170979 &&
						c_appid != 166012 &&
						c_appid != 215928 &&   //for 官方androd appid
						c_appid != 215897 &&   //for 官方iphone appid
						c_appid != 169485 &&
						c_appid != 166011 &&
						c_appid != 169486 &&
						c_appid != 159371 &&
						c_appid != 111111 &&
						c_appid != 208078 &&  //私信国内版 3.0 ios
						c_appid != 208079 &&  //私信国内版 3.0 android
						c_appid != 208080 &&  //私信国内版 3.0 windows phone
						c_appid != 208081 &&  //私信国际版 3.0 ios
						c_appid != 208082 &&  //私信国际版 3.0 android
						c_appid != 208083     //私信国际版 3.0 windows phone
						
				   ){
					it=sessionList.erase(it);
				}
				else
				{
					it++;
				}
			}
			if(sessionList.size()==0){
				LOG_DEBUG("UserManager::getPatricularSessionIdList =>  sixinSession not found  uid = " << userId << " , list size = " << sessionList.size());
				return sessionList;
			}
			LOG_DEBUG("UserManager::getPatricularSessionIdList =>  sixin  uid = " << userId << " , list size = " << sessionList.size());
			return sessionList;
		}



		list<talk::SessionPtr> UserManager::getParticularSessionList(const long userId){
			list<talk::SessionPtr> sessionList;
			list<string> sessionIdList = getSessionIdList(userId);
			if(sessionIdList.empty()){
				return sessionList;
			}
			BOOST_FOREACH(string& sessionId, sessionIdList){
				talk::SessionPtr sessionPtr = MY_INSTANCE(BoshServer).getSession(sessionId);
				if(!sessionPtr){
					continue ;
				}
				int c_appid = sessionPtr->getCAppId();
				if (c_appid!=170979&&
						c_appid!= 166012&&
						c_appid!= 169485&&
						c_appid!= 166011&&
						c_appid!= 169486&&
						c_appid!= 159371&&
						c_appid!= 111111)
				{
					sessionList.push_back(sessionPtr);	
				}
			}
			LOG_DEBUG("UserManager::getPatricularSessiondList =>  sixin  uid = " << userId << " , list size = " << sessionList.size());
			return sessionList;

		}

		list<talk::SessionPtr> UserManager::getNewParticularSessionList(const long userId){
			list<talk::SessionPtr> sessionList;
			list<string> sessionIdList = getNewSessionIdList(userId);
			if(sessionIdList.empty()){
				return sessionList;
			}
			BOOST_FOREACH(string& sessionId, sessionIdList){
				talk::SessionPtr sessionPtr = MY_INSTANCE(BoshServer).getSession(sessionId);
				if(!sessionPtr){
					continue ;
				}
					sessionList.push_back(sessionPtr);	
			}
			LOG_DEBUG("UserManager::getNewPatricularSessiondList =>  sixin  uid = " << userId << " , list size = " << sessionList.size());
			return sessionList;

		}





		std::list<std::string> UserManager::getRenRenSessionIdList(const long userId){
			list<string> sessionList=getSessionIdList(userId);
			LOG_DEBUG("UserManager::getRenRenSessionIdList => get list : uid = " << userId << " , list size = " << sessionList.size());
			if (sessionList.size()==0)
				return sessionList;
			list<string> desSessionList;
			list<string>::iterator it = sessionList.begin();

			for (; it != sessionList.end(); it++ )
			{
				talk::SessionPtr sessionPtr = MY_INSTANCE(BoshServer).getSession((*it)); 
				if(!sessionPtr.get()){
					continue;
				}
				int c_appid = sessionPtr->getCAppId();
				if ( c_appid == 153629||
						c_appid == 153627||
						c_appid == 160590||
						c_appid == 175592||
						c_appid == 185292||
						c_appid == 0
				   ){
					desSessionList.push_back(*it);
				}
			}
			LOG_DEBUG("UserManager::getRenRenSessionIdList => get list : uid = " << userId << " , RenRenSession list size = " << desSessionList.size());
			return desSessionList;
		}


		void UserManager::clear(){
			for(size_t i = 0; i < USER_POOLS_SIZE; i++){
				WriteLock lock(userPoolsMutex_[i]);
				userPools_[i].clear();
			}
		}

		bool   UserManager::sendToOfflineMessageMap(long toId, long time , std::string msg){
			size_t poolIndex = getUserPoolsIndex(toId);

			ReadLock lock(userPoolsMutex_[poolIndex]);

			SubPool& pool = userPools_[poolIndex];
			if(pool.find(toId) == pool.end()){
				return 0;
			}
			UserBufferPtr ubp = pool[toId];
			if (ubp.get()){
				ubp->sendToOfflineMessageMap(time , msg);
				return true;
			}

			return false;

		}
		vector<string> UserManager::getOfflineMessageSequence(long userId){
			vector<string> msgSequence;
			size_t poolIndex = getUserPoolsIndex(userId);

			ReadLock lock(userPoolsMutex_[poolIndex]);

			SubPool& pool = userPools_[poolIndex];
			if(pool.find(userId) == pool.end()){
				return msgSequence;
			}
			UserBufferPtr ubp = pool[userId];

			if (ubp.get()){
				return ubp->getOfflineMessageSequence();
			}
			return msgSequence;
		}



		void UserManager::logout(const long userId, const string& sessionId){
			LOG_DEBUG("UserManager::logout ==> set Online false   userId = " << userId << "  sessionId = " << sessionId);
			SessionPtr sessionPtr = sessionManagerPtr_->getSession(sessionId);	
			if (sessionPtr.get()){
				LOG_DEBUG("UserManager::logout ==> set Online false   userId = " << userId << "  sessionId = " << sessionId);
				sessionPtr->setOnlineDeploy(false);
				sessionPtr->close();

			} else {
				LOG_DEBUG("UserManager::logout ==> session not found, user offline userId = " << userId);	
				
				int userOnlineTypeNum = onlineStatManagerPtr_->userStatNum(userId, OnlineStatManager::LOG_OUT);
				if(userOnlineTypeNum > 1){
					//有多种在线，注销时不下线
					return;
				}
				onlineStatManagerPtr_->delStat(userId);	

				//imGateForPhoneAdapterPtr_->offline(userId);

				MY_INSTANCE(ProxyRegister).getProxy<ImOnlineAdapterServiceProxy>("imAdapterServiceProxy")->offline(userId,false);
			}

		}

		void UserManager::uninstall(const long userId, const int appId){
			LOG_DEBUG("UserManager::uninstall ==> userId = " << userId << "appId " << appId);
			size_t poolIndex = getUserPoolsIndex(userId);
			SubPool& pool = userPools_[poolIndex];
			SubPool::iterator it = pool.find(userId);
			if(it == pool.end()){
				return ;
			}
			UserBufferPtr userPtr = pool[userId];
			if (!userPtr.get()){
				LOG_DEBUG("UserManager::uninstall ==> user does not exist  userId = " << userId);
				return ;
			}

			OnlineType::Type type = appId2Type(appId);	
			if (userPtr->delType(type)){
				onlineStatManagerPtr_->delStat(userId, type);
				if (!userPtr->hasOnlineType()){
					//imGateForPhoneAdapterPtr_->offline(userId);
					MY_INSTANCE(ProxyRegister).getProxy<ImOnlineAdapterServiceProxy>("imAdapterServiceProxy")->offline(userId,false);
				}
			}

		}

		int UserManager::getUserCount(){

			unsigned int count = 0;
			for(unsigned int index = 0; index < USER_POOLS_SIZE; index++){
				count += userPools_[index].size();
			}

			return count;
		}


		OnlineType::Type UserManager::appId2Type(int appId){
			OnlineType::Type type;

			switch (appId){
				case 208079 :
				case 208082 :
				case 169486 :
				case 159371 : type = OnlineType::ANDROID_SIXIN; break;

				case 208083 :
				case 208080 :
				case 169485 : type = OnlineType::IPHONE_SIXIN;  break;

				case 208078 :
				case 208081 :
				case 170979 : 
				case 166012 : type = OnlineType::WINPHONE_SIXIN; break;

				case 166011 : type = OnlineType::SYNBIAN_SIXIN;  break;
				case 153629 :
				case 185292 : type = OnlineType::IPHONE_RENREN;  break;
				case 185047 :
				case 153627 : type = OnlineType::ANDROID_RENREN; break;
				case 160590 : type = OnlineType::IPAD_RENREN;	 break;
				case 175592 : type = OnlineType::RENREN_LOCK_SCREEN; break;

				default :  type = OnlineType::UNKNOWN;	break;
			}

			return type;
		}

	};
};
