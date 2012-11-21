#ifndef TALK_BOSH_MESSAGE_H_
#define TALK_BOSH_MESSAGE_H_

#include <string>
#include <sstream>
#include <boost/shared_ptr.hpp>
#include <vector>
#include "constant/MessageType.h"
#include "talk/MsgNode.h"

namespace mtalk{
namespace bosh{

	/**
	* @brief	已发送的消息体
	*/
	struct Message{
	public :

		std::string getAllMsg(){
			std::ostringstream os;
			for(size_t i = 0; i < nodeList.size(); ++i){
				os << nodeList[i]->msg;
			}
			return os.str();
		};
		
		long rid;
		std::vector<mtalk::talk::MsgNodePtr> nodeList;
	};

	typedef boost::shared_ptr<Message> MessagePtr;
};
};
#endif //TALK_BOSH_MESSAGE_H_
