#ifndef TALK_UTILS_MESSAGE_TAILS_H_
#define TALK_UTILS_MESSAGE_TAILS_H_

#include <string>
#include "constant/MessageType.h"

namespace mtalk{
namespace utils{

	class MessageTails{
	public :
		static void addTail(const int appId, const mtalk::constant::MessageType::Type msgType, std::string& message);
		static void addTail(const int appId, const int msgType, std::string& message);
		static void replaceTail(const int appId, std::string& message);
	};
};
};

#endif //TALK_UTILS_MESSAGE_TAILS_H_
