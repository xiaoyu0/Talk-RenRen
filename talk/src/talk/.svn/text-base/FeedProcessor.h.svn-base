/**
* @file FeedProcessor.h
* @brief 加工处理从im接过来的Feed, 单例使用
* @author wang.yu@renren-inc.com
* @version 1.0
* @date 2012-04-19
*/
#ifndef MTALK_IM_FEED_PROCESSOR_H_
#define MTALK_IM_FEED_PROCESSOR_H_

#include <string>
#include <set>
#include "pugixml/pugixml.hpp"
#include "talk/OnlineStatManager.h"

namespace mtalk{
namespace im{

class FeedProcessor {
public :
	FeedProcessor ();
	
	void process (const pugi::xml_node& node);

	void setOnlineStatManager(mtalk::talk::OnlineStatManagerPtr ptr);

	bool checkSixinIMFeed(int appId, bool feedConditionsforSixin);
	bool checkSixin(int appId);

	bool feedForSixin(bool isFocus, int feedType);
private :
	void feedIOSPush(long fromId, long toId, int feedType, long feedId);

	mtalk::talk::OnlineStatManagerPtr onlineStatManagerPtr_;

	std::set<int>  sixinFeedTypeSet;

	std::set<int>  sixinAppIdSet;

};

}; // namespace im
}; // namespace mtalk

#endif //MTALK_IM_FEED_PROCESSOR_H_
