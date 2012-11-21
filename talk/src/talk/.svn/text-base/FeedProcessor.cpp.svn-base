#include "FeedProcessor.h"

#include "utils/Singleton.h"
//#include "FeedAdapter.h"
#include "talk/TalkServer.h"
#include "constant/MessageType.h"
#include "proxy/ProxyRegister.h"
#include "proxy/PushServiceProxy.h"

#include <string>
#include <iostream>
#include <boost/lexical_cast.hpp>
#include <boost/shared_ptr.hpp>

using namespace std;
using namespace pugi;
using namespace mtalk::talk;
using namespace mtalk::constant;
using namespace mtalk::proxy;

namespace mtalk{
namespace im{

	FeedProcessor::FeedProcessor(){
		int feedTypes[] = {502, //状态 
						   701, //单图
						   709};//多图
		for (int i=0; i<3 ; i++){
			sixinFeedTypeSet.insert(*(feedTypes+i));	
		}

		int appIds[] = {169485,  //iphone sixin
						169486,  //android sixin
						170979,  //winphone sixin
					//	215928,  //for 官方客户端androd5.5 
					//	215897,  //for 官方客户端iphone6.0
						166011, // symbian sixin
						208078,//iphone sixin3.0
						208079,//android sixin3.0
						208080,//wpone sixin3.0
						208081,//私信国际版 1.0  ios
						208082,//私信国际版 1.0  android
						208083 };//私信国际版 1.0  windows phone
		for (int i=0; i<10; i++){
			sixinAppIdSet.insert(*(appIds+i));
		}
	}

	void FeedProcessor::process(const xml_node& node){
		xml_node xfeed = node.child("xfeed");
		string feedIdStr = xfeed.child_value("feedid");
		string toIdStr = xfeed.child_value("toid");
		string fromIdStr = xfeed.child_value("fromid");
		string feedTypeStr = xfeed.child_value("type");
		string isFocusStr = xfeed.child_value("isfocus");
		string fromName = xfeed.child_value("fromname");

	//	cout << "feedId" << feedIdStr << "	toId" << toIdStr << "	fromId" << fromIdStr << "	feedType" << feedTypeStr << "	isFocusStr:" << isFocusStr << endl;
		
		stringstream ss;
		node.print(ss, "\t", pugi::format_raw);

		long feedId;
		bool isFocus;
		long to;
		long from;
		int feedType;

		try{
			feedId = boost::lexical_cast<long>(feedIdStr);
			isFocus = boost::lexical_cast<bool>(isFocusStr);
			to = boost::lexical_cast<long>(toIdStr);
			from = boost::lexical_cast<long>(fromIdStr);
			feedType = boost::lexical_cast<int>(feedTypeStr);
		} catch (boost::bad_lexical_cast& e){
			cout << "IMStormObserver::processFeed ==> error : " << e.what() <<  "  processFeed return" << endl;
			return ;
		}
		
		/*string stutusStr;
		if (feedType == 502){
			string feedxml = FeedAdapter::getFeed(feedId);
			xml_document doc;
			doc.load(feedxml.c_str());
			xml_node node = doc.first_child();
			statusStr = node.child("status").child_value("title");
			LOG_DEBUG("IMStormObserer::processFeed ==> feedxml = " << feedxml);
			LOG_DEBUG("IMStormObserer::processFeed ==> statusStr = " << statusStr);
		}*/

		
		bool feedConditionsForSixin = isFocus && sixinFeedTypeSet.count(feedType);
		//这里条件改为isFocus, 为了满足官方, push系统会作区分 
		//if (isFocus && onlineStatManagerPtr_->hasLongOnline(to)){
		LOG_FEED(feedType << "|" << from << "|" << to << "|" << isFocus);	
		if (isFocus){	//调用push条放到最低，长在线有时候不可靠
			LOG_IMFOCUSFEED(feedType << "|" << from << "|" << to << "|" << "str = " << ss.str());	
			feedIOSPush(from, to, feedType, feedId);
		}
		
		string isFocusboolStr;
		if (isFocus){
			isFocusboolStr = "true";
		} else {
			isFocusboolStr = "false";
		}

		ostringstream os;

		os << "<message from='" << fromIdStr
				<<"' to='" << toIdStr <<"' type='normal' feed='true'>"
				<<"<feed id='" << feedIdStr << "' isfocus='" << isFocusboolStr << "' type='" << feedTypeStr << "'/>"
				<<"</message>";
		string str = os.str();	
		LOG_DEBUG("IMStormObserver::processFeed ==> feed Str for push : " << str);
		MY_INSTANCE(TalkServer).feedPush(from, to, os.str(), MessageType::IM_FEED,0, feedConditionsForSixin);
	}

	void FeedProcessor::setOnlineStatManager(OnlineStatManagerPtr ptr){
		onlineStatManagerPtr_ = ptr;
	}

	bool FeedProcessor::feedForSixin(bool isFocus, int feedType){
		bool feedConditionsForSixin = isFocus && sixinFeedTypeSet.count(feedType);
		return feedConditionsForSixin;
	}

	void FeedProcessor::feedIOSPush(long fromId, long toId, int feedType, long feedId){
		LOG_DEBUG("FeedProcessor::feedIOSPush ==> fromId = " << fromId << "  toId = " << toId << "  feedType = " << feedType);
		string feedTypeStr;	
		switch (feedType){
			case 502 :
				feedTypeStr = "状态";
				break;
			case 701 :
			case 709 :
				feedTypeStr = "照片";
				break;
			default :
				break;
		}

		(MY_INSTANCE(ProxyRegister).getProxy<PushServiceProxy>("pushProxy"))->feedIOSPush(fromId, toId, feedType, feedId);
	}

	bool FeedProcessor::checkSixinIMFeed(int appId, bool feedConditionsForSixin){
		//把目标session是私信, 但feedConditionsForSixin又为false(不满足条件) 的滤掉 (return true)
		if (sixinAppIdSet.count(appId) && !feedConditionsForSixin){
			return true;
		}

		return false;	
	}
	bool FeedProcessor::checkSixin(int appId){

		if (sixinAppIdSet.count(appId)){
			return true;
		} else {
		
		 return false;
		}

	}

};
};
