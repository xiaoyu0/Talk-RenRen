/**
* @file SixinUserInfoProxy.h
* @brief 包装PromotionServicePrx, 但询user的sixin的安装情况
* @author wang.yu@renren-inc.com
* @version 1.0
* @date 2012-06-14
*/
#ifndef MTALK_PROXY_SIXINUSERINFO_PROXY_H_
#define MTALK_PROXY_SIXINUSERINFO_PROXY_H_

#include "ice_src/miscService.h"
#include "SimpleZKProxy.h"

#include    <boost/xpressive/xpressive_dynamic.hpp>

namespace mtalk{
namespace proxy{

	class SixinUserInfoProxy:
		public SimpleZKProxy<com::renren::sixin::account::MiscServicePrx>{
	public :
		SixinUserInfoProxy();
		
		~SixinUserInfoProxy(){}
		
		bool userInstallSixin(long userId);

		bool supportMuc(long userId);
	private:
		boost::xpressive::sregex reg_;
	};

};
};
#endif // MTALK_PROXY_INSTALLINFO_PROXY_H_
