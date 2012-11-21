/**
* @file EmojiFilter.h
* @brief	针对iphone ios5用户转换输入内容中apple编码的Emoji表情到softbank编码的Emoji表情
* 			转换表见:http://www.opensource.apple.com/source/ICU/ICU-461.12/icuSources/data/translit/Any_SoftbankSMS.txt?txt
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-11-21
*/
#ifndef TALK_UTILS_EMOJI_FILTER_H_
#define TALK_UTILS_EMOJI_FILTER_H_

#include<string>
#include<map>

namespace mtalk{
namespace utils{

	class EmojiFilter{
	public:
		EmojiFilter();

		/**
		* @brief	会调用initDataMap(const std::string& dataFile)进行转换表的初始化
		*
		* @param	dataFile
		*/
		EmojiFilter(const std::string& dataFile);
		bool initDataMap(const std::string& dataFile);

		/**
		* @brief	对内容中的apple编码进行过滤的filter
		*
		* @param	toBeTransform
		*
		* @return	
		*/
		bool filter(std::string& toBeTransform);
		bool filter(std::string inputFileName,std::string outputFileNamei);
	private:
		bool unicodeToUtf8For3Byte(int unicode, char** utf8);
		bool unicodeToUtf8For4Byte(int unicode, char** utf8);
		std::map<std::string, std::string> utf8Map;

	};
};
};
#endif //TALK_UTILS_EMOJI_FILTER_H_
