#include <algorithm>
#include <functional>
#include <boost/lexical_cast.hpp>
#include "ZKUtils.h"

using namespace std;

namespace mtalk{
namespace utils{

	int getServers(zhandle_t* zh, const string& path, int watcher, vector<ServerNode>& serverNodes){
		struct String_vector children;
		int result = zoo_get_children(zh, path.c_str(), watcher, &children);
		if(result != ZOK){
			return result;
		}

		char buffer[512];
		int bufferLen = 512;
		struct Stat stat;

		for(int i = 0; i < children.count; i++){
			bufferLen = 512;
			string serverName(children.data[i]);
			size_t p = serverName.find('-');
			if(p == string::npos){
				continue;
			}
			ServerNode node;
			node.index = boost::lexical_cast<int>(serverName.substr(p + 1));
			
			string nodePath = path + '/' + serverName;
			result = zoo_get(zh, nodePath.c_str(), 0, buffer, &bufferLen, &stat);
			if(result != ZOK){
				return result;
			}

			node.address.append(buffer, bufferLen);
			serverNodes.push_back(node);
		}

		sort(serverNodes.begin(), serverNodes.end());
		return ZOK;
	}
	
	int getServers(zhandle_t* zh, const std::string& path, int watcher, std::string& servers)
	{
		struct String_vector children;
		int result = zoo_get_children(zh, path.c_str(), watcher, &children);
		if(result != ZOK){
			return result;
		}
		
		if (!servers.empty())
			servers.clear();

		for(int i = 0; i < children.count; i++){
			servers.append(children.data[i]);

			if (i != (children.count - 1))
				servers.append(",");
		}

		return ZOK;
	}
};
};
