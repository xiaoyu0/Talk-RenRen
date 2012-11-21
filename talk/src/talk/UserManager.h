/**
* @file UserManager.h
* @brief	用户绑定信息管理
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_TALK_USER_MANAGER_H_
#define TALK_TALK_USER_MANAGER_H_

#include <map>
#include <string>
#include <vector>
#include <Ice/Ice.h>
#include <boost/shared_ptr.hpp>
#include <boost/dynamic_bitset.hpp>
#include "UserBuffer.h"
#include "imAdapter/IMGateForPhoneAdapter.h"
#include "Session.h"
#include "utils/MyLock.h"
#include "OnlineStatManager.h"
#include "SessionManager.h"

namespace mtalk{
namespace talk{
	
	typedef boost::shared_ptr<UserBuffer> UserBufferPtr;
	typedef std::map<long, UserBufferPtr> SubPool;
	const static size_t USER_POOLS_SIZE = 100;
	const static time_t BUFFER_TIMEOUT = 10;
	class UserManager : public boost::enable_shared_from_this<UserManager>, private boost::noncopyable {
		public :
			
			UserManager(boost::shared_ptr<mtalk::im::IMGateForPhoneAdapter> imGateForPhoneAdapterPtr, boost::shared_ptr<mtalk::talk::OnlineStatManager> onlineStatManagerPtr);

			~UserManager(){};

			void start();

			void stop();

			/**
			* @brief	绑定用户id和sessionId
			*
			* @param	sessionPtr
			*
			* @return	
			*/
			bool bind(const SessionPtr sessionPtr);

			/**
			* @brief	清除一个用户的一个sessionId
			*
			* @param	sessionPtr
			*/
			void unbind(const SessionPtr sessionPtr);

			/**
			* @brief	获取指定用户的所有sessionId，返回vector
			*
			* @param	userId
			*
			* @return	
			*/
			std::list<std::string> getSessionIdList(const long userId);
			/**
			 * @brief	获取指定用户的私信sessionPtr，返回list
			 *
			 * @param	userId
			 *
			 * @return	

			 **/
			std::list<talk::SessionPtr> getParticularSessionList(const long userId);

			/**
			  @brief 获取私信sessionId，
			 */
			std::list<std::string> getParticularSessionIdList(const long userId);


			/**
			  @brief 获取私信3.0的sessionId，
			 */
			std::list<std::string> getNewSessionIdList(const long userId);

			/**
			  @brief 获取私信3.0的session，
			 */
			std::list<talk::SessionPtr> getNewParticularSessionList(const long userId);

			/**
			  @brief  获取官方客户端的session
			 */
			std::list<std::string> getRenRenSessionIdList(const long userId);

			/**
			* @brief	清除所有的用户绑定信息，提供给im服务重启需求
			*/
			void clear();

			/**
			* @brief setSessionManager   设置UserManager的sessionManager, 因为都是talk层, 所以这里是有必要的
			*
			* @param sessionManagerPtr
			*/
			void setSessionManager(boost::shared_ptr<mtalk::talk::SessionManager> sessionManagerPtr){
				sessionManagerPtr_ = sessionManagerPtr;
			}

			/**
			* @brief logout	注销接口调用, 在talkServer的logout中调用 
			*
			* @param userId
			* @param sessionId
			*/
			void logout(const long userId, const std::string& sessionId);
			/**
			 *im推送来的离线消息进该用户的offlineMessageMap，同时
			 *从自己离线系统的消息也进offlineMessageMap
			 *通过map的有序来进行排序
			 **/
			bool   sendToOfflineMessageMap(long toId, long time , std::string msg);
			std::vector<string> getOfflineMessageSequence(long userId);

			/**
			* @brief uninstall 卸载接口, talkServer中uninstall调用,删除这种appId对应的OnlineType, 并可能引发下线
			*
			* @param userId
			* @param appId
			*/
			void uninstall(const long userId, const int appId);
			int  getUserCount();

		private :
			size_t getUserPoolsIndex(long userId){
				return (size_t)(userId % USER_POOLS_SIZE);
			}
		
			// appId和OnlineType的映射
			mtalk::constant::OnlineType::Type appId2Type(int appId);

			boost::shared_ptr<mtalk::im::IMGateForPhoneAdapter> imGateForPhoneAdapterPtr_;

			boost::shared_ptr<mtalk::talk::OnlineStatManager> onlineStatManagerPtr_;

			boost::shared_ptr<mtalk::talk::SessionManager> sessionManagerPtr_;

			SubPool userPools_[USER_POOLS_SIZE];

			boost::shared_mutex userPoolsMutex_[USER_POOLS_SIZE];
	};

};
};
#endif // TALK_TALK_USER_MANAGER_H_
