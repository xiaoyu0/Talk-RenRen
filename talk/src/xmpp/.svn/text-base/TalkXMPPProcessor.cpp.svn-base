#include "TalkXMPPProcessor.h"
#include "StreamErrorFactory.h"

using namespace pugi;

namespace mtalk{
namespace xmpp{

	TalkXMPPProcessor::TalkXMPPProcessor(const std::string endpoint,
		boost::shared_ptr<mtalk::im::IMGateForPhoneAdapter> imGateForPhoneAdapterPtr) :
		XMPPProcessor(endpoint),
		messageRouterPtr_(new MessageRouter(imGateForPhoneAdapterPtr)),
		iqRouterPtr_(new IqRouter()),
		presenceRouterPtr_(new PresenceRouter()){

		initRouter(messageRouterPtr_, presenceRouterPtr_, iqRouterPtr_);
	}

};
};
