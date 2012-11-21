/*
 * =====================================================================================
 *
 *       Filename:  MsgWaitServiceProxy.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年02月14日 14时07分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  yuanjiang (mn), jiang.yuan@renren-inc.com
 *        Company:  renren
 *
 * =====================================================================================
 */

#ifndef TALK_MSGWAIT_SERVICE_PROXY_H_
#define TALK_MSGWAIT_SERVICE_PROXY_H_


#include <string>
#include <vector>
#include "SerialZKProxy.h"
#include "ice_src/MessageWaitManagerService.h"
#include "utils/MyLogger.h"


namespace mtalk{
	namespace proxy{

		class MsgWaitServiceProxy :
			public SerialZKProxy<com::xiaonei::wap::talk::MessageWaitManagerServicePrx>{
				public :
					MsgWaitServiceProxy();		
					~MsgWaitServiceProxy(){}		

					/**
					 * @brief    添加一个文本或者图片消息进入检测队列
					 *
					 * @param    fromId
					 * @param    toId
					 * @param    msgKey
					 * @param    msg
					 */
					bool addMessage(const long fromId, const long toId , const long msgKey, const std::string msg, int  msgType , int supportToClientType = 3);

					/**
					 * @brief    添加一个语音消息进入检测队列
					 *
					 * @param    fromId
					 * @param    toId
					 * @param    msg
					 */
					bool addVoiceMessage(const long fromId ,const long toId , const std::string msg , int supportToClientType =3);

					/**
					 * @brief    确认一个文本或者图片消息已经发送成功
					 *
					 * @param    msgKey
					 */
					bool  delMessage( const long msgKey , long fromId , int clientType = 3);

					/**
					 * @brief    确认一个语音消息发送成功
					 *
					 * @param    msg
					 */
					bool  delVoiceMessage( const std::string& msg,  long fromId, int clientType =3);

					/**
					  直接推送消息进离线系统
					 *
					 */
					bool immediatelySend2Offline(const long fromId, const long toId , const long msgKey, const std::string msg, int  msgType , int supportToClientType = 3);

				private :
			};
	};
};
#endif 
