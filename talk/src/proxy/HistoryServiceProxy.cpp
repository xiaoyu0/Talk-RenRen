#include "HistoryServiceProxy.h"

#include <sstream>
#include "BindServiceProxy.h"
#include "utils/MyLogger.h"
#include "Config.h"
#include    "utils/TimeUtils.h"
#include    "ice_src/base.h"



using namespace std;
using namespace mtalk::utils;
using namespace com::renren::sixin::account;


using namespace std ;
namespace mtalk{
		namespace proxy{
				HistoryServiceProxy::HistoryServiceProxy():
						SimpleZKProxy<com::xiaonei::wap::dbService::talk::HisMessageServicePrx>("CloudStoreIceService",ZK_HISTORY_MESSAGE_PATH,true,200){
								LOG_DEBUG("HistoryServiceProxy::HistoryServiceProxy => Created");
						}

				HistoryServiceProxy::~HistoryServiceProxy(){}

				bool HistoryServiceProxy::saveMsg(long fromId,long toId,int channelId,string msg,long dateTime){
						LOG_W(fromId, "HistoryServiceProxy::saveMsg", -1, msg);

						MilliTimer tStart;
						ReadLock lock(mutex_);
						com::xiaonei::wap::dbService::talk::HisMessageServicePrx proxy = getProxy(toId);
						if(!proxy){
						LOG_ERROR("HistoryServiceProxy::saveMsg => get proxy failue  fromId = " <<fromId);
								return 0;
						}

						LOG_DEBUG("HistoryServiceProxy::saveMsg => fromid = " << fromId << " toid = " 
										<< toId <<" chanelId = "<<channelId << " msg = " << msg <<" dateTime"<<dateTime);
						try{
								proxy->saveMsg(fromId, toId, channelId, msg, dateTime);
						}catch(std::exception& e){
								LOG_ERROR("HistoryServiceProxy saveMsg  fromId = "<<fromId <<" toId = "
										<< toId <<" msg = "<<msg<<" catch exception = "<<e.what());
								return 0;
						}catch(...){
								LOG_ERROR("HistoryServiceProxy saveMsg catch unknow excepion");
								return 0;
						}
						LOG_TIME("HistoryServiceProxy::saveMsg|" << tStart.elapsed() );
						return 1;

				}

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
				bool HistoryServiceProxy::saveMsg4Group(long roomId,long rcId,long fromId, com::xiaonei::wap::dbService::talk::IntSeq intSequence,string msg,long dateTime){

						LOG_W(fromId, "HistoryServiceProxy::saveMsg4Group", -1, msg);

						MilliTimer tStart;
						ReadLock lock(mutex_);
						com::xiaonei::wap::dbService::talk::HisMessageServicePrx proxy = getProxy(roomId);
						if(!proxy){
						LOG_ERROR("HistoryServiceProxy::saveMsg4Group => get proxy failue fromId = " <<fromId);
								return 0;
						}

						LOG_DEBUG("HistoryServiceProxy::saveMsg4Group => fromid = " << fromId << " rcid = " 
										<< rcId <<" roomId = "<<roomId << " msg = " << msg <<" dateTime"<<dateTime);
						try{
								proxy->saveMsg4Group(roomId, rcId, fromId, intSequence, msg, dateTime);
						}catch(std::exception& e){
								LOG_ERROR("HistoryServiceProxy saveMsg4Group  fromId = "<<fromId <<" rcId = "
										<< rcId <<" msg = "<<msg<<" catch exception = "<<e.what());
								return 0;
						}catch(...){
								LOG_ERROR("HistoryServiceProxy saveMsg4Group catch unknow excepion");
								return 0;
						}
						LOG_TIME("HistoryServiceProxy::saveMsg4Group|" << tStart.elapsed() );
						return 1 ;

				}

                
                bool HistoryServiceProxy::saveMsg4GroupDown(long roomId,long ownerId,long fromId, std::map<long, string> msgMap, long dateTime){

						LOG_W(fromId, "HistoryServiceProxy::saveMsg4GroupDown", -1, "");
                        MilliTimer tStart;
						ReadLock lock(mutex_);
						com::xiaonei::wap::dbService::talk::HisMessageServicePrx proxy = getProxy(roomId);
						if(!proxy){
						LOG_ERROR("HistoryServiceProxy::saveMsg4Group => get proxy failue fromId = " <<fromId);
							return false;
						}

						LOG_DEBUG("HistoryServiceProxy::saveMsg4Group => fromid = " << fromId << " rcid = " << ownerId <<" roomId = " <<roomId <<  "dateTime" << dateTime);
						try{
								proxy->saveMsg4GroupDown(roomId, ownerId, fromId, msgMap, dateTime);
                        
						}catch(std::exception& e){
								LOG_ERROR("HistoryServiceProxy saveMsg4GroupDown  fromId = " << fromId << " ownerId = " << ownerId << " catch exception = " << e.what());
								return false;
						}catch(...){
								LOG_ERROR("HistoryServiceProxy saveMsg4GroupDown catch unknow excepion");
								return false;
						}
						LOG_TIME("HistoryServiceProxy::saveMsg4GroupDown|" << tStart.elapsed() );
						return true;
                }

		}
}
