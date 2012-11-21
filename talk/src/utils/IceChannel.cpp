#include <sstream>
#include <IceUtil/UUID.h>
#include "IceChannel.h"
#include "IpAddr.hpp"

namespace mtalk{
namespace utils{

	IceChannel::IceChannel() :
		iceTimeout_(260){
	}

	IceChannel::~IceChannel(){
		destroy();
	}

	void IceChannel::destroy(){
		if(communicator_){
			communicator_->destroy();
		}
	}

	void IceChannel::init(int timeout){
		iceTimeout_ = timeout;
		Ice::PropertiesPtr properties = Ice::createProperties();
		properties->setProperty("Ice.Override.ConnectTimeout", "500");
		properties->setProperty("Ice.Override.Timeout", "500");
		properties->setProperty("Ice.ThreadPool.Client.Size", "100");
		properties->setProperty("Ice.ThreadPool.Server.Size", "200");

		/*
		设置线程栈的大小，目前线程数量不多，稳定起见，采用系统默认栈大小（10M）
		properties->setProperty("Ice.ThreadPool.Client.StackSize", "65535");
		properties->setProperty("Ice.ThreadPool.Server.StackSize", "65535");
		*/

		Ice::InitializationData id;
		id.properties = properties;
		communicator_ = Ice::initialize(id);
	}
	
	Ice::ObjectPrx IceChannel::stringToProxy(const std::string& name, InvokeType type){
		Ice::ObjectPrx prx = communicator_->stringToProxy(name)->ice_timeout(iceTimeout_);
		switch(type){
		case ONE_WAY :
			return prx->ice_oneway();
		case TWO_WAY :
			return prx;
		default :
			return prx;
		}
	}

	Ice::ObjectAdapterPtr IceChannel::createObjectAdapterWithEndpoints(){
		return communicator_->createObjectAdapterWithEndpoints(IceUtil::generateUUID(), "default -h " + MyUtil::IpAddr::inner());
	}

	Ice::ObjectAdapterPtr IceChannel::createObjectAdapterWithEndpoints(const short port){
		std::ostringstream os;
		os << "default -p " << port;
		return communicator_->createObjectAdapterWithEndpoints(IceUtil::generateUUID(), os.str());
	}

	Ice::ObjectAdapterPtr IceChannel::createObjectAdapterWithEndpoints(const std::string& adapterName, const short port){
		std::ostringstream os;
		os << "default -p " << port;
		return communicator_->createObjectAdapterWithEndpoints(adapterName, os.str());
	}

	Ice::CommunicatorPtr IceChannel::getCommunicator(){
		return communicator_;
	}
};
};
