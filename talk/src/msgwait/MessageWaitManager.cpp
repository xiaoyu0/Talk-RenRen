#include "MessageWaitManager.h"
#include "proxy/ProxyRegister.h"
#include <boost/foreach.hpp>
#include <boost/thread.hpp>
#include <boost/lexical_cast.hpp>
#include "utils/Singleton.h"
#include "pugixml/pugixml.hpp"
#include "utils/MyLogger.h"
#include "constant/MessageType.h"
#include "proxy/ProxyRegister.h"
#include "utils/TimeUtils.h"
#include "utils/IpAddr.hpp"
#include "utils/MsgTransform.h"
#include "utils/MessageTails.h"
#include "proxy/ProxyRegister.h"
#include "Config.h"
#include  <iostream>



using namespace std;
using namespace mtalk::utils;
using namespace mtalk::proxy;
using namespace mtalk::constant;
using namespace boost;
using namespace boost::system;
using namespace mtalk::zk;

namespace mtalk{
namespace msgwait{

	MessageWaitManager::MessageWaitManager():
		zkManagerPtr_(new ZKManager()){
//				offlineMsgServiceProxyPtr_ = MY_INSTANCE(ProxyRegister).getProxy<OfflineMsgServiceProxy>("offlineMsgProxy");
		}

	MessageWaitManager::~MessageWaitManager(){
	}

	void  MessageWaitManager::init(int id, short servicePort, const std::string& domain, const std::string& zkServers){
		LOG_INFO("MessageWaitManager::init => begin");
		id_=id;
		domain_ = domain;

		zkManagerPtr_->init(zkServers);
		LOG_INFO("MessageWaitManager::init => init offlineMsgServiceProxy");
		pushServiceProxyPtr_ = boost::shared_ptr<PushServiceProxy>(new PushServiceProxy());
		MY_INSTANCE(ProxyRegister).registerProxy("pushServiceProxy", pushServiceProxyPtr_); 	
		zkManagerPtr_->addListener(pushServiceProxyPtr_->getZKPath(), pushServiceProxyPtr_);


		offlineMsgServiceProxyPtr_ = boost::shared_ptr<OfflineMsgServiceProxy>(new OfflineMsgServiceProxy());
		MY_INSTANCE(ProxyRegister).registerProxy("offlineMsgProxy", offlineMsgServiceProxyPtr_);
		zkManagerPtr_->addListener(offlineMsgServiceProxyPtr_->getZKPath(), offlineMsgServiceProxyPtr_);
		boost::shared_ptr<MsgWaitServerZKListener> MsgWaitServerZKListenerPtr(new MsgWaitServerZKListener(ZK_MSGWAIT_PATH, id, servicePort));
		zkManagerPtr_->addListener(MsgWaitServerZKListenerPtr->getNodePath(), MsgWaitServerZKListenerPtr);
		LOG_INFO("MessageWaitManager::init => finish");
	}

	void  MessageWaitManager::start(){
		if(!timerTaskPtr_){

			timerTaskPtr_ = new waitCheckTimerTask(shared_from_this());
		}
		timer_.scheduleRepeated(timerTaskPtr_,IceUtil::Time::seconds(2));
		LOG_INFO("MessageWaitManager::start =>  started");

	}
	void MessageWaitManager::stop(){
		timer_.cancel(timerTaskPtr_);
		clear();
		LOG_INFO("MessageWaitManager::stop =>  stop");
	}
	void  MessageWaitManager::clear(){
		IceUtil::Mutex::Lock lock(voiceMsgMutex);         
		IceUtil::Mutex::Lock lock_(msgMutex);         
		message_list.clear();
		message_map.clear();
		voice_message_list.clear();
		voice_message_map.clear();

	}

	void MessageWaitManager::immediatelySend2Offline(const long fromId, const long toId, const long msgKey, const string msg, int  msgType , int supportToClientType){
		LOG_DEBUG("MessageWaitManager::immediatelySend2Offline => put message: msgKey="<<msgKey<<" supportToClientType="<<supportToClientType<<" msg=" <<msg <<" msgType = "<<msgType);
		LOG_W(fromId, "MessageWaitManager::immediatelySend2Offline", msgType, msg);
		offlineMsgServiceProxyPtr_->addOfflineMsg(fromId, toId, msg, msgType, supportToClientType);
		LOG_ACCESS("immediatelyaddMessage|"<<fromId<<"|"<<toId<<"|"<<msgType<<"|"<<supportToClientType<<"|"<<msgKey);
		pushServiceProxyPtr_->pushMessage(fromId, toId, msgType, msg);
	}

	void MessageWaitManager::addMessage(const long fromId, const long toId, const long msgKey, const string msg, int  msgType , int supportToClientType){
		LOG_DEBUG("MessageWaitManager::addMessage => put message: msgKey="<<msgKey<<" supportToClientType="<<supportToClientType<<" msg=" <<msg <<" msgType = "<<msgType);
		LOG_W(fromId, "MessageWaitManager::addMessage", msgType, msg);
		msgPtr message(new Message);
		message->time_flag = time(NULL);
		message->fromId = fromId;
		message->toId = toId;
		message->msgKey = msgKey;
		message->msg = msg;
		message->type = msgType;
		message->supportToClientType = supportToClientType;
		IceUtil::Mutex::Lock lock(msgMutex);
		message_map.insert(std::map<long , msgPtr>::value_type(msgKey,message));
		message_list.push_back(message);
		LOG_ACCESS("addMessage|"<<fromId<<"|"<<toId<<"|"<<msgType<<"|"<<supportToClientType<<"|"<<msgKey);

		pushServiceProxyPtr_->pushMessage(fromId, toId, msgType, msg);
	}

	/**
	* 已废弃 
	*/
	void MessageWaitManager::addVoiceMessage(const long fromId, const long toId , const string msg ,int supportToClientType){
		/*解析msg 得到groupId 和*/
		LOG_DEBUG("MessageWaitManager::addVoiceMessage => put message begin: "<<" supportToClientType="<<supportToClientType<<" msg=" <<msg);
		pugi::xml_document doc;
		pugi::xml_parse_result result =doc.load(msg.c_str());
		if(!result){
			LOG_DEBUG("MessageWaitManager::addVoiceMessage => parse message fail");
			return;	
		}
		pugi::xml_node  audio_node;
		audio_node=doc.first_child();
		string  msgKeyStr= audio_node.attribute("msgkey").value();
		//		string  sequecesId=audio_node.attribute("seqid").value();
		long msgKey = 0;
		try{
			msgKey = boost::lexical_cast<long>(msgKeyStr);
		}catch(...){
		std::cout<<"lexical_cast exception"<<std::endl;
		}
        addMessage( fromId, toId, msgKey, msg, MessageType::VOICE , supportToClientType);
		return ;
/*语音分片的处理  目前不支持了

		voiceMsgPtr voice_message(new voiceMessage);
		voice_message->supportToClientType =supportToClientType;
		voice_message->fromId=fromId;
		voice_message->toId=toId;
		voice_message->groupId= groupId;
		voice_message->seqId=sequecesId;
		voice_message->is_diliver_flag=0;
		voice_message->msg=msg;
		voice_message->diliver_time_flag=time(NULL);
		voice_message->mode=audio_node.attribute("mode").value();;
		int sequece=lexical_cast<int>(sequecesId);
		IceUtil::Mutex::Lock lock(voiceMsgMutex);
		if(sequece==1)
		{
			msgSequecePtr  msg_sequece(new msgSequece);
			msg_sequece->push_back(voice_message);
			voice_message_map.insert(std::map<string ,msgSequecePtr>::value_type(groupId,msg_sequece));
			voice_message_list.push_back(voice_message);
			LOG_DEBUG("MessageWaitManager::addVoiceMessage => create new msg_sequece success vid = "<<groupId<<" seqId="<<sequecesId);
			LOG_ACCESS("|addVoiceMessage|"<<fromId<<"|"<<toId<<"|"<<groupId<<"|"<<sequecesId);
		}else{

			map<string ,msgSequecePtr>::iterator iter= voice_message_map.find(groupId);
			if(iter!=voice_message_map.end()){
				iter->second->push_back(voice_message);
				voice_message_list.push_back(voice_message);
				LOG_DEBUG("MessageWaitManager::addVoiceMessage => input  voiceMessage vid = "<<groupId<<" seqId="<<sequecesId);
				LOG_ACCESS("|addVoiceMessage|"<<fromId<<"|"<<toId<<"|"<<groupId<<"|"<<sequecesId);
			}else{
			//	处理超时消息
				offlineMsgServiceProxyPtr_->addOfflineMsg(fromId, toId, msg, MessageType::VOICE_OFFLINE);
				LOG_DEBUG("MessageWaitManager::addvoiceMessage => can not find group id ,the message overtime vid = "<<groupId<<" seqId"<<sequecesId);
				LOG_ACCESS("|addVoiceMessageFailue|"<<fromId<<"|"<<toId<<"|"<<groupId<<"|"<<sequecesId);
			}
		}
*/

	}

	void MessageWaitManager::delMessage(const long msgKey , int clientType){
		delMessageWithId(0, msgKey, clientType);
	}

	void MessageWaitManager::delMessageWithId(const long userId, const long msgKey , int clientType){

		LOG_DEBUG("MessageWaitManager::delMessage =>begin  msgKey="<<msgKey <<" clientType ="<<clientType);
		map<long, msgPtr>::iterator  iter;
		IceUtil::Mutex::Lock lock(msgMutex);                       
		iter=message_map.find(msgKey);
		if(iter!=message_map.end())
		{

            LOG_W(iter->second->fromId, "MessageWaitManager::delMessage", iter->second->type, iter->second->msg);

			int possibleType = iter->second->supportToClientType - clientType;
			if((iter->second->supportToClientType & clientType) && (possibleType < 1)){
 
				LOG_DEBUG("MessageWaitManager::delMessage =>sendmessage successfully: msgKey="<<msgKey);
				LOG_ACCESS("delMessageSuccess|"<<iter->second->fromId<<"|"<<iter->second->toId<<"|"<<iter->second->type<<"|"<<clientType<<"|"<<msgKey);
				message_map.erase(iter);
			}else if(possibleType > 1){
				LOG_DEBUG("MessageWaitManager::delMessage =>sendmessage to RenRen and  save for SiXin: msgKey="<<msgKey);
					offlineMsgServiceProxyPtr_->addOfflineMsg(iter->second->fromId, 
																iter->second->toId,	
																	 iter->second->msg,
																		 iter->second->type,
																						 possibleType);
				LOG_ACCESS("delSuccessAndStoreForSixin|"<<iter->second->fromId<<"|"<<iter->second->toId<<"|"<<iter->second->type<<"|"<<clientType<<"|"<<msgKey);
				message_map.erase(iter);
			}
		}else{

			LOG_DEBUG("MessageWaitManager::delMessage =>msg  timeout before send: msgKey="<<msgKey);
			LOG_ACCESS("delMessageFailue|"<<"|"<<"|"<<"|"<<clientType<<"|"<<msgKey);
			offlineMsgServiceProxyPtr_->deleteOfflineMessage(msgKey, userId, clientType);
		}

	}

	void MessageWaitManager::delVoiceMessage(const string& msg , int clientType){
		pugi::xml_document doc;
		pugi::xml_parse_result result =doc.load(msg.c_str());
		if(!result){
			LOG_DEBUG("MessageWaitManager::delVoiceMessage => parse message fail");
			return; 
		}
		pugi::xml_node  audio_node;
		audio_node=doc.first_child();
		string  msgKeyStr = audio_node.attribute("msgkey").value();
	//	string  sequecesId=audio_node.attribute("seqid").value();
		long msgKey = 0;
		try{
			msgKey = boost::lexical_cast<long>(msgKeyStr);
		}catch(...){
		}

		delMessage( msgKey ,  clientType);
		return ;

/*  语音分片的处理  目前不支持了
		unsigned	int sequece=lexical_cast<unsigned int>(sequecesId);

		IceUtil::Mutex::Lock lock(voiceMsgMutex);         
		map<string ,msgSequecePtr>::iterator iter= voice_message_map.find(groupId);
		if(iter!=voice_message_map.end())
		{
			if(sequece<1||sequece>iter->second->size()){

				LOG_DEBUG("MessageWaitManager::delVoiceMessage => illegal sequeceId groupId="<<groupId<<" seqId= "<<sequece);
				LOG_ACCESS("|delVoiceMessageIllegal|"<<groupId<<"|"<<sequece);
				return ;
			}
			(*(iter->second))[sequece-1]->is_diliver_flag=1;
		//	if((iter->second->supportToClientType&clientType) && (iter->second->supportToClientType - clientType) )
			LOG_DEBUG("MessageWaitManager::delVoiceMessage => this piece  message send: groupId="<<groupId<<" seqId= "<<sequece);
				LOG_ACCESS("|delVoiceMessageSucess|"<<groupId<<"|"<<sequece);

		}else{

			LOG_DEBUG("MessageWaitManager::delVoiceMessage => msg have overtime before send: groupId="<<groupId<<"seqId="<<sequece);
				LOG_ACCESS("|delVoiceMessageFailue|"<<groupId<<"|"<<sequece);
		}
*/
	}

	void MessageWaitManager::check()
	{      

		{
			IceUtil::Mutex::Lock lock(voiceMsgMutex);         
			while(!voice_message_list.empty())
			{
				if(voice_message_list.front()->is_diliver_flag==1)
				{
					voice_message_list.pop_front();
				}else{
					if(time(NULL)-voice_message_list.front()->diliver_time_flag>10){
						map<string ,msgSequecePtr>::iterator iter= voice_message_map.find(voice_message_list.front()->groupId);
						if(iter!=voice_message_map.end()){
							vector<voiceMsgPtr>::iterator msg_iter=iter->second->begin();
							for(;msg_iter!=iter->second->end();msg_iter++)
								offlineMsgServiceProxyPtr_->addOfflineMsg((*msg_iter)->fromId, (*msg_iter)->toId, (*msg_iter)->msg, MessageType::VOICE_OFFLINE);
							LOG_DEBUG("MessageWaitManager::check => voice message diliver timeout: groupId="<<iter->second->back()->groupId);
							LOG_ACCESS("|voiceMsgSendFailue|"<<iter->second->back()->groupId);
							voice_message_map.erase(iter);
						}
						voice_message_list.pop_front();
					}else{
						break;
					}
				}
			}
		}	
		{
			IceUtil::Mutex::Lock lock(voiceMsgMutex);         

			map<string ,msgSequecePtr>::iterator iter= voice_message_map.begin();
			for(;iter!=voice_message_map.end();)
			{
				if(iter->second->back()->mode=="end"&&iter->second->back()->is_diliver_flag==1){
					LOG_DEBUG("MessageWaitManager::check => voice message diliver successfully: groupId="<<iter->second->back()->groupId);
					LOG_ACCESS("|voiceMsgSendSucess|"<<iter->second->back()->groupId);
					voice_message_map.erase(iter++);

				}else
				{
					if(time(NULL)-iter->second->back()->diliver_time_flag>10){
						/*此处添加存储超时等待的代码,注意存储内容为voiceMsgSequeces的所有元素*/
						vector<voiceMsgPtr>::iterator msg_iter=iter->second->begin();
						for(;msg_iter!=iter->second->end();msg_iter++){
							offlineMsgServiceProxyPtr_->addOfflineMsg((*msg_iter)->fromId, (*msg_iter)->toId, (*msg_iter)->msg, MessageType::VOICE_OFFLINE);
							LOG_DEBUG("MessageWaitManager::check => voice message wait  timeout: groupId="<<iter->second->back()->groupId);
							LOG_ACCESS("|voiceMsgWaitFailue|"<<iter->second->back()->groupId);
						}
						voice_message_map.erase(iter++);


					}else
						iter++;
				}
			}
		}
		while(!message_list.empty())
		{
			IceUtil::Mutex::Lock lock_(msgMutex); 
			if(time(NULL)-message_list.front()->time_flag > 10){
				map<long , msgPtr>::iterator iter=message_map.find(message_list.front()->msgKey);
				if(iter!=message_map.end())
				{ 
					LOG_DEBUG("MessageWaitManager::check => message overtime: msgKey="<<message_list.front()->msgKey);
					LOG_ACCESS("msgSendFailue|"<<message_list.front()->fromId<<"|"
								<<message_list.front()->toId<<"|"<<message_list.front()->type<<"|"<<message_list.front()->supportToClientType<<"|"<<message_list.front()->msgKey);
					/*推离线消息*/
					if(iter->second->type!=mtalk::constant::MessageType::ACTION)
					offlineMsgServiceProxyPtr_->addOfflineMsg(
						message_list.front()->fromId,
						message_list.front()->toId,
						message_list.front()->msg,
						message_list.front()->type,
						message_list.front()->supportToClientType);

					message_map.erase(iter);
				}
				message_list.pop_front();

			}else{
				break;
			}
		}
	}

	MsgWaitServerZKListener::MsgWaitServerZKListener(const string& path, const int serverId, const short serverPort) :
		path_(path),
		serverId_(serverId),
		serverPort_(serverPort){

			nodeName_ = "server-" + boost::lexical_cast<string>(serverId_);
			nodePath_ = path_ + "/" + nodeName_;
			string ipAddr = MyUtil::IpAddr::inner();
			nodeAddress_ = ipAddr + ':' + boost::lexical_cast<string>(serverPort_);
	}

	void MsgWaitServerZKListener::zkHandle(boost::shared_ptr<ZKManager> zkManagerPtr, const std::string& path, const ZKEventType event){
		switch(event){
			case ZK_CHILD_CHANGED :
				LOG_INFO("MsgWaitServerZKListener::zkHanlde => path [" << path << "] children changed, skip this event");
				break;
			case ZK_SESSION_EXPIRED :
				LOG_INFO("MsgWaitServerZKListener::zkHanlde => path [" << path << "] session expired, start update");
				registerServer(zkManagerPtr);
				LOG_INFO("MsgWaitServerZKListener::zkHanlde => path [" << path << "] listener update finish");
				break;
			case ZK_LISTENER_INIT :
				LOG_INFO("MsgWaitServerZKListener::zkHanlde => path [" << path << "] listener init, start update");
				registerServer(zkManagerPtr);
				LOG_INFO("MsgWaitServerZKListener::zkHanlde => path [" << path << "] listener update finish");
				break;
		};
	}

	string MsgWaitServerZKListener::getNodePath() const{
		return nodePath_;
	}

	void MsgWaitServerZKListener::updateConfig(boost::shared_ptr<ZKManager> zkManagerPtr){
	}

	void MsgWaitServerZKListener::registerServer(boost::shared_ptr<ZKManager> zkManagerPtr){
		LOG_INFO("MsgWaitServerZKListener::registerServer => begin : path = " << nodePath_ << " address = " << nodeAddress_);
		zkManagerPtr->createNode(path_, nodeName_, nodeAddress_);
	}

};
};
