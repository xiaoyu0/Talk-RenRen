/**
* @file UserOnlineType.h
* @brief 定义用户终端在线的类型
* @author wang.yu@renren-inc.com
* @version 1
* @date 2012-02-22
*/
#ifndef TALK_CONSTANTS_USER_ONLINE_TYPE_H_
#define TALK_CONSTANTS_USER_ONLINE_TYPE_H_

namespace mtalk{
namespace constant{

	class OnlineType{
	public :
		typedef enum{
			OFFLINE = 0,

			IPHONE_SIXIN = (1 << 4),

			ANDROID_SIXIN = (1 << 5),

			SYNBIAN_SIXIN = (1 << 6),

			WINPHONE_SIXIN = (1 << 7),

			IPHONE_RENREN = (1 << 8),

			ANDROID_RENREN = (1 << 9),

			IPAD_RENREN = (1 << 10),

			UNKNOWN = (1 << 11),
     		RENREN_LOCK_SCREEN = (1<<12)

		} Type;
	};
};
};

#endif
