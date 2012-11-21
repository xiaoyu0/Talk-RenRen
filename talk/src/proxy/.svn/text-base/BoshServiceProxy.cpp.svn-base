#include "BoshServiceProxy.h"
#include "constant/ResultCode.h"
#include "Config.h"
#include    "utils/TimeUtils.h"

using namespace std;
using namespace boost::algorithm;
using namespace mtalk::constant;
using namespace mtalk::utils;
using namespace com::xiaonei::wap::talk;

namespace mtalk{
	namespace proxy{

		BoshServiceProxy::BoshServiceProxy():
			SerialZKProxy<BoshServicePrx>("BoshService", ZK_BOSH_PATH ,0){
				LOG_DEBUG("BoshServiceProxy::BoshServiceProxy => Created");
			}

		Result BoshServiceProxy::createSession(const long userId, const long connectionId, const string& msg){
            LOG_W(userId, "BoshServiceProxy::createSession", -1, msg);
			MilliTimer tStart;
			ReadLock lock(mutex_);
			BoshServicePrx proxy = getProxy(userId);
			Result result;
			if(!proxy){
				result.code = ResultCode::PROXY_NOT_FOUND;
				return result;
			}

			LOG_DEBUG("BoshServiceProxy::createSession => uid = " << userId << " cid = " << connectionId << " msg = " << msg);
			try{
				result = proxy->createSession(connectionId, msg);
			}catch(std::exception& e){
				LOG_ERROR("BoshServiceProxy createSession catch exception = "<<e.what());
				result.code = ResultCode::PROXY_NOT_FOUND;
			}catch(...){
				LOG_ERROR("BoshServiceProxy createSession catch unknow excepion");
				result.code = ResultCode::PROXY_NOT_FOUND;
			}
			LOG_TIME("BoshServiceProxy::createSession|" << tStart.elapsed() );
			return result;

		}

		Result BoshServiceProxy::updateSession(const string& sessionId, const long connectionId, const string& msg){
			MilliTimer tStart;
			ReadLock lock(mutex_);
			BoshServicePrx proxy =  getProxyBySession(sessionId);
			Result result;
			if(!proxy){
				result.code = ResultCode::PROXY_NOT_FOUND;
				return result;
			}

			LOG_DEBUG("BoshServiceProxy::updateSession => sid = " << sessionId << " cid = " << connectionId << " msg = " << msg);
			try{
				result = proxy->updateSession(connectionId, msg);
			}catch(std::exception& e){
				LOG_ERROR("BoshServiceProxy updateSession catch exception = "<<e.what());
				result.code = ResultCode::PROXY_NOT_FOUND;
			}catch(...){
				LOG_ERROR("BoshServiceProxy updateSession catch unknow excepion");
				result.code = ResultCode::PROXY_NOT_FOUND;
			}
			LOG_TIME("BoshServiceProxy::updateSession|" << tStart.elapsed() );
			return result;

		}

		Result BoshServiceProxy::sendMessage(const string& sessionId, const long connectionId, const string& msg){
			MilliTimer tStart;
			ReadLock lock(mutex_);
			BoshServicePrx proxy =  getProxyBySession(sessionId);
			Result result;
			if(!proxy){
				result.code = ResultCode::PROXY_NOT_FOUND;
				return result;
			}

			LOG_DEBUG("BoshServiceProxy::sendMessage => sid = " << sessionId << " cid = " << connectionId << " msg = " << msg);

			try{
				result = proxy->sendMessage(connectionId, msg);
			}catch(std::exception& e){
				LOG_ERROR("BoshServiceProxy sendMessage catch exception ="<<e.what());
				result.code = ResultCode::PROXY_NOT_FOUND;
			}catch(...){
				LOG_ERROR("BoshServiceProxy sendMessage catch unknow excepion");
				result.code = ResultCode::PROXY_NOT_FOUND;
			}
			LOG_TIME("BoshServiceProxy::sendMessage|" << tStart.elapsed() );
			return result;
		}

		vector<string> BoshServiceProxy::getVersionAndHost(){
			vector<string> vhList;
			for(size_t i = 1; i <= proxyCount_; ++i){
				vhList.push_back(getProxy(i)->getVersionAndHost());
			}
			return vhList;
		}

		inline BoshServicePrx BoshServiceProxy::getProxyBySession(const string& sessionId){
			if(sessionId.size() < 16 || proxyCount_ == 0){
				return NULL;
			}
			size_t serverId = (sessionId[3] - '0') * 100
				+ (sessionId[7] - '0') * 10
				+ (sessionId[11] - '0');
			if(serverId >= proxyCount_){
				return NULL;
			}

			return proxyVector_[serverId];
		}
	};
};
