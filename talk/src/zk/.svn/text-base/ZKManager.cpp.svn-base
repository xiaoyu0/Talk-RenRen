#include "Config.h"
#include "ZKManager.h"
#include "ZKListener.h"
#include "utils/MyLogger.h"
#include "utils/TimeUtils.h"

using namespace std;
using namespace mtalk::utils;

namespace mtalk{
namespace zk{

	ZKManager::ZKManager() :
		zkHandler_(NULL){
		LOG_INFO("ZKManager::ZKManager => create");
	}

	ZKManager::ZKManager(const string& connectionStr) :
		zkHandler_(NULL),
		connectionStr_(connectionStr){
		LOG_INFO("ZKManager::ZKManager => create : connectionStr = " << connectionStr_);
	}

	ZKManager::~ZKManager(){
	}

	bool ZKManager::init(){
		if(zkHandler_){
			zookeeper_close(zkHandler_);
			MilliSleep(250);
		}

		zoo_set_debug_level(ZOO_LOG_LEVEL_WARN);

		zkHandler_ = zookeeper_init(connectionStr_.c_str(), &ZKManager::watcher, ZK_SESSION_TIMEOUT, 0, static_cast<void *>(this), 0);

		LOG_INFO("ZKManager::init => connect to [" << connectionStr_ << "] " << (zkHandler_ != NULL ? "success" : "failure"));
		return zkHandler_ != NULL;
	}

	bool ZKManager::init(const string& connectionStr){
		LOG_INFO("ZKManager::init ==> connectionStr = " << connectionStr);
		connectionStr_ = connectionStr;
		return init();
	}

	void ZKManager::addListener(const string& path, ZKListenerPtr zkListenerPtr){

		LOG_INFO("ZKManager::addListener => add a zk listener : path = " << path);

		zkListenerPtr->zkHandle(shared_from_this(), path, ZK_LISTENER_INIT);
		{
			//WriteLock lock(mutex_);
			boost::recursive_mutex::scoped_lock lock(routerMutex_);

			zkListeners_[path].push_back(zkListenerPtr);
		}
		LOG_INFO("ZKManager::addListener => add a zk listener : path = " << path);
	}


	bool ZKManager::get(const string& path, string& value){
		if(!zkHandler_){
			if(!init()){
				return false;
			}
		}
		
		int bufferSize = ZK_BUFFER_SIZE;
		char buffer[ZK_BUFFER_SIZE];
		struct Stat stat;

		int result = zoo_get(zkHandler_, path.c_str(), 1, buffer, &bufferSize, &stat);

		if(result != ZOK){
			LOG_ERROR("ZKManager::get => get value from path [" << path << "] error : code = " << result);
			return false;
		}

		value.clear();
		value.append(buffer, bufferSize);
		return true;
	}

	bool ZKManager::getChildren(const string& path, vector<string>& children){
		if(!zkHandler_){
			if(!init()){
				return false;
			}
		}

		struct String_vector stringV;
		int result = zoo_get_children(zkHandler_, path.c_str(), 1, &stringV);
		if(result != ZOK){
			LOG_ERROR("ZKManager::getChildren => get children from path [" << path << "] error : code = " << result);
		}

		children.clear();
		
			LOG_DEBUG("ZKManager::getChildren ==> stringv.count == " << stringV.count);
		
		if (result == ZOK){
			for(int i = 0; i < stringV.count; ++i){
				children.push_back(stringV.data[i]);
			}

			deallocate_String_vector(&stringV);
			return true;
		}

		return false;
	}

	bool ZKManager::createNode(const string& path, const string& name, const string& value, int tryTimes){
		if(!zkHandler_){
			if(!init()){
				return false;
			}
		}
		
		for(int i = 0; i < tryTimes; ++i){
			int pathExist = zoo_exists(zkHandler_, path.c_str(), 1, NULL);
			if(pathExist == ZOK){
				break;
			}
			LOG_ERROR("ZKManager::createNode => check path [" << path << "] not exist, try times = " << i);
			if(i < (tryTimes - 1)){
				sleep(1);
			} else {
				return false;
			}
		}

		string nodePath = path + "/" + name;

		char zkBuffer[512];

		for(int i = 0; i < tryTimes; ++i){
			int result = zoo_create(zkHandler_, nodePath.c_str(), value.c_str(), value.size(), &ZOO_OPEN_ACL_UNSAFE, ZOO_EPHEMERAL, zkBuffer, sizeof(zkBuffer) - 1);
			if(result == ZOK){
				LOG_INFO("ZKManager::createNode => create node success :nodePath = " << nodePath << " value = " << value);
				break;
			}
			LOG_ERROR("ZKManager::createNode => create node error : nodePath = " << nodePath << " value = " << value << " << error = " << result);
			if(i < (tryTimes - 1)){
				MilliSleep(ZK_SESSION_TIMEOUT + 5000); //多sleep 5秒，防止时间重合而导致的多sleep一次
			}else {
				return false;
			}
		}
		return true;
	}

	void ZKManager::notify(int type, int state, const char* path){


		//ReadLock lock(mutex_);

		boost::recursive_mutex::scoped_lock lock(routerMutex_);

		if(type == ZOO_CHILD_EVENT){
			map<string, vector<ZKListenerPtr> >::iterator it = zkListeners_.find(path);
			if(it != zkListeners_.end()){
				for(size_t i = 0; i < it->second.size(); ++i){
					it->second[i]->zkHandle(shared_from_this(), path, ZK_CHILD_CHANGED);
				}
			}
		} else if(type == ZOO_SESSION_EVENT){
			if(state == ZSESSIONEXPIRED){
				if(init()){
					for(map<string, vector<ZKListenerPtr> >::iterator it = zkListeners_.begin(); it != zkListeners_.end(); it++){
						for(size_t i = 0; i < it->second.size(); ++i){
							it->second[i]->zkHandle(shared_from_this(), path, ZK_SESSION_EXPIRED);
						}
					}
				}
			}
		}
	}

	void ZKManager::watcher(zhandle_t* zzh, int type, int state, const char* path, void* watcherCtx){
		LOG_DEBUG("ZKManager::watcher => watcher triggered : type = " << type << " state = " << state << " path = " << path);
		ZKManager *zkManagerPtr = static_cast<ZKManager *>(const_cast<void *>(zoo_get_context(zzh)));
		if(zkManagerPtr != NULL){
			zkManagerPtr->notify(type, state, path);
		} else {
			LOG_ERROR("ZKManager::watcher => can not get zkManagerPtr from context");
		}
	}
};
};
