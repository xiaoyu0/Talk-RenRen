#include <unistd.h>
#include "SocketServiceI.h"
#include "SocketServer.h"
#include <iostream>

namespace mtalk{
	namespace socket{
		com::xiaonei::wap::talk::Result SocketServiceI::createSession(Ice::Long connectionId, const std::string& msg, const Ice::Current& current){
			return MY_INSTANCE(SocketServer).createSession(connectionId, msg);
		}

		com::xiaonei::wap::talk::Result SocketServiceI::transferStream(const std::string& sessionId, const std::string& msg, const Ice::Current& current){
				return MY_INSTANCE(SocketServer).transferStream(sessionId, msg);
		}

		void  SocketServiceI::notifySent(const std::string& msg , const Ice::Current& current){
		}

		com::xiaonei::wap::talk::Result SocketServiceI::createSessionV1(::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Current& current){

			return MY_INSTANCE(SocketServer).createSessionV1(connectionId, msg);
		} 


		com::xiaonei::wap::talk::Result SocketServiceI::updateV1(const ::std::string& sessionId, const ::std::string& msg, const ::Ice::Current& ){
			return MY_INSTANCE(SocketServer).updateV1(sessionId, msg);
		}


		com::xiaonei::wap::talk::Result SocketServiceI::sendV1(const ::std::string& sessionId, const ::std::string& msg, const ::Ice::Current& ){
			return MY_INSTANCE(SocketServer).sendV1(sessionId, msg);
		}
	};
};
