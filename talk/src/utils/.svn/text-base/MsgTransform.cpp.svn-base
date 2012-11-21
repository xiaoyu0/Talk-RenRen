#include "MsgTransform.h"
#include  <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <boost/lexical_cast.hpp>
//#include "proxy/ProxyRegister.h"
//#include "proxy/ShortUrlServiceProxy.h"


using namespace std;
using namespace pugi;

namespace mtalk{
namespace utils{

	#define MSG_TRANSFORM_VOICE_2_TEXT "给你发来一段语音！"
	#define MSG_TRANSFORM_IMAGE_2_TEXT "给你发来一张图片！"
	#define MSG_TRANSFORM_LBS_2_TEXT "跟你分享了TA的位置！"
	#define MSG_TRANSFORM_EXPRESSION_2_TEXT "给你发来一个炫酷表情！"
	//#define MSG_TRANSFORM_FEED_2_TEXT "回复了你的照片"

	#define SIXIN_TAIL_SHORT_IN_TRANSFORM "立即下载私信查看: http://mdown.renren.com/soft/sixinclientshow.do"
	#define FEED_COMMENT_STR "回复了你的"

	std::string MsgTransform::voice2text(const xml_node &msgNode){
		//const char_t* fromName = msgNode.attribute("fname").value();
		xml_node body = msgNode.child("body");
		if(body){
			xml_node audio = body.child("audio");
			if(audio){
//				const char_t* fullUrl = audio.attribute("fullurl").value();
				ostringstream os;
				os << MSG_TRANSFORM_VOICE_2_TEXT;
				return os.str();
			}
		}
		return "";
	}

	bool MsgTransform::isVoice2text(const std::string &msg){
		return msg.find(MSG_TRANSFORM_VOICE_2_TEXT) != string::npos;
	}

	std::string MsgTransform::image2text(const xml_node &msgNode){
		//const char_t* fromName = msgNode.attribute("fname").value();
		xml_node body = msgNode.child("body");
		if(body){
			xml_node image = body.child("image");
			if(image){
				//const char_t* mainUrl = image.attribute("large").value();
//				string shortUrl = MY_INSTANCE(mtalk::proxy::ProxyRegister).getProxy<mtalk::proxy::ShortUrlServiceProxy>("shortUrlProxy").create(mainUrl);
				ostringstream os;
				os << MSG_TRANSFORM_IMAGE_2_TEXT;
				return os.str();
			}
		}
		return "";
	}

	bool MsgTransform::isImage2text(const std::string &msg){
		return msg.find(MSG_TRANSFORM_IMAGE_2_TEXT) != string::npos;
	}

	std::string MsgTransform::lbs2text(const xml_node &msgNode){
		//const char_t* fromName= msgNode.attribute("fname").value();
		xml_node body = msgNode.child("body");
		if(body){
			const char_t* msgType = body.attribute("type").value();
			if(strcmp(msgType, "lbs") == 0){
//				const char_t* mainUrl = image.attribute("main").value();
				ostringstream os;
				os << MSG_TRANSFORM_LBS_2_TEXT;
				return os.str();
			}
		}
		return "";
	}

	bool MsgTransform::isLbs2text(const std::string &msg){
		return msg.find(MSG_TRANSFORM_LBS_2_TEXT) != string::npos;
	}

	std::string MsgTransform::expression2text(const xml_node &msgNode, bool isAppendName){
		//const char_t* fromName = msgNode.attribute("fname").value();
		xml_node body = msgNode.child("body");
		if(body){
			const char_t* msgType = body.attribute("type").value();
			if(strcmp(msgType, "expression") == 0){
				ostringstream os;
				if(isAppendName){
					os << MSG_TRANSFORM_EXPRESSION_2_TEXT;
				}else{
					os<<MSG_TRANSFORM_EXPRESSION_2_TEXT;
				}
				return os.str();
			}
		}
		return "";
	}

	std::string MsgTransform::personal2text(pugi::xml_node& node){
		return "给你发来一条私密消息";
	}

	bool MsgTransform::isExpression2text(const std::string &msg){
		return msg.find(MSG_TRANSFORM_EXPRESSION_2_TEXT) != string::npos;
	}

	string MsgTransform::feed2text(const xml_node& msgNode){
		//const char_t* fromName = msgNode.attribute("fname").value();
		xml_node feed = msgNode.child("feed");
		string feedTypeWord;
		ostringstream os;

		if(feed){
			int feedType = feed.attribute("type").as_int();
			switch (feedType) {
				case  502 :
					feedTypeWord = "状态";
					break;
				case  701 :
				case  709 :
					feedTypeWord = "照片";
					break;
				default :
					feedTypeWord = "新鲜事";
			}
			os << FEED_COMMENT_STR << feedTypeWord << " ! ";	
			return os.str();
		}

		return "";
	}

	bool MsgTransform::isFeed2Text(const string& msg){
		if ((msg.find(SIXIN_TAIL_SHORT_IN_TRANSFORM) != string::npos)  && (msg.find(FEED_COMMENT_STR) != string::npos)) {
			return true;
		}

		return false;
	}

	std::map<string, string>  loadExpression2UrlMap(){
			std::map<string, string> expression2UrlMap;
			ifstream fi("/opt/talk/conf/expressionUrl.txt");
			std::vector<string> userList;
			if(fi){
					string temp;
					while(1){
							fi>>temp;
							if(fi.eof()) break;
							userList.push_back(temp);
					}
					fi.close();
					for (vector<string>::iterator it = userList.begin(); it!=userList.end(); it++ ){
							string str(*it);
							int pos = str.find_first_of("-");
							string s1 = str.substr(0,pos);
							int pos1 = str.find_first_of("=");
							string s2 = str.substr(0,pos1);
							string s3 = str.substr(pos1+1);
							expression2UrlMap[s2] = s3 ;
					}
					return expression2UrlMap;
			}else{
					std::cout<<"expressionUrl error!!!"<<endl;
					return expression2UrlMap;
			}
	}

	std::map<int, string> loadNumber2PackageNameMap(){
			std::map<int,string> number2PackageNameMap;
			number2PackageNameMap[1] = "cube";
			number2PackageNameMap[2] = "max";
			number2PackageNameMap[3] = "阿狸";
			return number2PackageNameMap;
	}

	std::map<string, string>  MsgTransform::expression2UrlMap = loadExpression2UrlMap();
	std::map<int, string>  MsgTransform::number2PackageNameMap = loadNumber2PackageNameMap();

	void MsgTransform::expression2Url(pugi::xml_node& node){
			string expression = node.first_element_by_path("body/text").child_value();
			expression = expression.substr(expression.find("(")+1, expression.find(")") - expression.find("(") - 1);
			string exName = expression.substr(expression.find("-")+1, expression.find(")") - expression.find("-") - 1);
			string url;
			if(!expression.empty()){
					size_t pos = expression.find("-");
					if(pos != string::npos){
							string prefix = expression.substr(0,pos);
							string name = expression.substr(pos+1);
							int package = 0;
							try{
									package = boost::lexical_cast<int>(prefix);
									map<int, string>::iterator it = number2PackageNameMap.find(package);
									if(it != number2PackageNameMap.end()){
											map<string, string>::iterator it1 = expression2UrlMap.find(it->second + "-" + exName);
											if(it1 != expression2UrlMap.end()){
													url = it1->second; 
											}else{
													url = "unknow expression name";
											}
									}else{
											url = "unknow expression package NO.";
									}

							}catch(...){
									url = "expression package exception";
							}

					}else{
							url = "expression format error";
					}
			}else{
					url = "expression format error";
			}
			xml_node body = node.child("body");
			body.remove_child("text");
			body.attribute("type").set_value("image");
			xml_node image = body.append_child();
			image.set_name("image");
			image.append_attribute("large").set_value(url.c_str());
			image.append_attribute("main").set_value(url.c_str());
			image.append_attribute("tiny").set_value(url.c_str());

	}


};
};
