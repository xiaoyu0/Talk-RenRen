/**
* @file ImAdapterTalkListener.h
* @brief IM适配器服务中用于监听Talk的zookeeper中根目录下Talk服务节点组成变化的监听器
* @author chenxi.hou@renren-inc.com
* @version 1.0
* @date 2012-07-23
*/
#ifndef IM_ADAPTER_TALK_ZK_LISTENER_H
#define IM_ADAPTER_TALK_ZK_LISTENER_H

#include <map>
#include <string>
#include <vector>
#include <boost/shared_ptr.hpp>

#include "zk/ZKListener.h"
#include "zk/ZKManager.h"

#include "ImAdapter.h"

namespace mtalk{
namespace imAdapter{

	class ImAdapterTalkZKListener : public mtalk::zk::ZKListener{
	public :

		ImAdapterTalkZKListener(const std::string& path);


	private :

		virtual void updateConfig(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr);

		// talk 的 bosh 路径
		std::string path_;
		// talk节点的id的vector
		std::vector<int> ZKNodeVTalk_;
		// talk节点的id->ip的map，保存节点的ip地址
		std::map<int,std::string> ipMapTalk_;

	};


};
};

#endif

