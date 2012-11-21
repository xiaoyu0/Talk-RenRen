#ifndef TALK_OFFLINE_MSG_SERVICE_ICE
#define TALK_OFFLINE_MSG_SERVICE_ICE

module com{
	module xiaonei {
		module wap {
			module talk {
				module offline {
					
					["java:getset"]
					struct OfflineMessage {
					long id;
					int newsId;
					int fromId;
					int toId;
					short status;
					string message;
					int chatType;
					string createTime;
					string readTime;  
					};
					["java:type:java.util.ArrayList<OfflineMessage>"]
					sequence<OfflineMessage> OfflineMsgList;
					
					interface OfflineMsgService {
						//添加离线消息
						bool addOfflineMessage(OfflineMessage offlineMsg);
						
						//获取用户未读消息
						OfflineMsgList getUnreadOfflineMsgList(int uid, int limit);
						//获取用户指定时间内的未读消息
						OfflineMsgList getUnreadTimeoutOfflineMsgList(int uid, int timeout, int limit);
						
						//获取已读消息
						//OfflineMsgList getReadOfflineMsgList(int uid, short status); 
						
						//获取用户消息
						//OfflineMsgList getOfflineMsgList(int uid, short status);
					};
				};
			};
		};
	};
};
#endif
