#include<map>
#include<vector>
#include<string>
#include<algorithm>
#include <boost/lexical_cast.hpp>

#include "utils/MyLogger.h"
#include "ImOnlineAdapterServer.h"
#include "utils/Singleton.h"

#include "ImAdapterTalkZKListener.h"

using namespace std;

namespace mtalk{
namespace imAdapter{

	ImAdapterTalkZKListener::ImAdapterTalkZKListener(const std::string& path)
		:path_(path){
	}
		
	void ImAdapterTalkZKListener::updateConfig(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr){

		// 存放服务器名的容器
		vector<string> serverNameList;

		// 取得根节点下所有服务器名到容器
		if(!zkManagerPtr->getChildren(path_, serverNameList)){
			LOG_ERROR("ImAdapterTalkZKListener::updateConfig"
					<< " => zkManagerPtr->getChildren failure. path_=" << path_);
			return;
		}

		// 服务器ID整型值的容器
		vector<int> indexList;

		// 服务器的ip地址
		map<int,string> ipMap;
		
		// 对每一台服务器节点
		for(size_t i = 0; i < serverNameList.size(); ++i){
			size_t p = serverNameList[i].find('-');
			
			// 定位到ID标记
			if(p == std::string::npos){
				LOG_ERROR("ImAdapterTalkZKListener::updateConfig" 
					<< " => serverName format error : name = [" 
					<< serverNameList[i] << "]");
				continue;
			}

			// 转换ID为整型值
			int index = 0;
			try{
				index = boost::lexical_cast<int>(serverNameList[i].substr(p + 1));
			} catch (boost::bad_lexical_cast &){
				LOG_ERROR("ImAdapterTalkZKListener::updateConfig"
					<< " => convert server index failure : index = [" 
					<< serverNameList[i].substr(p + 1) << "]");
				continue;
			}

			string childPath(path_);
			childPath.append("/");
			childPath.append(serverNameList[i]);

			string server;
			if(zkManagerPtr->get(childPath, server)){
				// 对于能实际取得ID整数值的节点，将ID放入容器保存
				indexList.push_back(index);

				// 将节点的ip保存起来
				size_t colon = server.find(':');
				string ip = server.substr(0, colon);
				ipMap[index] = ip;

				// 打印ip
				cout<< "serverNameList[" << i << "]:" << serverNameList[i] << " ip="<< ip <<endl;
			} else {
				LOG_ERROR("ImAdapterTalkZKListener::updateConfig"
					<< " => get server node failure : path = " << childPath);
			}
			// ID容器填充完毕
		}
			cout<<endl;

		// 对服务器ID容器进行排序
		sort(indexList.begin(), indexList.end());

		// 判断节点变化情况：确定新列表中较之旧列表中消失的节点和出现的节点
		// 新旧列表的元素指针，用于元素(talk服务器Id)的比较
		int oldPtr,newPtr;
		int oldSize,newSize;
		// 列表助记命名(输入）
		// 当前的服务器ID容器
		vector<int>& newList = indexList;
		// 上一次updateConfig调用时的ID容器
		vector<int>& oldList = ZKNodeVTalk_;
		// ip的容器
		map<int,string>& oldIpMap = ipMapTalk_;
		// 增加的节点列表(输出）
		vector<int> incList;
		// 消失的节点列表(输出)
		vector<int> decList;
		// 消失的节点在原列表中的下标
		vector<int> decIndexList;

		// 比较前初始化
		oldPtr=0;
		newPtr=0;
		oldSize = oldList.size();
		newSize = newList.size();

		//开始产生输出到incList和decList
		while(1){
			if(oldPtr >= oldSize){
				// 新增的节点
				for(;newPtr < newSize;newPtr++){
					incList.push_back(newList[newPtr]);
				}
				break;
			}
			else if(newPtr >= newSize){
				// 消失的节点
				for(;oldPtr < oldSize;oldPtr++){
					decList.push_back(oldList[oldPtr]);
					decIndexList.push_back(oldPtr);
				}
				break;
			}
			else{
				int diff = newList[newPtr] - oldList[oldPtr];
				// 共有的节点
				if(diff == 0){
					newPtr++;
					oldPtr++;
				}
				// 新增的节点
				else if (diff < 0){
					incList.push_back(newList[newPtr]);
					newPtr++;
				}
				// 消失的节点
				else{
					decList.push_back(oldList[oldPtr]);
					decIndexList.push_back(oldPtr);
					oldPtr++;
				}
			}
		}//while(1)

		// 消失列表非空的话，对imAdapter的接口进行调用
		if(0 != decList.size()){

			for(unsigned int i = 0; i < decList.size(); i++){

				// 日志记录宕机ip，宕机前后的talk机器数
				LOG_INFO("ImAdapterTalkZKListener::updateConfig|TALK DOWN|PreCrash TalkCount="<<oldSize<<"|TalkIndexDown="<<decIndexList[i]<<"|NewCount="<<newSize<< "|downIp="<< oldIpMap[decList[i]]); 

				// 按照ip清除消失的用户的在线状态
				MY_INSTANCE(ImOnlineAdapterServer).removeUsersByIp(oldIpMap[decList[i]]);
			}

		}
		else{

			for(unsigned int i = 0; i < incList.size(); i++){
				LOG_INFO("ImAdapterTalkZKListener::updateConfig|TALK UP|PreUp TalkCount="<<oldSize<<"|TalkIndexUp="<<incList[i]<<"|NewCount="<<newSize<< "|upIp="<< ipMap[incList[i]]);
			}

		}

		 // 更新id的vector
		oldList = newList;

		// 更新ip的map
		oldIpMap.clear();
		for(int i = 0; i < newSize; i++){
			int newId = newList[i];
			string newIp = ipMap[newId];
			oldIpMap[newId] = newIp;
		}
	}//updateConfig

};
};

