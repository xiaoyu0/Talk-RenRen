#include <sstream>
#include  <boost/lexical_cast.hpp>
#include "BindServiceProxy.h"
#include "utils/MyLogger.h"
#include "Config.h"
#include    "utils/TimeUtils.h"
#include    "ice_src/base.h"
#include    "utils/UserIdUtil.h"

using namespace std;
using namespace mtalk::utils;
using namespace com::renren::sixin::account;

namespace mtalk{
	namespace proxy{
		BindServiceProxy::BindServiceProxy():
			SimpleZKProxy<BindThirdPartyServicePrx>("BindThirdPartyService", ZK_ACCOUNT_PATH, false, 500){
				LOG_DEBUG("BindServiceProxy::BindServiceProxy => Created");
				counterPtr = boost::shared_ptr<IceExceptionCounter>(new IceExceptionCounter("BindServiceProxy.cpp"));
			}

		string  BindServiceProxy::getBundAccountId(long sixinId, BindAccountEnum accountType){

			if(accountType == RenRenID && counterPtr->isSafeMode()){
				//如果取的是人人id, 而且iceCounter进入了安全模式,直接本地转换
				string renrenId = UserIdUtil::convertGid2RenRenId(sixinId);
				LOG_DEBUG("BindServiceProxy::getBundAccountId in safeMode =>   sixinId = " << sixinId << ", renrenId=" << renrenId );
				return renrenId;
			}

			::com::renren::sixin::account::StringResultPtr result;
			MilliTimer tStart;
			ReadLock lock(mutex_);
			size_t  index = size_t(sixinId) ;
			BindThirdPartyServicePrx  proxy = getProxy(index);
			if(!proxy){
				LOG_ERROR("BindServiceProxy::getBundAccountId => get proxy failure : index = " << index );
				return  "";
			}

			try{
				result = proxy->getBoundAccountId(sixinId,accountType);
				LOG_DEBUG("BindServiceProxy::getBundAccountId => sixinId = " << sixinId << " accountType = " << accountType);
			} catch (Ice::Exception& e){
				counterPtr->increase(e);
				LOG_ERROR("BindServiceProxy::getBundAccountId => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
				return  "";
			} catch (exception& e){
				LOG_ERROR("BindServiceProxy::getBundAccountId => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
				return  "";
			}catch(...){
				LOG_ERROR("BindServiceProxy::getBundAccountId => failure : proxy = " << proxy->ice_toString() << " exception = unknow exception"  ); 
				return  "";
			}

			LOG_TIME("BindServiceProxy::getBundAccountId|" << tStart.elapsed() );

			if(!result){
					LOG_ERROR("BindServiceProxy::getBundAccountId => return NULL sixinId = " <<sixinId); 
					return "" ;
			}

			if(result->success == 1){
				string resultStr = result->strValue;
				LOG_DEBUG("BindServiceProxy::getBundAccountId ==> sixinId = " << sixinId << "  the success return result is : " << resultStr);
				return resultStr;
			}else if(result->errorCode == NoBindRelationExist){
					return "478849448" ;
			}else{
					LOG_ERROR("BindServiceProxy::getBundAccountId =>  failure :  sixinId = "<<sixinId<< " error code = "<< result->errorCode <<" errorMsg = "<< result->errorMessage);
					return "" ;
			}

		}

		long  BindServiceProxy::getSixinId(string bundAccountId, BindAccountEnum accountType){
			if(accountType == RenRenID && counterPtr->isSafeMode()) {
				//根据人人id获取私信id, 而且iceCounter进入了安全模式,直接本地转换
				long sixinId = UserIdUtil::convertRenRenId2Gid(bundAccountId);
				LOG_DEBUG("BindServiceProxy::getSixinId in safeMode =>   sixinId = " << sixinId << ", bundAccountId=" << bundAccountId );
				return sixinId;

			}
			com::renren::sixin::account::SixinAccountResultPtr result ;
			MilliTimer tStart;
			ReadLock lock(mutex_);
	
			size_t  index = size_t(time(NULL)) ;
			BindThirdPartyServicePrx  proxy = getProxy(index);
			
			if(!proxy){
				LOG_ERROR("BindServiceProxy::getSixin => get proxy failure : index = " << index);
				return  -1;
			}

			try{
				result = proxy->getSixinAccount(bundAccountId,accountType);
				LOG_DEBUG("BindServiceProxy::getSixinId => boundAccountId = " << bundAccountId << " accountType = " << accountType);
			} catch (Ice::Exception& e){
				counterPtr->increase(e);
				LOG_ERROR("BindServiceProxy::getSixinId => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
				return  -1;
			} catch (exception& e){
				LOG_ERROR("BindServiceProxy::getSixinId => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
				return  -1;
			}catch(...){
					LOG_ERROR("BindServiceProxy::getSixinId => failure : proxy = " << proxy->ice_toString() << " exception = unknow exception"  ); 
					return  -1;
			}

			LOG_TIME("BindServiceProxy::getSixin|" << tStart.elapsed() );

			if(result.get() == NULL){

					LOG_ERROR("BindServiceProxy::getSixinId =>  return NULL"  ); 
					return -1 ;
			}


			if(result->success == 1){
					if(!result->account.get()){
							LOG_ERROR("BindServiceProxy::getSixinId => account return NULL"  ); 
							return -1 ;
					}
					return result->account->id;
			}else {
					LOG_WARN("BindServiceProxy::getSixinId => failure :  renrenId = "<<bundAccountId << "error code = "<< result->errorCode <<" errorMsg = "<< result->errorMessage);
					return -1 ;
			}

		}



		map<string, long> BindServiceProxy::getSixinIdMap(std::vector<std::string> bundAccountIdVec, com::renren::sixin::account::BindAccountEnum accountType){
			if(accountType == RenRenID && counterPtr->isSafeMode()){
				//如果取的是人人id, 而且iceCounter进入了安全模式,直接本地转换
				LOG_DEBUG("BindServiceProxy::getSixinIdMap in safeMode");
				return UserIdUtil::convertRenRenIdVec2Gid(bundAccountIdVec);
			}
			::com::renren::sixin::account::SixinAccountsResultPtr result;
			MilliTimer tStart;
			int vecSize = bundAccountIdVec.size();
			map<string, long> sixinIdMap;
			ReadLock lock(mutex_);
			BindThirdPartyServicePrx proxy = getProxy(vecSize);
			if(!proxy){
				LOG_ERROR("BindServiceProxy::getSixinIdMap => get proxy failure : vecSize = " << vecSize);
				return  sixinIdMap;
			}
			
			try{
				result = proxy->getSixinAccounts(bundAccountIdVec, accountType);
				LOG_DEBUG("BindServiceProxy::getSixinIdMap =>  " << "accountType = " << accountType);
			} catch (Ice::Exception& e){
				counterPtr->increase(e);
				LOG_ERROR("BindServiceProxy::getSixinIdMap => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
				return sixinIdMap;
			} catch (exception& e){
				LOG_ERROR("BindServiceProxy::getSixinIdMap => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
				return sixinIdMap;
			}catch(...){
				LOG_ERROR("BindServiceProxy::getSixinIdMap => failure : proxy = " << proxy->ice_toString() << " exception = unknow exception"  ); 
				return sixinIdMap;
			}
			LOG_TIME("BindServiceProxy::getSixinIdMap|" << tStart.elapsed() );
			
			//提信息	
			SixinAccountPtr sixinAccountPtr;
			Str2AccMap str2AccMap = result->sixinAccounts;
			for(map<string, SixinAccountPtr>::iterator it = str2AccMap.begin(); it != str2AccMap.end(); it++){
				sixinAccountPtr = it->second;
				string thirdAcc = it->first;
				long sixinId = sixinAccountPtr->id;
				//insert to sixinIdMap
				sixinIdMap[thirdAcc] = sixinId;
			}
			LOG_DEBUG("BindServiceProxy::getSixinIdMap ==> map size = " << sixinIdMap.size());
			LOG_TIME("BindServiceProxy::getSixinIdMap|" << tStart.elapsed() );


			// 一系列日志，打出详细ice调用前，后的数据
			stringstream ss;
			ss << "(";
			for(vector<string>::iterator it = bundAccountIdVec.begin(); it != bundAccountIdVec.end(); it++){
				ss << *it << ", ";	
			}
			ss << ")";
			string str = ss.str();
			LOG_DEBUG("BindServiceProxy::getSixinIdMap ==> bundAccountIdVec = " << str);
			LOG_DEBUG("BindServiceProxy::getSixinIdMap ==> sixinIdVec.size = " << bundAccountIdVec.size() << "   Ice return Map size = " << sixinIdMap.size());
			ss.str("");
			ss << "[";
			for(map<string, long>::iterator it = sixinIdMap.begin(); it != sixinIdMap.end(); it++){
				ss << "(" << it->first << "," << it->second << ") ";
			}
			ss << "]";
			str = ss.str();
			LOG_DEBUG("BindServiceProxy::getSixinIdMap ==> Ice return Map " << str);




			return sixinIdMap;
		}


		map<long, string> BindServiceProxy::getBundAccountIdMap(std::vector<long> sixinIdVec, com::renren::sixin::account::BindAccountEnum accountType){
			if(accountType == RenRenID && counterPtr->isSafeMode()){
				//如果取的是人人id, 而且iceCounter进入了安全模式,直接本地转换
				LOG_DEBUG("BindServiceProxy::getBundAccountIdMap in safeMode");
				return UserIdUtil::convertGidVec2RenRenId(sixinIdVec);
			}
			::com::renren::sixin::account::BundAccountIdsResultPtr result;
			MilliTimer tStart;
			int vecSize = sixinIdVec.size();
			map<long, string> bundAccountIdMap;
			ReadLock lock(mutex_);
			BindThirdPartyServicePrx proxy = getProxy(vecSize);
			if(!proxy){
				LOG_ERROR("BindServiceProxy::getSixinIdVec => get proxy failure : vecSize = " << vecSize);
				return bundAccountIdMap;
			}
			
			try{
				result = proxy->getBoundAccountIds(sixinIdVec, accountType);
				LOG_DEBUG("BindServiceProxy::getSixinId =>  " << "accountType = " << accountType);
			} catch (Ice::Exception& e){
				counterPtr->increase(e);
				LOG_ERROR("BindServiceProxy::getSixinId => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
				return bundAccountIdMap;
			} catch (exception& e){
				LOG_ERROR("BindServiceProxy::getSixinId => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
				return bundAccountIdMap;
			}catch(...){
				LOG_ERROR("BindServiceProxy::getSixinId => failure : proxy = " << proxy->ice_toString() << " exception = unknow exception"  ); 
				return bundAccountIdMap;
			}
			LOG_TIME("BindServiceProxy::getBundAccountIdMap|" << tStart.elapsed() );
			bundAccountIdMap = result->bundAccountIds;
			
			// 一系列日志，打出详细ice调用前，后的数据
			stringstream ss;
			ss << "(";
			for(vector<long>::iterator it = sixinIdVec.begin(); it != sixinIdVec.end(); it++){
				ss << *it << ", ";	
			}
			ss << ")";
			string str = ss.str();
			LOG_DEBUG("BindServiceProxy::getBundAccountIdMap ==> sixinIdVec = " << str);
			LOG_DEBUG("BindServiceProxy::getBundAccountIdMap ==> sixinIdVec.size = " << sixinIdVec.size() << "   Ice return Map size = " << bundAccountIdMap.size());
			ss.str("");
			ss << "[";
			for(map<long, string>::iterator it = bundAccountIdMap.begin(); it != bundAccountIdMap.end(); it++){
				ss << "(" << it->first << "," << it->second << ") ";
			}
			ss << "]";
			str = ss.str();
			LOG_DEBUG("BindServiceProxy::getBundAccountIdMap ==> Ice return Map " << str);

			return bundAccountIdMap;
		}

};
};

