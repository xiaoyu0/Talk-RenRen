#include<string>
#include<iostream>
#include<Ice/Ice.h>

#include "ImOnlineAdapterServiceI.h"
#include "ImOnlineAdapterServer.h"
#include "utils/MyLogger.h"
#include "utils/Singleton.h"

using namespace mtalk::utils;
using namespace std;

namespace mtalk{
namespace imAdapter{

	/*
	 * 上线接口，需要通过Current提取ip串传给ImOnlineAdapterServer的online上线接口使用
	 */
	void ImOnlineAdapterServiceI::online(long sixinUserId,bool isLongOnline,const Ice::Current& c){
		// 提取客户端ip地址
		string onlineIp = getIceClientIp(c);
		int userId = changer_.getRenRenIdBySiXinId(sixinUserId);
		if(userId == -1){
			return ;
		}
		LOG_DEBUG("ImOnlineAdapterServiceI::online ==> userId = " << userId << " onlineIp=" << onlineIp);
		// 上线调用
		MY_INSTANCE(ImOnlineAdapterServer).online(userId,isLongOnline,onlineIp);
	}

	/*
	 * 下线接口
	 */
	void ImOnlineAdapterServiceI::offline(long sixinUserId,bool isDelLongOnline,const Ice::Current&){
		int userId = changer_.getRenRenIdBySiXinId(sixinUserId);
		if(userId == -1){
			return ;
		}
		LOG_DEBUG("ImOnlineAdapterServiceI::offline ==> userId = " << userId);
		MY_INSTANCE(ImOnlineAdapterServer).offline(userId,isDelLongOnline);
	}

	/*
	 * 在 local address = ip:port remote address = ip:port 特征的字串中提取ip
	 */
	string ImOnlineAdapterServiceI::getIceClientIp(const Ice::Current& c){

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

};
};
