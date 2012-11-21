#include "SocketServiceProxy.h"
#include "constant/ResultCode.h"
#include "Config.h"
#include  "utils/TimeUtils.h"
#include <Ice/Ice.h>
#include <Ice/LocalException.h>

using namespace std;
using namespace boost::algorithm;
using namespace mtalk::constant;
using namespace mtalk::utils;
using namespace com::xiaonei::wap::talk;

namespace mtalk{
namespace proxy{

	SocketServiceProxy::SocketServiceProxy():
		SerialZKProxy<SocketServicePrx>("SocketService", ZK_BOSH_PATH){
		LOG_DEBUG("SocketServiceProxy::SocketServiceProxy => Created");
	}

	Result SocketServiceProxy::createSession(const long userId, const long connectionId, const string& msg){
        LOG_W(userId, "SocketServiceProxy::createSession", -1, msg);
		MilliTimer tStart;
		ReadLock lock(mutex_);
		SocketServicePrx proxy = getProxy(userId);
		Result result;
		if(!proxy){
			LOG_DEBUG("SocketServiceProxy::createSession => error proxy not found  uid = " << userId); 
			result.code = ResultCode::PROXY_NOT_FOUND;
			result.msg = "socketService proxy not found";
			return result;
		}
		LOG_DEBUG("SocketServiceProxy::createSession => uid = " << userId << " cid = " << connectionId << " msg = " << msg);

		try{
				result  = proxy->createSession(connectionId, msg);
		}catch(const Ice::TimeoutException &e){
				LOG_ERROR("SocketServiceProxy==> createSession timeOut ERROR = "<<e.what());
				result.code = ResultCode::ICE_TIME_OUT;
				result.msg  = e.what();
		}catch(std::exception &e){
				LOG_ERROR("SocketServiceProxy==> createSession ERROR = "<<e.what());
				result.code = ResultCode::UNKNOW;
				result.msg  = e.what();
		}catch(...){
				LOG_ERROR("SocketServiceProxy==> createSession ERROR = unknow ");
				result.code = ResultCode::UNKNOW;
				result.msg = "unknow";
		}
		LOG_TIME("SocketServiceProxy::createSession|" << tStart.elapsed() );
		return result;
	}


	Result SocketServiceProxy::transferStream(const string& sessionId, const long connectionId, const string& msg){
		MilliTimer tStart;
		ReadLock lock(mutex_);
		SocketServicePrx proxy =  getProxyBySession(sessionId);
		Result result;
		if(!proxy){ 
			result.code = ResultCode::PROXY_NOT_FOUND; 
			return result; 
		} 
		LOG_DEBUG("SocketServiceProxy::tansferStream => sid = " << sessionId << " cid = " << connectionId << " msg = " << msg); 
		try{
			result =  proxy->transferStream(sessionId, msg); 
		}catch(std::exception &e){
			LOG_ERROR("SocketServiceProxy==> transferStream ERROR = "<<e.what());
			result.code = ResultCode::PROXY_NOT_FOUND; 
		}catch(...){
			LOG_ERROR("SocketServiceProxy==> transferStream ERROR = unknow ");
			result.code = ResultCode::PROXY_NOT_FOUND; 
		}
		LOG_TIME("SocketServiceProxy::transferStream|" << tStart.elapsed() );
		return result;
	} 


	bool SocketServiceProxy::notifySent(long userId, string msg){
        LOG_W(userId, "SocketServiceProxy::notifySent", -1, msg);
		MilliTimer tStart;
		ReadLock lock(mutex_);
		SocketServicePrx proxy = getProxy(userId);
		Result result;
		if(!proxy){  
			result.code = ResultCode::PROXY_NOT_FOUND; 
			LOG_DEBUG("SocketServiceProxy::notifySent =>  not fount proxy "); 
			return 0;
		} 
		LOG_DEBUG("SocketServiceProxy::notifySent => msgId = "); 
		try{
			//proxy->notifySent( msg); 
		}catch(std::exception &e){
			LOG_ERROR("SocketServiceProxy==> notifySent ERROR = "<<e.what());
		}catch(...){
			LOG_ERROR("SocketServiceProxy==> notifySent ERROR = unknow ");
		}
			LOG_TIME("SocketServicePrx::notifySent|" << tStart.elapsed() );
		return 1;
	}


	com::xiaonei::wap::talk::Result SocketServiceProxy::createSessionV1(const long userId, const long connectionId, const ::std::string& msg){

        LOG_W(userId, "SocketServiceProxy::createSessionV1", -1, msg);
			MilliTimer tStart;
			ReadLock lock(mutex_);
			SocketServicePrx proxy = getProxy(userId);
			Result result;
			if(!proxy){
					LOG_ERROR("SocketServiceProxy==> createSessionV1 proxy not found");
					result.code = ResultCode::PROXY_NOT_FOUND;
					result.msg  = "socketService proxy not found";
					return result;
			}

			LOG_DEBUG("SocketServiceProxy::createSessionV1 => uid = " << userId << " cid = " << connectionId << " msg = " << msg);

			try{
					result  = proxy->createSessionV1(connectionId, msg);
			}catch(const Ice::TimeoutException &e){
					LOG_ERROR("SocketServiceProxy==> createSession timeOut ERROR = "<<e.what());
					result.code = ResultCode::ICE_TIME_OUT;
					result.msg  = e.what();
			}catch(std::exception &e){
					LOG_ERROR("SocketServiceProxy==> createSessionV1 ERROR = "<<e.what());
					result.code = ResultCode::UNKNOW;
					result.msg  = e.what();
			}catch(...){
					LOG_ERROR("SocketServiceProxy==> createSessionV1 ERROR = unknow ");
					result.code = ResultCode::UNKNOW;
					result.msg  ="createSessionV1 unknow exception";
			}
			LOG_TIME("SocketServiceProxy::createSessionV1|" << tStart.elapsed() );
			return result;

	} 

	com::xiaonei::wap::talk::Result SocketServiceProxy::updateV1(const ::std::string& sessionId, const ::std::string& msg){
			MilliTimer tStart;
			ReadLock lock(mutex_);
			SocketServicePrx proxy =  getProxyBySession(sessionId);
			Result result;
			if(!proxy){ 
					LOG_ERROR("SocketServiceProxy==> updateV1 proxy not found");
					result.code = ResultCode::PROXY_NOT_FOUND; 
					result.msg  = "socketService proxy not found";
					return result; 
			} 

			LOG_DEBUG("SocketServiceProxy::updateV1 => sid = " << sessionId << " msg = " << msg); 

			try{
					result =  proxy->updateV1(sessionId, msg); 
			}catch(const Ice::TimeoutException &e){
					LOG_ERROR("SocketServiceProxy==> updateV1 timeOut ERROR = "<<e.what());
					result.code = ResultCode::ICE_TIME_OUT;
					result.msg  = e.what();
			}catch(std::exception &e){
					LOG_ERROR("SocketServiceProxy==> updateV1 ERROR = "<<e.what());
					result.code = ResultCode::UNKNOW;
					result.msg  = e.what();
			}catch(...){
					LOG_ERROR("SocketServiceProxy==> updateV1 ERROR = unknow ");
					result.code = ResultCode::UNKNOW;
					result.msg  ="updateV1 unknow exception";
			}


			LOG_TIME("SocketServiceProxy::updateV1|" << tStart.elapsed() );
			return result;

	}

	com::xiaonei::wap::talk::Result SocketServiceProxy::sendV1(const ::std::string& sessionId, const ::std::string& msg){

			MilliTimer tStart;
			ReadLock lock(mutex_);
			SocketServicePrx proxy =  getProxyBySession(sessionId);
			Result result;
			if(!proxy){ 
					LOG_ERROR("SocketServiceProxy==> sendV1 proxy not found");
					result.code = ResultCode::PROXY_NOT_FOUND; 
					result.msg  = "socketService proxy not found";
					return result; 
			} 
			LOG_DEBUG("SocketServiceProxy::sendV1 => sid = " << sessionId << " msg = " << msg); 
			try{
					result =  proxy->sendV1(sessionId, msg); 
			}catch(const Ice::TimeoutException &e){
					LOG_ERROR("SocketServiceProxy==> sendV1 timeOut ERROR = "<<e.what());
					result.code = ResultCode::ICE_TIME_OUT;
					result.msg  = e.what();
			}catch(std::exception &e){
					LOG_ERROR("SocketServiceProxy==> sendV1 ERROR = "<<e.what());
					result.code = ResultCode::UNKNOW;
					result.msg  = e.what();
			}catch(...){
					LOG_ERROR("SocketServiceProxy==> sendV1 ERROR = unknow ");
					result.code = ResultCode::UNKNOW;
					result.msg  ="sendV1 unknow exception";
			}

			LOG_TIME("SocketServiceProxy::sendV1|" << tStart.elapsed() );
			return result;
	}

	inline SocketServicePrx SocketServiceProxy::getProxyBySession(const string& sessionId){ 
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

