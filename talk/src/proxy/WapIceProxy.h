/**
* @file WapIceProxy.h
* @brief	对Ice proxy的包装
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-09-27
*/
#ifndef TALK_UTILS_WAP_ICE_PROXY_H_
#define TALK_UTILS_WAP_ICE_PROXY_H_

#include <string>
#include <vector>
#include <sstream>
#include <boost/algorithm/string.hpp>
#include "utils/MyLock.h"
#include "utils/MyLogger.h"
#include "utils/WapIceChannel.h"
#include "Proxy.h"
#include <boost/xpressive/xpressive_dynamic.hpp>

using namespace boost::xpressive;

namespace mtalk{
namespace proxy{

	/**
	* @brief	对Ice proxy的包装包含了iProxy 的初始化，和一个简单的获取proxy的方法
	*
	* @tparam iProxy
	*/
	template<class iProxy> 
	class WapIceProxy : public Proxy{
	public :

		/**
		 * @brief	创建Proxy
		 *
		 * @param	name 指定 ice proxy的名字
		 * @param	isOneWay 指定建立proxy链接的方式，使用one way还是two way
		 * @param	timeout 设置proxy的超时时间
		 * 			注意该超时时间是方法调用的超时时间，而非建立链接的超时时间
		 */
		WapIceProxy(const std::string name, bool isOneWay = false, int timeout = 260):
			proxyCount_(0),
			name_(name),
			isOneWay_(isOneWay){
			wapIceChannel_.init(timeout);
		};

		virtual ~WapIceProxy(){
		};

		/**
		* @brief	初始化iProxy，可以多次调用，每次调用会清除上一次的配置信息
		* 			servers字符串格式每个address包含host和port使用":"分隔
		* 			address之间使用","分隔
		*
		* @param	serverList
		*
		* @return	
		*/
		virtual bool initProxy(const std::vector<std::string>& serverList){
			mtalk::utils::WriteLock lock(mutex_);

			if(serverList.empty()){
				LOG_INFO("WapIceProxy::initProxy => init " << name_ << " proxy success : servers is empty, clear proxy vector");

				if(!proxyVector_.empty()){
					proxyVector_.clear();
				}
				proxyCount_ = 0;
				return false;
			}

			if(!proxyVector_.empty()){
				proxyVector_.clear();
			}

			proxyCount_ = serverList.size();

			for(size_t i = 0; i < serverList.size(); ++i){
				std::string endpoint = serverList[i];

				//加入正宗表达式来判断服务的server值是否符合规范
				cregex reg = cregex::compile("\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}:\\d{1,5}");

				if(!regex_match(endpoint.c_str(),reg)){

					LOG_INFO("WapIceProxy::initProxy => init " << name_ << " proxy failure : the value of server is not right fomat" << endpoint);

					return false;

				}

				size_t p = endpoint.find(':');

				if(p == std::string::npos){
					LOG_INFO("WapIceProxy::initProxy => init " << name_ << " proxy failure : process endpoint [" << endpoint << "] can't found ':'");
					return false;
				}
				std::string host = endpoint.substr(0, p);
				std::string port = endpoint.substr(p+1);


				std::ostringstream os;
				os << name_ << ":default -h " << host << " -p " << port;
				//std::cout<<os<<std::endl;

				iProxy proxy;
				if(isOneWay_){
					proxy = wapIceChannel_.stringToProxyOneway<iProxy>(os.str());
				} else {
					proxy = wapIceChannel_.stringToProxyTwoway<iProxy>(os.str());
				}

					LOG_DEBUG("WapIceProxy::initProxy => init " << name_ << " proxy success: create proxy[" << os.str() << "] sucess");
				if(!proxy){
					LOG_INFO("WapIceProxy::initProxy => init " << name_ << " proxy failure : create proxy[" << os.str() << "] failure");
					return false;
				}

				proxyVector_.push_back(proxy);

				LOG_INFO("WapIceProxy::initProxy => init " << name_ << " a proxy [" << serverList[i] << "] success");
			}
			LOG_INFO("WapIceProxy::initProxy => init " << name_ << " all proxy success : count = " << proxyCount_);
			return true;
		};

	protected :

		/**
		* @brief	按照index = key % proxyCount的方式返回iProxy，一个基本的散列方式
		*
		* @param	key
		*
		* @return	
		*/
		virtual iProxy getProxy(const unsigned long key){
			/*if(key < 0){
				key = -key;	
			}*/
			if(proxyCount_ == 0){
				return NULL;
			}

			int index = key % proxyCount_;
			
			LOG_DEBUG("WapIceProxy::getProxy => id " << key << "count = " << proxyCount_<<name_);

			return proxyVector_[index];
		};
		
		size_t proxyCount_;
		std::string name_;
		bool isOneWay_;
		boost::shared_mutex mutex_;
		std::vector<iProxy> proxyVector_;
		mtalk::utils::WapIceChannel wapIceChannel_;

	};
};
};
#endif //TALK_UTILS_WAP_ICE_PROXY_H_
