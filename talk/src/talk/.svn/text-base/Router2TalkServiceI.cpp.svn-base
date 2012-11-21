#include <map>
#include <string>
#include "xmpp/JID.h"
#include <boost/lexical_cast.hpp>
#include "TalkServer.h"
#include "constant/MessageType.h"
#include "utils/MyLogger.h"
#include "utils/TimeUtils.h"
#include "utils/MsgTransform.h"
#include "utils/MessageTails.h"
#include "pugixml/pugixml.hpp"
//#include "user_name_client.h"
#include "talk/FeedProcessor.h"
#include  <iostream>
#include  <boost/foreach.hpp>
#include  "Router2TalkServiceI.h"

using namespace mtalk::constant;
using namespace mtalk::utils;
using namespace mtalk::xmpp;
using namespace pugi;
using namespace std;

namespace mtalk{
	namespace talk{

		Router2TalkServiceI::Router2TalkServiceI():router2talkServerPtr_(new Router2TalkServer()){

		}

		void  Router2TalkServiceI::forwardIq(const std::string& xmppString, const Ice::Current& current)
		{

			MilliTimer  tStart;
			LOG_DEBUG("Router2TalkServiceI::forwordIq ==> begin.");
			int flag = router2talkServerPtr_->forwardIq(xmppString);
			if(flag < 0)
			{
				LOG_ERROR("Router2TalkServiceI::forwardIq ==> return error: "<<flag);
			}


			LOG_DEBUG("Route2TalkServiceI::forwordIq ==> end. use:"<<tStart.elapsed());
		}


		void Router2TalkServiceI::forwardPresence(const std::string& xmppString, const Ice::Current& current)
		{

			MilliTimer  tStart;

			LOG_DEBUG("Route2TalkServiceI::forwordPresence ==> begin.");
			int flag = router2talkServerPtr_->forwardPresence(xmppString); 
			if(flag < 0)
			{
				LOG_ERROR("Router2TalkServiceI::forwardPresence ==> return error: "<<flag);
			}

			LOG_DEBUG("Route2TalkServiceI::forwordPresence ==> end. use:"<<tStart.elapsed());


		}

		void Router2TalkServiceI::forwardMessage(const std::string& xmppString, const Ice::Current&  current)
		{

			MilliTimer  tStart;

			LOG_DEBUG("Route2TalkServiceI::forwordMessage ==> begin.");
			int flag = router2talkServerPtr_->forwardMessage(xmppString);
			if(flag < 0)
			{
				LOG_ERROR("Router2TalkServiceI::forwardMessage ==> return error: "<<flag);
			}


			LOG_DEBUG("Route2TalkServiceI::forwordMessage ==> end. use:"<<tStart.elapsed());


		}

	};


};
