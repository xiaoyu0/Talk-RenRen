/**
* @file ImCommandServiceI.h
* @brief IM在线状态适配器 ice服务实现类
* @version 1.0
* @date 2012-07-17
*/
#ifndef TALK_IM_COMMAND_ADAPTER_SERVICE_I_H_
#define TALK_IM_COMMAND_ADAPTER_SERVICE_I_H_

#include <string>
#include <Ice/Ice.h>
#include "ice_src/ImCommandService.h"
#include "protocolChanger/ProtocolChanger.h"


namespace mtalk{
namespace imAdapter{
	
	class ImCommandServiceI :public com::xiaonei::wap::talk::imoa::ImCommandAdapterService{

		//在线接口
		void online(long userId,bool isLongOnline,const Ice::Current&);

		//离线接口
		void offline(long userId,bool isDelLongOnline,const Ice::Current&);

		virtual ::Ice::Int shortOnlineUserCount(const ::Ice::Current& = ::Ice::Current());

		virtual ::Ice::Int longOnlineUserCount(const ::Ice::Current& = ::Ice::Current());

		virtual ::Ice::Int cushionCount(const ::Ice::Current& = ::Ice::Current());

		::Ice::Int userStat(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) ;

		::com::xiaonei::wap::talk::imoa::IntSeq usersStat(const ::com::xiaonei::wap::talk::imoa::IntSeq&, const ::Ice::Current& = ::Ice::Current());

		void removeUser(::Ice::Int, const ::Ice::Current& = ::Ice::Current());

		void removeSpecifiedUsers(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current());

		void retainSpecifiedUsers(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current());

		void removeUsersByIp(const ::std::string&, const ::Ice::Current& = ::Ice::Current());

		void clearUsers(const ::Ice::Current& = ::Ice::Current());





		std::string getIceClientIp(const Ice::Current& c);

		// 用于转换私信ID为人人ID的ProtocolChanger对象
		protocolChang::ProtocolChanger changer_;

	};

};
};
#endif
