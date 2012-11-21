/**
* @file PushServiceProxy.h
* @brief 调用push服务 proxy
* @author wang.yu@renren-inc.com
* @version 1.0
* @date 2012-04-18
*/
#ifndef MTALK_PROXY_PUSH_SERVICE_H_
#define MTALK_PROXY_PUSH_SERVICE_H_

#include <string>
#include "ice_src/pushMsg.h"
#include "SimpleZKProxy.h"

namespace mtalk{
namespace proxy{

class PushServiceProxy :
			public SimpleZKProxy<com::xiaonei::wap::push::talk::MessageServicePrx>{
public :
	PushServiceProxy();
	~PushServiceProxy(){}

	void feedIOSPush(long fromId, long toId, int feedType, long feedId);
	
	/**
	* 推送消息
	* @param int fromId 发送者id
	* @param int toId 接收者id
	* @param int msgType 消息类型
	* @param string message 消息实体
	* @return void 
	*/	
	void pushMessage(long fromId, long toId, int msgType, std::string message);

};

};
};
#endif  // MTALK_PROXY_PUSH_SERVICE_H_
