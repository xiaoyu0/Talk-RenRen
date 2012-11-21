#ifndef TALK_UTILS_ZK_UTILS_H_
#define TALK_UTILS_ZK_UTILS_H_

#include <string>
#include <vector>
#include "c-client-src/zookeeper.h"

namespace mtalk{
namespace utils{

	/**
	* @brief	一个服务节点
	*/
	typedef struct _ServerNode{
		int index;
		std::string address;
		
		bool operator < (const _ServerNode& sn) const {
			return index < sn.index;
		}

		bool operator > (const _ServerNode& sn) const {
			return index > sn.index;
		}
	} ServerNode;

	/**
	* @brief	获取服务列表，已按照index排好顺序
	*
	* @param	zh
	* @param	path
	* @param	watcher
	* @param	serverNodes
	*
	* @return	
	*/
	int getServers(zhandle_t* zh, const std::string& path, int watcher, std::vector<ServerNode>& serverNodes);

	/**
	* @brief	获取服务列表，服务顺序随机，随机负载的方式
	*
	* @param	zh
	* @param	path
	* @param	watcher
	* @param	servers
	*
	* @return	
	*/
	int getServers(zhandle_t* zh, const std::string& path, int watcher, std::string& servers);
};
};
#endif //TALK_UTILS_ZK_UTILS_H_
