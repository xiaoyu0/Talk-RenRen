/**
 * @file  Router2TalkServiceI.h
 * @brief Talk Server服务之间调用的推送接口
 给facebookproxy提供服务接口 
 * @author guangyou.zhou@renren-inc.com
 * @version 1.0
 * @date 2012-08-07
 */
#ifndef ROUTE_TO_TALK_SERVICE_I_H_
#define ROUTE_TO_TALK_SERVICE_I_H_

#include <string>
#include <Ice/Ice.h>
#include <boost/shared_ptr.hpp>
#include "ice_src/Router.h"
#include "constant/UserOnlineType.h"
#include "Router2TalkServer.h"


namespace mtalk{
	namespace talk{

		class Router2TalkServiceI : public com::sixin::talk::router::RouterService {
			public :
				Router2TalkServiceI();

				/**
				 * @brief	Facebook到talk间的路由IQ消息包推送接口
				 *
				 * @param	string
				 * @param	current
				 */

				virtual void forwardIq(const std::string& xmppString, const Ice::Current& current);

				/**
				 * @brief	Facebook到talk间的路由presence消息包推送接口
				 *
				 * @param	string
				 * @param	current
				 */

				virtual void forwardPresence(const std::string& xmppString, const Ice::Current& current); 


				/**
				 * @brief	Facebook到talk间的路由message消息包推送接口
				 *
				 * @param	string
				 * @param	current
				 */
				virtual void forwardMessage(const std::string& xmppString, const Ice::Current& current); 


			private:

				boost::shared_ptr<Router2TalkServer> router2talkServerPtr_;                

		};


	};


};

#endif



