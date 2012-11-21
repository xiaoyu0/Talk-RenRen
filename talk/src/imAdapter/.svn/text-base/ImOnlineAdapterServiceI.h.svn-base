/**
* @file ImOnlineAdapterServiceI.h
* @brief IM在线状态适配器 ice服务实现类
* @author chenxi.hou@renren-inc.com
* @version 1.0
* @date 2012-07-17
*/
#ifndef TALK_IM_ONLINE_ADAPTER_SERVICE_I_H_
#define TALK_IM_ONLINE_ADAPTER_SERVICE_I_H_

#include <string>
#include <Ice/Ice.h>
#include "ice_src/ImOnlineAdapterService.h"
#include "protocolChanger/ProtocolChanger.h"


namespace mtalk{
namespace imAdapter{
	
	class ImOnlineAdapterServiceI :public com::xiaonei::wap::talk::imoa::ImOnlineAdapterService{

		//在线接口
		void online(long userId,bool isLongOnline,const Ice::Current&);

		//离线接口
		void offline(long userId,bool isDelLongOnline,const Ice::Current&);

		// 用于转换私信ID为人人ID的ProtocolChanger对象
		protocolChang::ProtocolChanger changer_;

		std::string getIceClientIp(const Ice::Current& c);

	};

};
};
#endif
