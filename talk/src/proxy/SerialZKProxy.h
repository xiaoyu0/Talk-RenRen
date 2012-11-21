/**
* @file SerialZKProxy.h
* @brief	有序的支持zookeeper proxy
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2012-01-10
*/
#ifndef TALK_PROXY_SERIAL_ZK_PROXY_H_
#define TALK_PROXY_SERIAL_ZK_PROXY_H_

#include <string>
#include <vector>
#include <boost/shared_ptr.hpp>
#include <boost/lexical_cast.hpp>
#include "zk/ZKListener.h"
#include "WapIceProxy.h"
#include "utils/MyLogger.h"

namespace mtalk{
namespace proxy{
	
	/**
	* @brief	该类实现了对zookeeper的支持，同时多个proxy的按id有序的，已保证hash的一致性
	* 			所支持的zookeeper路径如下：
	*			/3g/ice/xxxx/server-{index}
	*			路径中index指定该serverNode的序号，xxxx业务路径下包含多个serverNode，node的序号不能相同。
	*			serverNode的地址保存在路径的value中。格式ip:port
	*
	* @tparam iProxy
	*/
	template<class iProxy>
	class SerialZKProxy : public WapIceProxy<iProxy>, public mtalk::zk::ZKListener{
	public :
		/**
		* @brief	创建Proxy，在WapIceProxy的创建参数基础上增加了zkPath参数，用于指定该Proxy所监听的zookeeper path
		*
		* @param	name
		* @param	zkPath
		* @param	isOneWay
		* @param	timeout
		*/
		SerialZKProxy(const std::string& name, const std::string& zkPath, bool isOneWay = false, int timeout = 260) :
			WapIceProxy<iProxy>(name, isOneWay, timeout),
			zkPath_(zkPath){
		}

		/**
		* @brief	获取监听的zookeeper path
		*
		* @return	
		*/
		std::string getZKPath() const;

	protected :
		virtual void updateConfig(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr);
		std::string zkPath_;
	};

	template<class iProxy>
	std::string SerialZKProxy<iProxy>::getZKPath() const {
		return zkPath_;
	}
	
	template<class iProxy>
	void SerialZKProxy<iProxy>::updateConfig(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr){
		std::vector<std::string> serverNameList;
		std::vector<std::string> serverList;

		if(!zkManagerPtr->getChildren(zkPath_, serverNameList)){
			LOG_ERROR("SerialZKProxy<" << WapIceProxy<iProxy>::name_ 
				<< ">::updateZKProxy => get serverName failure : path = " << zkPath_);
			WapIceProxy<iProxy>::initProxy(serverList);
			return;
		}

		std::vector<int> indexList;
		std::map<int, std::string> serverMap;
		
		for(size_t i = 0; i < serverNameList.size(); ++i){
			size_t p = serverNameList[i].find('-');
			
			if(p == std::string::npos){
				LOG_ERROR("SerialZKProxy<" << WapIceProxy<iProxy>::name_ 
					<< ">::updateZKProxy => serverName format error : name = [" 
					<< serverNameList[i] << "]");
				continue;
			}

			int index = 0;
			try{
				index = boost::lexical_cast<int>(serverNameList[i].substr(p + 1));
			} catch (boost::bad_lexical_cast &){
				LOG_ERROR("SerialZKProxy<" << WapIceProxy<iProxy>::name_ 
					<< ">::updateZKProxy => convert server index failure : index = [" 
					<< serverNameList[i].substr(p + 1) << "]");
				continue;
			}

			std::string childPath(zkPath_);
			childPath.append("/");
			childPath.append(serverNameList[i]);

			std::string server;
			if(zkManagerPtr->get(childPath, server)){
				indexList.push_back(index);
				serverMap[index] = server;
			} else {
				LOG_ERROR("SerialZKProxy<" << WapIceProxy<iProxy>::name_ 
					<< ">::updateZKProxy => get server node failure : path = " << childPath);
			}
		}

		sort(indexList.begin(), indexList.end());

		for(size_t i = 0; i < indexList.size(); ++i){
			serverList.push_back(serverMap[indexList[i]]);
		}

		WapIceProxy<iProxy>::initProxy(serverList);
	}

};
};

#endif //TALK_PROXY_SERIAL_ZK_PROXY_H_
