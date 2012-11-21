#include "IMTalkChannel.h"
#include "utils/IpAddr.hpp"

namespace mtalk{
namespace im{
	void IMTalkChannel::init(){
		Ice::PropertiesPtr properties = Ice::createProperties();
		properties->setProperty("Ice.Override.ConnectTimeout", "300");
		properties->setProperty("IceGrid.InstanceName", "XiaoNei");
		properties->setProperty("Ice.ThreadPool.Client.StackSize", "65535");
		properties->setProperty("Ice.ThreadPool.Server.StackSize", "65535");
		properties->setProperty("Ice.ThreadPool.Server.Size", "200");
		properties->setProperty("Ice.ThreadPool.Client.Size", "100");
		properties->setProperty("Ice.Default.Host", MyUtil::IpAddr::inner());
		properties->setProperty("Ice.Default.Locator",
			"XNTalk/Locator:default -h XNTalkRegistry -p 12000");

		Ice::InitializationData id;
		id.properties = properties;
		communicator_ = Ice::initialize(id);
	}
	
};
};
