/**
* @file MessageType.h
* @brief	XMPP协议中message节点的各种消息类型定义
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-07-15
*/
#ifndef TALK_CONSTANT_MESSAGE_TYPE_H_
#define TALK_CONSTANT_MESSAGE_TYPE_H_

namespace mtalk{
namespace constant{
	class MessageType{
	public :
		typedef enum{
			/**
			* @brief	一对一聊天,内部区分主要是文本消息
			*/
			CHAT = 1,
			/**
			* @brief	群聊
			*/
			GROUP_CHAT = (1 << 1),
			/**
			* @brief  随聊天的FEED类型	
			*/
			FEED = (1 << 2),
			/**
			* @brief	消息类型
			*/
			NOTIFY = (1 << 3),
			/**
			* @brief	上下线信息
			*/
			PRESENCE = (1 << 4),
			/**
			* @brief	图片消息，内部区分，接口对外的message节点中的type依然是chat或者groupchat
			*/
			IMAGE = (1 << 5),
			/**
			* @brief	分片语音消息，内部区分，接口对外的message节点中的type依然是chat或者groupchat
			*/
			VOICE = (1 << 6),
			/**
			* @brief	震动消息
			*/
			VIBRATE = (1 << 7),
			/**
			* @brief	不需要持久化和离线支持的动作，正在输入，正在录音等。
			*/
			ACTION = (1 << 8),
			/**
			* @brief	图片，文字，语音等类型混排的方式
			*/
			MULTIMEDIA = (1 << 9),
			/**
			* @brief	离线消息,该类型需要与其它类型合并使用，请勿单独使用
			* 			如CHAT + OFFLINE表示离线的文本消息，VOICE + OFFLINE表示离线的语音消息
			*/
			OFFLINE = (1 << 10),
			/**
			* @brief	文本离线消息
			*/
			TEXT_OFFLINE = OFFLINE | CHAT,
			/**
			* @brief	语音离线消息
			*/
			VOICE_OFFLINE = OFFLINE | VOICE,

			/**
			* @brief	图片离线消息
			*/
			IMAGE_OFFLINE = OFFLINE | IMAGE,

			/**
			* @brief	通讯录变更消息
			*/
			CONTACT = (1 << 11),

			/**
			* @brief	LBS
			*/
			LBS = (1 << 12),

			/**
			* @brief	lbs离线消息
			*/
			LBS_OFFLINE = OFFLINE | LBS,

			/**
			* @brief	炫酷表情
			*/
			EXPRESSION = (1 << 13),

			/**
			* @brief	炫酷表情离线
			*/
			EXPRESSION_OFFLINE = OFFLINE | EXPRESSION,
			
			// IM过来的新鲜事
			IM_FEED = (1 << 14),
			
			//群聊在线消息
			GROUP_CHAT_TEXT = CHAT | GROUP_CHAT ,
			GROUP_CHAT_IMAGE = IMAGE | GROUP_CHAT ,
			GROUP_CHAT_VOICE = VOICE | GROUP_CHAT ,
			GROUP_CHAT_MULTIMEDIA =  MULTIMEDIA | GROUP_CHAT ,
			GROUP_CHAT_EXPRESSION =  EXPRESSION | GROUP_CHAT ,
	
			//群聊离线消息
			GROUP_CHAT_OFFLINE = CHAT | OFFLINE | GROUP_CHAT,
			GROUP_CHAT_OFFLINE_IMAGE = IMAGE | OFFLINE | GROUP_CHAT  ,
			GROUP_CHAT_OFFLINE_VOICE = VOICE | OFFLINE | GROUP_CHAT ,
			GROUP_CHAT_OFFLINE_MULTIMEDIA =  MULTIMEDIA | OFFLINE | GROUP_CHAT,
			GROUP_CHAT_OFFLINE_EXPRESSION =  EXPRESSION | OFFLINE | GROUP_CHAT,
			//私密消息 

			PERSONAL = (1 << 15) ,
			
			ENTITY = (1 << 16),

			//系统消息	
			SYSTEM = (1 << 17)

		} Type;
	};
};
};
#endif //TALK_CONSTANT_MESSAGE_TYPE_H_
