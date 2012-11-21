/**
 * @file TalkServer.h
 * @brief	talk服务的完整server，使用单例方式调用
 * 			保证进程内唯一
 * @author you.zhou@renren-inc.com
 * @version 1.0
 * @date 2011-07-06
 */
#ifndef TALK_TALK_TALK_PUSH_SERVER_H_
#define TALK_TALK_TALK_PUSH_SERVER_H_

#include <vector>
#include <boost/date_time/local_time/local_time.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include "UserManager.h"
#include "OnlineStatManager.h"

#include "constant/UserOnlineType.h"
#include "utils/TTClient.h"
#include "utils/Singleton.h"
#include "xmpp/ProcessResult.h"
#include "xmpp/XMPPProcessor.h"
#include "imAdapter/IMGateForPhoneAdapter.h"
#include "constant/MessageType.h"
#include "c-client-src/zookeeper.h"
#include "zk/ZKManager.h"
#include "bosh/Message.h"
#include "msgwait/MessageWaitManager.h"
#include "proxy/TalkServiceProxy.h"
#include "proxy/MucServiceProxy.h"
#include "proxy/OfflineMsgServiceProxy.h"
#include "proxy/ShortUrlServiceProxy.h"
#include "proxy/HistoryServiceProxy.h"
#include "proxy/RelationServiceProxy.h"  
#include "zk/ZKListener.h"
#include "SessionManager.h"
#include "pugixml/pugixml.hpp"
#include "xmpp/JID.h"

using namespace boost::gregorian;  
using namespace boost::local_time;  
using namespace boost::posix_time;

namespace mtalk{
	namespace talk{

		class TalkServer{
			public :
				TalkServer();

				bool init(int id, short serverPort, const std::string& domain, const std::string& zkServers);

				/**
				 * @brief	更新talk服务的集群信息，会导致所有的用户信息清空。
				 *
				 * @param	index
				 * @param	count
				 */
				void updateClusterInfo(int index, int count);

				/**
				 * @brief	获取服务在zookeeper中的注册序列号
				 *
				 * @return	
				 */
				int getServerIndex() const ;

				void start();

				void stop();

				/**
				 * @brief	向指定id用户推送消息
				 *			当mid为-1时表示需要服务主动生成一个唯一的mid
				 *			默认mid为0表示不需要记录mid
				 *
				 * @param	fromId
				 * @param	toId
				 * @param	message
				 * @param	msgType
				 * @param	mid
				 *
				 * @return	
				 */
				bool push(const long fromId, const long toId, const std::string& message, const mtalk::constant::MessageType::Type msgType, long mid = 0 ,int supportMsgType = 3);

				bool push(const long fromId, const long toId, const std::string& message, const int msgType, long mid = 0 ,int supportMsgType = 3);

				void pushOfflineMsg(const long fromId, const long toId, const string& message, const mtalk::constant::MessageType::Type msgType, long mid = 0);

				void pushNotify(const long fromId, const long toId, const std::string& message, const mtalk::constant::MessageType::Type msgType, long mid = 0);

				/**
				 * @brief	talk服务之间的消息推送，根据规则计算出所属服务，进行消息推送，
				 * 			如用户位于本服务内，则直接调用push接口，忽略网络调用
				 *
				 * @param	fromId
				 * @param	toId
				 * @param	message
				 * @param	msgType
				 */
				void remotePush(const long fromId, const long toId, const std::string& message, const mtalk::constant::MessageType::Type msgType);
				void remotePush(const long fromId, const long toId, const std::string& message, const int msgType);

				/**
				 * @brief	给im的接口，用户重新加载服务。
				 */
				void remoteStart();

				/**
				 * @brief	给im的接口，用户重新加载服务。
				 */
				void remoteStop();

				/**
				 * @brief	xmpp的处理接口，提供给其它平台接入调用
				 *
				 * @param	sessionId
				 * @param	msg
				 *
				 * @return	
				 */
				xmpp::ProcessResult xmppProcess(const std::string& sessionId, const std::string& msg);

				/**
				 * @brief	绑定一个userId 和 一个sessionId
				 *
				 * @param	sessionPtr
				 */
				void bind(const SessionPtr sessionPtr);

				/**
				 * @brief	取消绑定
				 *
				 * @param	sessionPtr
				 */
				void unbind(const SessionPtr sessionPtr);

				void setUserManager(boost::shared_ptr<UserManager> userManagerPtr);

				void setIMGateForPhoneAdapter(boost::shared_ptr<mtalk::im::IMGateForPhoneAdapter> imGateForPhoneAdapterPtr);

				void setTTClient(boost::shared_ptr<mtalk::utils::TTClient> ttClientPtr);

				void setTTClient4MAS(boost::shared_ptr<mtalk::utils::TTClient> ttClientPtr);

				void setOnlineStatManager(boost::shared_ptr<mtalk::talk::OnlineStatManager> onlineStatManagerPtr);

				/**
				 * @brief	通知某条消息发送成功会根据消息的类型不同，调用不同的接口
				 * 			普通文本消息使用主站的消息确认接口
				 * 			其它富文本使用MessageWaitManager的接口
				 *
				 * @param	userId
				 * @param	msgNodePtr
				 */
				void NotifyMessageSent(long userId , const mtalk::talk::MsgNodePtr msgNodePtr, int clientType = 3);  
				void NotifyMessageSent(long userId , long msgkey, int clientType = 3);  


				void notifyIM(long userId, long mid);

				/**
				 * @brief	从自己的离线系统获取获取离线消息
				 * 			详见OfflineMessageServiceProxy
				 *
				 * @param	userId
				 *
				 * @return	
				 */
				void  notifyPushOfflineMsg(SessionPtr session);
				/**
				 *@brief 登录时从im得到的离线消息进userBUffer的离线消息存储队列
				 *@ 
				 **/
				bool sendToOfflineMessageMap(long fromId, long toId, std::string, long time);

				std::vector<string> getOfflineMessageSequence( long userId);

				/**
				 * @brief	批量获取本地用户在线列表
				 *
				 * @param	users
				 *
				 * @return	按参数顺序返回所查用户的在线状态，true为在线，false为离线
				 */
				std::vector<OnlineStat> getLocalUsersOnlineStatSeq(const std::vector<long>& users);

				/**
				 * @brief	查询单个用户的本地在线状态
				 *
				 * @param	userId
				 *
				 * @return	
				 */
				OnlineStat getLocalUserOnlineStat(const long userId, bool forIM = false);

				/**
				 * @brief	批量查询用户在线列表,不在本地的用户会进行远程调用，查询用户所在的服务器
				 *
				 * @param	users
				 *
				 * @return	按参数顺序返回所查用户的在线状态，true为在线，false为离线
				 */
				std::vector<OnlineStat> getUsersOnlineStatSeq(const std::vector<long>& users);

				/**
				 * @brief	查询单个用户的在线状态，不在本地的用户会进行远程调用，查询所在服务器
				 *
				 * @param	userId
				 *
				 * @return	
				 */
				OnlineStat getUserOnlineStat(const long userId, bool forIM = false);

				/**
				 * @brief getUserOnlineTypebyTalk 用于Talk本身取用户在线状态, 可以控制是否查DB
				 *
				 * @param userId
				 *
				 * @return 
				 */
				OnlineStat getUserOnlineTypebyTalk(const long userId);

				/**
				 * @brief logout 注销, 在TalkServiceI::logout中调用
				 *
				 * @param userId
				 * @param sessionId
				 */
				void logout(const long userId, const std::string& sessionId);

				/**
				 * @brief uninstall 卸载 ,TalkService::uninstall中调用
				 *
				 * @param userId
				 * @param appId
				 */
				void uninstall(const long userId, const int appId);

				bool feedPush(const long fromId, const long toId, const std::string& message, const constant::MessageType::Type msgType, long mid = 0, bool feedConditionsforSixin = false);

				bool feedPush(const long fromId, const long toId, const std::string& message, const int msgType, long mid = 0, bool feedConditionsforSixin = false);
				int getUserCount();

				/**
				 * @brief distribute 群聊消息 由talk分发给指定用户
				 *@param roomId  
				 *@param toId
				 *@param msg
				 *@param isSave 是否为该消息存离线
				 */
				void distribute(long roomId, long toId, const string& msg, bool isSave) ;

				/**
				 *@MucReturn 群聊中需要服务器端response的消息由此返回
				 *@param sessionId 
				 *@param msg
				 *@param isSave 是否为该消息存离线
				 */
				void MucReturn(const string& sessionId, const string& msg, bool isSave) ;

				/**
				 *@群聊的离线消息下发接口
				 *
				 *
				 */
				void pushMucOffline(const std::string& sessionId, long toId, std::vector<string>mucOfflineMsgList);

				void pushOffline(const std::string& sessionId, long toId, std::vector<string>OfflineMsgList);
				/**
				 *
				 *违禁内容通知
				 */
				void antispamInfo(const SessionPtr sessionPtr, const xmpp::JID& from, const xmpp::JID& to, const string& msg);

				/**
				 *
				 *黑名单拒绝内容通知
				 */
				void refuseInfo(const SessionPtr sessionPtr, const xmpp::JID& from, const xmpp::JID& to);
                                
				boost::shared_ptr<SessionManager> getSessionManager() { return   sessionManagerPtr_; }

				boost::shared_ptr<mtalk::zk::ZKManager> getZKManager(){ return zkManagerPtr_;}
				void setLang(long userId, const string msg);
				long generateMid();

			private :

				bool msgCheck(const SessionPtr sessionPtr, const constant::MessageType::Type msgType, std::string& message, long mid);

				int  processExpressionMsg(const SessionPtr sessionPtr, pugi::xml_node& node);

				void checkAndDeliver(const SessionPtr sessionPtr, long fromId, long toId, pugi::xml_node node, const constant::MessageType::Type msgType, long mid);
				void checkAndDeliver(const SessionPtr sessionPtr, long fromId, long toId, pugi::xml_node node, const int msgType, long mid);

				bool feedMsgCheck(const SessionPtr sessionPtr, const int msgType, string& message, long mid);
				bool feedMsgCheck(const SessionPtr sessionPtr, const constant::MessageType::Type msgType, string& message, long mid);


				void saveMsg2Offline(const long fromId, const long toId, const string& msg, const int  msgType ,int supportToClientType = 3);
				void delMsgFromOffline(long msgKey,long userid,int clientType);

				void feedOfflineCheck(long fromId, long toId, pugi::xml_node& node);

				boost::shared_ptr<UserManager> userManagerPtr_;

				boost::shared_ptr<mtalk::utils::TTClient> ttClientPtr_;

				boost::shared_ptr<mtalk::utils::TTClient> ttClient4MASPtr_;

				boost::shared_ptr<mtalk::xmpp::XMPPProcessor> xmppProcessorPtr_;

				boost::shared_ptr<mtalk::im::IMGateForPhoneAdapter> imGateForPhoneAdapterPtr_;

				boost::shared_ptr<mtalk::proxy::OfflineMsgServiceProxy> offlineMsgServiceProxyPtr_;

				boost::shared_ptr<SessionManager> sessionManagerPtr_;

				//Online type management
				boost::shared_ptr<mtalk::talk::OnlineStatManager> onlineStatManagerPtr_;

				zhandle_t* zkHandler_;

				/**
				 * 在配置文件中为服务分配的id
				 */
				int serverId_;

				/**
				 * 根据zookeeper中注册的服务计算出的本服务的序号
				 */
				int serverIndex_;

				/**
				 * 在zookeeper中注册的talk服务的数量
				 */
				int serverCount_;

				short serverPort_;

				//boost::shared_ptr<mtalk::im::IMStormAdapter> imStormAdapterPtr_;

				boost::shared_ptr<mtalk::proxy::TalkServiceProxy> talkServiceProxyPtr_;

				long midCount_;

				long midBegin_;

				boost::mutex midMutex_;

				boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr_;
		};

		class TalkServerZKListener : public mtalk::zk::ZKListener{
			public :
				/**
				 * @brief	构造函数
				 *
				 * @param	path为talk server cluster 的path，而不是单个node的path
				 * @param	serverId
				 * @param	serverPort
				 */
				TalkServerZKListener(const std::string& path, const int serverId, const short serverPort);

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
#endif //TALK_TALK_TALK_PUSH_SERVER_H_
