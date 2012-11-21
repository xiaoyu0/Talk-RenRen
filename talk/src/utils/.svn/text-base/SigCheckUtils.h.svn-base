#ifndef TALK_SIG_CHECK_UTILS_H_
#define TALK_SIG_CHECK_UTILS_H_

#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <boost/algorithm/string.hpp>
#include "utils/md5.h"

using namespace std;

namespace mtalk{
namespace utils{
class SigCheckUtils{
public :
	static string generateNormalizedString(map<string, string> paramMap){
		vector<string> strv;
		for(map<string, string>::iterator it = paramMap.begin(); it != paramMap.end(); it++){
			if(it->first == "sig")
				continue;
			strv.push_back(it->first + "=" + (it->second.size() > 50 ? it->second.substr(0, 50) : it->second));
		}
		sort(strv.begin(), strv.end());
		string result;
		for(size_t i = 0; i < strv.size(); i++){
			result.append(strv[i]);
		}
		return result;
	};

	static string generateSignature(string normalizedString, string secretKey){
		string str = normalizedString + secretKey;
		CMD5 md5;
		md5.GenerateMD5((unsigned char*)(str.c_str()) , str.length());
		return md5.ToString();
	};

	static bool sigCheck(map<string, string> paramMap, string secretKey){
		map<string, string>::iterator it = paramMap.find("sig");
		if(it == paramMap.end()){
			return false;
		}
		string sig = it->second;
		boost::algorithm::to_lower(sig);
		string normalizedString = generateNormalizedString(paramMap);
		string csig = generateSignature(normalizedString, secretKey);
		boost::algorithm::to_lower(csig);
		
		return sig == csig;
	}
};
};
};
#endif //TALK_SIG_CHECK_UTILS_H_


