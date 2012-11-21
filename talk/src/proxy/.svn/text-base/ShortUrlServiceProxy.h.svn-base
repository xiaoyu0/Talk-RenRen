/**
* @file ShortUrlServiceProxy.h
* @brief	短域名服务的Proxy
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2012-01-10
*/
#ifndef TALK_PROXY_SHORT_URL_SERVICE_PROXY_H_
#define TALK_PROXY_SHORT_URL_SERVICE_PROXY_H_

#include <string>
#include "SimpleZKProxy.h"
#include "ice_src/shortDomain.h"

namespace mtalk{
namespace proxy{
	
	/**
	* @brief	短域名服务的Proxy
	*/
	class ShortUrlServiceProxy : 
		public SimpleZKProxy<com::xiaonei::wap::xuanyuan::service::ShortDomainServicePrx>{
	
	public :
		ShortUrlServiceProxy();

		std::string create(const std::string& url);

		std::string getOriginURL(const std::string& code);

		std::string getOriginURLByShortURL(const std::string& shortUrl);

	private :
		inline int getKey(const std::string& str);
	};
};
};

#endif //TALK_PROXY_SHORT_URL_SERVICE_PROXY_H_
