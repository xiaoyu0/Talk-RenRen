#ifndef TALK_BIND_ACOUNT_SERVICE_H_
#define TALK_BIND_ACOUNT_SERVICE_H_

#include <string>
#include <vector>
#include  <boost/shared_ptr.hpp>
#include "SerialZKProxy.h"
#include "SimpleZKProxy.h"
#include    "IceExceptionCounter.h"
#include "utils/MyLogger.h"
#include	"ice_src/bindThirdPartyService.h"
namespace mtalk{
	namespace proxy{
		class BindServiceProxy:
			public SimpleZKProxy<com::renren::sixin::account::BindThirdPartyServicePrx>{
				public:
					BindServiceProxy();
	//				~BindServiceProxy(){}

					/**
					  用私信帐号获得第三方帐号
					 *param sixinId
					 *
					 *param accountType 哪种第三方帐号   如：MobileContacts, EmailContacts, RenRenFriends, FacebookFriends, SinaWeiBo
					 */
					std::string  getBundAccountId(long sixinId, com::renren::sixin::account::BindAccountEnum accountType);


					/**
					 用第三方帐号获得私信帐号
					 *param sixinId
					 *param account
					 */
					long  getSixinId(std::string bundAccountId, com::renren::sixin::account::BindAccountEnum accountType);


					/**
					* @brief getSixinIdMap 批量三方账号获取私信账号
					*
					* @param bundAccountIdVec
					* @param accountType
					*
					* @return 
					*/
					std::map<std::string, long> getSixinIdMap(std::vector<std::string> bundAccountIdVec, com::renren::sixin::account::BindAccountEnum accountType);

					/**
					* @brief getBundAccountIdMap 批量私信账号获取第三方账号
					*
					* @param sixinIdVec
					* @param accountType
					*
					* @return 
					*/
					std::map<long, std::string> getBundAccountIdMap(std::vector<long> sixinIdVec, com::renren::sixin::account::BindAccountEnum accountType);
				private:
					boost::shared_ptr<IceExceptionCounter> counterPtr;
			};
	}
}

#endif   
