#include "ShortUrlServiceProxy.h"
#include "utils/MyLogger.h"
#include "Config.h"

using namespace std;
using namespace mtalk::utils;
using namespace com::xiaonei::wap::xuanyuan::service;

namespace mtalk{
namespace proxy{

	ShortUrlServiceProxy::ShortUrlServiceProxy():
		SimpleZKProxy<ShortDomainServicePrx>("ShortDomainIceService", ZK_SHORT_URL_PATH){
	}

	string ShortUrlServiceProxy::create(const string& url){
		ReadLock lock(mutex_);
		
		ShortDomainServicePrx proxy = getProxy(getKey(url));

		if(!proxy){
			LOG_ERROR("ShortUrlServiceProxy::create => get proxy failure : url = [" << url << "] key = " << getKey(url));
			return "";
		}
		string shortUrl;
		try{
			shortUrl = proxy->create(url);
		}catch(std::exception& e){
			std::cout<<"ShortUrlServiceProxy create catch exception = "<<e.what()<<std::endl;
		}catch(...){
			std::cout<<"ShortUrlServiceProxy create catch unknow exception"<<std::endl;
		}
		LOG_DEBUG("ShortUrlServiceProxy::create => success : shortUrl = " << shortUrl << " originUrl = " << url);

		return shortUrl;

	}

	string ShortUrlServiceProxy::getOriginURL(const string& code){
		ReadLock lock(mutex_);
		
		ShortDomainServicePrx proxy = getProxy(getKey(code));

		if(!proxy){
			LOG_ERROR("ShortUrlServiceProxy::getOriginURL => get proxy failure : code = [" << code << "] key = " << getKey(code));
			return "";
		}

		string url; 
		try{
			url = proxy->getOriginURL(code);
		}catch(std::exception& e){
			std::cout<<"ShortUrlServiceProxy getOriginURL catch exception = "<<e.what()<<std::endl;
		}catch(...){
			std::cout<<"ShortUrlServiceProxy getOriginURL catch unknow exception"<<std::endl;
		}


		LOG_DEBUG("ShortUrlServiceProxy::getOriginURL => success : url = " << url << " code = " << code);

		return url;
	}

	string ShortUrlServiceProxy::getOriginURLByShortURL(const string& shortUrl){
		ReadLock lock(mutex_);
		
		ShortDomainServicePrx proxy = getProxy(getKey(shortUrl));

		if(!proxy){
			LOG_ERROR("ShortUrlServiceProxy::getOriginURLByShortURL => get proxy failure : shortUrl = [" << shortUrl << "] key = " << getKey(shortUrl));
			return "";
		}
		string url ;
		try{
			url = proxy->getOriginURLByShortURL(shortUrl);
		}catch(std::exception& e){
			std::cout<<"ShortUrlServiceProxy getOriginURLByShortURL catch exception = "<<e.what()<<std::endl;
		}catch(...){
			std::cout<<"ShortUrlServiceProxy getOriginURLByShortURL catch unknow exception"<<std::endl;
		}

		LOG_DEBUG("ShortUrlServiceProxy::getOriginURLByShortURL => success : url = " << url << " shortUrl = " << shortUrl);

		return url;
	}

	inline int ShortUrlServiceProxy::getKey(const string& str){
		int key = 0;
		for(size_t i = 0; i < str.size(); ++i){
			key += str[i];
		}
		return key;
	}
};
};
