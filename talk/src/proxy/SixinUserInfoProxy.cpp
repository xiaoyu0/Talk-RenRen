#include "SixinUserInfoProxy.h"
#include "utils/MyLogger.h"
#include "Config.h"

#include <boost/lexical_cast.hpp>

using namespace std;
using namespace com::renren::sixin::account;
using namespace boost::xpressive;


namespace mtalk{
namespace proxy{

	SixinUserInfoProxy::SixinUserInfoProxy():
		SimpleZKProxy<MiscServicePrx>("MiscService", ZK_SIXIN_USER_SERVICE_PATH, false, 500){
		reg_ = sregex::compile("([2].([1-9]|\\d{2,}).\\d+)|(([3-9]|\\d{2,}).\\d+.\\d+)");
		LOG_DEBUG("SixinUserInfoProxy::SixinUserInfoProxy ==> constructed");	
	}

	bool SixinUserInfoProxy::userInstallSixin(long userId){
		LOG_DEBUG("SixinUserInfoProxy::userInstallSixin ==> userId = " << userId);
		//PromotionServicePrx proxy = getProxy(userId);
		MiscServicePrx proxy = getProxy(userId);
		if (!proxy){
			LOG_DEBUG("SixinUserInfoProxy::userInstallSixin ==> ger proxy failure userId = " << userId);
			return false;
		}
		bool isSixinUser = true;
		try {
	//		isSixinUser = proxy->isSixinUser(userId);
		}catch (exception& e){
			LOG_ERROR("SixinUserInfoProxy::userInstallSixin ==> proxy->isSixinUser()  failure  exception = " << e.what() << "	userId = " << userId);
			return false; 
		}
		return isSixinUser;
	}

	bool SixinUserInfoProxy::supportMuc(long userId){
		LOG_DEBUG("SixinUserInfoProxy::supportMuc ==> userId = " << userId);
		//PromotionServicePrx proxy = getProxy(userId);
		MiscServicePrx proxy = getProxy(userId);
		if (!proxy){
			LOG_DEBUG("SixinUserInfoProxy::supportMuc ==> ger proxy failure userId = " << userId);
			return true;
		}
		bool supportMuc = true;


		com::renren::sixin::account::VersionResultPtr resultPtr;
		try{
			//supportMuc = proxy->supportMuc(userId);
			resultPtr = proxy->getAppVersion(userId);	
			LOG_DEBUG("SixinUserInfoProxy::supportMuc ==> userId = " << userId);
		} catch (exception& e){
			LOG_ERROR("SixinUserInfoProxy::suportMuc ==> proxy->getAppVersion()  failure  exception = " << e.what() << "	userId = " << userId);
			return supportMuc;
		}

		if(resultPtr->success == 1){
			string appVersionStr = resultPtr->version;
			if(appVersionStr.empty()) {
				LOG_ERROR("SixinUserInfoProxy::supportMuc ==> appVersionStr is empty");
				return supportMuc;
			}
			com::renren::sixin::account::AppCatalogEnum appCatagory = resultPtr->appCatalog;
			if(appCatagory == com::renren::sixin::account::International){
				return supportMuc;
			}
			
			if(regex_search(appVersionStr, reg_) == 0) {
				supportMuc = false;
				LOG_DEBUG("SixinUserInfoProxy::supportMuc ==> userId = " << userId << ", appVersionStr = " << appVersionStr);

			}
			
		}

		return supportMuc;
	}

};
};
