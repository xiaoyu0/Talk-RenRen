#include "utils/MyLogger.h"
#include "TalkServiceProxy.h"
#include "Config.h"
#include  "utils/TimeUtils.h"

using namespace std;
using namespace mtalk::utils;
using namespace mtalk::constant;
using namespace com::xiaonei::wap::talk;

namespace mtalk{
namespace proxy{

	TalkServiceProxy::TalkServiceProxy():
		SerialZKProxy<TalkServicePrx>("TalkService", ZK_BOSH_PATH){
	}

	void TalkServiceProxy::push(const long fromId, const long toId, const string& msg, const constant::MessageType::Type messageType) { 
        return push(fromId, toId, msg, (int)messageType); 
    }

	void TalkServiceProxy::push(const long fromId, const long toId, const string& msg, const int messageType){
        LOG_W(fromId, "TalkServiceProxy::push", messageType, msg);
		MilliTimer tStart;
		ReadLock lock(mutex_);
		TalkServicePrx proxy = getProxy(toId);
		
		if(!proxy){
			LOG_ERROR("TalkServiceProxy::push => get proxy failure : fromid = " << fromId << " toid = " << toId);
			return;
		}

		try{
			proxy->push(fromId, toId, msg, messageType);
			LOG_DEBUG("TalkServiceProxy::push => success : fromid = " << fromId << " toid = " << toId << " msg = " << msg);
		} catch (exception& e){
			LOG_ERROR("TalkServiceProxy::push => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
		}
		LOG_TIME("TalkServiceProxy::push|" << tStart.elapsed() );
	}

	vector<int> TalkServiceProxy::getUsersOnlineStatSeq(const vector<long>& users, int key){
		MilliTimer tStart;
		ReadLock lock(mutex_);
		TalkServicePrx proxy = getProxy(key);

		if(!proxy){
			LOG_ERROR("TalkServiceProxy::getUsersOnlineStat => get proxy failure : key = " << key);
			vector<int> result;
			return result;
		}

		vector<int> stat;
		try{
			stat = proxy->getUsersOnlineStatSeq(users);
			LOG_DEBUG("TalkServiceProxy::getUsersOnlineStat => success : size = " << stat.size());
		} catch (exception& e){
			LOG_ERROR("TalkServiceProxy::getUsersOnlineStatSeq => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
		}
		LOG_TIME("TalkServiceProxy::getUserOnlineStatSeq|" << tStart.elapsed() );
		return stat;
	}

	int TalkServiceProxy::getUserOnlineStat(const long userId, bool forIM){
		MilliTimer tStart;
		ReadLock lock(mutex_);
		TalkServicePrx proxy = getProxy(userId);
		
		if(!proxy){
			LOG_ERROR("TalkServiceProxy::getUsersOnlineStat => get proxy failure : key = " << userId);
			return static_cast<int>(OnlineType::OFFLINE);
		}

		int stat = 0;
		try{
			stat = proxy->getUserOnlineStat(userId);
			LOG_DEBUG("TalkServiceProxy::getUsersOnlineStat => success : userId = " << userId);
		} catch (exception& e){
			LOG_ERROR("TalkServiceProxy::getUserOnlineStat => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
		}
		LOG_TIME("getUsersOnlineStat::getUsersOnlineStat|" << tStart.elapsed() );
		return stat;
	}
//by yyb
	bool TalkServiceProxy::mucReturn(long userId,string sessionId, string msg , bool isSave){
		
        LOG_W(userId, "TalkServiceProxy::mucReturn", -1, msg);
		ReadLock lock(mutex_);
		TalkServicePrx proxy = getProxy(userId);
		
		if(!proxy){
			LOG_ERROR("TalkServiceProxy::MucReturn => get proxy failure : key = " << userId);
			return false;
  		}
		proxy->MucReturn(sessionId ,msg ,isSave);

		return true;
	}
	bool TalkServiceProxy::distribute(long roomId, long toId, string msg , bool isSave){
		ReadLock lock(mutex_);
		TalkServicePrx proxy = getProxy(toId);
		
		if(!proxy){
			LOG_ERROR("TalkServiceProxy::distribute => get proxy failure : key = " << toId);
			return false;
  		}
		proxy->distribute(roomId,toId ,msg,isSave);	

		return true;
		
	}

	int TalkServiceProxy::getUserOnlineTypebyTalk(const long userId){
		MilliTimer tStart;
		ReadLock lock(mutex_);
		TalkServicePrx proxy = getProxy(userId);
		
		if(!proxy){
			LOG_ERROR("TalkServiceProxy::getUsersOnlineTypebyTalk ==> get proxy failure : key = " << userId);
			return static_cast<int>(OnlineType::OFFLINE);
		}

		int stat = 0;
		try{
			stat = proxy->getUserOnlineTypebyTalk(userId);
			LOG_DEBUG("TalkServiceProxy::getUsersOnlineTypebyTalk ==> success : userId = " << userId);
		} catch (exception& e){
			LOG_ERROR("TalkServiceProxy::getUsersOnlineTypebyTalk => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
		}

		LOG_TIME("getUsersOnlineStat::getUserOnlineTypebyTalk|" << tStart.elapsed() );
		return stat;
	}

	void TalkServiceProxy::mucPush(const string roomId, const long toId, const string& msg){

	}

	void TalkServiceProxy::int2TypeSeq(const vector<int>& intStats, vector<mtalk::constant::OnlineType::Type>& stat){
		vector<int>::const_iterator it = intStats.begin();

		for ( ; it != intStats.end(); it++){
			stat.push_back(static_cast<mtalk::constant::OnlineType::Type>(*it));
		}
			
	}
};
};
