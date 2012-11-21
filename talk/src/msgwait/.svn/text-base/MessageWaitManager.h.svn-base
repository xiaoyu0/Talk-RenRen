/**
* @file MessageWaitManager.h
* @brief	消息超时判断处理模块
* @author you.zhou@renren-inc.com jiang.yuan@renren-inc.com
* @version 1.0
* @date 2011-09-27
*/
#ifndef TALK_MSGWAIT_MESSAGE_WAIT_MANAGER_H_
#define TALK_MSGWAIT_MESSAGE_WAIT_MANAGER_H_


#include <iostream>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <string>
#include <set>
#include <list>
#include <queue>
#include <IceUtil/Mutex.h>
#include <Ice/Ice.h>
#include <time.h>
#include <boost/enable_shared_from_this.hpp>

#include "proxy/OfflineMsgServiceProxy.h"
#include "proxy/PushServiceProxy.h"
#include "constant/MessageType.h"

#include "zk/ZKManager.h"
#include "zk/ZKListener.h"


namespace mtalk{
namespace msgwait{

	/**
	* @brief	文本，图片消息
	*/
	struct  Message{
		int supportToClientType ;//为指定客户端提供
		time_t time_flag;
		long fromId;
		long toId;
		long msgKey;
		int type;
		//mtalk::constant::MessageType::Type type;
		std::string msg;
	};

	/**
	* @brief	语音消息
	*/
	struct  voiceMessage{
		int supportToClientType ;//为指定客户端提供
		time_t diliver_time_flag;
		bool is_diliver_flag;
		long fromId;
		long toId;
		std::string groupId;
		std::string seqId;
		std::string msg;
		std::string mode;
	};

typedef boost::shared_ptr<Message> msgPtr;
typedef boost::shared_ptr<voiceMessage> voiceMsgPtr;


	class MessageWaitManager : 
		 public boost::enable_shared_from_this<MessageWaitManager>,
		 private boost::noncopyable {

		public :
			MessageWaitManager();

			virtual ~MessageWaitManager();
			/**
			*
			*
			*/

			void init(int id, short servicePort, const std::string& domain, const std::string& zkServers);

			/**
			* @brief	添加一个文本或者图片消息进入检测队列
			*
			* @param	fromId
			* @param	toId
			* @param	msgKey
			* @param	msg
			*/
			void addMessage(const long fromId, const long toId , const long msgKey, const std::string msg, int  msgType , int supportToClientType);
			void immediatelySend2Offline(const long fromId, const long toId , const long msgKey, const std::string msg, int  msgType , int supportToClientType);

			/**
			* @brief	添加一个语音消息进入检测队列
			*
			* @param	fromId
			* @param	toId
			* @param	msg
			*/
			void addVoiceMessage(const long fromId ,const long toId , const std::string msg, int supportToClientType);

			/**
			* @brief	确认一个文本或者图片消息已经发送成功
			*
			* @param	msgKey
			*/
			void delMessage( const long msgKey, int clientType);
			void delMessageWithId( const long userId, const long msgKey, int clientType);

			/**
			* @brief	确认一个语音消息发送成功
			*
			* @param	msg
			*/
			void delVoiceMessage( const std::string& msg , int clientType);

			void check();

			/**
			* @brief	manager 启动方法
			*/
			void start();

			/**
			* @brief	manager 停止方法
			*/
			void stop();


		private :
            int id_;

			std::string domain_;

			short port_;

			boost::shared_ptr<mtalk::proxy::OfflineMsgServiceProxy> offlineMsgServiceProxyPtr_;
			
			boost::shared_ptr<mtalk::proxy::PushServiceProxy> pushServiceProxyPtr_;

			void clear();

			IceUtil::Timer timer_;
			IceUtil::TimerTaskPtr timerTaskPtr_;

			IceUtil::Mutex msgMutex;
			IceUtil::Mutex voiceMsgMutex;

			/*处理文本消息数据结构*/
			std::map<long, msgPtr> message_map;
			std::list<msgPtr> message_list;
			std::list<msgPtr> overtime_message_list;


			/*处理语音消息数据结构*/
			typedef std::vector<voiceMsgPtr> msgSequece; 
			typedef boost::shared_ptr<msgSequece> msgSequecePtr;
			std::map< std::string, msgSequecePtr > voice_message_map;
			std::list< voiceMsgPtr >  voice_message_list;
			std::list< voiceMsgPtr > voice_overtime_message_list;

			 boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr_;



	};
	typedef boost::shared_ptr<MessageWaitManager> MessageWaitManagerPtr;


	class waitCheckTimerTask : public IceUtil::TimerTask {
		public :
			waitCheckTimerTask(MessageWaitManagerPtr  managerPtr)
				: managerPtr_(managerPtr){
				}

			void runTimerTask(){
				managerPtr_->check();
			}
		private :
			MessageWaitManagerPtr managerPtr_;
	};
	typedef boost::shared_ptr<waitCheckTimerTask> waitCheckTimerTaskPtr;


	class MsgWaitServerZKListener : public mtalk::zk::ZKListener{
		public :
			MsgWaitServerZKListener(const std::string& path, const int serverId, const short serverPort);

			virtual void zkHandle(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr, const std::string& path, const mtalk::zk::ZKEventType event);

			std::string getNodePath() const;

		private :

			virtual void updateConfig(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr);
			void registerServer(boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr);

			std::string path_;
			int serverId_;
			short serverPort_;
			std::string nodePath_;
			std::string nodeName_;
			std::string nodeAddress_;
	};
};
};
#endif //TALK_MSGWAIT_MESSAGE_WAIT_MANAGER_H_
