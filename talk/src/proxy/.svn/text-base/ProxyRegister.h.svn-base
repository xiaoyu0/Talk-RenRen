/**
* @file ProxyRegister.h
* @brief	Proxy注册表
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2012-01-10
*/
#ifndef TALK_PROXY_PROXY_REGISTER_H_
#define TALK_PROXY_PROXY_REGISTER_H_

#include <string>
#include <map>
#include <boost/shared_ptr.hpp>
#include "proxy/Proxy.h"

namespace mtalk{
namespace proxy{

	/**
	* @brief	只能以单例的方式使用，为了简化各类proxy的使用和依赖关心.
	* 			设立的该Proxy注册表，所有Proxy创建后均需要注册进该注册表，
	* 			使用时从Register中获取所需的Proxy，
	* 			需要注意，Proxy的初始化和注册需要先于使用
	*/
	class ProxyRegister{
	public :

		ProxyRegister(){
		}

		/**
		* @brief	注册一个Proxy
		*
		* @param	name Proxy在注册表中的唯一名字，如果已经存在同名的Proxy会覆盖之
		* @param	proxy Proxy对象
		*
		*/
		void registerProxy(const std::string& name, boost::shared_ptr<Proxy> proxy){
			//std::cout<<name<<std::endl;
			proxyMap_[name] = proxy;
		}

		/**
		* @brief	获取指定的Proxy，使用模板方法以特化Proxy
		*
		* @tparam iProxy
		* @param	name
		*
		* @return	
		*/
		template<class iProxy>
		boost::shared_ptr<iProxy> getProxy(const std::string& name);

	private :
		std::map<std::string, boost::shared_ptr<Proxy> > proxyMap_;
	};
	
	template<class iProxy>
	boost::shared_ptr<iProxy> ProxyRegister::getProxy(const std::string& name){
		std::map<std::string, boost::shared_ptr<Proxy> >::iterator
		it = proxyMap_.find(name);

		boost::shared_ptr<iProxy> proxy;
		if(it != proxyMap_.end()){
			proxy = boost::dynamic_pointer_cast<iProxy>(it->second);
		}
		return proxy;
	}
};
};

#endif //TALK_PROXY_PROXY_REGISTER_H_
