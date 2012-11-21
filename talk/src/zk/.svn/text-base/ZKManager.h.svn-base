/**
* @file ZKManager.h
* @brief	zookeeper 注册管理器
* @author zhou you, Email : you.zhou@renren-inc.com
* @version 1.0
* @date 2011-12-31
*/
#ifndef TALK_ZK_ZK_MANAGER_H_
#define TALK_ZK_ZK_MANAGER_H_

#include <map>
#include <vector>
#include <string>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <c-client-src/zookeeper.h>
#include "utils/Singleton.h"
#include "utils/MyLock.h"

namespace mtalk{
namespace zk{

	class ZKListener;

	typedef boost::shared_ptr<ZKListener> ZKListenerPtr;

	/**
	* @brief	自定义的zk事件类型
	*/
	enum ZKEventType{
		/**
		* @brief	指定path下的child节点发生变化，一般情况下必须更新配置信息
		*/
		ZK_CHILD_CHANGED = 0,
		/**
		* @brief	zookeeper服务器上会不定期的发生session expired事件，安全起见，更新配置信息
		*/
		ZK_SESSION_EXPIRED,
		/**
		* @brief	向manager中添加listener后会进行listener的初始化，在调用addListener方法后会立即发生该事件
		*/
		ZK_LISTENER_INIT
	};

	/**
	* @brief	zookeeper 注册管理器
	*			包含对zookeeper链接的初始化，添加Listener，注册节点等功能
	*			需要监听zookeeper配置变化的类只需要继承mtalk::utils::ZKListener
	*			然后注册到ZKManager中即可。
	*/
	class ZKManager : public boost::enable_shared_from_this<ZKManager> {
	public :

		/**
		* @brief	默认构造函数，支持单例的调用方式
		*			使用前需要调用bool init(const std::string&)完成manager的初始化
		*/
		ZKManager();

		/**
		* @brief	指定链接字符串的构造函数
		*			需要手动调用init初始化
		*
		* @param	connectionStr
		*/
		ZKManager(const std::string& connectionStr);

		~ZKManager();

		/**
		* @brief	使用构造函数中指定的连接字符串来初始化zookeeper client
		*
		* @return	
		*/
		bool init();

		/**
		* @brief	使用指定连接字符串来初始化zookeeper client
		*
		* @param	connectionStr
		*
		* @return	
		*/
		bool init(const std::string& connectionStr);

		/**
		* @brief	添加一个zkListener到manager中
		* 			一个listener如果需要监听多个path的变化需要重复添加
		*
		* @param	path 监听的路径
		* @param	zkListenerPtr
		*/
		void addListener(const std::string& path, ZKListenerPtr zkListenerPtr);


		/**
		* @brief	从zookeeper中获取一个指定path的value
		*
		* @param	path
		* @param	value
		*
		* @return	
		*/
		bool get(const std::string& path, std::string& value);

		/**
		* @brief	从zookeeper中获取指定path的所有children node列表
		*
		* @param	path
		* @param	children 返回children node的名字列表
		*
		* @return	
		*/
		bool getChildren(const std::string& path, std::vector<std::string>& children);

		/**
		* @brief	在zookeeper中创建一个新节点
		*
		* @param	path 
		* @param	name
		* @param	value
		* @param	tryTimes 尝试次数，当出现创建失败时重复尝试的次数，一般不需修改
		*
		* @return	
		*/
		bool createNode(const std::string& path, const std::string& name, const std::string& value, int tryTimes = 5);

	private :

		void notify(int type, int state, const char* path);

		static void watcher(zhandle_t* zzh, int type, int state, const char* path, void* watcherCtx);

		std::map<std::string, std::vector<ZKListenerPtr> > zkListeners_;

		boost::mutex listenerMutex_;

		zhandle_t *zkHandler_;

		std::string connectionStr_;

		boost::shared_mutex mutex_;

		boost::recursive_mutex routerMutex_;


	};


};
};

#endif //TALK_UTILS_ZK_MANAGER_H_
