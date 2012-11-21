/*
 * =====================================================================================
 *
 *       Filename:  MsgWaitServiceProxy.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年02月14日 14时20分54秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  yuanjiang (mn), jiang.yuan@renren-inc.com
 *        Company:  renren
 *
 * =====================================================================================
 */

#include <sstream>
#include "MsgWaitServiceProxy.h"
#include "utils/MyLogger.h"
#include "Config.h"
#include    "utils/TimeUtils.h"

using namespace std;
using namespace mtalk::utils;
using namespace com::xiaonei::wap::talk;


namespace mtalk{
	namespace proxy{

		MsgWaitServiceProxy::MsgWaitServiceProxy():
			SerialZKProxy<MessageWaitManagerServicePrx>("MessageWaitManagerService",ZK_MSGWAIT_PATH, 1){
				LOG_DEBUG("MsgWaitServiceProxy::MsgWaitServiceProxy => Created");
			}

		bool MsgWaitServiceProxy::immediatelySend2Offline(const long fromId, const long toId, const long msgKey, const std::string msg, int msgType ,int supportToClientType){

			LOG_W(fromId, "MsgWaitServiceProxy::immediatelySend2Offline", msgType, msg);
			MilliTimer tStart;
			string message = msg;
			ReadLock lock(mutex_);
			MessageWaitManagerServicePrx proxy = getProxy(toId);
			if(!proxy){
				LOG_ERROR("MsgWaitServiceProxy::immedeiatelySend2Offline => get proxy failure : toId = " << toId << " toId = " << toId);
				return false;
			}
			try{
				proxy->immediatelySend2Offline( fromId, toId, msgKey, message, msgType ,supportToClientType);
				LOG_DEBUG("MsgWaitServiceProxy::immedeiatelySend2Offline => uid = " << toId << " message = " << message <<" supportToClientType ="<<supportToClientType);
			} catch (exception& e){
				LOG_ERROR("MsgWaitServiceProxy::immedeiatelySend2Offline => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
			}catch(...){
				LOG_ERROR("MsgWaitServiceProxy::immedeiatelySend2Offline => failure : proxy = " << proxy->ice_toString() << " exception = unknow exception"  ); 
			}

			LOG_TIME("MsgWaitServiceProxy::immediatelySend2Offline|" << tStart.elapsed() );
			return 1;
		}

		bool MsgWaitServiceProxy::addMessage(const long fromId, const long toId, const long msgKey, const std::string msg, int msgType ,int supportToClientType){

			LOG_W(fromId, "MsgWaitServiceProxy::addMessage", msgType, msg);

			MilliTimer tStart;
			string message = msg;
			ReadLock lock(mutex_);
			MessageWaitManagerServicePrx proxy = getProxy(toId);
			if(!proxy){
				LOG_ERROR("MsgWaitServiceProxy::addMsgWait => get proxy failure : toId = " << toId << " toId = " << toId);
				return false;
			}


			try{
				proxy->addMessage( fromId, toId, msgKey, message, msgType ,supportToClientType);
				LOG_DEBUG("MsgWaitServiceProxy::addMessage => uid = " << toId << " message = " << message <<" supportToClientType ="<<supportToClientType);
			} catch (exception& e){
				LOG_ERROR("MsgWaitServiceProxy::addMessage => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
			}catch(...){
				LOG_ERROR("MsgWaitServiceProxy::addMessage => failure : proxy = " << proxy->ice_toString() << " exception = unknow exception"  ); 
			}

			LOG_TIME("MsgWaitServiceProxy::addMessage|" << tStart.elapsed() );
			return 1;

		}


		bool MsgWaitServiceProxy::addVoiceMessage(const long fromId ,const long toId , const std::string msg , int supportToClientType){

			LOG_W(fromId, "MsgWaitServiceProxy::addVoiceMessage", -1, msg);

			ReadLock lock(mutex_);
			string message = msg;
			MilliTimer tStart;
			MessageWaitManagerServicePrx proxy = getProxy(toId);
			if(!proxy){
				LOG_ERROR("MsgWaitServiceProxy::addVoiceMessage => get proxy failure : toId = " << toId << " toId = " << toId);
				return false;
			}
			LOG_DEBUG("MsgWaitServiceProxy::addVoiceMessage => uid = " << toId <<   " msg = " << msg <<" supportToClientType =" <<supportToClientType);

			try{
				proxy->addVoiceMessage( fromId, toId, message , supportToClientType);
				LOG_DEBUG("MsgWaitServiceProxy::addMessageVoic => uid = " << toId << " message = " << message <<" supportToClientType ="<<supportToClientType);
			} catch (exception& e){
				LOG_ERROR("MsgWaitServiceProxy::addVoiceMessage => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
			}catch(...){
				LOG_ERROR("MsgWaitServiceProxy::addMessage => failure : proxy = " << proxy->ice_toString() << " exception = unknow exception"  ); 
			}
			LOG_TIME("MsgWaitServiceProxy::addVoiceMessage|" << tStart.elapsed() );
			return 1;
		}


		bool MsgWaitServiceProxy::delMessage(const long msgKey, long fromId , int clientType){
			LOG_W(fromId, "MsgWaitServiceProxy::delMessage", -1, "");
			MilliTimer tStart;
			if(clientType ==0){
				clientType = 1;
			}else if(clientType ==2){
				clientType =3;
			}

			ReadLock lock(mutex_);
			MessageWaitManagerServicePrx proxy = getProxy(fromId);
			if(!proxy){
				LOG_ERROR("MsgWaitServiceProxy::addMsgWait => get proxy failure  toId = " << fromId);
				return false;
			}

			LOG_DEBUG("MsgWaitServiceProxy::delMessage => uid = " << fromId << " clientType = "<< clientType<<" msgKey ="<<msgKey);

			try{
				proxy->delMessage( msgKey , clientType );
			} catch (exception& e){
				LOG_ERROR("MsgWaitServiceProxy::delMessage => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
			}
			LOG_TIME("MsgWaitServiceProxy::delMessage|" << tStart.elapsed() );
			return 1;
		}

		bool MsgWaitServiceProxy::delVoiceMessage(const std::string& msg, long fromId, int clientType){

			LOG_W(fromId, "MsgWaitServiceProxy::delMessage", -1, msg);
			MilliTimer tStart;
			if(clientType ==0){
				clientType = 1;
			}else if(clientType ==2){
				clientType =3;
			}

			ReadLock lock(mutex_);
			MessageWaitManagerServicePrx proxy = getProxy(fromId);
			if(!proxy){
				LOG_ERROR("MsgWaitServiceProxy::addMsgWait => get proxy failure : fromId = " << fromId);
				return false;
			}
			LOG_DEBUG("MsgWaitServiceProxy::delVoiceMessage  => uid = " << fromId << " msg = " << msg <<"   clientType = " <<clientType);

			try{
				proxy->delVoiceMessage( msg  , clientType);
			} catch (exception& e){
				LOG_ERROR("MsgWaitServiceProxy::delVoiceMessage => failure : proxy = " << proxy->ice_toString() << " exception = " << e.what()); 
			}
			LOG_TIME("MsgWaitServiceProxy::delVoiceMessage|" << tStart.elapsed() );
			return 1;
		}

	};
};
