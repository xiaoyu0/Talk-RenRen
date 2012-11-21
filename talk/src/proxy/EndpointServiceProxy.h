/**
* @file EndpointServiceProxy.h
* @brief	获取endpoint server的代理
* 			根据connectionId取得endpoint server的编号
* 			将消息推送到指定的endpoint server
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-15
*/
#ifndef TALK_PROXY_ENDPOINT_SERVICE_PROXY_H_
#define TALK_PROXY_ENDPOINT_SERVICE_PROXY_H_

#include <string>
#include <vector>
#include <map>
#include "utils/WapIceChannel.h"
#include "ice_src/EndpointService.h"
#include "utils/MyLock.h"
#include "zk/ZKListener.h"
#include "Proxy.h"

using namespace com::xiaonei::wap::talk;

namespace mtalk{
namespace proxy{

	class EndpointServiceProxy : public Proxy, public mtalk::zk::ZKListener{
	public :
		struct ServerNode{
			int index;
			std::string address;
		};

		EndpointServiceProxy();

		virtual ~EndpointServiceProxy();

		virtual bool initProxy(const std::vector<ServerNode>& endpointNodes);

		std::string getZKPath() const;

		void deliverMsg(const long connectionId, const std::string& msg, long mid=0, int msgType=0);

		void pause();

		void resume();

	protected :
		virtual void updateConfig(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr);
		std::string zkPath_;

	private :

		EndpointServicePrx getProxy(const long connectionId);

		mtalk::utils::WapIceChannel wapIceChannel_;
		int proxyCount_;

		boost::shared_mutex mutex_;

		std::map<int, EndpointServicePrx> proxyMap_;
	};
};
};
#endif //TALK_PROXY_ENDPOINT_SERVICE_PROXY_H_
