#include "XmlUtils.h"
#include <boost/algorithm/string.hpp>

using namespace std;
using namespace boost::algorithm;

namespace mtalk{
namespace utils{
	void XmlUtils::xmlEncode(string& src){
		replace_all(src, "&", "&amp;");
		replace_all(src, "<", "&lt;");
		replace_all(src, ">", "&gt;");
		replace_all(src, "'", "&apos;");
		replace_all(src, "\"", "&quot;");
	}

	void XmlUtils::xmlDecode(string& src){
		replace_all(src, "&amp;", "&");
		replace_all(src, "&lt;", "<");
		replace_all(src, "&gt;", ">");
		replace_all(src, "&apos;", "'");
		replace_all(src, "&quot;", "\"");
	}

	string XmlUtils::getPartWorlds(string src,int number, int begin ){
		const   char* buf = src.c_str();
		int count = src.size();
		int step = 0;
		char dec[count];
		char* dec1 = dec;
		int index = 0;

		while((step++) < count){
			if((((unsigned char)(*buf)) >> 6) != 0x02 ){
				index++;
				if(index > number){
					break;
				}
				*dec1++ = *buf++;
			}else{
				*dec1++ = *buf++;
			}
		}
		*dec1 = '\0';
		string decStr(dec, step - 1);
		return decStr;
	}

};
};
