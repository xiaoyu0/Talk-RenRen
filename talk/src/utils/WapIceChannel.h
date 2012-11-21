/**
* @file WapIceChannel.h
* @brief	包含wap组特殊配置的IceChannel(虽然目前没有什么特殊配置，但是还是做了这一层包装)
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-09-27
*/
#ifndef TALK_UTILS_WAP_ICE_CHANNEL_H_
#define TALK_UTILS_WAP_ICE_CHANNEL_H_

#include "IceChannel.h"

namespace mtalk{
namespace utils{

	class WapIceChannel : public IceChannel{
	public :
		WapIceChannel();

		virtual ~WapIceChannel();
	private :
	};

};
};
#endif //TALK_UTILS_WAP_ICE_CHANNEL_H_
