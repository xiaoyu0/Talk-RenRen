#include <limits.h>
#include <iostream>
#include <algorithm>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include "AsioServer.h"
#include "Connection.h"

using namespace std;
using namespace boost::asio;
using namespace mtalk::utils;

namespace mtalk{
namespace net{

	AsioServer::AsioServer() :
		id_(0),
		ioServicePool_(IOSERVER_POOL_SIZE),
		acceptor_(*ioServicePool_.getAcceptIoService()),
		connectionCount_(0),
		connectionManagerPtr_(new ConnectionManager()){
		
		LOG_INFO("AsioServer::AsioServer => Created");
	}

	void AsioServer::setPort(const short port){
		port_ = port;
	}

	void AsioServer::setId(const int id){
		id_ = id;
	}

	void AsioServer::setIoHandler(boost::shared_ptr<IoHandler> ioHandlerPtr){
		ioHandlerPtr_ = ioHandlerPtr;
	}

	void AsioServer::handleAccept(const boost::system::error_code& e){
		LOG_DEBUG("AsioServer::handleAccept => accept a connection");

		ConnectionPtr acceptConnection = newConnection_;
		newConnection_ = newConnection();
		acceptor_.async_accept(newConnection_->getSocket(),
				boost::bind(&AsioServer::handleAccept, this, 
					boost::asio::placeholders::error));
		LOG_DEBUG("AsioServer::handleAccept => wait a new connection : cid = " << newConnection_->getId());
		if(!e){
			try{
				acceptConnection->open();
				LOG_DEBUG("AsioServer::handleAccept => new connection start : cid = " << acceptConnection->getId());
			} catch (exception &e){
				LOG_ERROR("AsioServer::handleAccept => new connection start error : what = " << e.what());
			}
		} else {
			LOG_ERROR("AsioServer::handleAccept => error : " << e.message());
		}
	}

	void AsioServer::addConnection(ConnectionPtr connectionPtr){
		connectionManagerPtr_->addConnection(connectionPtr);
	}

	ConnectionPtr AsioServer::getConnection(long connectionId){
		return connectionManagerPtr_->getConnection(connectionId);
	}

	ConnectionPtr AsioServer::newConnection(){
		long cid = generateConnectionId();

		return ConnectionPtr(new Connection(cid, ioServicePool_.getIoService(), ioHandlerPtr_, shared_from_this()));
	}

	inline long AsioServer::generateConnectionId(){
		++connectionCount_;
		if(connectionCount_ == (LONG_MAX >> 8)){
			connectionCount_ = 1;
		}
		return ((connectionCount_ << 8) | id_);
	}

	void AsioServer::bind(const short port){
		port_ = port;
		bind();
	}
	
	void AsioServer::bind(){
		connectionManagerPtr_->start();
		newConnection_ = newConnection();

		ip::tcp::endpoint endPoint(ip::tcp::v4(), port_);
		acceptor_.open(endPoint.protocol());
		acceptor_.set_option(ip::tcp::acceptor::reuse_address(true));
		acceptor_.bind(endPoint);
		acceptor_.listen(1000);

		acceptor_.async_accept(newConnection_->getSocket(),
				boost::bind(&AsioServer::handleAccept, this, 
					boost::asio::placeholders::error));

		ioServicePool_.start();

		LOG_INFO("AsioServer::bind => finish");
	}

	void AsioServer::unbind(){
		acceptor_.cancel();
		acceptor_.close();
		ioServicePool_.stop();
		connectionManagerPtr_->stop();
		LOG_INFO("AsioServer::stop => finish");
	}

	void AsioServer::deliverMsg(const long connectionId, const string& msg){
		ConnectionPtr connectionPtr = connectionManagerPtr_->getConnection(connectionId);
		if(!connectionPtr){
			LOG_WARN("AsioServer::deliverMsg => failure ( connection not found ) : cid = " << connectionId << " msg = " << msg);
			return ;
		}
		LOG_DEBUG("AsioServer::deliverMsg => success : cid = " << connectionId << " msg = " << msg);
	}
	
	void AsioServer::delConnection(long connectionId){
		connectionManagerPtr_->delConnection(connectionId);
	}

	void AsioServer::clearAllConnection(){
		connectionManagerPtr_->clear();
	}

};
};
