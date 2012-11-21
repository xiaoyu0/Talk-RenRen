#include "MessageTails.h"
#include "constant/MessageType.h"

using namespace std;
using namespace mtalk::constant;

namespace mtalk{
namespace utils{

	#define SIXIN_MSG_TAIL "(下载私信：http://mobile.renren.com/showClient?v=letter)"

	#define SIXIN_TO_RENREN_TAIL  "(下载私信  http://mdown.renren.com/soft/sixinclientshow.do)" 

	#define RENREN_VOICE_TAIL "立即下载新版手机客户端感受全新聊天乐趣（目前支持iPhone和Android平台）： http://m.renren.com/dl.do "
	
	#define RENREN_LOCKSCREEN_TAIL "发自人人锁屏，http://www.renren.com/601242782"

	#define SIXIN_TAIL_SHORT  "  立即下载私信查看: http://mobile.renren.com"

	#define SIXIN_TAIL_SHORT_2  "  立即下载私信查看: http://rrurl.cn/vMog8w"

	#define SIXIN_TO_RENREN_TAIL_SHORT  "  立即下载私信查看: http://rrurl.cn/cTdL5Q"

	void MessageTails::addTail(const int appId, const MessageType::Type msgType, string& message) { 
        addTail(appId, (int)msgType, message);
    }
	void MessageTails::addTail(const int appId, const int msgType, string& message){
		switch(appId){
		case 170979 : //windows phone sixin
		case 169485 : //iphone sixin
		case 166011 : //Synbian sixin
		case 169486 : //android sixin
		case 159371 : //android sixin2
		case 208078 : //iphone sixin3.0
		case 208079 : //android sixin3.0
		case 208080 : //wp sixin3.0
		case 208081 : //国际iphone sixin3.0
		case 208082 : //guoji andrord sixin3.0
		case 208083 : // guoji wp sixin3.0
			if(msgType != MessageType::CHAT){
			//	message.append(SIXIN_TAIL_SHORT);
			}
			break;
		case 185292 : //新 iphone renren
		case 153629 : //iphone renren
		case 153627 : //android renren
		case 185047 : //android5.0 renren
			if(msgType == MessageType::VOICE){
			//	message.append(RENREN_VOICE_TAIL);
			}
			break;
		case 160590 : //ipad renren
			break;

		case 175592://renren LockScreen
			if(msgType != MessageType::CHAT){
			//	message.append(RENREN_LOCKSCREEN_TAIL);
			}
			break;

		case 0 : //iphone and android old version renren
			break;
		case 215928:   //新官方androd apid
			break;
		case 215897:   //新官方iphone appid
			break;
		default :
			//message.append("(发自不明物体：http://3g.renren.com/dl.do)");
			message.append("(发自不明AppId：http://3g.renren.com/dl.do)");
		};
	}

	void MessageTails::replaceTail(const int appId, string& message){

		switch(appId){
		case 185292 :
		case 153629 :	//iphone renren
		case 153627 :	//android renren
		case 160590 :	//ipad renren
		case 185047 : //android5.0 renren
		case 0 :
			size_t p = message.find(SIXIN_TAIL_SHORT);
			if( p != string::npos){
				message.replace(p, strlen(SIXIN_TAIL_SHORT), SIXIN_TO_RENREN_TAIL_SHORT);
				//message.append(SIXIN_TO_RENREN_TAIL);
			}
			break;
		}
	}

};
};
