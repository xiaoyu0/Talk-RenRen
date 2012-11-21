/**
* @file TalkServiceProxy.h
* @brief	服务间推送方法调用的代理
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-09-27
*/
#ifndef TALK_PROXY_TALK_SERVICE_PROXY_H_
#define TALK_PROXY_TALK_SERVICE_PROXY_H_

#include <string>
#include <vector>
#include "SerialZKProxy.h"
#include "ice_src/TalkService.h"
#include "constant/MessageType.h"
#include "constant/UserOnlineType.h"

namespace mtalk{
namespace proxy{

	class TalkServiceProxy : public SerialZKProxy<com::xiaonei::wap::talk::TalkServicePrx>{
	public :
		TalkServiceProxy();

		void push(const long fromId, const long toId, const std::string& msg, const constant::MessageType::Type messageType);
		void push(const long fromId, const long toId, const std::string& msg, const int messageType);

		std::vector<int> getUsersOnlineStatSeq(const std::vector<long>& users, int key);
		
		int getUserOnlineStat(const long userId, bool forIM = false);

		int getUserOnlineTypebyTalk(const long userId);

		void mucPush(const std::string roomId, const long toId, const std::string& msg);

		bool distribute(long roomId, long toId,std::string msg , bool isSave);

		bool mucReturn(long userId,std::string sessionId, std::string msg , bool isSave);

	private :

		void int2TypeSeq(const std::vector<int>& intStats, std::vector<mtalk::constant::OnlineType::Type>& stat);

	};

};
};
#endif //TALK_PROXY_TALK_SERVICE_PROXY_H_
