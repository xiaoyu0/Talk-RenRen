/**
* @file TalkServiceI.h
* @brief	Talk Server服务之间调用的推送接口
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-09-27
*/
#ifndef TALK_TALK_TALK_SERVICE_I_H_
#define TALK_TALK_TALK_SERVICE_I_H_

#include <string>
#include <Ice/Ice.h>
#include <boost/shared_ptr.hpp>
#include "ice_src/TalkService.h"
#include "imAdapter/IMGateForPhoneAdapter.h"
#include "constant/UserOnlineType.h"
#include "protocolChanger/ProtocolChanger.h"

namespace mtalk{
namespace talk{

	class TalkServiceI : public com::xiaonei::wap::talk::TalkService {
	public :
		TalkServiceI(boost::shared_ptr<mtalk::im::IMGateForPhoneAdapter> imGateForPhoneAdapterPtr);

		/**
		* @brief	消息推送接口
		*
		* @param	fromId
		* @param	toId
		* @param	msg
		* @param	messageType
		* @param	current
		*/
		virtual void push(Ice::Long fromId, Ice::Long toId, const std::string& msg, const Ice::Int messageType, const Ice::Current& current);

		virtual void pushFeed(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int type, bool focus,const ::Ice::Current&current);
		virtual void pushFeedBatch(::Ice::Long fromId, const ::com::xiaonei::wap::talk::Long2StrMap& msgMap, ::Ice::Int type, bool focus, const ::Ice::Current& current);
			/**
		* @brief	提供给IM的推送接口,由push系统将从im订阅的消息推送回来。
		*
		* @param	fromId
		* @param	toId
		* @param	msg
		* @param	messageType
		* @param	userType
		* @param	strMap保留接口	
		* @param	current
		*/

		virtual void pushFromIm(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int userType, ::Ice::Long msgkey, const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Current& current);

		virtual void pushOfflineFromIm(const ::com::xiaonei::wap::talk::OfflineItemList&, const ::com::xiaonei::wap::talk::Str2StrMap&, const ::Ice::Current& );

		virtual void pushStatFromIm(::Ice::Long fromId, const ::com::xiaonei::wap::talk::Long2StrMap& strmap, const ::com::xiaonei::wap::talk::Str2StrMap& str2str, const ::Ice::Current& current) ;
		/**
		 * @brief	提供给语音传输的推送接口,目前只有mcs上语音调用。
		*
		* @param	fromId
		* @param	toId
		* @param	msg
		* @param	messageType
		* @param	current
		*/
		virtual void voicePushV1(Ice::Long fromId, Ice::Long toId, const std::string& msg, const Ice::Int messageType, const Ice::Int appId, const Ice::Current& current);

		virtual void voicePush(Ice::Int fromId, Ice::Int toId, const std::string& msg, const Ice::Int messageType, const Ice::Int appId, const Ice::Current& current);
		/**
		* @brief	获取本地用户在线状态,返回状态列表
		*
		* @param	users
		* @param	current
		*
		* @return	
		*/
		virtual std::vector<Ice::Int> getUsersOnlineStatSeq(const std::vector<Ice::Long>& users, const Ice::Current& current);

		/**
		* @brief	获取本地用户在线状态，返回用户到状态的映射
		*
		* @param	users
		* @param	current
		*
		* @return	
		*/
		virtual std::map<Ice::Long, Ice::Int> getUsersOnlineStatMapV1(const std::vector<Ice::Long>& users, const Ice::Current& current);

		virtual std::map<Ice::Int, Ice::Int> getUsersOnlineStatMap(const std::vector<Ice::Int>& users, const Ice::Current& current);
		/**
		* @brief	获取单个用户的在线状态
		*
		* @param	userId
		*
		* @return	
		*/
		virtual Ice::Int getUserOnlineStatV1(const Ice::Long userId, const Ice::Current& current);

		virtual Ice::Int getUserOnlineStat(const Ice::Int userId, const Ice::Current& current);
		/**
		* @brief getUserOnlineTypebyTalk 供talk服务本身调用, 在IMStorObserver中调用, 因为IM update presence的是即时的,不用再查DB
		*
		* @param userId
		* @param current
		*
		* @return 
		*/
		virtual Ice::Int getUserOnlineTypebyTalk(const Ice::Long userId, const Ice::Current& current);

		/**
		* @brief logout 注销一个用户的session, session之前是长在线的也会被删除, mcs调用
		*
		* @param userId
		* @param sessionId
		* @param current
		*/
		virtual void logoutV1(const Ice::Long userId, const std::string& sessionId, const Ice::Current& current);

		virtual void logout(const Ice::Int userId, const std::string& sessionId, const Ice::Current& current);
		/**
		* @brief uninstall 卸载, 由push那边接收到卸载通知后调用
		*
		* @param userId
		* @param appId
		* @param current
		*/
		virtual void uninstall(const Ice::Long userId, const Ice::Int pushDefinedTypeId, const Ice::Current& current);

		/**
		 * @brief distribute 群聊消息 由talk分发给指定用户
		 *@param roomId  
		 *@param toId
		 *@param msg
		 *@param isSave 是否为该消息存离线
		 */
		virtual void distribute(::Ice::Long roomId, ::Ice::Long toId, const ::std::string& msg, bool isSave, const ::Ice::Current& Current) ;

		/**
		 *@MucReturn 群聊中需要服务器端response的消息由此返回
		 *@param sessionId 
		 *@param msg
		 *@param isSave 是否为该消息存离线
		 */
		virtual void MucReturn(const ::std::string& sessionId, const ::std::string& msg, bool isSave, const ::Ice::Current& Current) ;
		
		virtual void pushMucOffline(::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Current& = ::Ice::Current()){/*废弃接口*/}

		virtual void pushMucOfflineV1(const ::std::string& sessionId, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Current& = ::Ice::Current());

		//add by zhougy.
		virtual void pushMucOfflineV1For2V(const ::std::string& sessionId, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Current& = ::Ice::Current());

		
		virtual void pushOfflineV1(const ::std::string& sessionId, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Current& = ::Ice::Current());

        //add by zhougy
        virtual void pushOfflineV1For2V(const ::std::string& sessionId, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Current& = ::Ice::Current());
		//设置session的语言属性
		virtual void setLang(::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current());
		//virtual void setLang(long userId, const string language, const ::Ice::Current& current );


	private :
		void type2Int(const std::vector<mtalk::constant::OnlineType::Type> & typeVec, std::vector<int>& intVec);

		std::vector<string> ProtocolChangeMsg(std::string sessionId,std::vector<string> OfflineMsgList); 
                 

		boost::shared_ptr<mtalk::im::IMGateForPhoneAdapter> imGateForPhoneAdapterPtr_;

		protocolChang::ProtocolChanger  changer_ ;
	};

};
};
#endif //TALK_TALK_TALK_SERVICE_I_H_
