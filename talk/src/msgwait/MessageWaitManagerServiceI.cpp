/*
 * =====================================================================================
 *
 *       Filename:  MessageWaitManagerServiceI.cpp
 *
 *    Description:  提取离线消息
 *
 *        Version:  1.0
 *        Created:  2012年02月10日 13时01分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  yuanjiang (mn), jiang.yuan@renren-inc.com
 *        Company:  renren
 *
 * =====================================================================================
 */

#include "MessageWaitManagerServiceI.h"
#include "constant/MessageType.h"

#include "utils/MyLogger.h"
#include <iostream>
#include <boost/timer.hpp>

namespace mtalk{
    namespace msgwait{

        using namespace std;

        MessageWaitManagerServiceI::
            MessageWaitManagerServiceI(boost::shared_ptr<MessageWaitManager> messageWaitManagerPtr):
                messageWaitManagerPtr_(messageWaitManagerPtr){
                }

        void  MessageWaitManagerServiceI::
            addMessage(Ice::Long fromId, Ice::Long toId, 
                    Ice::Long msgKey,
                    const std::string& msg,
                    Ice::Int msgType, 
                    Ice::Int supportToClientType,
                    const Ice::Current& current){

                LOG_W(fromId, "MessageWaitManagerServiceI::addMessage", msgType, msg);

                boost::timer tStart;            
                messageWaitManagerPtr_->addMessage(fromId, toId, msgKey, msg, msgType ,supportToClientType);
                LOG_TIME("MessageWaitManagerServiceI::addMessage cost|" << tStart.elapsed() * 1000);                
            }

        void  MessageWaitManagerServiceI::
            immediatelySend2Offline(Ice::Long fromId, Ice::Long toId, 
                    Ice::Long msgKey,
                    const std::string& msg,
                    Ice::Int msgType, 
                    Ice::Int supportToClientType,
                    const Ice::Current& current){

                LOG_W((long)fromId, "MessageWaitManagerServiceI::immediatelySend2Offline", msgType, msg);

                boost::timer tStart;            
                messageWaitManagerPtr_->immediatelySend2Offline(fromId, toId, msgKey, msg, msgType ,supportToClientType);
                LOG_TIME("MessageWaitManagerServiceI::addMessage cost time |" << tStart.elapsed() * 1000);                
            }


        void MessageWaitManagerServiceI::
            addVoiceMessage(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, Ice::Int supportToClientType, const ::Ice::Current& current){
                LOG_W(fromId, "MessageWaitManagerServiceI::addVoiceMessage", -1, msg);

                boost::timer tStart;            
                messageWaitManagerPtr_->addVoiceMessage(fromId, toId, msg ,supportToClientType);
                LOG_TIME("MessageWaitManagerServiceI::addVoiceMessage cost time |" << tStart.elapsed() * 1000);                
            }

        void MessageWaitManagerServiceI::
            delMessageWithId(::Ice::Long userId, ::Ice::Long msgKey, ::Ice::Int clientType , const ::Ice::Current& current){
                        
                boost::timer tStart;            
                messageWaitManagerPtr_->delMessageWithId(userId, msgKey , clientType);
                LOG_TIME("MessageWaitManagerServiceI::delMessageWithId cost time |" << tStart.elapsed() * 1000);                
            }

		void MessageWaitManagerServiceI::
            delMessage(::Ice::Long msgKey, ::Ice::Int clientType , const ::Ice::Current& current){
                        
                boost::timer tStart;            
                messageWaitManagerPtr_->delMessage(msgKey , clientType);
                LOG_TIME("MessageWaitManagerServiceI::delMessage cost time |" << tStart.elapsed() * 1000);                
            }


        void MessageWaitManagerServiceI::
            delVoiceMessage(const ::std::string& msg,::Ice::Int clientType, const ::Ice::Current& current){
                boost::timer tStart;            
                messageWaitManagerPtr_->delVoiceMessage(msg , clientType);
                LOG_TIME("MessageWaitManagerServiceI::delVoiceMessage cost time |" << tStart.elapsed() * 1000);                
        }


    };
};
