#include "ZKListener.h"
#include "utils/MyLogger.h"

using namespace std;
using namespace mtalk::utils;

namespace mtalk{
namespace zk{
	ZKListener::ZKListener(){
	}

	ZKListener::~ZKListener(){
	}

	void ZKListener::zkHandle(boost::shared_ptr<ZKManager> zkManagerPtr, const std::string& path, const ZKEventType event){
		switch(event){
		case ZK_CHILD_CHANGED :
			LOG_INFO("ZKListener::zkHandle => path [" << path << "] children changed, start update");
			updateConfig(zkManagerPtr);
			LOG_INFO("ZKListener::zkHandle => path [" << path << "] listener update finish");
			break;
		case ZK_SESSION_EXPIRED :
			LOG_INFO("ZKListener::zkHandle => path [" << path << "] session expired, start update");
			updateConfig(zkManagerPtr);
			LOG_INFO("ZKListener::zkHandle => path [" << path << "] listener update finish");
			break;
		case ZK_LISTENER_INIT :
			LOG_INFO("ZKListener::zkHandle => path [" << path << "] listener init, start update");
			updateConfig(zkManagerPtr);
			LOG_INFO("ZKListener::zkHandle => path [" << path << "] listener update finish");
			break;
		};
	}
};
};
