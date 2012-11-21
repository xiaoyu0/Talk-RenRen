#include "ImCommandServiceI.h"
#include<string>
#include"ImOnlineAdapterServer.h"
#include<iostream>
#include<Ice/Ice.h>
#include "utils/MyLogger.h"
#include "utils/Singleton.h"

using namespace mtalk::utils;
using namespace std;

namespace mtalk{
namespace imAdapter{

		/*
		 * 上线接口，需要通过Current提取ip串传给ImCommandServer的online上线接口使用
		 */
		void ImCommandServiceI::online(long sixinUserId,bool isLongOnline,const Ice::Current& c){
				// 提取客户端ip地址
				string onlineIp = getIceClientIp(c);
				//int userId = changer_.getRenRenIdBySiXinId(sixinUserId);
				LOG_DEBUG("ImCommandServiceI::online ==> userId = " << sixinUserId << " onlineIp=" << onlineIp);
				// 上线调用
				MY_INSTANCE(ImOnlineAdapterServer).online(sixinUserId,isLongOnline,onlineIp);
		}

		/*
		 * 下线接口
		 */
		void ImCommandServiceI::offline(long sixinUserId,bool isDelLongOnline,const Ice::Current&){
			//	int userId = changer_.getRenRenIdBySiXinId(sixinUserId);
				LOG_DEBUG("ImCommandServiceI::offline ==> userId = " << sixinUserId);
				MY_INSTANCE(ImOnlineAdapterServer).offline(sixinUserId,isDelLongOnline);
		}

		int ImCommandServiceI::shortOnlineUserCount(const Ice::Current&){
				return 	MY_INSTANCE(ImOnlineAdapterServer).shortOnlineUserCount();
		}
		
		int ImCommandServiceI::longOnlineUserCount(const Ice::Current&){
				return	MY_INSTANCE(ImOnlineAdapterServer).longOnlineUserCount();
		}

		int ImCommandServiceI::cushionCount(const Ice::Current&){
				return	MY_INSTANCE(ImOnlineAdapterServer).cushionCount();
		}

		/*
		 * 在 local address = ip:port remote address = ip:port 特征的字串中提取ip
		 */
		string ImCommandServiceI::getIceClientIp(const Ice::Current& c){

				string connStr = c.con->toString();

				//定界符   =和:
				int eq  = connStr.find('=');    //本地等号
				eq  = connStr.find('=', eq+1);  //远程等号
				int colon = connStr.find(':');  //本地冒号
				colon = connStr.find(':', colon+1);     //远程冒号

				//提取远程ip子串
				string ip = connStr.substr(eq+2,colon-eq-2); //提取远程ip字串

				return ip;

		}

		::Ice::Int ImCommandServiceI::userStat(::Ice::Int userId, const ::Ice::Current&){
			return MY_INSTANCE(ImOnlineAdapterServer).userStat(userId);
		}

		::com::xiaonei::wap::talk::imoa::IntSeq ImCommandServiceI::usersStat(const ::com::xiaonei::wap::talk::imoa::IntSeq& userIds, const ::Ice::Current& ){
			return MY_INSTANCE(ImOnlineAdapterServer).usersStat(userIds);
		}

		void ImCommandServiceI::removeUser(::Ice::Int userId, const ::Ice::Current& ){
				MY_INSTANCE(ImOnlineAdapterServer).removeUser(userId);
		}

		void ImCommandServiceI::removeSpecifiedUsers(::Ice::Int serverId, ::Ice::Int mode, const ::Ice::Current& ){
				MY_INSTANCE(ImOnlineAdapterServer).removeSpecifiedUsers(serverId, mode);
		}

		void ImCommandServiceI::retainSpecifiedUsers(::Ice::Int serverId, ::Ice::Int mode, const ::Ice::Current& ){
				MY_INSTANCE(ImOnlineAdapterServer).retainSpecifiedUsers(serverId, mode);
		}


		void ImCommandServiceI::clearUsers(const ::Ice::Current& ){
				MY_INSTANCE(ImOnlineAdapterServer).clearUsers();
		}

		void ImCommandServiceI::removeUsersByIp(const ::std::string& ip, const ::Ice::Current& c){
				MY_INSTANCE(ImOnlineAdapterServer).removeUsersByIp(ip);
		}




}
}
