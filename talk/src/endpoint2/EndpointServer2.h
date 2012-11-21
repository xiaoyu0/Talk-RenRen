/**
 * @file EndpointServer2.h
 * @brief	最前端的接入点服务，前端DNS轮询负载
 * 			接受客户端的链接，后端按userId，散到不同的Session服务器上。
 * @author you.zhou@renren-inc.com
 * @version 1.0
 * @date 2011-07-06
 */
#ifndef TALK_SOCK_ENDPOINT_SERVER_H_
#define TALK_SOCK_ENDPOINT_SERVER_H_

#include <string>
#include <map>
#include <boost/asio.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <boost/utility.hpp>
#include <Ice/Ice.h>
#include "net/IoServicePool.h"
#include "net/Connection.h"
#include "StreamHandler.h"
#include "utils/MyLock.h"
#include "utils/MyLogger.h"
#include "pugixml/pugixml.hpp"
#include "utils/Singleton.h"
#include "utils/ZKUtils.h"
#include "proxy/SocketServiceProxy.h"
#include "net/AsioServer.h"
#include "net/Connection.h"
#include "zk/ZKManager.h"
#include "zk/ZKListener.h"
#include    "TagParserManager.h"
#include    "XMPPTagHandler.h"

namespace mtalk{
namespace endpoint2{

	class EndpointServer2{
	public :
		EndpointServer2();

		virtual ~EndpointServer2(){};

		/**
		 * @brief	初始化server, 初始化handler，子类可以继承
		 *
		 * @param	id
		 * @param	port
		 * @param	servicePort
		 * @param	endpoint
		 * @param	zkServers
		 */
		virtual void init(int id, short port, short sslport,const std::string& sslcertFile,std::string& sslkeyFile,std::string& ssldhFile,short servicePort, const std::string& domain, const std::string& zkServers);

		/**
		 * @brief	启动方法开始监听端口，接受请求
		 */
		virtual void start();

		void stop();

		/**
		 * @brief	获取server id
		 *
		 * @return	
		 */
		int getId(){
			return id_;
		};

		/**
		 * @brief	处理一个收到的请求
		 *
		 * @param	request
		 * @param	connectionPtr
		 *
		 * @return	
		 */
		bool acceptRequest(const  std::string& request, net::ConnectionPtr connectionPtr);

		/**
		 * @brief	添加一个新来的链接到空闲链接管理器中
		 *
		 * @param	connectionPtr
		 */
		//void addIdleConnection(ConnectionPtr connectionPtr, int readId);

		/**
		 * @brief	将一个链接放入连接池中holding
		 *
		 * @param	connectionPtr
		 */
		//void addConnection(ConnectionPtr connectionPtr);

		//void delConnection(long connectionId);

		/**
		 * @brief	添加请求处理的handler
		 *
		 * @param	uri
		 * @param	httpRequestHandlerPtr
		 */
		void setStreamHandler(boost::shared_ptr<StreamHandler> hanlder){
			streamHandlerPtr = hanlder;
		}
		boost::shared_ptr<StreamHandler> getStreamHandler(){
			return  streamHandlerPtr;
		}

		/**
		 * @brief	向指定的connection id发送message
		 *
		 * @param	connectionId
		 * @param	msg
		 */
		void deliverMsg(const long connectionId, const std::string& msg);

		/**
		  消息发送成功回调
		 */
		bool notifySent(mtalk::net::ConnectionPtr connectionPtr, long userId , std::string msg);
		
		void delTagparser(long connectionId);

		std::string getDomain() const{
			return domain_;
		}

		/**
		 * @brief	更新bosh server时暂停服务对到来的请求直接返回403
		 */
		void pause();

		/**
		 * @brief	更新bosh server完成时恢复服务
		 */
		void resume();
	//	void addVoiceMsg(std::string msgId, std::string msg);
	//	std::string getVoiceMsg(std::string msgId);
	private :

		int id_;

		std::string domain_;

		short port_;

		bool isPause_;

		boost::shared_ptr<XMPPTagHandler> xmppTagHandlerPtr_;

		boost::shared_ptr<mtalk::protocolChang::ProtocolChanger>  protocolChangerPtr_ ;	

        TagPraserManager  tagParserManager_;

		boost::mutex pauseMutex_;

		boost::shared_ptr<mtalk::net::AsioServer> asioServerPtr_;

		boost::shared_ptr<mtalk::net::IoHandler> ioHandlerPtr_;

		boost::shared_ptr<proxy::SocketServiceProxy> socketServiceProxyPtr_;

		boost::shared_ptr<StreamHandler>  streamHandlerPtr;

		boost::shared_ptr<mtalk::zk::ZKManager> zkManagerPtr_;

		//std::map<std::string , std::string> voiceMessageMap;

	};

	class EndpointServer2ZKListener : public mtalk::zk::ZKListener{
	public :
		EndpointServer2ZKListener(const std::string& path, const int serverId, const short serverPort);

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

#endif // TALK_ENDPOINT_ENDPOINT_SERVER_H_
