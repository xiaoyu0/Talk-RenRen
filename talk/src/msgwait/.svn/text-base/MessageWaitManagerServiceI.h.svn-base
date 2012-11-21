/*
 * =====================================================================================
 *
 *       Filename:  MessageWaitManagerI.h
 *
 *    Description:  提取离线消息
 *
 *        Version:  1.0
 *        Created:  2012年02月10日 12时35分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  yuanjiang (mn), jiang.yuan@renren-inc.com
 *        Company:  renren
 *
 * =====================================================================================
 */
#include  <Ice/Ice.h>
#include  <string>
#include  <boost/shared_ptr.hpp>

#include    "ice_src/MessageWaitManagerService.h"
#include    "MessageWaitManager.h"
namespace mtalk{
	namespace msgwait{
		class MessageWaitManagerServiceI : public com::xiaonei::wap::talk::MessageWaitManagerService {
			public:
				MessageWaitManagerServiceI( boost::shared_ptr<MessageWaitManager> messageWaitManagerPtr);

				~MessageWaitManagerServiceI(){};

				virtual void  addMessage(Ice::Long fromId, Ice::Long toId, Ice::Long msgKey,
						const std::string& msg, Ice::Int msgType,
						Ice::Int supportToClientType,
						const Ice::Current& current);	

				virtual void  immediatelySend2Offline(Ice::Long fromId, Ice::Long toId, Ice::Long msgKey,
						const std::string& msg, Ice::Int msgType,
						Ice::Int supportToClientType,
						const Ice::Current& current);	


				virtual void addVoiceMessage(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg ,
						Ice::Int supportToClientType,const ::Ice::Current& current); 

				virtual void delMessageWithId(::Ice::Long userId, ::Ice::Long msgKey, ::Ice::Int clientType , const ::Ice::Current& current );

				virtual void delMessage(::Ice::Long msgKey, ::Ice::Int clientType , const ::Ice::Current& current ); 

				virtual void delVoiceMessage(const ::std::string& msg, ::Ice::Int clientType , const ::Ice::Current& current);

			private:
			boost::shared_ptr<MessageWaitManager>  messageWaitManagerPtr_;


		};
	};
};
