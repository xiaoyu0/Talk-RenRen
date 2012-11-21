#ifndef TALK_XMPP_TALK_XMPP_PROCESSOR_H_
#define TALK_XMPP_TALK_XMPP_PROCESSOR_H_

#include <string>
#include <boost/shared_ptr.hpp>
#include "pugixml/pugixml.hpp"
#include "MessageRouter.h"
#include "IqRouter.h"
#include "PresenceRouter.h"
#include "XMPPProcessor.h"
#include "imAdapter/IMGateForPhoneAdapter.h"

namespace mtalk{
namespace xmpp{
	
	class TalkXMPPProcessor : public XMPPProcessor{
	public :
		TalkXMPPProcessor(const std::string endpoint,
			boost::shared_ptr<mtalk::im::IMGateForPhoneAdapter> imGateForPhoneAdapterPtr);

	private :
		boost::shared_ptr<MessageRouter> messageRouterPtr_;
		boost::shared_ptr<IqRouter> iqRouterPtr_;
		boost::shared_ptr<PresenceRouter> presenceRouterPtr_;
	};

};
};
#endif //TALK_XMPP_TALK_XMPP_PROCESSOR_H_
