#ifndef TALK_IM_TALK_CHANNEL_H_
#define TALK_IM_TALK_CHANNEL_H_

#include "utils/IceChannel.h"

namespace mtalk{
namespace im{

	class IMTalkChannel : public mtalk::utils::IceChannel {
	public :

		virtual void init();
	
	};

};
};
#endif //TALK_IM_TALK_CHANNEL_H_
