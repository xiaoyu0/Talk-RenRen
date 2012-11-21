/**
* @file JID.h
* @brief	xmpp中的JID object
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-06
*/
#ifndef TALK_XMPP_JID_H_
#define TALK_XMPP_JID_H_
#include <string>

namespace mtalk{
namespace xmpp{
	
	class JID{
	public :
		JID();

		/*
		 * 创建一个jid，解析一个标准的jid字符串得到三个参数：
		 * 标准jid字符串为：[ node "@" ] domain [ "/" resource ]
		 * node为userId
		 * domain为endpoint
		 * resource为sessionId
		 */
		JID(const std::string& str);

		JID(const long& userId, const std::string& endpoint, const std::string& sessionId);

		bool parser(const std::string& str);

		/*
		 * 通过参数得到标准jid字符串
		 */
		std::string toString() const;

		void setUserId(const long& userId){
			userId_ = userId;
		}
		
		long getUserId() const{
			return userId_;
		}

		void setEndpoint(const std::string& endpoint){
			endpoint_ = endpoint;
		}

		std::string getEndpoint() const{
			return endpoint_;
		}

		std::string getRouter() const{
			return router_;
		}

		void setSessionId(const std::string& sessionId){
			sessionId_ = sessionId;
		}

		std::string getSessionId() const{
			return sessionId_;
		}

	private :
		long userId_;
		std::string endpoint_;
		std::string router_;
		std::string sessionId_;
	};
};
};
#endif //TALK_XMPP_JID_H_
