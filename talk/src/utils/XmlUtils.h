/**
* @file XmlUtils.h
* @brief	xml 的字符转换方法
* @author you.zhou@renren-inc.com
* @version 1.0
* @date 2011-09-27
*/
#ifndef TALK_UTILS_XML_UTILS_H_
#define TALK_UTILS_XML_UTILS_H_

#include <string>

namespace mtalk{
namespace utils{
	class XmlUtils{
	public :
		static void xmlEncode(std::string& src);
		static void xmlDecode(std::string& src);
		static std::string getPartWorlds(std::string src,int number, int begin = 0);
	};
};
};
#endif //TALK_UTILS_XML_UTILS_H_
