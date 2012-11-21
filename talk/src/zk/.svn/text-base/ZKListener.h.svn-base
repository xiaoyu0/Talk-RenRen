/**
* @file ZKListener.h
* @brief	zookeeper 事件监听着
* @author zhou you, Email : you.zhou@renren-inc.com
* @version 1.0
* @date 2011-12-31
*/
#ifndef TALK_ZK_ZK_LISTENER_H_
#define TALK_ZK_ZK_LISTENER_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "ZKManager.h"

namespace mtalk{
namespace zk{

	/**
	* @brief	zookeeper 事件的监听者
	* 			普通使用者，如果关心指定路径子节点变化的
	* 			只需要实现updateConfig方法重新获取配置，更新服务即可
	* 			如果需要对不同的zookeeper事件进行不同的处理，则需要覆盖zkHandle方法，自行对不同的事件进行处理
	*/
	class ZKListener{
	public :
		ZKListener();

		virtual ~ZKListener();

		/**
		* @brief	监控到path发生变动后ZKManager会调用注册listener的zkHandle方法
		*			该方法包含了对zookeeper发生的事件的默认处理
		*			默认处理所有事件都会调用updateConfig方法来更新配置。
		*			如果需要对不同事件有不同的处理可以直接覆写该方法。
		*
		* @param	zkManagerPtr 
		* @param	path 发生变化的path
		* @param	event 发生的事件类型
		*/
		virtual void zkHandle(boost::shared_ptr<ZKManager> zkManagerPtr, const std::string& path, const ZKEventType event);

	protected :
		/**
		* @brief	由子类实现，实现重新更新配置的方法。
		*
		* @param	zkManagerPtr
		*/
		virtual void updateConfig(boost::shared_ptr<ZKManager> zkManagerPtr) = 0;
	};
};
};

#endif //TALK_ZK_ZK_LISTENER_H_
