/**
* @file SimpleZKProxy.h
* @brief	简单的支持zookeeper的Proxy实现
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2012-01-10
*/
#ifndef TALK_PROXY_SIMPLE_ZK_PROXY_H_
#define TALK_PROXY_SIMPLE_ZK_PROXY_H_

#include <string>
#include <vector>
#include "zk/ZKListener.h"
#include "WapIceProxy.h"
#include "utils/MyLogger.h"

namespace mtalk{
namespace proxy{

	/**
	* @brief	该类实现了对zookeeper的支持，多个Proxy之间无状态
	* 			所支持的zookeeper路径如下：
	* 			/3g/ice/xxxx/.serviceNode/ip:port
	* 			.serviceNode下可以包含多个地址节点，访问会随机指向不同的Proxy上。
	* 			地址节点的中的value未使用，可以任意设置
	*
	* @tparam iProxy
	*/
	template<class iProxy>
	class SimpleZKProxy : public WapIceProxy<iProxy>, public mtalk::zk::ZKListener{
	public :
		/**
		* @brief	创建Proxy，在WapIceProxy的创建参数基础上增加了zkPath参数，用于指定该Proxy所监听的zookeeper path
		*
		* @param	name
		* @param	zkPath
		* @param	isOneWay
		* @param	timeout
		*/
		SimpleZKProxy(const std::string& name, const std::string& zkPath, bool isOneWay = false, int timeout = 260) :
			WapIceProxy<iProxy>(name, isOneWay, timeout),
			zkPath_(zkPath){
		}

		/**
		* @brief	获取监听的zookeeper path
		*
		* @return	
		*/
		std::string getZKPath() const{
			return zkPath_;
		}

	protected :
		virtual void updateConfig(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr){
			std::vector<std::string> serverList;
			if(!zkManagerPtr->getChildren(zkPath_, serverList)){
				LOG_ERROR("SimpleZKProxy<" << WapIceProxy<iProxy>::name_ 
					<< ">::updateZKProxy => get server node failure : path = " << zkPath_);
			}
			WapIceProxy<iProxy>::initProxy(serverList);
		}
		std::string zkPath_;
	};
};
};
#endif //TALK_PROXY_SIMPLE_ZK_PROXY_H_
