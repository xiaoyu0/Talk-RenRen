/**
* @file BoshServer.h
* @brief	基于bosh协议的server，以单例的方式使用。
* 			保证在一个进程中有且仅有一个实例
* 			该server接受来自endpoint server的请求
* 			按照标准的bosh协议做处理，管理所有用户的会话
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_BOSH_BOSH_SERVER_H_
#define TALK_BOSH_BOSH_SERVER_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "talk/SessionManager.h"
#include "talk/Session.h"
#include "BoshSession.h"
#include "talk/SessionListener.h"
#include "BoshRequestHandler.h"
#include "utils/MyLock.h"
#include "pugixml/pugixml.hpp"
#include "utils/Singleton.h"
#include "utils/ZKUtils.h"
#include "proxy/EndpointServiceProxy.h"
#include "utils/TTClient.h"

#define WAIT_TIME 20

namespace mtalk{
namespace bosh{

typedef boost::shared_ptr<BoshSession> BoshSessionPtr;
	class BoshServer{
		public :
			BoshServer();

			virtual ~BoshServer(){};
			
			/**
			* @brief	启动方法开始监听端口，接受请求
			*/
			void start();

			void stop();

			/**
			* @brief	初始化
			*
			* @param	serverIndex
			* @param	serverCount
			* @param	domain
			*
			* @return	
			*/
			bool init(const int serverIndex, const int serverCount, const std::string& domain);

			/**
			* @brief	会话的更新，接受用户发来的请求
			*
			* @param	connectionId
			* @param	msg
			*
			* @return	
			*/
			com::xiaonei::wap::talk::Result updateSession(long connectionId, const std::string& msg);
			
			/**
			* @brief	创建一个新的会话
			*
			* @param	connectionId
			* @param	msg
			*
			* @return	
			*/
			com::xiaonei::wap::talk::Result createSession(long connectionId, const std::string& msg);
			
			/**
			* @brief	为客户端特殊提供的发送消息接口，该接口不检查rid，消息内容格式遵循xmpp和bosh
			*
			* @param	connectionId
			* @param	msg
			*
			* @return	
			*/
			com::xiaonei::wap::talk::Result sendMessage(long connectionId, const std::string& msg);

			/**
			* @brief	获取server index
			*
			* @return	
			*/
			int getServerIndex(){
				return serverIndex_;
			};

			/**
			* @brief	获取server count
			*
			* @return	
			*/
			int getServerCount(){
				return serverCount_;
			};

			/**
			* @brief	通过sessionId获取session对象
			*
			* @param	sessionId
			*
			* @return	
			*/
			mtalk::talk::SessionPtr getSession(const std::string& sessionId);

			/**
			* @brief	向指定connectionId发送消息
			*
			* @param	connectionId
			* @param	msg
			*/
			void deliverMsg(const long connectionId, const std::string& msg);

			/**
			* @brief	添加session listener
			*
			* @param	listenerPtr
			*/
			void addSessionListener(boost::shared_ptr<mtalk::talk::SessionListener> listenerPtr);
			
			/**
			* @brief	创建一个新Session
			*
			* @param	body
			*
			* @return	
			*/
			BoshSessionPtr getNewSession(const pugi::xml_node& body);
	
			/**
			* @brief	构建一个新session的response
			*
			* @param	sessionPtr
			*
			* @return	
			*/
			std::string newSessionResponse(BoshSessionPtr sessionPtr);

			bool isStarted(){
				return isStarted_;
			}

			std::string getDomain() const{
				return domain_;
			}

			void setHandler(boost::shared_ptr<BoshRequestHandler> requestHandlerPtr){
				requestHandlerPtr_ = requestHandlerPtr;
			}
			void setSessionManager(mtalk::talk::SessionManagerPtr  SMPtr){

				sessionManagerPtr_ = SMPtr;
			}

			void setTTClient(boost::shared_ptr<mtalk::utils::TTClient> ttClientPtr){
				ttClientPtr_ = ttClientPtr;
			}
		
			void setTTClient4MAS(boost::shared_ptr<mtalk::utils::TTClient> ttClientPtr){
				ttClient4MASPtr_ = ttClientPtr;
			}


			/**
			* @brief	更新talk server列表，会导致清空session
			*
			* @param	serverIndex
			* @param	serverCount_
			*/
			void updateClusterInfo(int serverIndex, int serverCount_);

			/**
			* @file BoshServer.h
			* @brief	通知endpoint服务暂停服务
			* @author you.zhou@renren-inc.com
			* @version 1.0
			* @date 2011-09-27
			*/
			void notifyEndpointPause();

			/**
			* @file BoshServer.h
			* @brief	通知endpoint服务恢复服务
			* @author you.zhou@renren-inc.com
			* @version 1.0
			* @date 2011-09-27
			*/
			void notifyEndpointResume();

		private :
			/**
			* @brief	检查会话是否通过了权限验证
			*
			* @param	sessionPtr
			* @param	body
			*
			* @return	
			*/
			com::xiaonei::wap::talk::Result checkAuth(BoshSessionPtr sessionPtr, const pugi::xml_node body);

			void pushOfflineMessage(BoshSessionPtr session,int supportType = 0 , int ClientType = 0);

			int serverIndex_;
		
			int serverCount_;

			std::string domain_;

			bool isStarted_;

			boost::mutex idMutex_;

			/**
			* @brief	session管理器，管理所有的session
			*/
			mtalk::talk::SessionManagerPtr sessionManagerPtr_;

			boost::shared_ptr<BoshRequestHandler> requestHandlerPtr_;

			/**
			* @brief	访问endpoint server的代理
			*/
			boost::shared_ptr<proxy::EndpointServiceProxy> endpointServiceProxyPtr_;

			/**
			* @brief	session listener
			*/
			std::vector<boost::shared_ptr<mtalk::talk::SessionListener> > sessionListeners_;

			boost::shared_ptr<mtalk::utils::TTClient> ttClientPtr_;
			boost::shared_ptr<mtalk::utils::TTClient> ttClient4MASPtr_;
	};
};
};
#endif // TALK_BOSH_BOSH_SERVER_H_
