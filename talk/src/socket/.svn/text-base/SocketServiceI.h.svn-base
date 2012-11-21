#ifndef TALK_SOCKET_SERVER_I_H_
#define TALK_SOCKET_SERVER_I_H_

#include <Ice/Ice.h>
#include "ice_src/SocketService.h"
#include "utils/MyLogger.h"
	namespace mtalk{
		namespace socket{

			class SocketServiceI : public com::xiaonei::wap::talk::SocketService{
				public :
					SocketServiceI(){};

					~SocketServiceI(){};

					virtual com::xiaonei::wap::talk::Result createSession(Ice::Long connectionId, const std::string& msg, const Ice::Current& current);

					virtual com::xiaonei::wap::talk::Result transferStream(const std::string& sessionId, const std::string& msg, const Ice::Current& current);

					virtual void  notifySent( const std::string& msg , const Ice::Current& current);

//by yyb
					virtual com::xiaonei::wap::talk::Result createSessionV1(::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Current& current); 
			
					virtual com::xiaonei::wap::talk::Result updateV1(const ::std::string& sessionId, const ::std::string& msg, const ::Ice::Current& = ::Ice::Current());

					virtual com::xiaonei::wap::talk::Result sendV1(const ::std::string& sessionId, const ::std::string& msg, const ::Ice::Current& = ::Ice::Current());
			 
					
				private :
		};
	};
}
#endif //TALK_TALK_SERVER_I_H_



