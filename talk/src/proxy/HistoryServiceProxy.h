#include <string>
#include <vector>
#include "SimpleZKProxy.h"
#include "ice_src/history.h"
#include "utils/MyLogger.h"



#ifndef  HISTORY_SERVICE_PROXY_H_
#define  HISTORY_SERVICE_PROXY_H_

namespace mtalk{
namespace proxy{
		class HistoryServiceProxy : 
				public SimpleZKProxy<com::xiaonei::wap::dbService::talk::HisMessageServicePrx>{
						public: 
								HistoryServiceProxy();
								~HistoryServiceProxy();




								/**
								 * 保存单聊信息
								 * 
								 * @param int fromId  dd
								 * @param int toId  
								 * @param int channelId
								 * @param string msg  
								 * @param long dateTime  
								 *
								 * @return 
								 * */

								bool saveMsg(long fromId,long toId,int channelId,std::string msg,long dateTime);

								/**
								 * 保存群聊信息
								 * 
								 * @param long roomId 房间id  
								 * @param int fromId  发起者id
								 * @param int rcId    群主id 
								 * @param string msg  
								 * @param long dateTime  
								 *
								 * @return 
								 * */
								bool saveMsg4Group(long roomId,long rcId,long fromId, com::xiaonei::wap::dbService::talk::IntSeq intSequence,std::string msg,long dateTime);
								
                                
                                bool saveMsg4GroupDown(long roomId,long ownerId,long fromId, std::map<long, std::string> msgMap, long dateTime);
                                

};

}
}




#endif 
