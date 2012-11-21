/**
* @file AsioServer.h
* @brief	基于boost asio的异步网络框架，接口封装定义仿照mina框架
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_NET_ASIO_SERVER_H_
#define TALK_NET_ASIO_SERVER_H_

#include <string>
#include <map>
#include <boost/asio.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <boost/utility.hpp>
#include <Ice/Ice.h>
#include "IoServicePool.h"
#include "ConnectionManager.h"
#include "utils/MyLock.h"
#include "utils/MyLogger.h"

namespace mtalk{
namespace net{

	class Connection;
	typedef boost::shared_ptr<Connection> ConnectionPtr;

	class IoHandler;

	/**
	* @brief	异步网络框架Server.
	* 			使用时需要设置监听端口号和网络事件的处理句柄IoHandler
	* 			调用bind方法开始监听端口
	*/
	class AsioServer : public boost::enable_shared_from_this<AsioServer> {
		public :
			AsioServer();

			virtual ~AsioServer(){};
			
			/**
			* @brief	初始化server, 初始化handler，子类可以继承
			*
			* @param	port
			*/
			void setPort(const short port);

			void setId(const int id);

			/**
			* @brief	设置网络事件的处理句柄，
			*
			* @param	ioHandlerPtr
			*/
			void setIoHandler(boost::shared_ptr<IoHandler> ioHandlerPtr);

			/**
			* @brief	启动监听端口，接受请求
			*/
			void bind();

			/**
			* @brief	在指定端口上启动服务并监听
			*
			* @param	port
			*/
			void bind(const short port);
			
			void unbind();

			/**
			* @brief	将一个链接放入连接池中holding
			*
			* @param	connectionPtr
			*/
			void addConnection(ConnectionPtr connectionPtr);
			
			/**
			* @brief	从连接池中删除指定id的链接
			*
			* @param	connectionId
			*/
			void delConnection(long connectionId);

			/**
			* @brief	获取一个Connection对象
			*			当connectionId不存在时返回一个空的智能指针。
			*
			* @param	connectionId
			*
			* @return	
			*/
			ConnectionPtr getConnection(long connectionId);

			/**
			* @brief	向指定的connection id发送message
			*
			* @param	connectionId
			* @param	msg
			*/
			void deliverMsg(const long connectionId, const std::string& msg);

			/**
			* @brief	清除所有保存着的Connection
			*/
			void clearAllConnection();
		
		private :
			const static size_t IOSERVER_POOL_SIZE = 12;

			void handleAccept(const boost::system::error_code& e);

			ConnectionPtr newConnection();

			long generateConnectionId();

			short port_;

			int id_;

			boost::shared_ptr<IoHandler> ioHandlerPtr_;

			IoServicePool ioServicePool_;

			boost::asio::ip::tcp::acceptor acceptor_;

			ConnectionPtr newConnection_;

			long connectionCount_;

			/**
			* @brief	holding链接管理器
			*/
			boost::shared_ptr<ConnectionManager> connectionManagerPtr_;

	};
};
};
#endif // TALK_NET_ASIO_SERVER_H_
