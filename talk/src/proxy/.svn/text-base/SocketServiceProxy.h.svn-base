#ifndef TALK_PROXY_SOCKET_SERVICE_PROXY_H_
#define TALK_PROXY_SOCKET_SERVICE_PROXY_H_


#include <string>
#include <vector>
#include "SerialZKProxy.h"
#include "ice_src/SocketService.h"
#include "utils/MyLogger.h"

namespace mtalk{
namespace proxy{

	class SocketServiceProxy :
		public SerialZKProxy<com::xiaonei::wap::talk::SocketServicePrx>{
			public :
				SocketServiceProxy();

				com::xiaonei::wap::talk::Result createSession(const long userId, const long connectionId, const std::string& msg);


				/**
				 * @brief  发送消息的代理，该接口不检测rid
				 *
				 * @param  sessionId
				 * @param  connectionId
				 * @param  msg
				 *
				 * @return 
				 */
				com::xiaonei::wap::talk::Result transferStream(const std::string& sessionId, const long connectionId, const std::string& msg);

				bool notifySent(long userId , std::string string);
				//

				com::xiaonei::wap::talk::Result createSessionV1( const long userId,const long connectionId, const ::std::string& msg); 
		
				com::xiaonei::wap::talk::Result updateV1(const ::std::string& sessionId, const ::std::string& msg);

				com::xiaonei::wap::talk::Result sendV1(const ::std::string& sessionId, const ::std::string& msg);

			private :
				com::xiaonei::wap::talk::SocketServicePrx getProxyBySession(const std::string& sessionId);

		};
};
};
#endif //TALK_PROXY_SOCKET_SERVICE_PROXY_H_
