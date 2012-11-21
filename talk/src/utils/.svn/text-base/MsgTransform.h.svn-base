/**
* @file MsgTransform.h
* @brief	消息内容转换，用户不同客户端接入版本间不支持的消息转为文本
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-11-21
*/
#ifndef TALK_UTILS_MSG_TRANSFORM_H_
#define TALK_UTILS_MSG_TRANSFORM_H_

#include <string>
#include "pugixml/pugixml.hpp"
#include <map>

namespace mtalk{
namespace utils{

	class MsgTransform{
	public :

		/**
		* @brief	将voice节点转换为文本
		* 			包含是否为voice节点的判断，如果不是返回空字符串
		*
		* @param	msgNode
		*
		* @return	
		*/
		static std::string voice2text(const pugi::xml_node &msgNode);

		/**
		* @brief	判断是否是调用voice2text转换出来的文本
		*
		* @param	msg
		*
		* @return	
		*/
		static bool isVoice2text(const std::string &msg);
	
		/**
		* @brief	将image节点转换为文本
		* 			包含是否为image节点的判断，如果不是返回空字符串
		*
		* @param	msgNode
		*
		* @return	
		*/	
		static std::string image2text(const pugi::xml_node &msgNode);

		/**
		* @brief	判断是否是调用image2text转换出来的文本
		*
		* @param	msg
		*
		* @return	
		*/
		static bool isImage2text(const std::string &msg);

		/**
		* @brief	将lbs节点转换为文本
		* 			包含是否为lbs节点的判断，如果不是返回空字符串
		*
		* @param	msgNode
		*
		* @return	
		*/
		static std::string lbs2text(const pugi::xml_node &msgNode);

		/**
		* @brief	判断是否是调用lbs2text转换出来的文本
		*
		* @param	msg
		*
		* @return	
		*/
		static bool isLbs2text(const std::string &msg);

		/**
		* @brief	将expression节点转换为文本
		* 			包含是否为expression节点的判断，如果不是返回空字符串
		*
		* @param	msgNode
		*
		* @return	
		*/
		static std::string expression2text(const pugi::xml_node &msgNode, bool isAppendName = 1);

		/**
		* @brief	判断是否是调用expression2text转换出来的文本
		*
		* @param	msg
		*
		* @return	
		*/
		static bool isExpression2text(const std::string &msg);

		/**
		* @brief feed2text 将带feed的的聊天转成文本传给IM
		*
		* @param msgNode
		*
		* @return 
		*/
		static std::string feed2text(const pugi::xml_node &msgNode);

		/**
		* @brief isFeed2Text 判断是否是IM回推的 FEED 转的文字
		*
		* @param msg
		*
		* @return 
		*/
		static bool isFeed2Text(const std::string& msg);
		
		/**

		 **/	
		static std::map<std::string, std::string> expression2UrlMap;

		static std::map<int, std::string> number2PackageNameMap;
		
		static void expression2Url(pugi::xml_node& node);

		static std::string personal2text(pugi::xml_node& node) ;
	};

};
};

#endif //TALK_UTILS_MSG_TRANSFORM_H_
