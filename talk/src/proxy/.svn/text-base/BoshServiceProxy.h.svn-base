/**
* @file BoshServiceProxy.h
* @brief	链接talk服务器的代理
* 			根据用户的id 散列到不同的talk server。
* 			第一次请求根据userId散列，
* 			后续的请求从sessionId中计算出talk server id
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-15
*/
#ifndef TALK_PROXY_BOSH_SERVICE_PROXY_H_
#define TALK_PROXY_BOSH_SERVICE_PROXY_H_

#include <string>
#include <vector>
#include "SerialZKProxy.h"
#include "ice_src/BoshService.h"
#include "utils/MyLogger.h"

namespace mtalk{
namespace proxy{

	class BoshServiceProxy : 
		public SerialZKProxy<com::xiaonei::wap::talk::BoshServicePrx>{
	public :
		BoshServiceProxy();

		com::xiaonei::wap::talk::Result createSession(const long userId, const long connectionId, const std::string& msg);

		com::xiaonei::wap::talk::Result updateSession(const std::string& sessionId, const long connectionId, const std::string& msg);
		
		/**
		* @brief	发送消息的代理，该接口不检测rid
		*
		* @param	sessionId
		* @param	connectionId
		* @param	msg
		*
		* @return	
		*/
		com::xiaonei::wap::talk::Result sendMessage(const std::string& sessionId, const long connectionId, const std::string& msg);

		std::vector<std::string> getVersionAndHost();

	private :
		com::xiaonei::wap::talk::BoshServicePrx getProxyBySession(const std::string& sessionId);

	};
};
};
#endif //TALK_PROXY_BOSH_SERVICE_PROXY_H_
