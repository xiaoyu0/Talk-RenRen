// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `RFeed.ice'

#include <RFeed.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <IceUtil/Iterator.h>
#include <IceUtil/ScopedArray.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 303
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

static const ::std::string __xce__feed__FeedDispatcher__dispatch_name = "dispatch";

static const ::std::string __xce__feed__FeedDispatcher__dispatchReply_name = "dispatchReply";

static const ::std::string __xce__feed__FeedDispatcher__Reload_name = "Reload";

static const ::std::string __xce__feed__FeedDispatcher__ReloadBatch_name = "ReloadBatch";

static const ::std::string __xce__feed__FeedDispatcher__addBuddyNotify_name = "addBuddyNotify";

static const ::std::string __xce__feed__FeedDispatcher__buddyApplyNotify_name = "buddyApplyNotify";

static const ::std::string __xce__feed__FeedDispatcher__joinPageNotify_name = "joinPageNotify";

static const ::std::string __xce__feed__FeedDispatcher__guideBuddyReplyNotify_name = "guideBuddyReplyNotify";

static const ::std::string __xce__feed__FeedDispatcher__addMiniSiteFeed_name = "addMiniSiteFeed";

static const ::std::string __xce__feed__FeedItemManager__getFeedDataByStype_name = "getFeedDataByStype";

static const ::std::string __xce__feed__FeedItemManager__getFeedDataByType_name = "getFeedDataByType";

static const ::std::string __xce__feed__FeedItemManager__getFeedData_name = "getFeedData";

static const ::std::string __xce__feed__FeedItemManager__getFeedData2_name = "getFeedData2";

static const ::std::string __xce__feed__FeedItemManager__getFeedDataByIds_name = "getFeedDataByIds";

static const ::std::string __xce__feed__FeedItemManager__addFeed_name = "addFeed";

static const ::std::string __xce__feed__FeedItemManager__setRead_name = "setRead";

static const ::std::string __xce__feed__FeedItemManager__setReadById_name = "setReadById";

static const ::std::string __xce__feed__FeedItemManager__setReadAll_name = "setReadAll";

static const ::std::string __xce__feed__FeedItemManager__hasFeed_name = "hasFeed";

static const ::std::string __xce__feed__FeedItemManager__GetFeedItemSeqSeqByUsers_name = "GetFeedItemSeqSeqByUsers";

static const ::std::string __xce__feed__FeedItemManager__PressureTest_name = "PressureTest";

static const ::std::string __xce__feed__FeedItemManager__GetOriginalFeedData_name = "GetOriginalFeedData";

static const ::std::string __xce__feed__FeedItemManager__Reload_name = "Reload";

static const ::std::string __xce__feed__FeedGroupManager__GetFeedData_name = "GetFeedData";

static const ::std::string __xce__feed__FeedGroupManager__GetFeedDataByType_name = "GetFeedDataByType";

static const ::std::string __xce__feed__FeedGroupManager__GetFeedDataByStype_name = "GetFeedDataByStype";

static const ::std::string __xce__feed__FeedGroupManager__GetFeedItemSeqSeqByGroups_name = "GetFeedItemSeqSeqByGroups";

static const ::std::string __xce__feed__FeedGroupManager__GetOriginalFeedData_name = "GetOriginalFeedData";

static const ::std::string __xce__feed__FeedGroupManager__AddFeed_name = "AddFeed";

static const ::std::string __xce__feed__FeedGroupManager__RemoveFeed_name = "RemoveFeed";

static const ::std::string __xce__feed__FeedGroupManager__RemoveFeedById_name = "RemoveFeedById";

static const ::std::string __xce__feed__FeedGroupManager__RemoveAllFeed_name = "RemoveAllFeed";

static const ::std::string __xce__feed__FeedGroupManager__RefreshFeed_name = "RefreshFeed";

static const ::std::string __xce__feed__FeedGroupManager__ReplyFeed_name = "ReplyFeed";

static const ::std::string __xce__feed__FeedGroupManager__GetGroupsUnreadCount_name = "GetGroupsUnreadCount";

static const ::std::string __xce__feed__FeedGroupManager__AddMember_name = "AddMember";

static const ::std::string __xce__feed__FeedGroupManager__RemoveMember_name = "RemoveMember";

static const ::std::string __xce__feed__FeedGroupManager__GetMembers_name = "GetMembers";

static const ::std::string __xce__feed__FeedGroupManager__GetMembersTest_name = "GetMembersTest";

static const ::std::string __xce__feed__FeedGroupManager__HasFeed_name = "HasFeed";

static const ::std::string __xce__feed__FeedGroupManager__ReadAllFeed_name = "ReadAllFeed";

static const ::std::string __xce__feed__FeedGroupManager__Test_name = "Test";

static const ::std::string __xce__feed__FeedGroupCount__GetUnread_name = "GetUnread";

static const ::std::string __xce__feed__FeedContentManager__getFeedDict_name = "getFeedDict";

static const ::std::string __xce__feed__FeedContentManager__addFeedContent_name = "addFeedContent";

static const ::std::string __xce__feed__FeedContentManager__replaceFeedReply_name = "replaceFeedReply";

static const ::std::string __xce__feed__FeedContentManager__removeFeed_name = "removeFeed";

static const ::std::string __xce__feed__FeedContentManager__removeFeeds_name = "removeFeeds";

static const ::std::string __xce__feed__FeedContentManager__recoveryContent_name = "recoveryContent";

static const ::std::string __xce__feed__FeedContentManager__ReplaceXML_name = "ReplaceXML";

static const ::std::string __xce__feed__FeedIndexManager__add_name = "add";

static const ::std::string __xce__feed__FeedIndexManager__removeBySource_name = "removeBySource";

static const ::std::string __xce__feed__FeedIndexManager__removeByParent_name = "removeByParent";

static const ::std::string __xce__feed__FeedIndexManager__remove_name = "remove";

static const ::std::string __xce__feed__FeedIndexManager__getBySourceAndStype_name = "getBySourceAndStype";

static const ::std::string __xce__feed__FeedIndexManager__getByParent_name = "getByParent";

static const ::std::string __xce__feed__FeedIndexManager__get_name = "get";

static const ::std::string __xce__feed__FeedIndexManager__getByFeed_name = "getByFeed";

static const ::std::string __xce__feed__FeedAssistant__removeFeedById_name = "removeFeedById";

static const ::std::string __xce__feed__FeedAssistant__removeFeedBySource_name = "removeFeedBySource";

static const ::std::string __xce__feed__FeedAssistant__removeFeedBySourceHS_name = "removeFeedBySourceHS";

static const ::std::string __xce__feed__FeedAssistant__removeFeedByParent_name = "removeFeedByParent";

static const ::std::string __xce__feed__FeedAssistant__removeFeed_name = "removeFeed";

static const ::std::string __xce__feed__FeedAssistant__removeFeedReply_name = "removeFeedReply";

static const ::std::string __xce__feed__FeedAssistant__removeFeedReplyById_name = "removeFeedReplyById";

static const ::std::string __xce__feed__FeedAssistant__readNews_name = "readNews";

static const ::std::string __xce__feed__FeedAssistant__readAllNews_name = "readAllNews";

static const ::std::string __xce__feed__FeedAssistant__readMini_name = "readMini";

static const ::std::string __xce__feed__FeedAssistant__readAllMini_name = "readAllMini";

static const ::std::string __xce__feed__FeedAssistant__dispatch_name = "dispatch";

static const ::std::string __xce__feed__FeedAssistant__dispatchEDM_name = "dispatchEDM";

static const ::std::string __xce__feed__FeedAssistant__addFeedReplyById_name = "addFeedReplyById";

static const ::std::string __xce__feed__FeedAssistant__dispatchWithReply_name = "dispatchWithReply";

static const ::std::string __xce__feed__FeedAssistant__addFeedReply_name = "addFeedReply";

static const ::std::string __xce__feed__FeedAssistant__addFeedReplyWithConfig_name = "addFeedReplyWithConfig";

static const ::std::string __xce__feed__FeedAssistant__getFeedId_name = "getFeedId";

static const ::std::string __xce__feed__FeedAssistant__cacheSync_name = "cacheSync";

static const ::std::string __xce__feed__FeedAssistant__createFeedId_name = "createFeedId";

static const ::std::string __xce__feed__FeedAssistant__dispatchAgain_name = "dispatchAgain";

static const ::std::string __xce__feed__FeedAssistant__ReplaceXML_name = "ReplaceXML";

static const ::std::string __xce__feed__FeedAssistant__DirectedSend_name = "DirectedSend";

static const ::std::string __xce__feed__FeedAssistant__MarkFeed_name = "MarkFeed";

static const ::std::string __xce__feed__FocusManager__GetFocusFeedData_name = "GetFocusFeedData";

static const ::std::string __xce__feed__FocusManager__GetFocusFeedDataByStype_name = "GetFocusFeedDataByStype";

static const ::std::string __xce__feed__FocusManager__AddFocuses_name = "AddFocuses";

static const ::std::string __xce__feed__FocusManager__DelFocuses_name = "DelFocuses";

static const ::std::string __xce__feed__FocusManager__GetFocuses_name = "GetFocuses";

static const ::std::string __xce__feed__FocusManager__GetFocusFeedIncCount_name = "GetFocusFeedIncCount";

static const ::std::string __xce__feed__FocusManager__AddFocusWithCheck_name = "AddFocusWithCheck";

static const ::std::string __xce__feed__FeedNewsManager__GetLiveFeedData_name = "GetLiveFeedData";

static const ::std::string __xce__feed__FeedNewsManager__GetLiveFeedDataByStype_name = "GetLiveFeedDataByStype";

static const ::std::string __xce__feed__FeedNewsManager__GetLiveFeedDataByType_name = "GetLiveFeedDataByType";

static const ::std::string __xce__feed__FeedNewsManager__GetHotFeedData_name = "GetHotFeedData";

static const ::std::string __xce__feed__FeedNewsManager__GetHotFeedDataByStype_name = "GetHotFeedDataByStype";

static const ::std::string __xce__feed__FeedNewsManager__GetHotFeedDataByType_name = "GetHotFeedDataByType";

static const ::std::string __xce__feed__FeedNewsManager__GetFeedDataByIds_name = "GetFeedDataByIds";

static const ::std::string __xce__feed__FeedNewsManager__GetFeedDataByIdsWithUid_name = "GetFeedDataByIdsWithUid";

static const ::std::string __xce__feed__FeedNewsManager__GetOriginalFeedData_name = "GetOriginalFeedData";

static const ::std::string __xce__feed__FeedNewsManager__GetUnviewedCount_name = "GetUnviewedCount";

static const ::std::string __xce__feed__FeedNewsManager__GetCountMapByStype_name = "GetCountMapByStype";

static const ::std::string __xce__feed__FeedNewsManager__AddFeed_name = "AddFeed";

static const ::std::string __xce__feed__FeedNewsManager__SetRead_name = "SetRead";

static const ::std::string __xce__feed__FeedNewsManager__SetReadById_name = "SetReadById";

static const ::std::string __xce__feed__FeedNewsManager__SetReadAll_name = "SetReadAll";

static const ::std::string __xce__feed__FeedNewsManager__HasFeed_name = "HasFeed";

static const ::std::string __xce__feed__FeedNewsManager__load_name = "load";

static const ::std::string __xce__feed__FeedNewsManager__GetFeedItemSeqSeqByUsers_name = "GetFeedItemSeqSeqByUsers";

static const ::std::string __xce__feed__FeedNewsManager__MarkFeed_name = "MarkFeed";

static const ::std::string __xce__feed__FeedNewsManager__EraseUser_name = "EraseUser";

static const ::std::string __xce__feed__FeedNewsManager__AddFeedReply_name = "AddFeedReply";

static const ::std::string __xce__feed__FeedNewsManager__AddWhiteList_name = "AddWhiteList";

static const ::std::string __xce__feed__FeedNewsManager__DelWhiteList_name = "DelWhiteList";

static const ::std::string __xce__feed__FeedNewsManager__GetWhiteList_name = "GetWhiteList";

static const ::std::string __xce__feed__FeedNewsManager__ClearWhiteList_name = "ClearWhiteList";

::Ice::Object* IceInternal::upCast(::xce::feed::FeedSeed* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedSeed* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FeedReply* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedReply* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::ReplyData* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::ReplyData* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FeedData* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedData* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FeedDataByte* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedDataByte* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FeedDataByteRes* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedDataByteRes* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FeedContent* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedContent* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FeedConfig* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedConfig* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FeedDispatcher* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedDispatcher* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FeedItemManager* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedItemManager* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FeedGroupManager* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedGroupManager* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FeedGroupCount* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedGroupCount* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FeedContentManager* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedContentManager* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FeedIndex* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedIndex* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FeedIndexManager* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedIndexManager* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FeedAssistant* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedAssistant* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FocusManager* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FocusManager* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FeedDataRes* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedDataRes* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::feed::FeedNewsManager* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::feed::FeedNewsManager* p) { return p; }

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedSeedPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedSeed;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedReplyPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedReply;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::ReplyDataPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::ReplyData;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedDataPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedData;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedDataBytePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedDataByte;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedDataByteResPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedDataByteRes;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedContentPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedContent;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedConfigPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedConfig;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedDispatcherPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedDispatcher;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedItemManagerPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedItemManager;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedGroupManagerPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedGroupManager;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedGroupCountPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedGroupCount;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedContentManagerPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedContentManager;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedIndexPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedIndex;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedIndexManagerPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedIndexManager;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedAssistantPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedAssistant;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FocusManagerPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FocusManager;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedDataResPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedDataRes;
        v->__copyFrom(proxy);
    }
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::FeedNewsManagerPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::feed::FeedNewsManager;
        v->__copyFrom(proxy);
    }
}

bool
xce::feed::FeedItem::operator==(const FeedItem& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(feed != __rhs.feed)
    {
        return false;
    }
    if(merge != __rhs.merge)
    {
        return false;
    }
    if(type != __rhs.type)
    {
        return false;
    }
    if(time != __rhs.time)
    {
        return false;
    }
    if(weight != __rhs.weight)
    {
        return false;
    }
    if(actor != __rhs.actor)
    {
        return false;
    }
    return true;
}

bool
xce::feed::FeedItem::operator<(const FeedItem& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(feed < __rhs.feed)
    {
        return true;
    }
    else if(__rhs.feed < feed)
    {
        return false;
    }
    if(merge < __rhs.merge)
    {
        return true;
    }
    else if(__rhs.merge < merge)
    {
        return false;
    }
    if(type < __rhs.type)
    {
        return true;
    }
    else if(__rhs.type < type)
    {
        return false;
    }
    if(time < __rhs.time)
    {
        return true;
    }
    else if(__rhs.time < time)
    {
        return false;
    }
    if(weight < __rhs.weight)
    {
        return true;
    }
    else if(__rhs.weight < weight)
    {
        return false;
    }
    if(actor < __rhs.actor)
    {
        return true;
    }
    else if(__rhs.actor < actor)
    {
        return false;
    }
    return false;
}

void
xce::feed::FeedItem::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(feed);
    __os->write(merge);
    __os->write(type);
    __os->write(time);
    __os->write(weight);
    __os->write(actor);
}

void
xce::feed::FeedItem::__read(::IceInternal::BasicStream* __is)
{
    __is->read(feed);
    __is->read(merge);
    __is->read(type);
    __is->read(time);
    __is->read(weight);
    __is->read(actor);
}

void
xce::feed::__writeFeedItemSeq(::IceInternal::BasicStream* __os, const ::xce::feed::FeedItem* begin, const ::xce::feed::FeedItem* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
xce::feed::__readFeedItemSeq(::IceInternal::BasicStream* __is, ::xce::feed::FeedItemSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->checkFixedSeq(sz, 32);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
    }
}

void
xce::feed::__writeInt2FeedItemMap(::IceInternal::BasicStream* __os, const ::xce::feed::Int2FeedItemMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::xce::feed::Int2FeedItemMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        p->second.__write(__os);
    }
}

void
xce::feed::__readInt2FeedItemMap(::IceInternal::BasicStream* __is, ::xce::feed::Int2FeedItemMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Int, ::xce::feed::FeedItem> pair;
        __is->read(const_cast< ::Ice::Int&>(pair.first));
        ::xce::feed::Int2FeedItemMap::iterator __i = v.insert(v.end(), pair);
        __i->second.__read(__is);
    }
}

void
xce::feed::__writeFeedDataByteSeq(::IceInternal::BasicStream* __os, const ::xce::feed::FeedDataBytePtr* begin, const ::xce::feed::FeedDataBytePtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
xce::feed::__readFeedDataByteSeq(::IceInternal::BasicStream* __is, ::xce::feed::FeedDataByteSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::xce::feed::__patch__FeedDataBytePtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
xce::feed::__writeFeedContentSeq(::IceInternal::BasicStream* __os, const ::xce::feed::FeedContentPtr* begin, const ::xce::feed::FeedContentPtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
xce::feed::__readFeedContentSeq(::IceInternal::BasicStream* __is, ::xce::feed::FeedContentSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::xce::feed::__patch__FeedContentPtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
xce::feed::__writeFeedDataSeq(::IceInternal::BasicStream* __os, const ::xce::feed::FeedDataPtr* begin, const ::xce::feed::FeedDataPtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
xce::feed::__readFeedDataSeq(::IceInternal::BasicStream* __is, ::xce::feed::FeedDataSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::xce::feed::__patch__FeedDataPtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
xce::feed::__writeFeedContentDict(::IceInternal::BasicStream* __os, const ::xce::feed::FeedContentDict& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::xce::feed::FeedContentDict::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p->second.get())));
    }
}

void
xce::feed::__readFeedContentDict(::IceInternal::BasicStream* __is, ::xce::feed::FeedContentDict& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Long, ::xce::feed::FeedContentPtr> pair;
        __is->read(const_cast< ::Ice::Long&>(pair.first));
        ::xce::feed::FeedContentDict::iterator __i = v.insert(v.end(), pair);
        __is->read(::xce::feed::__patch__FeedContentPtr, &__i->second);
    }
}

void
xce::feed::__write(::IceInternal::BasicStream* __os, ::xce::feed::LoadType v)
{
    __os->write(static_cast< ::Ice::Byte>(v), 11);
}

void
xce::feed::__read(::IceInternal::BasicStream* __is, ::xce::feed::LoadType& v)
{
    ::Ice::Byte val;
    __is->read(val, 11);
    v = static_cast< ::xce::feed::LoadType>(val);
}

void
xce::feed::__writeFeedItemSeqSeq(::IceInternal::BasicStream* __os, const ::xce::feed::FeedItemSeq* begin, const ::xce::feed::FeedItemSeq* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        if(begin[i].size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::xce::feed::__writeFeedItemSeq(__os, &begin[i][0], &begin[i][0] + begin[i].size());
        }
    }
}

void
xce::feed::__readFeedItemSeqSeq(::IceInternal::BasicStream* __is, ::xce::feed::FeedItemSeqSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::xce::feed::__readFeedItemSeq(__is, v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
xce::feed::__writeFeed2WeightMap(::IceInternal::BasicStream* __os, const ::xce::feed::Feed2WeightMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::xce::feed::Feed2WeightMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
xce::feed::__readFeed2WeightMap(::IceInternal::BasicStream* __is, ::xce::feed::Feed2WeightMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Long, ::Ice::Int> pair;
        __is->read(const_cast< ::Ice::Long&>(pair.first));
        ::xce::feed::Feed2WeightMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
xce::feed::__writeFeedIndexSeq(::IceInternal::BasicStream* __os, const ::xce::feed::FeedIndexPtr* begin, const ::xce::feed::FeedIndexPtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
xce::feed::__readFeedIndexSeq(::IceInternal::BasicStream* __is, ::xce::feed::FeedIndexSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::xce::feed::__patch__FeedIndexPtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

const ::std::string&
IceProxy::xce::feed::FeedSeed::ice_staticId()
{
    return ::xce::feed::FeedSeed::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedSeed::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedSeed);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedSeed::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedSeed);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedSeed::__newInstance() const
{
    return new FeedSeed;
}

const ::std::string&
IceProxy::xce::feed::FeedReply::ice_staticId()
{
    return ::xce::feed::FeedReply::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedReply::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedReply);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedReply::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedReply);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedReply::__newInstance() const
{
    return new FeedReply;
}

const ::std::string&
IceProxy::xce::feed::ReplyData::ice_staticId()
{
    return ::xce::feed::ReplyData::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::ReplyData::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::ReplyData);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::ReplyData::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::ReplyData);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::ReplyData::__newInstance() const
{
    return new ReplyData;
}

const ::std::string&
IceProxy::xce::feed::FeedData::ice_staticId()
{
    return ::xce::feed::FeedData::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedData::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedData);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedData::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedData);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedData::__newInstance() const
{
    return new FeedData;
}

const ::std::string&
IceProxy::xce::feed::FeedDataByte::ice_staticId()
{
    return ::xce::feed::FeedDataByte::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedDataByte::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedDataByte);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedDataByte::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedDataByte);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedDataByte::__newInstance() const
{
    return new FeedDataByte;
}

const ::std::string&
IceProxy::xce::feed::FeedDataByteRes::ice_staticId()
{
    return ::xce::feed::FeedDataByteRes::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedDataByteRes::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedDataByteRes);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedDataByteRes::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedDataByteRes);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedDataByteRes::__newInstance() const
{
    return new FeedDataByteRes;
}

const ::std::string&
IceProxy::xce::feed::FeedContent::ice_staticId()
{
    return ::xce::feed::FeedContent::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedContent::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedContent);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedContent::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedContent);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedContent::__newInstance() const
{
    return new FeedContent;
}

const ::std::string&
IceProxy::xce::feed::FeedConfig::ice_staticId()
{
    return ::xce::feed::FeedConfig::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedConfig::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedConfig);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedConfig::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedConfig);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedConfig::__newInstance() const
{
    return new FeedConfig;
}

void
IceProxy::xce::feed::FeedDispatcher::dispatch(const ::xce::feed::FeedSeedPtr& seed, const ::xce::feed::FeedConfigPtr& config, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedDispatcher* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedDispatcher*>(__delBase.get());
            __del->dispatch(seed, config, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedDispatcher::dispatchReply(const ::xce::feed::ReplyDataPtr& data, const ::xce::feed::FeedConfigPtr& config, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedDispatcher* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedDispatcher*>(__delBase.get());
            __del->dispatchReply(data, config, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedDispatcher::Reload(::xce::feed::LoadType type, ::Ice::Int id, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedDispatcher* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedDispatcher*>(__delBase.get());
            __del->Reload(type, id, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedDispatcher::ReloadBatch(::xce::feed::LoadType type, const ::MyUtil::IntSeq& ids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedDispatcher* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedDispatcher*>(__delBase.get());
            __del->ReloadBatch(type, ids, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedDispatcher::addBuddyNotify(::Ice::Int host, ::Ice::Int guest, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedDispatcher* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedDispatcher*>(__delBase.get());
            __del->addBuddyNotify(host, guest, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedDispatcher::buddyApplyNotify(::Ice::Int host, ::Ice::Int guest, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedDispatcher* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedDispatcher*>(__delBase.get());
            __del->buddyApplyNotify(host, guest, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedDispatcher::joinPageNotify(::Ice::Int page, ::Ice::Int fans, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedDispatcher* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedDispatcher*>(__delBase.get());
            __del->joinPageNotify(page, fans, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedDispatcher::guideBuddyReplyNotify(::Ice::Int newUser, ::Ice::Int buddy, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedDispatcher* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedDispatcher*>(__delBase.get());
            __del->guideBuddyReplyNotify(newUser, buddy, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedDispatcher::addMiniSiteFeed(::Ice::Int siteid, ::Ice::Int userid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedDispatcher* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedDispatcher*>(__delBase.get());
            __del->addMiniSiteFeed(siteid, userid, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::xce::feed::FeedDispatcher::ice_staticId()
{
    return ::xce::feed::FeedDispatcher::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedDispatcher::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedDispatcher);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedDispatcher::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedDispatcher);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedDispatcher::__newInstance() const
{
    return new FeedDispatcher;
}

::xce::feed::FeedDataSeq
IceProxy::xce::feed::FeedItemManager::getFeedDataByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedItemManager__getFeedDataByStype_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedItemManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedItemManager*>(__delBase.get());
            return __del->getFeedDataByStype(uid, stypes, begin, limit, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedDataSeq
IceProxy::xce::feed::FeedItemManager::getFeedDataByType(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedItemManager__getFeedDataByType_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedItemManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedItemManager*>(__delBase.get());
            return __del->getFeedDataByType(uid, stypes, begin, limit, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedDataSeq
IceProxy::xce::feed::FeedItemManager::getFeedData(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedItemManager__getFeedData_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedItemManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedItemManager*>(__delBase.get());
            return __del->getFeedData(uid, begin, limit, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedDataSeq
IceProxy::xce::feed::FeedItemManager::getFeedData2(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedItemManager__getFeedData2_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedItemManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedItemManager*>(__delBase.get());
            return __del->getFeedData2(uid, begin, limit, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedDataSeq
IceProxy::xce::feed::FeedItemManager::getFeedDataByIds(const ::MyUtil::LongSeq& fids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedItemManager__getFeedDataByIds_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedItemManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedItemManager*>(__delBase.get());
            return __del->getFeedDataByIds(fids, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedItemManager::addFeed(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedItemManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedItemManager*>(__delBase.get());
            __del->addFeed(item, config, id2weight, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedItemManager::setRead(::Ice::Int uid, ::Ice::Int stype, ::Ice::Long merge, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedItemManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedItemManager*>(__delBase.get());
            __del->setRead(uid, stype, merge, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedItemManager::setReadById(::Ice::Int uid, ::Ice::Long feedId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedItemManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedItemManager*>(__delBase.get());
            __del->setReadById(uid, feedId, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedItemManager::setReadAll(::Ice::Int uid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedItemManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedItemManager*>(__delBase.get());
            __del->setReadAll(uid, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

bool
IceProxy::xce::feed::FeedItemManager::hasFeed(::Ice::Int uid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedItemManager__hasFeed_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedItemManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedItemManager*>(__delBase.get());
            return __del->hasFeed(uid, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedItemSeqSeq
IceProxy::xce::feed::FeedItemManager::GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq& uids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedItemManager__GetFeedItemSeqSeqByUsers_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedItemManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedItemManager*>(__delBase.get());
            return __del->GetFeedItemSeqSeqByUsers(uids, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedItemManager::PressureTest(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedItemManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedItemManager*>(__delBase.get());
            __del->PressureTest(uid, begin, limit, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedItemSeq
IceProxy::xce::feed::FeedItemManager::GetOriginalFeedData(::Ice::Int uid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedItemManager__GetOriginalFeedData_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedItemManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedItemManager*>(__delBase.get());
            return __del->GetOriginalFeedData(uid, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedItemManager::Reload(::Ice::Int uid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedItemManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedItemManager*>(__delBase.get());
            __del->Reload(uid, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::xce::feed::FeedItemManager::ice_staticId()
{
    return ::xce::feed::FeedItemManager::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedItemManager::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedItemManager);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedItemManager::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedItemManager);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedItemManager::__newInstance() const
{
    return new FeedItemManager;
}

::xce::feed::FeedDataSeq
IceProxy::xce::feed::FeedGroupManager::GetFeedData(::Ice::Int gid, ::Ice::Int memberid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedGroupManager__GetFeedData_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            return __del->GetFeedData(gid, memberid, begin, limit, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedDataSeq
IceProxy::xce::feed::FeedGroupManager::GetFeedDataByType(::Ice::Int gid, ::Ice::Int memberid, const ::MyUtil::IntSeq& types, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedGroupManager__GetFeedDataByType_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            return __del->GetFeedDataByType(gid, memberid, types, begin, limit, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedDataSeq
IceProxy::xce::feed::FeedGroupManager::GetFeedDataByStype(::Ice::Int gid, ::Ice::Int memberid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedGroupManager__GetFeedDataByStype_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            return __del->GetFeedDataByStype(gid, memberid, stypes, begin, limit, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedItemSeqSeq
IceProxy::xce::feed::FeedGroupManager::GetFeedItemSeqSeqByGroups(const ::MyUtil::IntSeq& groups, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedGroupManager__GetFeedItemSeqSeqByGroups_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            return __del->GetFeedItemSeqSeqByGroups(groups, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedItemSeq
IceProxy::xce::feed::FeedGroupManager::GetOriginalFeedData(::Ice::Int gid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedGroupManager__GetOriginalFeedData_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            return __del->GetOriginalFeedData(gid, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedGroupManager::AddFeed(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            __del->AddFeed(item, config, id2weight, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedGroupManager::RemoveFeed(::Ice::Int gid, ::Ice::Int stype, ::Ice::Long merge, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            __del->RemoveFeed(gid, stype, merge, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedGroupManager::RemoveFeedById(::Ice::Int gid, ::Ice::Long feedId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            __del->RemoveFeedById(gid, feedId, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedGroupManager::RemoveAllFeed(::Ice::Int gid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            __del->RemoveAllFeed(gid, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedGroupManager::RefreshFeed(::Ice::Int gid, ::Ice::Long feedid, ::Ice::Int timestamp, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            __del->RefreshFeed(gid, feedid, timestamp, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedGroupManager::ReplyFeed(::Ice::Int gid, ::Ice::Long feedid, ::Ice::Int timestamp, ::Ice::Int owner, ::Ice::Int replier, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            __del->ReplyFeed(gid, feedid, timestamp, owner, replier, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::MyUtil::Int2IntMap
IceProxy::xce::feed::FeedGroupManager::GetGroupsUnreadCount(::Ice::Int uid, const ::MyUtil::IntSeq& groups, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedGroupManager__GetGroupsUnreadCount_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            return __del->GetGroupsUnreadCount(uid, groups, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedGroupManager::AddMember(::Ice::Int groupid, ::Ice::Int memberid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            __del->AddMember(groupid, memberid, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedGroupManager::RemoveMember(::Ice::Int groupid, ::Ice::Int memberid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            __del->RemoveMember(groupid, memberid, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::MyUtil::Int2IntSeqMap
IceProxy::xce::feed::FeedGroupManager::GetMembers(const ::MyUtil::IntSeq& gids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedGroupManager__GetMembers_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            return __del->GetMembers(gids, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedGroupManager::GetMembersTest(const ::MyUtil::IntSeq& gids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            __del->GetMembersTest(gids, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

bool
IceProxy::xce::feed::FeedGroupManager::HasFeed(::Ice::Int gid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedGroupManager__HasFeed_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            return __del->HasFeed(gid, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedGroupManager::ReadAllFeed(::Ice::Int gid, ::Ice::Int uid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            __del->ReadAllFeed(gid, uid, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedGroupManager::Test(::Ice::Int gid, ::Ice::Int mid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupManager*>(__delBase.get());
            __del->Test(gid, mid, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::xce::feed::FeedGroupManager::ice_staticId()
{
    return ::xce::feed::FeedGroupManager::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedGroupManager::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedGroupManager);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedGroupManager::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedGroupManager);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedGroupManager::__newInstance() const
{
    return new FeedGroupManager;
}

::MyUtil::Int2IntMap
IceProxy::xce::feed::FeedGroupCount::GetUnread(::Ice::Int uid, const ::MyUtil::IntSeq& groups, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedGroupCount__GetUnread_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedGroupCount* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedGroupCount*>(__delBase.get());
            return __del->GetUnread(uid, groups, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::xce::feed::FeedGroupCount::ice_staticId()
{
    return ::xce::feed::FeedGroupCount::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedGroupCount::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedGroupCount);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedGroupCount::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedGroupCount);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedGroupCount::__newInstance() const
{
    return new FeedGroupCount;
}

::xce::feed::FeedContentDict
IceProxy::xce::feed::FeedContentManager::getFeedDict(const ::MyUtil::LongSeq& feedIds, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedContentManager__getFeedDict_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedContentManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedContentManager*>(__delBase.get());
            return __del->getFeedDict(feedIds, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::Ice::Int
IceProxy::xce::feed::FeedContentManager::addFeedContent(const ::xce::feed::FeedDataPtr& data, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedContentManager__addFeedContent_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedContentManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedContentManager*>(__delBase.get());
            return __del->addFeedContent(data, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedContentManager::replaceFeedReply(const ::MyUtil::LongSeq& feedIds, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedContentManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedContentManager*>(__delBase.get());
            __del->replaceFeedReply(feedIds, reply, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedContentManager::removeFeed(::Ice::Long feedId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedContentManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedContentManager*>(__delBase.get());
            __del->removeFeed(feedId, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedContentManager::removeFeeds(const ::MyUtil::LongSeq& feedIds, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedContentManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedContentManager*>(__delBase.get());
            __del->removeFeeds(feedIds, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedContentManager::recoveryContent(::Ice::Long feedId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedContentManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedContentManager*>(__delBase.get());
            __del->recoveryContent(feedId, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedContentManager::ReplaceXML(const ::MyUtil::LongSeq& feedIds, const ::std::string& xml, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedContentManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedContentManager*>(__delBase.get());
            __del->ReplaceXML(feedIds, xml, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::xce::feed::FeedContentManager::ice_staticId()
{
    return ::xce::feed::FeedContentManager::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedContentManager::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedContentManager);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedContentManager::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedContentManager);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedContentManager::__newInstance() const
{
    return new FeedContentManager;
}

const ::std::string&
IceProxy::xce::feed::FeedIndex::ice_staticId()
{
    return ::xce::feed::FeedIndex::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedIndex::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedIndex);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedIndex::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedIndex);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedIndex::__newInstance() const
{
    return new FeedIndex;
}

void
IceProxy::xce::feed::FeedIndexManager::add(const ::xce::feed::FeedIndexPtr& index, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedIndexManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedIndexManager*>(__delBase.get());
            __del->add(index, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::MyUtil::LongSeq
IceProxy::xce::feed::FeedIndexManager::removeBySource(::Ice::Long source, ::Ice::Int stype, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedIndexManager__removeBySource_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedIndexManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedIndexManager*>(__delBase.get());
            return __del->removeBySource(source, stype, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::MyUtil::LongSeq
IceProxy::xce::feed::FeedIndexManager::removeByParent(::Ice::Long parent, ::Ice::Int ptype, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedIndexManager__removeByParent_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedIndexManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedIndexManager*>(__delBase.get());
            return __del->removeByParent(parent, ptype, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::MyUtil::LongSeq
IceProxy::xce::feed::FeedIndexManager::remove(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedIndexManager__remove_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedIndexManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedIndexManager*>(__delBase.get());
            return __del->remove(source, stype, actor, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedIndexSeq
IceProxy::xce::feed::FeedIndexManager::getBySourceAndStype(::Ice::Long source, ::Ice::Int stype, ::Ice::Int size, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedIndexManager__getBySourceAndStype_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedIndexManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedIndexManager*>(__delBase.get());
            return __del->getBySourceAndStype(source, stype, size, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedIndexSeq
IceProxy::xce::feed::FeedIndexManager::getByParent(::Ice::Long parent, ::Ice::Int ptype, ::Ice::Int size, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedIndexManager__getByParent_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedIndexManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedIndexManager*>(__delBase.get());
            return __del->getByParent(parent, ptype, size, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::MyUtil::LongSeq
IceProxy::xce::feed::FeedIndexManager::get(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedIndexManager__get_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedIndexManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedIndexManager*>(__delBase.get());
            return __del->get(source, stype, actor, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedIndexPtr
IceProxy::xce::feed::FeedIndexManager::getByFeed(::Ice::Long feed, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedIndexManager__getByFeed_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedIndexManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedIndexManager*>(__delBase.get());
            return __del->getByFeed(feed, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::xce::feed::FeedIndexManager::ice_staticId()
{
    return ::xce::feed::FeedIndexManager::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedIndexManager::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedIndexManager);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedIndexManager::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedIndexManager);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedIndexManager::__newInstance() const
{
    return new FeedIndexManager;
}

void
IceProxy::xce::feed::FeedAssistant::removeFeedById(::Ice::Long feedId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->removeFeedById(feedId, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::removeFeedBySource(::Ice::Long source, ::Ice::Int stype, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->removeFeedBySource(source, stype, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::removeFeedBySourceHS(::Ice::Long source, ::Ice::Int stype, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->removeFeedBySourceHS(source, stype, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::removeFeedByParent(::Ice::Long parent, ::Ice::Int ptype, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->removeFeedByParent(parent, ptype, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::removeFeed(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->removeFeed(source, stype, actor, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::removeFeedReply(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, ::Ice::Long removeReplyId, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->removeFeedReply(source, stype, actor, removeReplyId, reply, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::removeFeedReplyById(::Ice::Int stype, ::Ice::Long feedid, ::Ice::Long removeReplyId, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->removeFeedReplyById(stype, feedid, removeReplyId, reply, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::readNews(::Ice::Int user, ::Ice::Long feed, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->readNews(user, feed, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::readAllNews(::Ice::Int user, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->readAllNews(user, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::readMini(::Ice::Int user, ::Ice::Long feed, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->readMini(user, feed, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::readAllMini(::Ice::Int user, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->readAllMini(user, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::dispatch(const ::xce::feed::FeedSeedPtr& seed, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->dispatch(seed, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::dispatchEDM(const ::xce::feed::FeedSeedPtr& seed, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->dispatchEDM(seed, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::addFeedReplyById(::Ice::Int stype, ::Ice::Long feedid, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->addFeedReplyById(stype, feedid, reply, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::dispatchWithReply(const ::xce::feed::FeedSeedPtr& seed, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->dispatchWithReply(seed, reply, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::addFeedReply(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->addFeedReply(source, stype, actor, reply, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::addFeedReplyWithConfig(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::xce::feed::FeedReplyPtr& reply, const ::MyUtil::Str2StrMap& replyConfig, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->addFeedReplyWithConfig(source, stype, actor, reply, replyConfig, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::Ice::Long
IceProxy::xce::feed::FeedAssistant::getFeedId(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedAssistant__getFeedId_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            return __del->getFeedId(source, stype, actor, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::cacheSync(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->cacheSync(source, stype, actor, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::Ice::Long
IceProxy::xce::feed::FeedAssistant::createFeedId(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedAssistant__createFeedId_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            return __del->createFeedId(__ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::dispatchAgain(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, ::Ice::Int toid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->dispatchAgain(source, stype, actor, toid, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::ReplaceXML(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::std::string& xml, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->ReplaceXML(source, stype, actor, xml, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::DirectedSend(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::MyUtil::IntSeq& targets, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->DirectedSend(source, stype, actor, targets, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedAssistant::MarkFeed(::Ice::Int uid, ::Ice::Long fid, ::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, bool mark, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedAssistant* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedAssistant*>(__delBase.get());
            __del->MarkFeed(uid, fid, source, stype, actor, mark, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::xce::feed::FeedAssistant::ice_staticId()
{
    return ::xce::feed::FeedAssistant::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedAssistant::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedAssistant);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedAssistant::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedAssistant);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedAssistant::__newInstance() const
{
    return new FeedAssistant;
}

::xce::feed::FeedDataSeq
IceProxy::xce::feed::FocusManager::GetFocusFeedData(::Ice::Int user, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FocusManager__GetFocusFeedData_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FocusManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FocusManager*>(__delBase.get());
            return __del->GetFocusFeedData(user, begin, limit, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedDataSeq
IceProxy::xce::feed::FocusManager::GetFocusFeedDataByStype(::Ice::Int user, ::Ice::Int begin, ::Ice::Int limit, const ::MyUtil::IntSeq& stypes, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FocusManager__GetFocusFeedDataByStype_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FocusManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FocusManager*>(__delBase.get());
            return __del->GetFocusFeedDataByStype(user, begin, limit, stypes, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

bool
IceProxy::xce::feed::FocusManager::AddFocuses(::Ice::Int user, ::Ice::Int target, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FocusManager__AddFocuses_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FocusManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FocusManager*>(__delBase.get());
            return __del->AddFocuses(user, target, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FocusManager::DelFocuses(::Ice::Int user, ::Ice::Int target, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FocusManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FocusManager*>(__delBase.get());
            __del->DelFocuses(user, target, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::MyUtil::IntSeq
IceProxy::xce::feed::FocusManager::GetFocuses(::Ice::Int user, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FocusManager__GetFocuses_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FocusManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FocusManager*>(__delBase.get());
            return __del->GetFocuses(user, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::Ice::Int
IceProxy::xce::feed::FocusManager::GetFocusFeedIncCount(::Ice::Int user, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FocusManager__GetFocusFeedIncCount_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FocusManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FocusManager*>(__delBase.get());
            return __del->GetFocusFeedIncCount(user, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::Ice::Int
IceProxy::xce::feed::FocusManager::AddFocusWithCheck(::Ice::Int user, ::Ice::Int target, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FocusManager__AddFocusWithCheck_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FocusManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FocusManager*>(__delBase.get());
            return __del->AddFocusWithCheck(user, target, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::xce::feed::FocusManager::ice_staticId()
{
    return ::xce::feed::FocusManager::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FocusManager::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FocusManager);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FocusManager::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FocusManager);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FocusManager::__newInstance() const
{
    return new FocusManager;
}

const ::std::string&
IceProxy::xce::feed::FeedDataRes::ice_staticId()
{
    return ::xce::feed::FeedDataRes::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedDataRes::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedDataRes);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedDataRes::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedDataRes);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedDataRes::__newInstance() const
{
    return new FeedDataRes;
}

::xce::feed::FeedDataResPtr
IceProxy::xce::feed::FeedNewsManager::GetLiveFeedData(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedNewsManager__GetLiveFeedData_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            return __del->GetLiveFeedData(uid, begin, limit, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedDataResPtr
IceProxy::xce::feed::FeedNewsManager::GetLiveFeedDataByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedNewsManager__GetLiveFeedDataByStype_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            return __del->GetLiveFeedDataByStype(uid, stypes, begin, limit, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedDataResPtr
IceProxy::xce::feed::FeedNewsManager::GetLiveFeedDataByType(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedNewsManager__GetLiveFeedDataByType_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            return __del->GetLiveFeedDataByType(uid, stypes, begin, limit, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedDataResPtr
IceProxy::xce::feed::FeedNewsManager::GetHotFeedData(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedNewsManager__GetHotFeedData_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            return __del->GetHotFeedData(uid, begin, limit, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedDataResPtr
IceProxy::xce::feed::FeedNewsManager::GetHotFeedDataByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedNewsManager__GetHotFeedDataByStype_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            return __del->GetHotFeedDataByStype(uid, stypes, begin, limit, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedDataResPtr
IceProxy::xce::feed::FeedNewsManager::GetHotFeedDataByType(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedNewsManager__GetHotFeedDataByType_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            return __del->GetHotFeedDataByType(uid, stypes, begin, limit, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedDataSeq
IceProxy::xce::feed::FeedNewsManager::GetFeedDataByIds(const ::MyUtil::LongSeq& fids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedNewsManager__GetFeedDataByIds_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            return __del->GetFeedDataByIds(fids, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedDataSeq
IceProxy::xce::feed::FeedNewsManager::GetFeedDataByIdsWithUid(::Ice::Int uid, const ::MyUtil::LongSeq& fids, ::Ice::Long first, ::Ice::Int stype, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedNewsManager__GetFeedDataByIdsWithUid_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            return __del->GetFeedDataByIdsWithUid(uid, fids, first, stype, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedItemSeq
IceProxy::xce::feed::FeedNewsManager::GetOriginalFeedData(::Ice::Int uid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedNewsManager__GetOriginalFeedData_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            return __del->GetOriginalFeedData(uid, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::Ice::Int
IceProxy::xce::feed::FeedNewsManager::GetUnviewedCount(::Ice::Int uid, ::Ice::Int type, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedNewsManager__GetUnviewedCount_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            return __del->GetUnviewedCount(uid, type, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::MyUtil::Int2IntMap
IceProxy::xce::feed::FeedNewsManager::GetCountMapByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, bool unviewed, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedNewsManager__GetCountMapByStype_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            return __del->GetCountMapByStype(uid, stypes, unviewed, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedNewsManager::AddFeed(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            __del->AddFeed(item, config, id2weight, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedNewsManager::SetRead(::Ice::Int uid, ::Ice::Int stype, ::Ice::Long merge, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            __del->SetRead(uid, stype, merge, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedNewsManager::SetReadById(::Ice::Int uid, ::Ice::Long feedId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            __del->SetReadById(uid, feedId, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedNewsManager::SetReadAll(::Ice::Int uid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            __del->SetReadAll(uid, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

bool
IceProxy::xce::feed::FeedNewsManager::HasFeed(::Ice::Int uid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedNewsManager__HasFeed_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            return __del->HasFeed(uid, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedNewsManager::load(::Ice::Int userid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            __del->load(userid, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::xce::feed::FeedItemSeqSeq
IceProxy::xce::feed::FeedNewsManager::GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq& uids, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedNewsManager__GetFeedItemSeqSeqByUsers_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            return __del->GetFeedItemSeqSeqByUsers(uids, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedNewsManager::MarkFeed(::Ice::Int uid, ::Ice::Long fid, ::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, bool mark, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            __del->MarkFeed(uid, fid, source, stype, actor, mark, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedNewsManager::EraseUser(::Ice::Int uid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            __del->EraseUser(uid, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedNewsManager::AddFeedReply(const ::xce::feed::FeedIndexPtr& idx, ::Ice::Int replycnt, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            __del->AddFeedReply(idx, replycnt, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedNewsManager::AddWhiteList(::Ice::Int userid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            __del->AddWhiteList(userid, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedNewsManager::DelWhiteList(::Ice::Int userid, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            __del->DelWhiteList(userid, __ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::MyUtil::IntSeq
IceProxy::xce::feed::FeedNewsManager::GetWhiteList(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__xce__feed__FeedNewsManager__GetWhiteList_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            return __del->GetWhiteList(__ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

void
IceProxy::xce::feed::FeedNewsManager::ClearWhiteList(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::feed::FeedNewsManager* __del = dynamic_cast< ::IceDelegate::xce::feed::FeedNewsManager*>(__delBase.get());
            __del->ClearWhiteList(__ctx);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::xce::feed::FeedNewsManager::ice_staticId()
{
    return ::xce::feed::FeedNewsManager::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::feed::FeedNewsManager::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::feed::FeedNewsManager);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::feed::FeedNewsManager::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::feed::FeedNewsManager);
}

::IceProxy::Ice::Object*
IceProxy::xce::feed::FeedNewsManager::__newInstance() const
{
    return new FeedNewsManager;
}

void
IceDelegateM::xce::feed::FeedDispatcher::dispatch(const ::xce::feed::FeedSeedPtr& seed, const ::xce::feed::FeedConfigPtr& config, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedDispatcher__dispatch_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(seed.get())));
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(config.get())));
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedDispatcher::dispatchReply(const ::xce::feed::ReplyDataPtr& data, const ::xce::feed::FeedConfigPtr& config, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedDispatcher__dispatchReply_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(data.get())));
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(config.get())));
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedDispatcher::Reload(::xce::feed::LoadType type, ::Ice::Int id, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedDispatcher__Reload_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        ::xce::feed::__write(__os, type);
        __os->write(id);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedDispatcher::ReloadBatch(::xce::feed::LoadType type, const ::MyUtil::IntSeq& ids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedDispatcher__ReloadBatch_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        ::xce::feed::__write(__os, type);
        if(ids.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&ids[0], &ids[0] + ids.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedDispatcher::addBuddyNotify(::Ice::Int host, ::Ice::Int guest, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedDispatcher__addBuddyNotify_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(host);
        __os->write(guest);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedDispatcher::buddyApplyNotify(::Ice::Int host, ::Ice::Int guest, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedDispatcher__buddyApplyNotify_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(host);
        __os->write(guest);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedDispatcher::joinPageNotify(::Ice::Int page, ::Ice::Int fans, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedDispatcher__joinPageNotify_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(page);
        __os->write(fans);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedDispatcher::guideBuddyReplyNotify(::Ice::Int newUser, ::Ice::Int buddy, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedDispatcher__guideBuddyReplyNotify_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(newUser);
        __os->write(buddy);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedDispatcher::addMiniSiteFeed(::Ice::Int siteid, ::Ice::Int userid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedDispatcher__addMiniSiteFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(siteid);
        __os->write(userid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::xce::feed::FeedDataSeq
IceDelegateM::xce::feed::FeedItemManager::getFeedDataByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedItemManager__getFeedDataByStype_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        if(stypes.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&stypes[0], &stypes[0] + stypes.size());
        }
        __os->write(begin);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedDataSeq(__is, __ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedDataSeq
IceDelegateM::xce::feed::FeedItemManager::getFeedDataByType(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedItemManager__getFeedDataByType_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        if(stypes.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&stypes[0], &stypes[0] + stypes.size());
        }
        __os->write(begin);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedDataSeq(__is, __ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedDataSeq
IceDelegateM::xce::feed::FeedItemManager::getFeedData(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedItemManager__getFeedData_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(begin);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedDataSeq(__is, __ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedDataSeq
IceDelegateM::xce::feed::FeedItemManager::getFeedData2(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedItemManager__getFeedData2_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(begin);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedDataSeq(__is, __ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedDataSeq
IceDelegateM::xce::feed::FeedItemManager::getFeedDataByIds(const ::MyUtil::LongSeq& fids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedItemManager__getFeedDataByIds_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(fids.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&fids[0], &fids[0] + fids.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedDataSeq(__is, __ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::xce::feed::FeedItemManager::addFeed(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedItemManager__addFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        item.__write(__os);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(config.get())));
        ::MyUtil::__writeInt2IntMap(__os, id2weight);
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedItemManager::setRead(::Ice::Int uid, ::Ice::Int stype, ::Ice::Long merge, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedItemManager__setRead_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(stype);
        __os->write(merge);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedItemManager::setReadById(::Ice::Int uid, ::Ice::Long feedId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedItemManager__setReadById_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(feedId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedItemManager::setReadAll(::Ice::Int uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedItemManager__setReadAll_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

bool
IceDelegateM::xce::feed::FeedItemManager::hasFeed(::Ice::Int uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedItemManager__hasFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    bool __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedItemSeqSeq
IceDelegateM::xce::feed::FeedItemManager::GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq& uids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedItemManager__GetFeedItemSeqSeqByUsers_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(uids.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&uids[0], &uids[0] + uids.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedItemSeqSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedItemSeqSeq(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::xce::feed::FeedItemManager::PressureTest(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedItemManager__PressureTest_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(begin);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::xce::feed::FeedItemSeq
IceDelegateM::xce::feed::FeedItemManager::GetOriginalFeedData(::Ice::Int uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedItemManager__GetOriginalFeedData_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedItemSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedItemSeq(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::xce::feed::FeedItemManager::Reload(::Ice::Int uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedItemManager__Reload_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::xce::feed::FeedDataSeq
IceDelegateM::xce::feed::FeedGroupManager::GetFeedData(::Ice::Int gid, ::Ice::Int memberid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__GetFeedData_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(gid);
        __os->write(memberid);
        __os->write(begin);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedDataSeq(__is, __ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedDataSeq
IceDelegateM::xce::feed::FeedGroupManager::GetFeedDataByType(::Ice::Int gid, ::Ice::Int memberid, const ::MyUtil::IntSeq& types, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__GetFeedDataByType_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(gid);
        __os->write(memberid);
        if(types.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&types[0], &types[0] + types.size());
        }
        __os->write(begin);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedDataSeq(__is, __ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedDataSeq
IceDelegateM::xce::feed::FeedGroupManager::GetFeedDataByStype(::Ice::Int gid, ::Ice::Int memberid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__GetFeedDataByStype_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(gid);
        __os->write(memberid);
        if(stypes.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&stypes[0], &stypes[0] + stypes.size());
        }
        __os->write(begin);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedDataSeq(__is, __ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedItemSeqSeq
IceDelegateM::xce::feed::FeedGroupManager::GetFeedItemSeqSeqByGroups(const ::MyUtil::IntSeq& groups, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__GetFeedItemSeqSeqByGroups_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(groups.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&groups[0], &groups[0] + groups.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedItemSeqSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedItemSeqSeq(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedItemSeq
IceDelegateM::xce::feed::FeedGroupManager::GetOriginalFeedData(::Ice::Int gid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__GetOriginalFeedData_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(gid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedItemSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedItemSeq(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::xce::feed::FeedGroupManager::AddFeed(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__AddFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        item.__write(__os);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(config.get())));
        ::MyUtil::__writeInt2IntMap(__os, id2weight);
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedGroupManager::RemoveFeed(::Ice::Int gid, ::Ice::Int stype, ::Ice::Long merge, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__RemoveFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(gid);
        __os->write(stype);
        __os->write(merge);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedGroupManager::RemoveFeedById(::Ice::Int gid, ::Ice::Long feedId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__RemoveFeedById_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(gid);
        __os->write(feedId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedGroupManager::RemoveAllFeed(::Ice::Int gid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__RemoveAllFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(gid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedGroupManager::RefreshFeed(::Ice::Int gid, ::Ice::Long feedid, ::Ice::Int timestamp, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__RefreshFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(gid);
        __os->write(feedid);
        __os->write(timestamp);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedGroupManager::ReplyFeed(::Ice::Int gid, ::Ice::Long feedid, ::Ice::Int timestamp, ::Ice::Int owner, ::Ice::Int replier, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__ReplyFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(gid);
        __os->write(feedid);
        __os->write(timestamp);
        __os->write(owner);
        __os->write(replier);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::MyUtil::Int2IntMap
IceDelegateM::xce::feed::FeedGroupManager::GetGroupsUnreadCount(::Ice::Int uid, const ::MyUtil::IntSeq& groups, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__GetGroupsUnreadCount_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        if(groups.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&groups[0], &groups[0] + groups.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::MyUtil::Int2IntMap __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::MyUtil::__readInt2IntMap(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::xce::feed::FeedGroupManager::AddMember(::Ice::Int groupid, ::Ice::Int memberid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__AddMember_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(groupid);
        __os->write(memberid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedGroupManager::RemoveMember(::Ice::Int groupid, ::Ice::Int memberid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__RemoveMember_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(groupid);
        __os->write(memberid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::MyUtil::Int2IntSeqMap
IceDelegateM::xce::feed::FeedGroupManager::GetMembers(const ::MyUtil::IntSeq& gids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__GetMembers_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(gids.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&gids[0], &gids[0] + gids.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::MyUtil::Int2IntSeqMap __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::MyUtil::__readInt2IntSeqMap(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::xce::feed::FeedGroupManager::GetMembersTest(const ::MyUtil::IntSeq& gids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__GetMembersTest_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(gids.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&gids[0], &gids[0] + gids.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

bool
IceDelegateM::xce::feed::FeedGroupManager::HasFeed(::Ice::Int gid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__HasFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(gid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    bool __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::xce::feed::FeedGroupManager::ReadAllFeed(::Ice::Int gid, ::Ice::Int uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__ReadAllFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(gid);
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedGroupManager::Test(::Ice::Int gid, ::Ice::Int mid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupManager__Test_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(gid);
        __os->write(mid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::MyUtil::Int2IntMap
IceDelegateM::xce::feed::FeedGroupCount::GetUnread(::Ice::Int uid, const ::MyUtil::IntSeq& groups, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedGroupCount__GetUnread_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        if(groups.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&groups[0], &groups[0] + groups.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::MyUtil::Int2IntMap __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::MyUtil::__readInt2IntMap(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedContentDict
IceDelegateM::xce::feed::FeedContentManager::getFeedDict(const ::MyUtil::LongSeq& feedIds, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedContentManager__getFeedDict_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(feedIds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&feedIds[0], &feedIds[0] + feedIds.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedContentDict __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedContentDict(__is, __ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::xce::feed::FeedContentManager::addFeedContent(const ::xce::feed::FeedDataPtr& data, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedContentManager__addFeedContent_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(data.get())));
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Ice::Int __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::xce::feed::FeedContentManager::replaceFeedReply(const ::MyUtil::LongSeq& feedIds, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedContentManager__replaceFeedReply_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(feedIds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&feedIds[0], &feedIds[0] + feedIds.size());
        }
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(reply.get())));
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedContentManager::removeFeed(::Ice::Long feedId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedContentManager__removeFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(feedId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedContentManager::removeFeeds(const ::MyUtil::LongSeq& feedIds, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedContentManager__removeFeeds_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(feedIds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&feedIds[0], &feedIds[0] + feedIds.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedContentManager::recoveryContent(::Ice::Long feedId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedContentManager__recoveryContent_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(feedId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedContentManager::ReplaceXML(const ::MyUtil::LongSeq& feedIds, const ::std::string& xml, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedContentManager__ReplaceXML_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(feedIds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&feedIds[0], &feedIds[0] + feedIds.size());
        }
        __os->write(xml);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedIndexManager::add(const ::xce::feed::FeedIndexPtr& index, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedIndexManager__add_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(index.get())));
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::MyUtil::LongSeq
IceDelegateM::xce::feed::FeedIndexManager::removeBySource(::Ice::Long source, ::Ice::Int stype, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedIndexManager__removeBySource_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(source);
        __os->write(stype);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::MyUtil::LongSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::MyUtil::LongSeq
IceDelegateM::xce::feed::FeedIndexManager::removeByParent(::Ice::Long parent, ::Ice::Int ptype, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedIndexManager__removeByParent_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(parent);
        __os->write(ptype);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::MyUtil::LongSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::MyUtil::LongSeq
IceDelegateM::xce::feed::FeedIndexManager::remove(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedIndexManager__remove_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(source);
        __os->write(stype);
        __os->write(actor);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::MyUtil::LongSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedIndexSeq
IceDelegateM::xce::feed::FeedIndexManager::getBySourceAndStype(::Ice::Long source, ::Ice::Int stype, ::Ice::Int size, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedIndexManager__getBySourceAndStype_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(source);
        __os->write(stype);
        __os->write(size);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedIndexSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedIndexSeq(__is, __ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedIndexSeq
IceDelegateM::xce::feed::FeedIndexManager::getByParent(::Ice::Long parent, ::Ice::Int ptype, ::Ice::Int size, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedIndexManager__getByParent_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(parent);
        __os->write(ptype);
        __os->write(size);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedIndexSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedIndexSeq(__is, __ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::MyUtil::LongSeq
IceDelegateM::xce::feed::FeedIndexManager::get(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedIndexManager__get_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(source);
        __os->write(stype);
        __os->write(actor);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::MyUtil::LongSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedIndexPtr
IceDelegateM::xce::feed::FeedIndexManager::getByFeed(::Ice::Long feed, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedIndexManager__getByFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(feed);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedIndexPtr __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(::xce::feed::__patch__FeedIndexPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::removeFeedById(::Ice::Long feedId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__removeFeedById_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(feedId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::removeFeedBySource(::Ice::Long source, ::Ice::Int stype, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__removeFeedBySource_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(source);
        __os->write(stype);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::removeFeedBySourceHS(::Ice::Long source, ::Ice::Int stype, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__removeFeedBySourceHS_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(source);
        __os->write(stype);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::removeFeedByParent(::Ice::Long parent, ::Ice::Int ptype, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__removeFeedByParent_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(parent);
        __os->write(ptype);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::removeFeed(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__removeFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(source);
        __os->write(stype);
        __os->write(actor);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::removeFeedReply(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, ::Ice::Long removeReplyId, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__removeFeedReply_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(source);
        __os->write(stype);
        __os->write(actor);
        __os->write(removeReplyId);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(reply.get())));
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::removeFeedReplyById(::Ice::Int stype, ::Ice::Long feedid, ::Ice::Long removeReplyId, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__removeFeedReplyById_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(stype);
        __os->write(feedid);
        __os->write(removeReplyId);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(reply.get())));
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::readNews(::Ice::Int user, ::Ice::Long feed, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__readNews_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(user);
        __os->write(feed);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::readAllNews(::Ice::Int user, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__readAllNews_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(user);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::readMini(::Ice::Int user, ::Ice::Long feed, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__readMini_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(user);
        __os->write(feed);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::readAllMini(::Ice::Int user, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__readAllMini_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(user);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::dispatch(const ::xce::feed::FeedSeedPtr& seed, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__dispatch_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(seed.get())));
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::dispatchEDM(const ::xce::feed::FeedSeedPtr& seed, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__dispatchEDM_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(seed.get())));
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::addFeedReplyById(::Ice::Int stype, ::Ice::Long feedid, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__addFeedReplyById_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(stype);
        __os->write(feedid);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(reply.get())));
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::dispatchWithReply(const ::xce::feed::FeedSeedPtr& seed, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__dispatchWithReply_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(seed.get())));
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(reply.get())));
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::addFeedReply(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__addFeedReply_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(source);
        __os->write(stype);
        __os->write(actor);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(reply.get())));
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::addFeedReplyWithConfig(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::xce::feed::FeedReplyPtr& reply, const ::MyUtil::Str2StrMap& replyConfig, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__addFeedReplyWithConfig_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(source);
        __os->write(stype);
        __os->write(actor);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(reply.get())));
        ::MyUtil::__writeStr2StrMap(__os, replyConfig);
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::Ice::Long
IceDelegateM::xce::feed::FeedAssistant::getFeedId(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__getFeedId_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(source);
        __os->write(stype);
        __os->write(actor);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Ice::Long __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::cacheSync(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__cacheSync_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(source);
        __os->write(stype);
        __os->write(actor);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::Ice::Long
IceDelegateM::xce::feed::FeedAssistant::createFeedId(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__createFeedId_name, ::Ice::Normal, __context);
    bool __ok = __og.invoke();
    ::Ice::Long __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::dispatchAgain(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, ::Ice::Int toid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__dispatchAgain_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(source);
        __os->write(stype);
        __os->write(actor);
        __os->write(toid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::ReplaceXML(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::std::string& xml, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__ReplaceXML_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(source);
        __os->write(stype);
        __os->write(actor);
        __os->write(xml);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::DirectedSend(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::MyUtil::IntSeq& targets, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__DirectedSend_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(source);
        __os->write(stype);
        __os->write(actor);
        if(targets.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&targets[0], &targets[0] + targets.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedAssistant::MarkFeed(::Ice::Int uid, ::Ice::Long fid, ::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, bool mark, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedAssistant__MarkFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(fid);
        __os->write(source);
        __os->write(stype);
        __os->write(actor);
        __os->write(mark);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::xce::feed::FeedDataSeq
IceDelegateM::xce::feed::FocusManager::GetFocusFeedData(::Ice::Int user, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FocusManager__GetFocusFeedData_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(user);
        __os->write(begin);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedDataSeq(__is, __ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedDataSeq
IceDelegateM::xce::feed::FocusManager::GetFocusFeedDataByStype(::Ice::Int user, ::Ice::Int begin, ::Ice::Int limit, const ::MyUtil::IntSeq& stypes, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FocusManager__GetFocusFeedDataByStype_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(user);
        __os->write(begin);
        __os->write(limit);
        if(stypes.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&stypes[0], &stypes[0] + stypes.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedDataSeq(__is, __ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

bool
IceDelegateM::xce::feed::FocusManager::AddFocuses(::Ice::Int user, ::Ice::Int target, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FocusManager__AddFocuses_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(user);
        __os->write(target);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    bool __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::xce::feed::FocusManager::DelFocuses(::Ice::Int user, ::Ice::Int target, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FocusManager__DelFocuses_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(user);
        __os->write(target);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::MyUtil::IntSeq
IceDelegateM::xce::feed::FocusManager::GetFocuses(::Ice::Int user, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FocusManager__GetFocuses_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(user);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::MyUtil::IntSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::xce::feed::FocusManager::GetFocusFeedIncCount(::Ice::Int user, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FocusManager__GetFocusFeedIncCount_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(user);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Ice::Int __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::xce::feed::FocusManager::AddFocusWithCheck(::Ice::Int user, ::Ice::Int target, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FocusManager__AddFocusWithCheck_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(user);
        __os->write(target);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Ice::Int __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedDataResPtr
IceDelegateM::xce::feed::FeedNewsManager::GetLiveFeedData(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__GetLiveFeedData_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(begin);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataResPtr __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(::xce::feed::__patch__FeedDataResPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedDataResPtr
IceDelegateM::xce::feed::FeedNewsManager::GetLiveFeedDataByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__GetLiveFeedDataByStype_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        if(stypes.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&stypes[0], &stypes[0] + stypes.size());
        }
        __os->write(begin);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataResPtr __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(::xce::feed::__patch__FeedDataResPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedDataResPtr
IceDelegateM::xce::feed::FeedNewsManager::GetLiveFeedDataByType(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__GetLiveFeedDataByType_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        if(stypes.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&stypes[0], &stypes[0] + stypes.size());
        }
        __os->write(begin);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataResPtr __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(::xce::feed::__patch__FeedDataResPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedDataResPtr
IceDelegateM::xce::feed::FeedNewsManager::GetHotFeedData(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__GetHotFeedData_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(begin);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataResPtr __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(::xce::feed::__patch__FeedDataResPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedDataResPtr
IceDelegateM::xce::feed::FeedNewsManager::GetHotFeedDataByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__GetHotFeedDataByStype_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        if(stypes.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&stypes[0], &stypes[0] + stypes.size());
        }
        __os->write(begin);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataResPtr __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(::xce::feed::__patch__FeedDataResPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedDataResPtr
IceDelegateM::xce::feed::FeedNewsManager::GetHotFeedDataByType(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__GetHotFeedDataByType_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        if(stypes.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&stypes[0], &stypes[0] + stypes.size());
        }
        __os->write(begin);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataResPtr __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(::xce::feed::__patch__FeedDataResPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedDataSeq
IceDelegateM::xce::feed::FeedNewsManager::GetFeedDataByIds(const ::MyUtil::LongSeq& fids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__GetFeedDataByIds_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(fids.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&fids[0], &fids[0] + fids.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedDataSeq(__is, __ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedDataSeq
IceDelegateM::xce::feed::FeedNewsManager::GetFeedDataByIdsWithUid(::Ice::Int uid, const ::MyUtil::LongSeq& fids, ::Ice::Long first, ::Ice::Int stype, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__GetFeedDataByIdsWithUid_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        if(fids.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&fids[0], &fids[0] + fids.size());
        }
        __os->write(first);
        __os->write(stype);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedDataSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedDataSeq(__is, __ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::xce::feed::FeedItemSeq
IceDelegateM::xce::feed::FeedNewsManager::GetOriginalFeedData(::Ice::Int uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__GetOriginalFeedData_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedItemSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedItemSeq(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::xce::feed::FeedNewsManager::GetUnviewedCount(::Ice::Int uid, ::Ice::Int type, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__GetUnviewedCount_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(type);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Ice::Int __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::MyUtil::Int2IntMap
IceDelegateM::xce::feed::FeedNewsManager::GetCountMapByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, bool unviewed, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__GetCountMapByStype_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        if(stypes.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&stypes[0], &stypes[0] + stypes.size());
        }
        __os->write(unviewed);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::MyUtil::Int2IntMap __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::MyUtil::__readInt2IntMap(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::xce::feed::FeedNewsManager::AddFeed(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__AddFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        item.__write(__os);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(config.get())));
        ::MyUtil::__writeInt2IntMap(__os, id2weight);
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedNewsManager::SetRead(::Ice::Int uid, ::Ice::Int stype, ::Ice::Long merge, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__SetRead_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(stype);
        __os->write(merge);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedNewsManager::SetReadById(::Ice::Int uid, ::Ice::Long feedId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__SetReadById_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(feedId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedNewsManager::SetReadAll(::Ice::Int uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__SetReadAll_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

bool
IceDelegateM::xce::feed::FeedNewsManager::HasFeed(::Ice::Int uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__HasFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    bool __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::xce::feed::FeedNewsManager::load(::Ice::Int userid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__load_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::xce::feed::FeedItemSeqSeq
IceDelegateM::xce::feed::FeedNewsManager::GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq& uids, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__GetFeedItemSeqSeqByUsers_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(uids.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&uids[0], &uids[0] + uids.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::feed::FeedItemSeqSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::xce::feed::__readFeedItemSeqSeq(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::xce::feed::FeedNewsManager::MarkFeed(::Ice::Int uid, ::Ice::Long fid, ::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, bool mark, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__MarkFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(fid);
        __os->write(source);
        __os->write(stype);
        __os->write(actor);
        __os->write(mark);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedNewsManager::EraseUser(::Ice::Int uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__EraseUser_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedNewsManager::AddFeedReply(const ::xce::feed::FeedIndexPtr& idx, ::Ice::Int replycnt, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__AddFeedReply_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(idx.get())));
        __os->write(replycnt);
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedNewsManager::AddWhiteList(::Ice::Int userid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__AddWhiteList_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::xce::feed::FeedNewsManager::DelWhiteList(::Ice::Int userid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__DelWhiteList_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::MyUtil::IntSeq
IceDelegateM::xce::feed::FeedNewsManager::GetWhiteList(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__GetWhiteList_name, ::Ice::Normal, __context);
    bool __ok = __og.invoke();
    ::MyUtil::IntSeq __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::xce::feed::FeedNewsManager::ClearWhiteList(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__feed__FeedNewsManager__ClearWhiteList_name, ::Ice::Normal, __context);
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateD::xce::feed::FeedDispatcher::dispatch(const ::xce::feed::FeedSeedPtr& seed, const ::xce::feed::FeedConfigPtr& config, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::xce::feed::FeedSeedPtr& seed, const ::xce::feed::FeedConfigPtr& config, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_seed(seed),
            _m_config(config)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedDispatcher* servant = dynamic_cast< ::xce::feed::FeedDispatcher*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->dispatch(_m_seed, _m_config, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::xce::feed::FeedSeedPtr& _m_seed;
        const ::xce::feed::FeedConfigPtr& _m_config;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedDispatcher__dispatch_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(seed, config, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedDispatcher::dispatchReply(const ::xce::feed::ReplyDataPtr& data, const ::xce::feed::FeedConfigPtr& config, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::xce::feed::ReplyDataPtr& data, const ::xce::feed::FeedConfigPtr& config, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_data(data),
            _m_config(config)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedDispatcher* servant = dynamic_cast< ::xce::feed::FeedDispatcher*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->dispatchReply(_m_data, _m_config, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::xce::feed::ReplyDataPtr& _m_data;
        const ::xce::feed::FeedConfigPtr& _m_config;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedDispatcher__dispatchReply_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(data, config, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedDispatcher::Reload(::xce::feed::LoadType type, ::Ice::Int id, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::LoadType type, ::Ice::Int id, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_type(type),
            _m_id(id)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedDispatcher* servant = dynamic_cast< ::xce::feed::FeedDispatcher*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->Reload(_m_type, _m_id, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::LoadType _m_type;
        ::Ice::Int _m_id;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedDispatcher__Reload_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(type, id, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedDispatcher::ReloadBatch(::xce::feed::LoadType type, const ::MyUtil::IntSeq& ids, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::LoadType type, const ::MyUtil::IntSeq& ids, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_type(type),
            _m_ids(ids)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedDispatcher* servant = dynamic_cast< ::xce::feed::FeedDispatcher*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->ReloadBatch(_m_type, _m_ids, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::LoadType _m_type;
        const ::MyUtil::IntSeq& _m_ids;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedDispatcher__ReloadBatch_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(type, ids, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedDispatcher::addBuddyNotify(::Ice::Int host, ::Ice::Int guest, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int host, ::Ice::Int guest, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_host(host),
            _m_guest(guest)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedDispatcher* servant = dynamic_cast< ::xce::feed::FeedDispatcher*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->addBuddyNotify(_m_host, _m_guest, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_host;
        ::Ice::Int _m_guest;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedDispatcher__addBuddyNotify_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(host, guest, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedDispatcher::buddyApplyNotify(::Ice::Int host, ::Ice::Int guest, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int host, ::Ice::Int guest, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_host(host),
            _m_guest(guest)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedDispatcher* servant = dynamic_cast< ::xce::feed::FeedDispatcher*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->buddyApplyNotify(_m_host, _m_guest, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_host;
        ::Ice::Int _m_guest;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedDispatcher__buddyApplyNotify_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(host, guest, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedDispatcher::joinPageNotify(::Ice::Int page, ::Ice::Int fans, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int page, ::Ice::Int fans, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_page(page),
            _m_fans(fans)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedDispatcher* servant = dynamic_cast< ::xce::feed::FeedDispatcher*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->joinPageNotify(_m_page, _m_fans, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_page;
        ::Ice::Int _m_fans;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedDispatcher__joinPageNotify_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(page, fans, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedDispatcher::guideBuddyReplyNotify(::Ice::Int newUser, ::Ice::Int buddy, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int newUser, ::Ice::Int buddy, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_newUser(newUser),
            _m_buddy(buddy)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedDispatcher* servant = dynamic_cast< ::xce::feed::FeedDispatcher*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->guideBuddyReplyNotify(_m_newUser, _m_buddy, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_newUser;
        ::Ice::Int _m_buddy;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedDispatcher__guideBuddyReplyNotify_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(newUser, buddy, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedDispatcher::addMiniSiteFeed(::Ice::Int siteid, ::Ice::Int userid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int siteid, ::Ice::Int userid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_siteid(siteid),
            _m_userid(userid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedDispatcher* servant = dynamic_cast< ::xce::feed::FeedDispatcher*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->addMiniSiteFeed(_m_siteid, _m_userid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_siteid;
        ::Ice::Int _m_userid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedDispatcher__addMiniSiteFeed_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(siteid, userid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::xce::feed::FeedDataSeq
IceDelegateD::xce::feed::FeedItemManager::getFeedDataByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataSeq& __result, ::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_stypes(stypes),
            _m_begin(begin),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedItemManager* servant = dynamic_cast< ::xce::feed::FeedItemManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getFeedDataByStype(_m_uid, _m_stypes, _m_begin, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataSeq& _result;
        ::Ice::Int _m_uid;
        const ::MyUtil::IntSeq& _m_stypes;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedItemManager__getFeedDataByStype_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataSeq __result;
    try
    {
        _DirectI __direct(__result, uid, stypes, begin, limit, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedDataSeq
IceDelegateD::xce::feed::FeedItemManager::getFeedDataByType(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataSeq& __result, ::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_stypes(stypes),
            _m_begin(begin),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedItemManager* servant = dynamic_cast< ::xce::feed::FeedItemManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getFeedDataByType(_m_uid, _m_stypes, _m_begin, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataSeq& _result;
        ::Ice::Int _m_uid;
        const ::MyUtil::IntSeq& _m_stypes;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedItemManager__getFeedDataByType_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataSeq __result;
    try
    {
        _DirectI __direct(__result, uid, stypes, begin, limit, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedDataSeq
IceDelegateD::xce::feed::FeedItemManager::getFeedData(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataSeq& __result, ::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_begin(begin),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedItemManager* servant = dynamic_cast< ::xce::feed::FeedItemManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getFeedData(_m_uid, _m_begin, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataSeq& _result;
        ::Ice::Int _m_uid;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedItemManager__getFeedData_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataSeq __result;
    try
    {
        _DirectI __direct(__result, uid, begin, limit, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedDataSeq
IceDelegateD::xce::feed::FeedItemManager::getFeedData2(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataSeq& __result, ::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_begin(begin),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedItemManager* servant = dynamic_cast< ::xce::feed::FeedItemManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getFeedData2(_m_uid, _m_begin, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataSeq& _result;
        ::Ice::Int _m_uid;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedItemManager__getFeedData2_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataSeq __result;
    try
    {
        _DirectI __direct(__result, uid, begin, limit, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedDataSeq
IceDelegateD::xce::feed::FeedItemManager::getFeedDataByIds(const ::MyUtil::LongSeq& fids, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataSeq& __result, const ::MyUtil::LongSeq& fids, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_fids(fids)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedItemManager* servant = dynamic_cast< ::xce::feed::FeedItemManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getFeedDataByIds(_m_fids, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataSeq& _result;
        const ::MyUtil::LongSeq& _m_fids;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedItemManager__getFeedDataByIds_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataSeq __result;
    try
    {
        _DirectI __direct(__result, fids, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::xce::feed::FeedItemManager::addFeed(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_item(item),
            _m_config(config),
            _m_id2weight(id2weight)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedItemManager* servant = dynamic_cast< ::xce::feed::FeedItemManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->addFeed(_m_item, _m_config, _m_id2weight, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::xce::feed::FeedItem& _m_item;
        const ::xce::feed::FeedConfigPtr& _m_config;
        const ::MyUtil::Int2IntMap& _m_id2weight;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedItemManager__addFeed_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(item, config, id2weight, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedItemManager::setRead(::Ice::Int uid, ::Ice::Int stype, ::Ice::Long merge, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int uid, ::Ice::Int stype, ::Ice::Long merge, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_uid(uid),
            _m_stype(stype),
            _m_merge(merge)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedItemManager* servant = dynamic_cast< ::xce::feed::FeedItemManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->setRead(_m_uid, _m_stype, _m_merge, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_uid;
        ::Ice::Int _m_stype;
        ::Ice::Long _m_merge;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedItemManager__setRead_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(uid, stype, merge, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedItemManager::setReadById(::Ice::Int uid, ::Ice::Long feedId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int uid, ::Ice::Long feedId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_uid(uid),
            _m_feedId(feedId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedItemManager* servant = dynamic_cast< ::xce::feed::FeedItemManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->setReadById(_m_uid, _m_feedId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_uid;
        ::Ice::Long _m_feedId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedItemManager__setReadById_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(uid, feedId, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedItemManager::setReadAll(::Ice::Int uid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int uid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_uid(uid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedItemManager* servant = dynamic_cast< ::xce::feed::FeedItemManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->setReadAll(_m_uid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_uid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedItemManager__setReadAll_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(uid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

bool
IceDelegateD::xce::feed::FeedItemManager::hasFeed(::Ice::Int uid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(bool& __result, ::Ice::Int uid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedItemManager* servant = dynamic_cast< ::xce::feed::FeedItemManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->hasFeed(_m_uid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        bool& _result;
        ::Ice::Int _m_uid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedItemManager__hasFeed_name, ::Ice::Normal, __context);
    bool __result;
    try
    {
        _DirectI __direct(__result, uid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedItemSeqSeq
IceDelegateD::xce::feed::FeedItemManager::GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq& uids, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedItemSeqSeq& __result, const ::MyUtil::IntSeq& uids, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uids(uids)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedItemManager* servant = dynamic_cast< ::xce::feed::FeedItemManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetFeedItemSeqSeqByUsers(_m_uids, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedItemSeqSeq& _result;
        const ::MyUtil::IntSeq& _m_uids;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedItemManager__GetFeedItemSeqSeqByUsers_name, ::Ice::Normal, __context);
    ::xce::feed::FeedItemSeqSeq __result;
    try
    {
        _DirectI __direct(__result, uids, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::xce::feed::FeedItemManager::PressureTest(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_uid(uid),
            _m_begin(begin),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedItemManager* servant = dynamic_cast< ::xce::feed::FeedItemManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->PressureTest(_m_uid, _m_begin, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_uid;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedItemManager__PressureTest_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(uid, begin, limit, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::xce::feed::FeedItemSeq
IceDelegateD::xce::feed::FeedItemManager::GetOriginalFeedData(::Ice::Int uid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedItemSeq& __result, ::Ice::Int uid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedItemManager* servant = dynamic_cast< ::xce::feed::FeedItemManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetOriginalFeedData(_m_uid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedItemSeq& _result;
        ::Ice::Int _m_uid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedItemManager__GetOriginalFeedData_name, ::Ice::Normal, __context);
    ::xce::feed::FeedItemSeq __result;
    try
    {
        _DirectI __direct(__result, uid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::xce::feed::FeedItemManager::Reload(::Ice::Int uid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int uid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_uid(uid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedItemManager* servant = dynamic_cast< ::xce::feed::FeedItemManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->Reload(_m_uid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_uid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedItemManager__Reload_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(uid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::xce::feed::FeedDataSeq
IceDelegateD::xce::feed::FeedGroupManager::GetFeedData(::Ice::Int gid, ::Ice::Int memberid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataSeq& __result, ::Ice::Int gid, ::Ice::Int memberid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_gid(gid),
            _m_memberid(memberid),
            _m_begin(begin),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetFeedData(_m_gid, _m_memberid, _m_begin, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataSeq& _result;
        ::Ice::Int _m_gid;
        ::Ice::Int _m_memberid;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__GetFeedData_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataSeq __result;
    try
    {
        _DirectI __direct(__result, gid, memberid, begin, limit, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedDataSeq
IceDelegateD::xce::feed::FeedGroupManager::GetFeedDataByType(::Ice::Int gid, ::Ice::Int memberid, const ::MyUtil::IntSeq& types, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataSeq& __result, ::Ice::Int gid, ::Ice::Int memberid, const ::MyUtil::IntSeq& types, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_gid(gid),
            _m_memberid(memberid),
            _m_types(types),
            _m_begin(begin),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetFeedDataByType(_m_gid, _m_memberid, _m_types, _m_begin, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataSeq& _result;
        ::Ice::Int _m_gid;
        ::Ice::Int _m_memberid;
        const ::MyUtil::IntSeq& _m_types;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__GetFeedDataByType_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataSeq __result;
    try
    {
        _DirectI __direct(__result, gid, memberid, types, begin, limit, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedDataSeq
IceDelegateD::xce::feed::FeedGroupManager::GetFeedDataByStype(::Ice::Int gid, ::Ice::Int memberid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataSeq& __result, ::Ice::Int gid, ::Ice::Int memberid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_gid(gid),
            _m_memberid(memberid),
            _m_stypes(stypes),
            _m_begin(begin),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetFeedDataByStype(_m_gid, _m_memberid, _m_stypes, _m_begin, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataSeq& _result;
        ::Ice::Int _m_gid;
        ::Ice::Int _m_memberid;
        const ::MyUtil::IntSeq& _m_stypes;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__GetFeedDataByStype_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataSeq __result;
    try
    {
        _DirectI __direct(__result, gid, memberid, stypes, begin, limit, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedItemSeqSeq
IceDelegateD::xce::feed::FeedGroupManager::GetFeedItemSeqSeqByGroups(const ::MyUtil::IntSeq& groups, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedItemSeqSeq& __result, const ::MyUtil::IntSeq& groups, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_groups(groups)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetFeedItemSeqSeqByGroups(_m_groups, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedItemSeqSeq& _result;
        const ::MyUtil::IntSeq& _m_groups;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__GetFeedItemSeqSeqByGroups_name, ::Ice::Normal, __context);
    ::xce::feed::FeedItemSeqSeq __result;
    try
    {
        _DirectI __direct(__result, groups, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedItemSeq
IceDelegateD::xce::feed::FeedGroupManager::GetOriginalFeedData(::Ice::Int gid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedItemSeq& __result, ::Ice::Int gid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_gid(gid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetOriginalFeedData(_m_gid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedItemSeq& _result;
        ::Ice::Int _m_gid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__GetOriginalFeedData_name, ::Ice::Normal, __context);
    ::xce::feed::FeedItemSeq __result;
    try
    {
        _DirectI __direct(__result, gid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::xce::feed::FeedGroupManager::AddFeed(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_item(item),
            _m_config(config),
            _m_id2weight(id2weight)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->AddFeed(_m_item, _m_config, _m_id2weight, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::xce::feed::FeedItem& _m_item;
        const ::xce::feed::FeedConfigPtr& _m_config;
        const ::MyUtil::Int2IntMap& _m_id2weight;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__AddFeed_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(item, config, id2weight, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedGroupManager::RemoveFeed(::Ice::Int gid, ::Ice::Int stype, ::Ice::Long merge, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int gid, ::Ice::Int stype, ::Ice::Long merge, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_gid(gid),
            _m_stype(stype),
            _m_merge(merge)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->RemoveFeed(_m_gid, _m_stype, _m_merge, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_gid;
        ::Ice::Int _m_stype;
        ::Ice::Long _m_merge;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__RemoveFeed_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(gid, stype, merge, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedGroupManager::RemoveFeedById(::Ice::Int gid, ::Ice::Long feedId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int gid, ::Ice::Long feedId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_gid(gid),
            _m_feedId(feedId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->RemoveFeedById(_m_gid, _m_feedId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_gid;
        ::Ice::Long _m_feedId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__RemoveFeedById_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(gid, feedId, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedGroupManager::RemoveAllFeed(::Ice::Int gid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int gid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_gid(gid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->RemoveAllFeed(_m_gid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_gid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__RemoveAllFeed_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(gid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedGroupManager::RefreshFeed(::Ice::Int gid, ::Ice::Long feedid, ::Ice::Int timestamp, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int gid, ::Ice::Long feedid, ::Ice::Int timestamp, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_gid(gid),
            _m_feedid(feedid),
            _m_timestamp(timestamp)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->RefreshFeed(_m_gid, _m_feedid, _m_timestamp, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_gid;
        ::Ice::Long _m_feedid;
        ::Ice::Int _m_timestamp;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__RefreshFeed_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(gid, feedid, timestamp, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedGroupManager::ReplyFeed(::Ice::Int gid, ::Ice::Long feedid, ::Ice::Int timestamp, ::Ice::Int owner, ::Ice::Int replier, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int gid, ::Ice::Long feedid, ::Ice::Int timestamp, ::Ice::Int owner, ::Ice::Int replier, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_gid(gid),
            _m_feedid(feedid),
            _m_timestamp(timestamp),
            _m_owner(owner),
            _m_replier(replier)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->ReplyFeed(_m_gid, _m_feedid, _m_timestamp, _m_owner, _m_replier, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_gid;
        ::Ice::Long _m_feedid;
        ::Ice::Int _m_timestamp;
        ::Ice::Int _m_owner;
        ::Ice::Int _m_replier;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__ReplyFeed_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(gid, feedid, timestamp, owner, replier, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::MyUtil::Int2IntMap
IceDelegateD::xce::feed::FeedGroupManager::GetGroupsUnreadCount(::Ice::Int uid, const ::MyUtil::IntSeq& groups, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::MyUtil::Int2IntMap& __result, ::Ice::Int uid, const ::MyUtil::IntSeq& groups, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_groups(groups)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetGroupsUnreadCount(_m_uid, _m_groups, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::MyUtil::Int2IntMap& _result;
        ::Ice::Int _m_uid;
        const ::MyUtil::IntSeq& _m_groups;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__GetGroupsUnreadCount_name, ::Ice::Normal, __context);
    ::MyUtil::Int2IntMap __result;
    try
    {
        _DirectI __direct(__result, uid, groups, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::xce::feed::FeedGroupManager::AddMember(::Ice::Int groupid, ::Ice::Int memberid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int groupid, ::Ice::Int memberid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_groupid(groupid),
            _m_memberid(memberid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->AddMember(_m_groupid, _m_memberid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_groupid;
        ::Ice::Int _m_memberid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__AddMember_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(groupid, memberid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedGroupManager::RemoveMember(::Ice::Int groupid, ::Ice::Int memberid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int groupid, ::Ice::Int memberid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_groupid(groupid),
            _m_memberid(memberid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->RemoveMember(_m_groupid, _m_memberid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_groupid;
        ::Ice::Int _m_memberid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__RemoveMember_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(groupid, memberid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::MyUtil::Int2IntSeqMap
IceDelegateD::xce::feed::FeedGroupManager::GetMembers(const ::MyUtil::IntSeq& gids, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::MyUtil::Int2IntSeqMap& __result, const ::MyUtil::IntSeq& gids, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_gids(gids)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetMembers(_m_gids, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::MyUtil::Int2IntSeqMap& _result;
        const ::MyUtil::IntSeq& _m_gids;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__GetMembers_name, ::Ice::Normal, __context);
    ::MyUtil::Int2IntSeqMap __result;
    try
    {
        _DirectI __direct(__result, gids, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::xce::feed::FeedGroupManager::GetMembersTest(const ::MyUtil::IntSeq& gids, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::MyUtil::IntSeq& gids, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_gids(gids)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->GetMembersTest(_m_gids, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::MyUtil::IntSeq& _m_gids;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__GetMembersTest_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(gids, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

bool
IceDelegateD::xce::feed::FeedGroupManager::HasFeed(::Ice::Int gid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(bool& __result, ::Ice::Int gid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_gid(gid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->HasFeed(_m_gid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        bool& _result;
        ::Ice::Int _m_gid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__HasFeed_name, ::Ice::Normal, __context);
    bool __result;
    try
    {
        _DirectI __direct(__result, gid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::xce::feed::FeedGroupManager::ReadAllFeed(::Ice::Int gid, ::Ice::Int uid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int gid, ::Ice::Int uid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_gid(gid),
            _m_uid(uid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->ReadAllFeed(_m_gid, _m_uid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_gid;
        ::Ice::Int _m_uid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__ReadAllFeed_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(gid, uid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedGroupManager::Test(::Ice::Int gid, ::Ice::Int mid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int gid, ::Ice::Int mid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_gid(gid),
            _m_mid(mid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupManager* servant = dynamic_cast< ::xce::feed::FeedGroupManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->Test(_m_gid, _m_mid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_gid;
        ::Ice::Int _m_mid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupManager__Test_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(gid, mid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::MyUtil::Int2IntMap
IceDelegateD::xce::feed::FeedGroupCount::GetUnread(::Ice::Int uid, const ::MyUtil::IntSeq& groups, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::MyUtil::Int2IntMap& __result, ::Ice::Int uid, const ::MyUtil::IntSeq& groups, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_groups(groups)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedGroupCount* servant = dynamic_cast< ::xce::feed::FeedGroupCount*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetUnread(_m_uid, _m_groups, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::MyUtil::Int2IntMap& _result;
        ::Ice::Int _m_uid;
        const ::MyUtil::IntSeq& _m_groups;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedGroupCount__GetUnread_name, ::Ice::Normal, __context);
    ::MyUtil::Int2IntMap __result;
    try
    {
        _DirectI __direct(__result, uid, groups, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedContentDict
IceDelegateD::xce::feed::FeedContentManager::getFeedDict(const ::MyUtil::LongSeq& feedIds, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedContentDict& __result, const ::MyUtil::LongSeq& feedIds, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_feedIds(feedIds)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedContentManager* servant = dynamic_cast< ::xce::feed::FeedContentManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getFeedDict(_m_feedIds, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedContentDict& _result;
        const ::MyUtil::LongSeq& _m_feedIds;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedContentManager__getFeedDict_name, ::Ice::Normal, __context);
    ::xce::feed::FeedContentDict __result;
    try
    {
        _DirectI __direct(__result, feedIds, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::Ice::Int
IceDelegateD::xce::feed::FeedContentManager::addFeedContent(const ::xce::feed::FeedDataPtr& data, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int& __result, const ::xce::feed::FeedDataPtr& data, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_data(data)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedContentManager* servant = dynamic_cast< ::xce::feed::FeedContentManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->addFeedContent(_m_data, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
        const ::xce::feed::FeedDataPtr& _m_data;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedContentManager__addFeedContent_name, ::Ice::Normal, __context);
    ::Ice::Int __result;
    try
    {
        _DirectI __direct(__result, data, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::xce::feed::FeedContentManager::replaceFeedReply(const ::MyUtil::LongSeq& feedIds, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::MyUtil::LongSeq& feedIds, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_feedIds(feedIds),
            _m_reply(reply)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedContentManager* servant = dynamic_cast< ::xce::feed::FeedContentManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->replaceFeedReply(_m_feedIds, _m_reply, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::MyUtil::LongSeq& _m_feedIds;
        const ::xce::feed::FeedReplyPtr& _m_reply;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedContentManager__replaceFeedReply_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(feedIds, reply, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedContentManager::removeFeed(::Ice::Long feedId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long feedId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_feedId(feedId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedContentManager* servant = dynamic_cast< ::xce::feed::FeedContentManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->removeFeed(_m_feedId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_feedId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedContentManager__removeFeed_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(feedId, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedContentManager::removeFeeds(const ::MyUtil::LongSeq& feedIds, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::MyUtil::LongSeq& feedIds, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_feedIds(feedIds)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedContentManager* servant = dynamic_cast< ::xce::feed::FeedContentManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->removeFeeds(_m_feedIds, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::MyUtil::LongSeq& _m_feedIds;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedContentManager__removeFeeds_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(feedIds, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedContentManager::recoveryContent(::Ice::Long feedId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long feedId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_feedId(feedId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedContentManager* servant = dynamic_cast< ::xce::feed::FeedContentManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->recoveryContent(_m_feedId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_feedId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedContentManager__recoveryContent_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(feedId, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedContentManager::ReplaceXML(const ::MyUtil::LongSeq& feedIds, const ::std::string& xml, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::MyUtil::LongSeq& feedIds, const ::std::string& xml, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_feedIds(feedIds),
            _m_xml(xml)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedContentManager* servant = dynamic_cast< ::xce::feed::FeedContentManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->ReplaceXML(_m_feedIds, _m_xml, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::MyUtil::LongSeq& _m_feedIds;
        const ::std::string& _m_xml;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedContentManager__ReplaceXML_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(feedIds, xml, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedIndexManager::add(const ::xce::feed::FeedIndexPtr& index, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::xce::feed::FeedIndexPtr& index, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_index(index)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedIndexManager* servant = dynamic_cast< ::xce::feed::FeedIndexManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->add(_m_index, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::xce::feed::FeedIndexPtr& _m_index;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedIndexManager__add_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(index, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::MyUtil::LongSeq
IceDelegateD::xce::feed::FeedIndexManager::removeBySource(::Ice::Long source, ::Ice::Int stype, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::MyUtil::LongSeq& __result, ::Ice::Long source, ::Ice::Int stype, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_source(source),
            _m_stype(stype)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedIndexManager* servant = dynamic_cast< ::xce::feed::FeedIndexManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->removeBySource(_m_source, _m_stype, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::MyUtil::LongSeq& _result;
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedIndexManager__removeBySource_name, ::Ice::Normal, __context);
    ::MyUtil::LongSeq __result;
    try
    {
        _DirectI __direct(__result, source, stype, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::MyUtil::LongSeq
IceDelegateD::xce::feed::FeedIndexManager::removeByParent(::Ice::Long parent, ::Ice::Int ptype, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::MyUtil::LongSeq& __result, ::Ice::Long parent, ::Ice::Int ptype, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_parent(parent),
            _m_ptype(ptype)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedIndexManager* servant = dynamic_cast< ::xce::feed::FeedIndexManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->removeByParent(_m_parent, _m_ptype, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::MyUtil::LongSeq& _result;
        ::Ice::Long _m_parent;
        ::Ice::Int _m_ptype;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedIndexManager__removeByParent_name, ::Ice::Normal, __context);
    ::MyUtil::LongSeq __result;
    try
    {
        _DirectI __direct(__result, parent, ptype, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::MyUtil::LongSeq
IceDelegateD::xce::feed::FeedIndexManager::remove(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::MyUtil::LongSeq& __result, ::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_source(source),
            _m_stype(stype),
            _m_actor(actor)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedIndexManager* servant = dynamic_cast< ::xce::feed::FeedIndexManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->remove(_m_source, _m_stype, _m_actor, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::MyUtil::LongSeq& _result;
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
        ::Ice::Int _m_actor;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedIndexManager__remove_name, ::Ice::Normal, __context);
    ::MyUtil::LongSeq __result;
    try
    {
        _DirectI __direct(__result, source, stype, actor, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedIndexSeq
IceDelegateD::xce::feed::FeedIndexManager::getBySourceAndStype(::Ice::Long source, ::Ice::Int stype, ::Ice::Int size, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedIndexSeq& __result, ::Ice::Long source, ::Ice::Int stype, ::Ice::Int size, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_source(source),
            _m_stype(stype),
            _m_size(size)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedIndexManager* servant = dynamic_cast< ::xce::feed::FeedIndexManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getBySourceAndStype(_m_source, _m_stype, _m_size, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedIndexSeq& _result;
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
        ::Ice::Int _m_size;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedIndexManager__getBySourceAndStype_name, ::Ice::Normal, __context);
    ::xce::feed::FeedIndexSeq __result;
    try
    {
        _DirectI __direct(__result, source, stype, size, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedIndexSeq
IceDelegateD::xce::feed::FeedIndexManager::getByParent(::Ice::Long parent, ::Ice::Int ptype, ::Ice::Int size, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedIndexSeq& __result, ::Ice::Long parent, ::Ice::Int ptype, ::Ice::Int size, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_parent(parent),
            _m_ptype(ptype),
            _m_size(size)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedIndexManager* servant = dynamic_cast< ::xce::feed::FeedIndexManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getByParent(_m_parent, _m_ptype, _m_size, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedIndexSeq& _result;
        ::Ice::Long _m_parent;
        ::Ice::Int _m_ptype;
        ::Ice::Int _m_size;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedIndexManager__getByParent_name, ::Ice::Normal, __context);
    ::xce::feed::FeedIndexSeq __result;
    try
    {
        _DirectI __direct(__result, parent, ptype, size, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::MyUtil::LongSeq
IceDelegateD::xce::feed::FeedIndexManager::get(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::MyUtil::LongSeq& __result, ::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_source(source),
            _m_stype(stype),
            _m_actor(actor)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedIndexManager* servant = dynamic_cast< ::xce::feed::FeedIndexManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->get(_m_source, _m_stype, _m_actor, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::MyUtil::LongSeq& _result;
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
        ::Ice::Int _m_actor;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedIndexManager__get_name, ::Ice::Normal, __context);
    ::MyUtil::LongSeq __result;
    try
    {
        _DirectI __direct(__result, source, stype, actor, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedIndexPtr
IceDelegateD::xce::feed::FeedIndexManager::getByFeed(::Ice::Long feed, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedIndexPtr& __result, ::Ice::Long feed, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_feed(feed)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedIndexManager* servant = dynamic_cast< ::xce::feed::FeedIndexManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getByFeed(_m_feed, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedIndexPtr& _result;
        ::Ice::Long _m_feed;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedIndexManager__getByFeed_name, ::Ice::Normal, __context);
    ::xce::feed::FeedIndexPtr __result;
    try
    {
        _DirectI __direct(__result, feed, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::xce::feed::FeedAssistant::removeFeedById(::Ice::Long feedId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long feedId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_feedId(feedId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->removeFeedById(_m_feedId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_feedId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__removeFeedById_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(feedId, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::removeFeedBySource(::Ice::Long source, ::Ice::Int stype, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long source, ::Ice::Int stype, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_source(source),
            _m_stype(stype)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->removeFeedBySource(_m_source, _m_stype, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__removeFeedBySource_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(source, stype, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::removeFeedBySourceHS(::Ice::Long source, ::Ice::Int stype, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long source, ::Ice::Int stype, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_source(source),
            _m_stype(stype)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->removeFeedBySourceHS(_m_source, _m_stype, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__removeFeedBySourceHS_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(source, stype, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::removeFeedByParent(::Ice::Long parent, ::Ice::Int ptype, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long parent, ::Ice::Int ptype, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_parent(parent),
            _m_ptype(ptype)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->removeFeedByParent(_m_parent, _m_ptype, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_parent;
        ::Ice::Int _m_ptype;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__removeFeedByParent_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(parent, ptype, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::removeFeed(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_source(source),
            _m_stype(stype),
            _m_actor(actor)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->removeFeed(_m_source, _m_stype, _m_actor, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
        ::Ice::Int _m_actor;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__removeFeed_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(source, stype, actor, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::removeFeedReply(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, ::Ice::Long removeReplyId, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, ::Ice::Long removeReplyId, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_source(source),
            _m_stype(stype),
            _m_actor(actor),
            _m_removeReplyId(removeReplyId),
            _m_reply(reply)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->removeFeedReply(_m_source, _m_stype, _m_actor, _m_removeReplyId, _m_reply, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
        ::Ice::Int _m_actor;
        ::Ice::Long _m_removeReplyId;
        const ::xce::feed::FeedReplyPtr& _m_reply;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__removeFeedReply_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(source, stype, actor, removeReplyId, reply, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::removeFeedReplyById(::Ice::Int stype, ::Ice::Long feedid, ::Ice::Long removeReplyId, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int stype, ::Ice::Long feedid, ::Ice::Long removeReplyId, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_stype(stype),
            _m_feedid(feedid),
            _m_removeReplyId(removeReplyId),
            _m_reply(reply)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->removeFeedReplyById(_m_stype, _m_feedid, _m_removeReplyId, _m_reply, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_stype;
        ::Ice::Long _m_feedid;
        ::Ice::Long _m_removeReplyId;
        const ::xce::feed::FeedReplyPtr& _m_reply;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__removeFeedReplyById_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(stype, feedid, removeReplyId, reply, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::readNews(::Ice::Int user, ::Ice::Long feed, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int user, ::Ice::Long feed, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_user(user),
            _m_feed(feed)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->readNews(_m_user, _m_feed, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_user;
        ::Ice::Long _m_feed;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__readNews_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(user, feed, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::readAllNews(::Ice::Int user, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int user, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_user(user)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->readAllNews(_m_user, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_user;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__readAllNews_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(user, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::readMini(::Ice::Int user, ::Ice::Long feed, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int user, ::Ice::Long feed, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_user(user),
            _m_feed(feed)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->readMini(_m_user, _m_feed, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_user;
        ::Ice::Long _m_feed;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__readMini_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(user, feed, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::readAllMini(::Ice::Int user, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int user, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_user(user)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->readAllMini(_m_user, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_user;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__readAllMini_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(user, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::dispatch(const ::xce::feed::FeedSeedPtr& seed, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::xce::feed::FeedSeedPtr& seed, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_seed(seed)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->dispatch(_m_seed, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::xce::feed::FeedSeedPtr& _m_seed;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__dispatch_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(seed, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::dispatchEDM(const ::xce::feed::FeedSeedPtr& seed, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::xce::feed::FeedSeedPtr& seed, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_seed(seed)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->dispatchEDM(_m_seed, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::xce::feed::FeedSeedPtr& _m_seed;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__dispatchEDM_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(seed, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::addFeedReplyById(::Ice::Int stype, ::Ice::Long feedid, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int stype, ::Ice::Long feedid, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_stype(stype),
            _m_feedid(feedid),
            _m_reply(reply)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->addFeedReplyById(_m_stype, _m_feedid, _m_reply, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_stype;
        ::Ice::Long _m_feedid;
        const ::xce::feed::FeedReplyPtr& _m_reply;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__addFeedReplyById_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(stype, feedid, reply, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::dispatchWithReply(const ::xce::feed::FeedSeedPtr& seed, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::xce::feed::FeedSeedPtr& seed, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_seed(seed),
            _m_reply(reply)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->dispatchWithReply(_m_seed, _m_reply, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::xce::feed::FeedSeedPtr& _m_seed;
        const ::xce::feed::FeedReplyPtr& _m_reply;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__dispatchWithReply_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(seed, reply, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::addFeedReply(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_source(source),
            _m_stype(stype),
            _m_actor(actor),
            _m_reply(reply)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->addFeedReply(_m_source, _m_stype, _m_actor, _m_reply, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
        ::Ice::Int _m_actor;
        const ::xce::feed::FeedReplyPtr& _m_reply;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__addFeedReply_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(source, stype, actor, reply, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::addFeedReplyWithConfig(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::xce::feed::FeedReplyPtr& reply, const ::MyUtil::Str2StrMap& replyConfig, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::xce::feed::FeedReplyPtr& reply, const ::MyUtil::Str2StrMap& replyConfig, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_source(source),
            _m_stype(stype),
            _m_actor(actor),
            _m_reply(reply),
            _m_replyConfig(replyConfig)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->addFeedReplyWithConfig(_m_source, _m_stype, _m_actor, _m_reply, _m_replyConfig, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
        ::Ice::Int _m_actor;
        const ::xce::feed::FeedReplyPtr& _m_reply;
        const ::MyUtil::Str2StrMap& _m_replyConfig;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__addFeedReplyWithConfig_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(source, stype, actor, reply, replyConfig, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::Ice::Long
IceDelegateD::xce::feed::FeedAssistant::getFeedId(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long& __result, ::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_source(source),
            _m_stype(stype),
            _m_actor(actor)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getFeedId(_m_source, _m_stype, _m_actor, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long& _result;
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
        ::Ice::Int _m_actor;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__getFeedId_name, ::Ice::Normal, __context);
    ::Ice::Long __result;
    try
    {
        _DirectI __direct(__result, source, stype, actor, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::xce::feed::FeedAssistant::cacheSync(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_source(source),
            _m_stype(stype),
            _m_actor(actor)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->cacheSync(_m_source, _m_stype, _m_actor, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
        ::Ice::Int _m_actor;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__cacheSync_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(source, stype, actor, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::Ice::Long
IceDelegateD::xce::feed::FeedAssistant::createFeedId(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->createFeedId(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__createFeedId_name, ::Ice::Normal, __context);
    ::Ice::Long __result;
    try
    {
        _DirectI __direct(__result, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::xce::feed::FeedAssistant::dispatchAgain(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, ::Ice::Int toid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, ::Ice::Int toid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_source(source),
            _m_stype(stype),
            _m_actor(actor),
            _m_toid(toid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->dispatchAgain(_m_source, _m_stype, _m_actor, _m_toid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
        ::Ice::Int _m_actor;
        ::Ice::Int _m_toid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__dispatchAgain_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(source, stype, actor, toid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::ReplaceXML(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::std::string& xml, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::std::string& xml, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_source(source),
            _m_stype(stype),
            _m_actor(actor),
            _m_xml(xml)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->ReplaceXML(_m_source, _m_stype, _m_actor, _m_xml, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
        ::Ice::Int _m_actor;
        const ::std::string& _m_xml;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__ReplaceXML_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(source, stype, actor, xml, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::DirectedSend(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::MyUtil::IntSeq& targets, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::MyUtil::IntSeq& targets, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_source(source),
            _m_stype(stype),
            _m_actor(actor),
            _m_targets(targets)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->DirectedSend(_m_source, _m_stype, _m_actor, _m_targets, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
        ::Ice::Int _m_actor;
        const ::MyUtil::IntSeq& _m_targets;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__DirectedSend_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(source, stype, actor, targets, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedAssistant::MarkFeed(::Ice::Int uid, ::Ice::Long fid, ::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, bool mark, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int uid, ::Ice::Long fid, ::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, bool mark, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_uid(uid),
            _m_fid(fid),
            _m_source(source),
            _m_stype(stype),
            _m_actor(actor),
            _m_mark(mark)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedAssistant* servant = dynamic_cast< ::xce::feed::FeedAssistant*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->MarkFeed(_m_uid, _m_fid, _m_source, _m_stype, _m_actor, _m_mark, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_uid;
        ::Ice::Long _m_fid;
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
        ::Ice::Int _m_actor;
        bool _m_mark;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedAssistant__MarkFeed_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(uid, fid, source, stype, actor, mark, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::xce::feed::FeedDataSeq
IceDelegateD::xce::feed::FocusManager::GetFocusFeedData(::Ice::Int user, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataSeq& __result, ::Ice::Int user, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_user(user),
            _m_begin(begin),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FocusManager* servant = dynamic_cast< ::xce::feed::FocusManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetFocusFeedData(_m_user, _m_begin, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataSeq& _result;
        ::Ice::Int _m_user;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FocusManager__GetFocusFeedData_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataSeq __result;
    try
    {
        _DirectI __direct(__result, user, begin, limit, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedDataSeq
IceDelegateD::xce::feed::FocusManager::GetFocusFeedDataByStype(::Ice::Int user, ::Ice::Int begin, ::Ice::Int limit, const ::MyUtil::IntSeq& stypes, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataSeq& __result, ::Ice::Int user, ::Ice::Int begin, ::Ice::Int limit, const ::MyUtil::IntSeq& stypes, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_user(user),
            _m_begin(begin),
            _m_limit(limit),
            _m_stypes(stypes)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FocusManager* servant = dynamic_cast< ::xce::feed::FocusManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetFocusFeedDataByStype(_m_user, _m_begin, _m_limit, _m_stypes, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataSeq& _result;
        ::Ice::Int _m_user;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_limit;
        const ::MyUtil::IntSeq& _m_stypes;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FocusManager__GetFocusFeedDataByStype_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataSeq __result;
    try
    {
        _DirectI __direct(__result, user, begin, limit, stypes, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

bool
IceDelegateD::xce::feed::FocusManager::AddFocuses(::Ice::Int user, ::Ice::Int target, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(bool& __result, ::Ice::Int user, ::Ice::Int target, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_user(user),
            _m_target(target)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FocusManager* servant = dynamic_cast< ::xce::feed::FocusManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->AddFocuses(_m_user, _m_target, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        bool& _result;
        ::Ice::Int _m_user;
        ::Ice::Int _m_target;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FocusManager__AddFocuses_name, ::Ice::Normal, __context);
    bool __result;
    try
    {
        _DirectI __direct(__result, user, target, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::xce::feed::FocusManager::DelFocuses(::Ice::Int user, ::Ice::Int target, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int user, ::Ice::Int target, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_user(user),
            _m_target(target)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FocusManager* servant = dynamic_cast< ::xce::feed::FocusManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->DelFocuses(_m_user, _m_target, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_user;
        ::Ice::Int _m_target;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FocusManager__DelFocuses_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(user, target, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::MyUtil::IntSeq
IceDelegateD::xce::feed::FocusManager::GetFocuses(::Ice::Int user, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::MyUtil::IntSeq& __result, ::Ice::Int user, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_user(user)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FocusManager* servant = dynamic_cast< ::xce::feed::FocusManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetFocuses(_m_user, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::MyUtil::IntSeq& _result;
        ::Ice::Int _m_user;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FocusManager__GetFocuses_name, ::Ice::Normal, __context);
    ::MyUtil::IntSeq __result;
    try
    {
        _DirectI __direct(__result, user, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::Ice::Int
IceDelegateD::xce::feed::FocusManager::GetFocusFeedIncCount(::Ice::Int user, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int& __result, ::Ice::Int user, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_user(user)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FocusManager* servant = dynamic_cast< ::xce::feed::FocusManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetFocusFeedIncCount(_m_user, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
        ::Ice::Int _m_user;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FocusManager__GetFocusFeedIncCount_name, ::Ice::Normal, __context);
    ::Ice::Int __result;
    try
    {
        _DirectI __direct(__result, user, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::Ice::Int
IceDelegateD::xce::feed::FocusManager::AddFocusWithCheck(::Ice::Int user, ::Ice::Int target, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int& __result, ::Ice::Int user, ::Ice::Int target, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_user(user),
            _m_target(target)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FocusManager* servant = dynamic_cast< ::xce::feed::FocusManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->AddFocusWithCheck(_m_user, _m_target, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
        ::Ice::Int _m_user;
        ::Ice::Int _m_target;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FocusManager__AddFocusWithCheck_name, ::Ice::Normal, __context);
    ::Ice::Int __result;
    try
    {
        _DirectI __direct(__result, user, target, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedDataResPtr
IceDelegateD::xce::feed::FeedNewsManager::GetLiveFeedData(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataResPtr& __result, ::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_begin(begin),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetLiveFeedData(_m_uid, _m_begin, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataResPtr& _result;
        ::Ice::Int _m_uid;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__GetLiveFeedData_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataResPtr __result;
    try
    {
        _DirectI __direct(__result, uid, begin, limit, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedDataResPtr
IceDelegateD::xce::feed::FeedNewsManager::GetLiveFeedDataByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataResPtr& __result, ::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_stypes(stypes),
            _m_begin(begin),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetLiveFeedDataByStype(_m_uid, _m_stypes, _m_begin, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataResPtr& _result;
        ::Ice::Int _m_uid;
        const ::MyUtil::IntSeq& _m_stypes;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__GetLiveFeedDataByStype_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataResPtr __result;
    try
    {
        _DirectI __direct(__result, uid, stypes, begin, limit, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedDataResPtr
IceDelegateD::xce::feed::FeedNewsManager::GetLiveFeedDataByType(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataResPtr& __result, ::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_stypes(stypes),
            _m_begin(begin),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetLiveFeedDataByType(_m_uid, _m_stypes, _m_begin, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataResPtr& _result;
        ::Ice::Int _m_uid;
        const ::MyUtil::IntSeq& _m_stypes;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__GetLiveFeedDataByType_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataResPtr __result;
    try
    {
        _DirectI __direct(__result, uid, stypes, begin, limit, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedDataResPtr
IceDelegateD::xce::feed::FeedNewsManager::GetHotFeedData(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataResPtr& __result, ::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_begin(begin),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetHotFeedData(_m_uid, _m_begin, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataResPtr& _result;
        ::Ice::Int _m_uid;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__GetHotFeedData_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataResPtr __result;
    try
    {
        _DirectI __direct(__result, uid, begin, limit, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedDataResPtr
IceDelegateD::xce::feed::FeedNewsManager::GetHotFeedDataByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataResPtr& __result, ::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_stypes(stypes),
            _m_begin(begin),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetHotFeedDataByStype(_m_uid, _m_stypes, _m_begin, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataResPtr& _result;
        ::Ice::Int _m_uid;
        const ::MyUtil::IntSeq& _m_stypes;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__GetHotFeedDataByStype_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataResPtr __result;
    try
    {
        _DirectI __direct(__result, uid, stypes, begin, limit, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedDataResPtr
IceDelegateD::xce::feed::FeedNewsManager::GetHotFeedDataByType(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataResPtr& __result, ::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_stypes(stypes),
            _m_begin(begin),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetHotFeedDataByType(_m_uid, _m_stypes, _m_begin, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataResPtr& _result;
        ::Ice::Int _m_uid;
        const ::MyUtil::IntSeq& _m_stypes;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__GetHotFeedDataByType_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataResPtr __result;
    try
    {
        _DirectI __direct(__result, uid, stypes, begin, limit, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedDataSeq
IceDelegateD::xce::feed::FeedNewsManager::GetFeedDataByIds(const ::MyUtil::LongSeq& fids, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataSeq& __result, const ::MyUtil::LongSeq& fids, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_fids(fids)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetFeedDataByIds(_m_fids, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataSeq& _result;
        const ::MyUtil::LongSeq& _m_fids;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__GetFeedDataByIds_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataSeq __result;
    try
    {
        _DirectI __direct(__result, fids, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedDataSeq
IceDelegateD::xce::feed::FeedNewsManager::GetFeedDataByIdsWithUid(::Ice::Int uid, const ::MyUtil::LongSeq& fids, ::Ice::Long first, ::Ice::Int stype, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedDataSeq& __result, ::Ice::Int uid, const ::MyUtil::LongSeq& fids, ::Ice::Long first, ::Ice::Int stype, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_fids(fids),
            _m_first(first),
            _m_stype(stype)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetFeedDataByIdsWithUid(_m_uid, _m_fids, _m_first, _m_stype, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedDataSeq& _result;
        ::Ice::Int _m_uid;
        const ::MyUtil::LongSeq& _m_fids;
        ::Ice::Long _m_first;
        ::Ice::Int _m_stype;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__GetFeedDataByIdsWithUid_name, ::Ice::Normal, __context);
    ::xce::feed::FeedDataSeq __result;
    try
    {
        _DirectI __direct(__result, uid, fids, first, stype, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::xce::feed::FeedItemSeq
IceDelegateD::xce::feed::FeedNewsManager::GetOriginalFeedData(::Ice::Int uid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedItemSeq& __result, ::Ice::Int uid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetOriginalFeedData(_m_uid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedItemSeq& _result;
        ::Ice::Int _m_uid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__GetOriginalFeedData_name, ::Ice::Normal, __context);
    ::xce::feed::FeedItemSeq __result;
    try
    {
        _DirectI __direct(__result, uid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::Ice::Int
IceDelegateD::xce::feed::FeedNewsManager::GetUnviewedCount(::Ice::Int uid, ::Ice::Int type, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int& __result, ::Ice::Int uid, ::Ice::Int type, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_type(type)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetUnviewedCount(_m_uid, _m_type, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
        ::Ice::Int _m_uid;
        ::Ice::Int _m_type;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__GetUnviewedCount_name, ::Ice::Normal, __context);
    ::Ice::Int __result;
    try
    {
        _DirectI __direct(__result, uid, type, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::MyUtil::Int2IntMap
IceDelegateD::xce::feed::FeedNewsManager::GetCountMapByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, bool unviewed, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::MyUtil::Int2IntMap& __result, ::Ice::Int uid, const ::MyUtil::IntSeq& stypes, bool unviewed, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_stypes(stypes),
            _m_unviewed(unviewed)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetCountMapByStype(_m_uid, _m_stypes, _m_unviewed, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::MyUtil::Int2IntMap& _result;
        ::Ice::Int _m_uid;
        const ::MyUtil::IntSeq& _m_stypes;
        bool _m_unviewed;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__GetCountMapByStype_name, ::Ice::Normal, __context);
    ::MyUtil::Int2IntMap __result;
    try
    {
        _DirectI __direct(__result, uid, stypes, unviewed, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::xce::feed::FeedNewsManager::AddFeed(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_item(item),
            _m_config(config),
            _m_id2weight(id2weight)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->AddFeed(_m_item, _m_config, _m_id2weight, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::xce::feed::FeedItem& _m_item;
        const ::xce::feed::FeedConfigPtr& _m_config;
        const ::MyUtil::Int2IntMap& _m_id2weight;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__AddFeed_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(item, config, id2weight, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedNewsManager::SetRead(::Ice::Int uid, ::Ice::Int stype, ::Ice::Long merge, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int uid, ::Ice::Int stype, ::Ice::Long merge, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_uid(uid),
            _m_stype(stype),
            _m_merge(merge)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->SetRead(_m_uid, _m_stype, _m_merge, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_uid;
        ::Ice::Int _m_stype;
        ::Ice::Long _m_merge;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__SetRead_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(uid, stype, merge, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedNewsManager::SetReadById(::Ice::Int uid, ::Ice::Long feedId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int uid, ::Ice::Long feedId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_uid(uid),
            _m_feedId(feedId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->SetReadById(_m_uid, _m_feedId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_uid;
        ::Ice::Long _m_feedId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__SetReadById_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(uid, feedId, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedNewsManager::SetReadAll(::Ice::Int uid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int uid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_uid(uid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->SetReadAll(_m_uid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_uid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__SetReadAll_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(uid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

bool
IceDelegateD::xce::feed::FeedNewsManager::HasFeed(::Ice::Int uid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(bool& __result, ::Ice::Int uid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->HasFeed(_m_uid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        bool& _result;
        ::Ice::Int _m_uid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__HasFeed_name, ::Ice::Normal, __context);
    bool __result;
    try
    {
        _DirectI __direct(__result, uid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::xce::feed::FeedNewsManager::load(::Ice::Int userid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int userid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userid(userid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->load(_m_userid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_userid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__load_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::xce::feed::FeedItemSeqSeq
IceDelegateD::xce::feed::FeedNewsManager::GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq& uids, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::feed::FeedItemSeqSeq& __result, const ::MyUtil::IntSeq& uids, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uids(uids)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetFeedItemSeqSeqByUsers(_m_uids, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::feed::FeedItemSeqSeq& _result;
        const ::MyUtil::IntSeq& _m_uids;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__GetFeedItemSeqSeqByUsers_name, ::Ice::Normal, __context);
    ::xce::feed::FeedItemSeqSeq __result;
    try
    {
        _DirectI __direct(__result, uids, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::xce::feed::FeedNewsManager::MarkFeed(::Ice::Int uid, ::Ice::Long fid, ::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, bool mark, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int uid, ::Ice::Long fid, ::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, bool mark, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_uid(uid),
            _m_fid(fid),
            _m_source(source),
            _m_stype(stype),
            _m_actor(actor),
            _m_mark(mark)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->MarkFeed(_m_uid, _m_fid, _m_source, _m_stype, _m_actor, _m_mark, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_uid;
        ::Ice::Long _m_fid;
        ::Ice::Long _m_source;
        ::Ice::Int _m_stype;
        ::Ice::Int _m_actor;
        bool _m_mark;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__MarkFeed_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(uid, fid, source, stype, actor, mark, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedNewsManager::EraseUser(::Ice::Int uid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int uid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_uid(uid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->EraseUser(_m_uid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_uid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__EraseUser_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(uid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedNewsManager::AddFeedReply(const ::xce::feed::FeedIndexPtr& idx, ::Ice::Int replycnt, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::xce::feed::FeedIndexPtr& idx, ::Ice::Int replycnt, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_idx(idx),
            _m_replycnt(replycnt)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->AddFeedReply(_m_idx, _m_replycnt, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::xce::feed::FeedIndexPtr& _m_idx;
        ::Ice::Int _m_replycnt;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__AddFeedReply_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(idx, replycnt, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedNewsManager::AddWhiteList(::Ice::Int userid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int userid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userid(userid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->AddWhiteList(_m_userid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_userid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__AddWhiteList_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::xce::feed::FeedNewsManager::DelWhiteList(::Ice::Int userid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int userid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userid(userid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->DelWhiteList(_m_userid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_userid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__DelWhiteList_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userid, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::MyUtil::IntSeq
IceDelegateD::xce::feed::FeedNewsManager::GetWhiteList(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::MyUtil::IntSeq& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetWhiteList(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::MyUtil::IntSeq& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__GetWhiteList_name, ::Ice::Normal, __context);
    ::MyUtil::IntSeq __result;
    try
    {
        _DirectI __direct(__result, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

void
IceDelegateD::xce::feed::FeedNewsManager::ClearWhiteList(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::feed::FeedNewsManager* servant = dynamic_cast< ::xce::feed::FeedNewsManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->ClearWhiteList(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__feed__FeedNewsManager__ClearWhiteList_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(__current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

xce::feed::FeedSeed::FeedSeed(::Ice::Long __ice_feed, ::Ice::Long __ice_miniMerge, ::Ice::Long __ice_newsMerge, ::Ice::Long __ice_source, ::Ice::Long __ice_psource, ::Ice::Int __ice_actor, ::Ice::Int __ice_type, ::Ice::Int __ice_ptype, ::Ice::Int __ice_time, ::Ice::Int __ice_baseWeight, const ::std::string& __ice_xml, const ::MyUtil::Str2StrMap& __ice_extraProps) :
    feed(__ice_feed),
    miniMerge(__ice_miniMerge),
    newsMerge(__ice_newsMerge),
    source(__ice_source),
    psource(__ice_psource),
    actor(__ice_actor),
    type(__ice_type),
    ptype(__ice_ptype),
    time(__ice_time),
    baseWeight(__ice_baseWeight),
    xml(__ice_xml),
    extraProps(__ice_extraProps)
{
}

::Ice::ObjectPtr
xce::feed::FeedSeed::ice_clone() const
{
    ::xce::feed::FeedSeedPtr __p = new ::xce::feed::FeedSeed(*this);
    return __p;
}

static const ::std::string __xce__feed__FeedSeed_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedSeed"
};

bool
xce::feed::FeedSeed::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedSeed_ids, __xce__feed__FeedSeed_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedSeed::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedSeed_ids[0], &__xce__feed__FeedSeed_ids[2]);
}

const ::std::string&
xce::feed::FeedSeed::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedSeed_ids[1];
}

const ::std::string&
xce::feed::FeedSeed::ice_staticId()
{
    return __xce__feed__FeedSeed_ids[1];
}

void
xce::feed::FeedSeed::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(feed);
    __os->write(miniMerge);
    __os->write(newsMerge);
    __os->write(source);
    __os->write(psource);
    __os->write(actor);
    __os->write(type);
    __os->write(ptype);
    __os->write(time);
    __os->write(baseWeight);
    __os->write(xml);
    ::MyUtil::__writeStr2StrMap(__os, extraProps);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedSeed::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(feed);
    __is->read(miniMerge);
    __is->read(newsMerge);
    __is->read(source);
    __is->read(psource);
    __is->read(actor);
    __is->read(type);
    __is->read(ptype);
    __is->read(time);
    __is->read(baseWeight);
    __is->read(xml);
    ::MyUtil::__readStr2StrMap(__is, extraProps);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedSeed::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedSeed was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedSeed::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedSeed was not generated with stream support";
    throw ex;
}

class __F__xce__feed__FeedSeed : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::xce::feed::FeedSeed::ice_staticId());
        return new ::xce::feed::FeedSeed;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__xce__feed__FeedSeed_Ptr = new __F__xce__feed__FeedSeed;

const ::Ice::ObjectFactoryPtr&
xce::feed::FeedSeed::ice_factory()
{
    return __F__xce__feed__FeedSeed_Ptr;
}

class __F__xce__feed__FeedSeed__Init
{
public:

    __F__xce__feed__FeedSeed__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::xce::feed::FeedSeed::ice_staticId(), ::xce::feed::FeedSeed::ice_factory());
    }

    ~__F__xce__feed__FeedSeed__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::xce::feed::FeedSeed::ice_staticId());
    }
};

static __F__xce__feed__FeedSeed__Init __F__xce__feed__FeedSeed__i;

#ifdef __APPLE__
extern "C" { void __F__xce__feed__FeedSeed__initializer() {} }
#endif

void 
xce::feed::__patch__FeedSeedPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedSeedPtr* p = static_cast< ::xce::feed::FeedSeedPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedSeedPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedSeed::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedSeed& l, const ::xce::feed::FeedSeed& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedSeed& l, const ::xce::feed::FeedSeed& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

xce::feed::FeedReply::FeedReply(::Ice::Long __ice_oldReplyId, const ::std::string& __ice_oldReply, ::Ice::Long __ice_newReplyId, const ::std::string& __ice_newReply, ::Ice::Int __ice_count) :
    oldReplyId(__ice_oldReplyId),
    oldReply(__ice_oldReply),
    newReplyId(__ice_newReplyId),
    newReply(__ice_newReply),
    count(__ice_count)
{
}

::Ice::ObjectPtr
xce::feed::FeedReply::ice_clone() const
{
    ::xce::feed::FeedReplyPtr __p = new ::xce::feed::FeedReply(*this);
    return __p;
}

static const ::std::string __xce__feed__FeedReply_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedReply"
};

bool
xce::feed::FeedReply::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedReply_ids, __xce__feed__FeedReply_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedReply::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedReply_ids[0], &__xce__feed__FeedReply_ids[2]);
}

const ::std::string&
xce::feed::FeedReply::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedReply_ids[1];
}

const ::std::string&
xce::feed::FeedReply::ice_staticId()
{
    return __xce__feed__FeedReply_ids[1];
}

void
xce::feed::FeedReply::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(oldReplyId);
    __os->write(oldReply);
    __os->write(newReplyId);
    __os->write(newReply);
    __os->write(count);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedReply::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(oldReplyId);
    __is->read(oldReply);
    __is->read(newReplyId);
    __is->read(newReply);
    __is->read(count);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedReply::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedReply was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedReply::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedReply was not generated with stream support";
    throw ex;
}

class __F__xce__feed__FeedReply : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::xce::feed::FeedReply::ice_staticId());
        return new ::xce::feed::FeedReply;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__xce__feed__FeedReply_Ptr = new __F__xce__feed__FeedReply;

const ::Ice::ObjectFactoryPtr&
xce::feed::FeedReply::ice_factory()
{
    return __F__xce__feed__FeedReply_Ptr;
}

class __F__xce__feed__FeedReply__Init
{
public:

    __F__xce__feed__FeedReply__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::xce::feed::FeedReply::ice_staticId(), ::xce::feed::FeedReply::ice_factory());
    }

    ~__F__xce__feed__FeedReply__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::xce::feed::FeedReply::ice_staticId());
    }
};

static __F__xce__feed__FeedReply__Init __F__xce__feed__FeedReply__i;

#ifdef __APPLE__
extern "C" { void __F__xce__feed__FeedReply__initializer() {} }
#endif

void 
xce::feed::__patch__FeedReplyPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedReplyPtr* p = static_cast< ::xce::feed::FeedReplyPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedReplyPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedReply::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedReply& l, const ::xce::feed::FeedReply& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedReply& l, const ::xce::feed::FeedReply& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

xce::feed::ReplyData::ReplyData(::Ice::Long __ice_source, ::Ice::Int __ice_stype, ::Ice::Int __ice_actor, ::Ice::Int __ice_replyCount, ::Ice::Long __ice_replyId, ::Ice::Int __ice_time, const ::std::string& __ice_xml) :
    source(__ice_source),
    stype(__ice_stype),
    actor(__ice_actor),
    replyCount(__ice_replyCount),
    replyId(__ice_replyId),
    time(__ice_time),
    xml(__ice_xml)
{
}

::Ice::ObjectPtr
xce::feed::ReplyData::ice_clone() const
{
    ::xce::feed::ReplyDataPtr __p = new ::xce::feed::ReplyData(*this);
    return __p;
}

static const ::std::string __xce__feed__ReplyData_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::ReplyData"
};

bool
xce::feed::ReplyData::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__ReplyData_ids, __xce__feed__ReplyData_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::ReplyData::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__ReplyData_ids[0], &__xce__feed__ReplyData_ids[2]);
}

const ::std::string&
xce::feed::ReplyData::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__ReplyData_ids[1];
}

const ::std::string&
xce::feed::ReplyData::ice_staticId()
{
    return __xce__feed__ReplyData_ids[1];
}

void
xce::feed::ReplyData::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(source);
    __os->write(stype);
    __os->write(actor);
    __os->write(replyCount);
    __os->write(replyId);
    __os->write(time);
    __os->write(xml);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::ReplyData::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(source);
    __is->read(stype);
    __is->read(actor);
    __is->read(replyCount);
    __is->read(replyId);
    __is->read(time);
    __is->read(xml);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::ReplyData::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::ReplyData was not generated with stream support";
    throw ex;
}

void
xce::feed::ReplyData::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::ReplyData was not generated with stream support";
    throw ex;
}

class __F__xce__feed__ReplyData : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::xce::feed::ReplyData::ice_staticId());
        return new ::xce::feed::ReplyData;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__xce__feed__ReplyData_Ptr = new __F__xce__feed__ReplyData;

const ::Ice::ObjectFactoryPtr&
xce::feed::ReplyData::ice_factory()
{
    return __F__xce__feed__ReplyData_Ptr;
}

class __F__xce__feed__ReplyData__Init
{
public:

    __F__xce__feed__ReplyData__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::xce::feed::ReplyData::ice_staticId(), ::xce::feed::ReplyData::ice_factory());
    }

    ~__F__xce__feed__ReplyData__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::xce::feed::ReplyData::ice_staticId());
    }
};

static __F__xce__feed__ReplyData__Init __F__xce__feed__ReplyData__i;

#ifdef __APPLE__
extern "C" { void __F__xce__feed__ReplyData__initializer() {} }
#endif

void 
xce::feed::__patch__ReplyDataPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::ReplyDataPtr* p = static_cast< ::xce::feed::ReplyDataPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::ReplyDataPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::ReplyData::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::ReplyData& l, const ::xce::feed::ReplyData& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::ReplyData& l, const ::xce::feed::ReplyData& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

xce::feed::FeedData::FeedData(::Ice::Long __ice_feed, ::Ice::Long __ice_source, ::Ice::Int __ice_actor, ::Ice::Int __ice_type, const ::std::string& __ice_xml, ::Ice::Int __ice_time, ::Ice::Int __ice_weight) :
    feed(__ice_feed),
    source(__ice_source),
    actor(__ice_actor),
    type(__ice_type),
    xml(__ice_xml),
    time(__ice_time),
    weight(__ice_weight)
{
}

::Ice::ObjectPtr
xce::feed::FeedData::ice_clone() const
{
    ::xce::feed::FeedDataPtr __p = new ::xce::feed::FeedData(*this);
    return __p;
}

static const ::std::string __xce__feed__FeedData_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedData"
};

bool
xce::feed::FeedData::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedData_ids, __xce__feed__FeedData_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedData::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedData_ids[0], &__xce__feed__FeedData_ids[2]);
}

const ::std::string&
xce::feed::FeedData::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedData_ids[1];
}

const ::std::string&
xce::feed::FeedData::ice_staticId()
{
    return __xce__feed__FeedData_ids[1];
}

void
xce::feed::FeedData::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(feed);
    __os->write(source);
    __os->write(actor);
    __os->write(type);
    __os->write(xml);
    __os->write(time);
    __os->write(weight);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedData::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(feed);
    __is->read(source);
    __is->read(actor);
    __is->read(type);
    __is->read(xml);
    __is->read(time);
    __is->read(weight);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedData::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedData was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedData::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedData was not generated with stream support";
    throw ex;
}

class __F__xce__feed__FeedData : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::xce::feed::FeedData::ice_staticId());
        return new ::xce::feed::FeedData;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__xce__feed__FeedData_Ptr = new __F__xce__feed__FeedData;

const ::Ice::ObjectFactoryPtr&
xce::feed::FeedData::ice_factory()
{
    return __F__xce__feed__FeedData_Ptr;
}

class __F__xce__feed__FeedData__Init
{
public:

    __F__xce__feed__FeedData__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::xce::feed::FeedData::ice_staticId(), ::xce::feed::FeedData::ice_factory());
    }

    ~__F__xce__feed__FeedData__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::xce::feed::FeedData::ice_staticId());
    }
};

static __F__xce__feed__FeedData__Init __F__xce__feed__FeedData__i;

#ifdef __APPLE__
extern "C" { void __F__xce__feed__FeedData__initializer() {} }
#endif

void 
xce::feed::__patch__FeedDataPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedDataPtr* p = static_cast< ::xce::feed::FeedDataPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedDataPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedData::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedData& l, const ::xce::feed::FeedData& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedData& l, const ::xce::feed::FeedData& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

xce::feed::FeedDataByte::FeedDataByte(::Ice::Long __ice_feed, ::Ice::Long __ice_source, ::Ice::Int __ice_actor, ::Ice::Int __ice_type, const ::xce::feed::ByteSeq& __ice_xml, ::Ice::Int __ice_time, ::Ice::Int __ice_weight) :
    feed(__ice_feed),
    source(__ice_source),
    actor(__ice_actor),
    type(__ice_type),
    xml(__ice_xml),
    time(__ice_time),
    weight(__ice_weight)
{
}

::Ice::ObjectPtr
xce::feed::FeedDataByte::ice_clone() const
{
    ::xce::feed::FeedDataBytePtr __p = new ::xce::feed::FeedDataByte(*this);
    return __p;
}

static const ::std::string __xce__feed__FeedDataByte_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedDataByte"
};

bool
xce::feed::FeedDataByte::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedDataByte_ids, __xce__feed__FeedDataByte_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedDataByte::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedDataByte_ids[0], &__xce__feed__FeedDataByte_ids[2]);
}

const ::std::string&
xce::feed::FeedDataByte::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedDataByte_ids[1];
}

const ::std::string&
xce::feed::FeedDataByte::ice_staticId()
{
    return __xce__feed__FeedDataByte_ids[1];
}

void
xce::feed::FeedDataByte::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(feed);
    __os->write(source);
    __os->write(actor);
    __os->write(type);
    if(xml.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&xml[0], &xml[0] + xml.size());
    }
    __os->write(time);
    __os->write(weight);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedDataByte::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(feed);
    __is->read(source);
    __is->read(actor);
    __is->read(type);
    ::std::pair<const ::Ice::Byte*, const ::Ice::Byte*> ___xml;
    __is->read(___xml);
    ::std::vector< ::Ice::Byte>(___xml.first, ___xml.second).swap(xml);
    __is->read(time);
    __is->read(weight);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedDataByte::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedDataByte was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedDataByte::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedDataByte was not generated with stream support";
    throw ex;
}

class __F__xce__feed__FeedDataByte : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::xce::feed::FeedDataByte::ice_staticId());
        return new ::xce::feed::FeedDataByte;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__xce__feed__FeedDataByte_Ptr = new __F__xce__feed__FeedDataByte;

const ::Ice::ObjectFactoryPtr&
xce::feed::FeedDataByte::ice_factory()
{
    return __F__xce__feed__FeedDataByte_Ptr;
}

class __F__xce__feed__FeedDataByte__Init
{
public:

    __F__xce__feed__FeedDataByte__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::xce::feed::FeedDataByte::ice_staticId(), ::xce::feed::FeedDataByte::ice_factory());
    }

    ~__F__xce__feed__FeedDataByte__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::xce::feed::FeedDataByte::ice_staticId());
    }
};

static __F__xce__feed__FeedDataByte__Init __F__xce__feed__FeedDataByte__i;

#ifdef __APPLE__
extern "C" { void __F__xce__feed__FeedDataByte__initializer() {} }
#endif

void 
xce::feed::__patch__FeedDataBytePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedDataBytePtr* p = static_cast< ::xce::feed::FeedDataBytePtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedDataBytePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedDataByte::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedDataByte& l, const ::xce::feed::FeedDataByte& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedDataByte& l, const ::xce::feed::FeedDataByte& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

xce::feed::FeedDataByteRes::FeedDataByteRes(::Ice::Int __ice_UnviewedCount, const ::xce::feed::FeedDataByteSeq& __ice_data) :
    UnviewedCount(__ice_UnviewedCount),
    data(__ice_data)
{
}

::Ice::ObjectPtr
xce::feed::FeedDataByteRes::ice_clone() const
{
    ::xce::feed::FeedDataByteResPtr __p = new ::xce::feed::FeedDataByteRes(*this);
    return __p;
}

static const ::std::string __xce__feed__FeedDataByteRes_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedDataByteRes"
};

bool
xce::feed::FeedDataByteRes::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedDataByteRes_ids, __xce__feed__FeedDataByteRes_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedDataByteRes::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedDataByteRes_ids[0], &__xce__feed__FeedDataByteRes_ids[2]);
}

const ::std::string&
xce::feed::FeedDataByteRes::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedDataByteRes_ids[1];
}

const ::std::string&
xce::feed::FeedDataByteRes::ice_staticId()
{
    return __xce__feed__FeedDataByteRes_ids[1];
}

void
xce::feed::FeedDataByteRes::__incRef()
{
    __gcIncRef();
}

void
xce::feed::FeedDataByteRes::__decRef()
{
    __gcDecRef();
}

void
xce::feed::FeedDataByteRes::__addObject(::IceInternal::GCCountMap& _c)
{
    ::IceInternal::GCCountMap::iterator pos = _c.find(this);
    if(pos == _c.end())
    {
        _c[this] = 1;
    }
    else
    {
        ++pos->second;
    }
}

bool
xce::feed::FeedDataByteRes::__usesClasses()
{
    return true;
}

void
xce::feed::FeedDataByteRes::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    {
        for(::xce::feed::FeedDataByteSeq::const_iterator _i0 = data.begin(); _i0 != data.end(); ++_i0)
        {
            if((*_i0))
            {
                ::IceInternal::upCast((*_i0).get())->__addObject(_c);
            }
        }
    }
}

void
xce::feed::FeedDataByteRes::__gcClear()
{
    {
        for(::xce::feed::FeedDataByteSeq::iterator _i0 = data.begin(); _i0 != data.end(); ++_i0)
        {
            if((*_i0))
            {
                if(::IceInternal::upCast((*_i0).get())->__usesClasses())
                {
                    ::IceInternal::upCast((*_i0).get())->__decRefUnsafe();
                    (*_i0).__clearHandleUnsafe();
                }
                else
                {
                    (*_i0) = 0;
                }
            }
        }
    }
}

void
xce::feed::FeedDataByteRes::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(UnviewedCount);
    if(data.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedDataByteSeq(__os, &data[0], &data[0] + data.size());
    }
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedDataByteRes::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(UnviewedCount);
    ::xce::feed::__readFeedDataByteSeq(__is, data);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedDataByteRes::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedDataByteRes was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedDataByteRes::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedDataByteRes was not generated with stream support";
    throw ex;
}

class __F__xce__feed__FeedDataByteRes : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::xce::feed::FeedDataByteRes::ice_staticId());
        return new ::xce::feed::FeedDataByteRes;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__xce__feed__FeedDataByteRes_Ptr = new __F__xce__feed__FeedDataByteRes;

const ::Ice::ObjectFactoryPtr&
xce::feed::FeedDataByteRes::ice_factory()
{
    return __F__xce__feed__FeedDataByteRes_Ptr;
}

class __F__xce__feed__FeedDataByteRes__Init
{
public:

    __F__xce__feed__FeedDataByteRes__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::xce::feed::FeedDataByteRes::ice_staticId(), ::xce::feed::FeedDataByteRes::ice_factory());
    }

    ~__F__xce__feed__FeedDataByteRes__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::xce::feed::FeedDataByteRes::ice_staticId());
    }
};

static __F__xce__feed__FeedDataByteRes__Init __F__xce__feed__FeedDataByteRes__i;

#ifdef __APPLE__
extern "C" { void __F__xce__feed__FeedDataByteRes__initializer() {} }
#endif

void 
xce::feed::__patch__FeedDataByteResPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedDataByteResPtr* p = static_cast< ::xce::feed::FeedDataByteResPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedDataByteResPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedDataByteRes::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedDataByteRes& l, const ::xce::feed::FeedDataByteRes& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedDataByteRes& l, const ::xce::feed::FeedDataByteRes& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

xce::feed::FeedContent::FeedContent(const ::xce::feed::FeedDataPtr& __ice_data, const ::xce::feed::FeedReplyPtr& __ice_reply) :
    data(__ice_data),
    reply(__ice_reply)
{
}

::Ice::ObjectPtr
xce::feed::FeedContent::ice_clone() const
{
    ::xce::feed::FeedContentPtr __p = new ::xce::feed::FeedContent(*this);
    return __p;
}

static const ::std::string __xce__feed__FeedContent_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedContent"
};

bool
xce::feed::FeedContent::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedContent_ids, __xce__feed__FeedContent_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedContent::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedContent_ids[0], &__xce__feed__FeedContent_ids[2]);
}

const ::std::string&
xce::feed::FeedContent::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedContent_ids[1];
}

const ::std::string&
xce::feed::FeedContent::ice_staticId()
{
    return __xce__feed__FeedContent_ids[1];
}

void
xce::feed::FeedContent::__incRef()
{
    __gcIncRef();
}

void
xce::feed::FeedContent::__decRef()
{
    __gcDecRef();
}

void
xce::feed::FeedContent::__addObject(::IceInternal::GCCountMap& _c)
{
    ::IceInternal::GCCountMap::iterator pos = _c.find(this);
    if(pos == _c.end())
    {
        _c[this] = 1;
    }
    else
    {
        ++pos->second;
    }
}

bool
xce::feed::FeedContent::__usesClasses()
{
    return true;
}

void
xce::feed::FeedContent::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(data)
    {
        ::IceInternal::upCast(data.get())->__addObject(_c);
    }
    if(reply)
    {
        ::IceInternal::upCast(reply.get())->__addObject(_c);
    }
}

void
xce::feed::FeedContent::__gcClear()
{
    if(data)
    {
        if(::IceInternal::upCast(data.get())->__usesClasses())
        {
            ::IceInternal::upCast(data.get())->__decRefUnsafe();
            data.__clearHandleUnsafe();
        }
        else
        {
            data = 0;
        }
    }
    if(reply)
    {
        if(::IceInternal::upCast(reply.get())->__usesClasses())
        {
            ::IceInternal::upCast(reply.get())->__decRefUnsafe();
            reply.__clearHandleUnsafe();
        }
        else
        {
            reply = 0;
        }
    }
}

void
xce::feed::FeedContent::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(data.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(reply.get())));
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedContent::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::xce::feed::__patch__FeedDataPtr, &data);
    __is->read(::xce::feed::__patch__FeedReplyPtr, &reply);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedContent::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedContent was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedContent::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedContent was not generated with stream support";
    throw ex;
}

class __F__xce__feed__FeedContent : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::xce::feed::FeedContent::ice_staticId());
        return new ::xce::feed::FeedContent;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__xce__feed__FeedContent_Ptr = new __F__xce__feed__FeedContent;

const ::Ice::ObjectFactoryPtr&
xce::feed::FeedContent::ice_factory()
{
    return __F__xce__feed__FeedContent_Ptr;
}

class __F__xce__feed__FeedContent__Init
{
public:

    __F__xce__feed__FeedContent__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::xce::feed::FeedContent::ice_staticId(), ::xce::feed::FeedContent::ice_factory());
    }

    ~__F__xce__feed__FeedContent__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::xce::feed::FeedContent::ice_staticId());
    }
};

static __F__xce__feed__FeedContent__Init __F__xce__feed__FeedContent__i;

#ifdef __APPLE__
extern "C" { void __F__xce__feed__FeedContent__initializer() {} }
#endif

void 
xce::feed::__patch__FeedContentPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedContentPtr* p = static_cast< ::xce::feed::FeedContentPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedContentPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedContent::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedContent& l, const ::xce::feed::FeedContent& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedContent& l, const ::xce::feed::FeedContent& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

xce::feed::FeedConfig::FeedConfig(const ::std::string& __ice_expr, bool __ice_updateTime, bool __ice_sendConfig, bool __ice_sendNewsConfig, bool __ice_sendMiniConfig) :
    expr(__ice_expr),
    updateTime(__ice_updateTime),
    sendConfig(__ice_sendConfig),
    sendNewsConfig(__ice_sendNewsConfig),
    sendMiniConfig(__ice_sendMiniConfig)
{
}

::Ice::ObjectPtr
xce::feed::FeedConfig::ice_clone() const
{
    ::xce::feed::FeedConfigPtr __p = new ::xce::feed::FeedConfig(*this);
    return __p;
}

static const ::std::string __xce__feed__FeedConfig_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedConfig"
};

bool
xce::feed::FeedConfig::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedConfig_ids, __xce__feed__FeedConfig_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedConfig::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedConfig_ids[0], &__xce__feed__FeedConfig_ids[2]);
}

const ::std::string&
xce::feed::FeedConfig::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedConfig_ids[1];
}

const ::std::string&
xce::feed::FeedConfig::ice_staticId()
{
    return __xce__feed__FeedConfig_ids[1];
}

void
xce::feed::FeedConfig::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(expr);
    __os->write(updateTime);
    __os->write(sendConfig);
    __os->write(sendNewsConfig);
    __os->write(sendMiniConfig);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedConfig::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(expr);
    __is->read(updateTime);
    __is->read(sendConfig);
    __is->read(sendNewsConfig);
    __is->read(sendMiniConfig);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedConfig::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedConfig was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedConfig::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedConfig was not generated with stream support";
    throw ex;
}

class __F__xce__feed__FeedConfig : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::xce::feed::FeedConfig::ice_staticId());
        return new ::xce::feed::FeedConfig;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__xce__feed__FeedConfig_Ptr = new __F__xce__feed__FeedConfig;

const ::Ice::ObjectFactoryPtr&
xce::feed::FeedConfig::ice_factory()
{
    return __F__xce__feed__FeedConfig_Ptr;
}

class __F__xce__feed__FeedConfig__Init
{
public:

    __F__xce__feed__FeedConfig__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::xce::feed::FeedConfig::ice_staticId(), ::xce::feed::FeedConfig::ice_factory());
    }

    ~__F__xce__feed__FeedConfig__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::xce::feed::FeedConfig::ice_staticId());
    }
};

static __F__xce__feed__FeedConfig__Init __F__xce__feed__FeedConfig__i;

#ifdef __APPLE__
extern "C" { void __F__xce__feed__FeedConfig__initializer() {} }
#endif

void 
xce::feed::__patch__FeedConfigPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedConfigPtr* p = static_cast< ::xce::feed::FeedConfigPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedConfigPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedConfig::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedConfig& l, const ::xce::feed::FeedConfig& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedConfig& l, const ::xce::feed::FeedConfig& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
xce::feed::FeedDispatcher::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __xce__feed__FeedDispatcher_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedDispatcher"
};

bool
xce::feed::FeedDispatcher::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedDispatcher_ids, __xce__feed__FeedDispatcher_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedDispatcher::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedDispatcher_ids[0], &__xce__feed__FeedDispatcher_ids[2]);
}

const ::std::string&
xce::feed::FeedDispatcher::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedDispatcher_ids[1];
}

const ::std::string&
xce::feed::FeedDispatcher::ice_staticId()
{
    return __xce__feed__FeedDispatcher_ids[1];
}

::Ice::DispatchStatus
xce::feed::FeedDispatcher::___dispatch(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::xce::feed::FeedSeedPtr seed;
    ::xce::feed::FeedConfigPtr config;
    __is->read(::xce::feed::__patch__FeedSeedPtr, &seed);
    __is->read(::xce::feed::__patch__FeedConfigPtr, &config);
    __is->readPendingObjects();
    __is->endReadEncaps();
    dispatch(seed, config, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedDispatcher::___dispatchReply(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::xce::feed::ReplyDataPtr data;
    ::xce::feed::FeedConfigPtr config;
    __is->read(::xce::feed::__patch__ReplyDataPtr, &data);
    __is->read(::xce::feed::__patch__FeedConfigPtr, &config);
    __is->readPendingObjects();
    __is->endReadEncaps();
    dispatchReply(data, config, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedDispatcher::___Reload(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::xce::feed::LoadType type;
    ::Ice::Int id;
    ::xce::feed::__read(__is, type);
    __is->read(id);
    __is->endReadEncaps();
    Reload(type, id, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedDispatcher::___ReloadBatch(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::xce::feed::LoadType type;
    ::MyUtil::IntSeq ids;
    ::xce::feed::__read(__is, type);
    __is->read(ids);
    __is->endReadEncaps();
    ReloadBatch(type, ids, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedDispatcher::___addBuddyNotify(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int host;
    ::Ice::Int guest;
    __is->read(host);
    __is->read(guest);
    __is->endReadEncaps();
    addBuddyNotify(host, guest, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedDispatcher::___buddyApplyNotify(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int host;
    ::Ice::Int guest;
    __is->read(host);
    __is->read(guest);
    __is->endReadEncaps();
    buddyApplyNotify(host, guest, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedDispatcher::___joinPageNotify(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int page;
    ::Ice::Int fans;
    __is->read(page);
    __is->read(fans);
    __is->endReadEncaps();
    joinPageNotify(page, fans, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedDispatcher::___guideBuddyReplyNotify(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int newUser;
    ::Ice::Int buddy;
    __is->read(newUser);
    __is->read(buddy);
    __is->endReadEncaps();
    guideBuddyReplyNotify(newUser, buddy, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedDispatcher::___addMiniSiteFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int siteid;
    ::Ice::Int userid;
    __is->read(siteid);
    __is->read(userid);
    __is->endReadEncaps();
    addMiniSiteFeed(siteid, userid, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __xce__feed__FeedDispatcher_all[] =
{
    "Reload",
    "ReloadBatch",
    "addBuddyNotify",
    "addMiniSiteFeed",
    "buddyApplyNotify",
    "dispatch",
    "dispatchReply",
    "guideBuddyReplyNotify",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "joinPageNotify"
};

::Ice::DispatchStatus
xce::feed::FeedDispatcher::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__xce__feed__FeedDispatcher_all, __xce__feed__FeedDispatcher_all + 13, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __xce__feed__FeedDispatcher_all)
    {
        case 0:
        {
            return ___Reload(in, current);
        }
        case 1:
        {
            return ___ReloadBatch(in, current);
        }
        case 2:
        {
            return ___addBuddyNotify(in, current);
        }
        case 3:
        {
            return ___addMiniSiteFeed(in, current);
        }
        case 4:
        {
            return ___buddyApplyNotify(in, current);
        }
        case 5:
        {
            return ___dispatch(in, current);
        }
        case 6:
        {
            return ___dispatchReply(in, current);
        }
        case 7:
        {
            return ___guideBuddyReplyNotify(in, current);
        }
        case 8:
        {
            return ___ice_id(in, current);
        }
        case 9:
        {
            return ___ice_ids(in, current);
        }
        case 10:
        {
            return ___ice_isA(in, current);
        }
        case 11:
        {
            return ___ice_ping(in, current);
        }
        case 12:
        {
            return ___joinPageNotify(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
xce::feed::FeedDispatcher::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedDispatcher::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedDispatcher::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedDispatcher was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedDispatcher::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedDispatcher was not generated with stream support";
    throw ex;
}

void 
xce::feed::__patch__FeedDispatcherPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedDispatcherPtr* p = static_cast< ::xce::feed::FeedDispatcherPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedDispatcherPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedDispatcher::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedDispatcher& l, const ::xce::feed::FeedDispatcher& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedDispatcher& l, const ::xce::feed::FeedDispatcher& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
xce::feed::FeedItemManager::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __xce__feed__FeedItemManager_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedItemManager"
};

bool
xce::feed::FeedItemManager::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedItemManager_ids, __xce__feed__FeedItemManager_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedItemManager::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedItemManager_ids[0], &__xce__feed__FeedItemManager_ids[2]);
}

const ::std::string&
xce::feed::FeedItemManager::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedItemManager_ids[1];
}

const ::std::string&
xce::feed::FeedItemManager::ice_staticId()
{
    return __xce__feed__FeedItemManager_ids[1];
}

::Ice::DispatchStatus
xce::feed::FeedItemManager::___getFeedDataByStype(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::MyUtil::IntSeq stypes;
    ::Ice::Int begin;
    ::Ice::Int limit;
    __is->read(uid);
    __is->read(stypes);
    __is->read(begin);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataSeq __ret = getFeedDataByStype(uid, stypes, begin, limit, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedDataSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedItemManager::___getFeedDataByType(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::MyUtil::IntSeq stypes;
    ::Ice::Int begin;
    ::Ice::Int limit;
    __is->read(uid);
    __is->read(stypes);
    __is->read(begin);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataSeq __ret = getFeedDataByType(uid, stypes, begin, limit, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedDataSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedItemManager::___getFeedData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Int begin;
    ::Ice::Int limit;
    __is->read(uid);
    __is->read(begin);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataSeq __ret = getFeedData(uid, begin, limit, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedDataSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedItemManager::___getFeedData2(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Int begin;
    ::Ice::Int limit;
    __is->read(uid);
    __is->read(begin);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataSeq __ret = getFeedData2(uid, begin, limit, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedDataSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedItemManager::___getFeedDataByIds(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::MyUtil::LongSeq fids;
    __is->read(fids);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataSeq __ret = getFeedDataByIds(fids, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedDataSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedItemManager::___addFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::xce::feed::FeedItem item;
    ::xce::feed::FeedConfigPtr config;
    ::MyUtil::Int2IntMap id2weight;
    item.__read(__is);
    __is->read(::xce::feed::__patch__FeedConfigPtr, &config);
    ::MyUtil::__readInt2IntMap(__is, id2weight);
    __is->readPendingObjects();
    __is->endReadEncaps();
    addFeed(item, config, id2weight, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedItemManager::___setRead(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Int stype;
    ::Ice::Long merge;
    __is->read(uid);
    __is->read(stype);
    __is->read(merge);
    __is->endReadEncaps();
    setRead(uid, stype, merge, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedItemManager::___setReadById(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Long feedId;
    __is->read(uid);
    __is->read(feedId);
    __is->endReadEncaps();
    setReadById(uid, feedId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedItemManager::___setReadAll(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    __is->read(uid);
    __is->endReadEncaps();
    setReadAll(uid, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedItemManager::___hasFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    __is->read(uid);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = hasFeed(uid, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedItemManager::___GetFeedItemSeqSeqByUsers(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::MyUtil::IntSeq uids;
    __is->read(uids);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedItemSeqSeq __ret = GetFeedItemSeqSeqByUsers(uids, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedItemSeqSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedItemManager::___PressureTest(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Int begin;
    ::Ice::Int limit;
    __is->read(uid);
    __is->read(begin);
    __is->read(limit);
    __is->endReadEncaps();
    PressureTest(uid, begin, limit, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedItemManager::___GetOriginalFeedData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    __is->read(uid);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedItemSeq __ret = GetOriginalFeedData(uid, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedItemSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedItemManager::___Reload(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    __is->read(uid);
    __is->endReadEncaps();
    Reload(uid, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __xce__feed__FeedItemManager_all[] =
{
    "GetFeedItemSeqSeqByUsers",
    "GetOriginalFeedData",
    "PressureTest",
    "Reload",
    "addFeed",
    "getFeedData",
    "getFeedData2",
    "getFeedDataByIds",
    "getFeedDataByStype",
    "getFeedDataByType",
    "hasFeed",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "setRead",
    "setReadAll",
    "setReadById"
};

::Ice::DispatchStatus
xce::feed::FeedItemManager::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__xce__feed__FeedItemManager_all, __xce__feed__FeedItemManager_all + 18, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __xce__feed__FeedItemManager_all)
    {
        case 0:
        {
            return ___GetFeedItemSeqSeqByUsers(in, current);
        }
        case 1:
        {
            return ___GetOriginalFeedData(in, current);
        }
        case 2:
        {
            return ___PressureTest(in, current);
        }
        case 3:
        {
            return ___Reload(in, current);
        }
        case 4:
        {
            return ___addFeed(in, current);
        }
        case 5:
        {
            return ___getFeedData(in, current);
        }
        case 6:
        {
            return ___getFeedData2(in, current);
        }
        case 7:
        {
            return ___getFeedDataByIds(in, current);
        }
        case 8:
        {
            return ___getFeedDataByStype(in, current);
        }
        case 9:
        {
            return ___getFeedDataByType(in, current);
        }
        case 10:
        {
            return ___hasFeed(in, current);
        }
        case 11:
        {
            return ___ice_id(in, current);
        }
        case 12:
        {
            return ___ice_ids(in, current);
        }
        case 13:
        {
            return ___ice_isA(in, current);
        }
        case 14:
        {
            return ___ice_ping(in, current);
        }
        case 15:
        {
            return ___setRead(in, current);
        }
        case 16:
        {
            return ___setReadAll(in, current);
        }
        case 17:
        {
            return ___setReadById(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
xce::feed::FeedItemManager::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedItemManager::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedItemManager::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedItemManager was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedItemManager::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedItemManager was not generated with stream support";
    throw ex;
}

void 
xce::feed::__patch__FeedItemManagerPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedItemManagerPtr* p = static_cast< ::xce::feed::FeedItemManagerPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedItemManagerPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedItemManager::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedItemManager& l, const ::xce::feed::FeedItemManager& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedItemManager& l, const ::xce::feed::FeedItemManager& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
xce::feed::FeedGroupManager::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __xce__feed__FeedGroupManager_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedGroupManager"
};

bool
xce::feed::FeedGroupManager::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedGroupManager_ids, __xce__feed__FeedGroupManager_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedGroupManager::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedGroupManager_ids[0], &__xce__feed__FeedGroupManager_ids[2]);
}

const ::std::string&
xce::feed::FeedGroupManager::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedGroupManager_ids[1];
}

const ::std::string&
xce::feed::FeedGroupManager::ice_staticId()
{
    return __xce__feed__FeedGroupManager_ids[1];
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___GetFeedData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int gid;
    ::Ice::Int memberid;
    ::Ice::Int begin;
    ::Ice::Int limit;
    __is->read(gid);
    __is->read(memberid);
    __is->read(begin);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataSeq __ret = GetFeedData(gid, memberid, begin, limit, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedDataSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___GetFeedDataByType(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int gid;
    ::Ice::Int memberid;
    ::MyUtil::IntSeq types;
    ::Ice::Int begin;
    ::Ice::Int limit;
    __is->read(gid);
    __is->read(memberid);
    __is->read(types);
    __is->read(begin);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataSeq __ret = GetFeedDataByType(gid, memberid, types, begin, limit, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedDataSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___GetFeedDataByStype(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int gid;
    ::Ice::Int memberid;
    ::MyUtil::IntSeq stypes;
    ::Ice::Int begin;
    ::Ice::Int limit;
    __is->read(gid);
    __is->read(memberid);
    __is->read(stypes);
    __is->read(begin);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataSeq __ret = GetFeedDataByStype(gid, memberid, stypes, begin, limit, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedDataSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___GetFeedItemSeqSeqByGroups(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::MyUtil::IntSeq groups;
    __is->read(groups);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedItemSeqSeq __ret = GetFeedItemSeqSeqByGroups(groups, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedItemSeqSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___GetOriginalFeedData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int gid;
    __is->read(gid);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedItemSeq __ret = GetOriginalFeedData(gid, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedItemSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___AddFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::xce::feed::FeedItem item;
    ::xce::feed::FeedConfigPtr config;
    ::MyUtil::Int2IntMap id2weight;
    item.__read(__is);
    __is->read(::xce::feed::__patch__FeedConfigPtr, &config);
    ::MyUtil::__readInt2IntMap(__is, id2weight);
    __is->readPendingObjects();
    __is->endReadEncaps();
    AddFeed(item, config, id2weight, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___RemoveFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int gid;
    ::Ice::Int stype;
    ::Ice::Long merge;
    __is->read(gid);
    __is->read(stype);
    __is->read(merge);
    __is->endReadEncaps();
    RemoveFeed(gid, stype, merge, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___RemoveFeedById(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int gid;
    ::Ice::Long feedId;
    __is->read(gid);
    __is->read(feedId);
    __is->endReadEncaps();
    RemoveFeedById(gid, feedId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___RemoveAllFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int gid;
    __is->read(gid);
    __is->endReadEncaps();
    RemoveAllFeed(gid, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___RefreshFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int gid;
    ::Ice::Long feedid;
    ::Ice::Int timestamp;
    __is->read(gid);
    __is->read(feedid);
    __is->read(timestamp);
    __is->endReadEncaps();
    RefreshFeed(gid, feedid, timestamp, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___ReplyFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int gid;
    ::Ice::Long feedid;
    ::Ice::Int timestamp;
    ::Ice::Int owner;
    ::Ice::Int replier;
    __is->read(gid);
    __is->read(feedid);
    __is->read(timestamp);
    __is->read(owner);
    __is->read(replier);
    __is->endReadEncaps();
    ReplyFeed(gid, feedid, timestamp, owner, replier, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___GetGroupsUnreadCount(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::MyUtil::IntSeq groups;
    __is->read(uid);
    __is->read(groups);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::MyUtil::Int2IntMap __ret = GetGroupsUnreadCount(uid, groups, __current);
    ::MyUtil::__writeInt2IntMap(__os, __ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___AddMember(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int groupid;
    ::Ice::Int memberid;
    __is->read(groupid);
    __is->read(memberid);
    __is->endReadEncaps();
    AddMember(groupid, memberid, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___RemoveMember(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int groupid;
    ::Ice::Int memberid;
    __is->read(groupid);
    __is->read(memberid);
    __is->endReadEncaps();
    RemoveMember(groupid, memberid, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___GetMembers(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::MyUtil::IntSeq gids;
    __is->read(gids);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::MyUtil::Int2IntSeqMap __ret = GetMembers(gids, __current);
    ::MyUtil::__writeInt2IntSeqMap(__os, __ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___GetMembersTest(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::MyUtil::IntSeq gids;
    __is->read(gids);
    __is->endReadEncaps();
    GetMembersTest(gids, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___HasFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int gid;
    __is->read(gid);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = HasFeed(gid, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___ReadAllFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int gid;
    ::Ice::Int uid;
    __is->read(gid);
    __is->read(uid);
    __is->endReadEncaps();
    ReadAllFeed(gid, uid, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedGroupManager::___Test(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int gid;
    ::Ice::Int mid;
    __is->read(gid);
    __is->read(mid);
    __is->endReadEncaps();
    Test(gid, mid, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __xce__feed__FeedGroupManager_all[] =
{
    "AddFeed",
    "AddMember",
    "GetFeedData",
    "GetFeedDataByStype",
    "GetFeedDataByType",
    "GetFeedItemSeqSeqByGroups",
    "GetGroupsUnreadCount",
    "GetMembers",
    "GetMembersTest",
    "GetOriginalFeedData",
    "HasFeed",
    "ReadAllFeed",
    "RefreshFeed",
    "RemoveAllFeed",
    "RemoveFeed",
    "RemoveFeedById",
    "RemoveMember",
    "ReplyFeed",
    "Test",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
xce::feed::FeedGroupManager::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__xce__feed__FeedGroupManager_all, __xce__feed__FeedGroupManager_all + 23, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __xce__feed__FeedGroupManager_all)
    {
        case 0:
        {
            return ___AddFeed(in, current);
        }
        case 1:
        {
            return ___AddMember(in, current);
        }
        case 2:
        {
            return ___GetFeedData(in, current);
        }
        case 3:
        {
            return ___GetFeedDataByStype(in, current);
        }
        case 4:
        {
            return ___GetFeedDataByType(in, current);
        }
        case 5:
        {
            return ___GetFeedItemSeqSeqByGroups(in, current);
        }
        case 6:
        {
            return ___GetGroupsUnreadCount(in, current);
        }
        case 7:
        {
            return ___GetMembers(in, current);
        }
        case 8:
        {
            return ___GetMembersTest(in, current);
        }
        case 9:
        {
            return ___GetOriginalFeedData(in, current);
        }
        case 10:
        {
            return ___HasFeed(in, current);
        }
        case 11:
        {
            return ___ReadAllFeed(in, current);
        }
        case 12:
        {
            return ___RefreshFeed(in, current);
        }
        case 13:
        {
            return ___RemoveAllFeed(in, current);
        }
        case 14:
        {
            return ___RemoveFeed(in, current);
        }
        case 15:
        {
            return ___RemoveFeedById(in, current);
        }
        case 16:
        {
            return ___RemoveMember(in, current);
        }
        case 17:
        {
            return ___ReplyFeed(in, current);
        }
        case 18:
        {
            return ___Test(in, current);
        }
        case 19:
        {
            return ___ice_id(in, current);
        }
        case 20:
        {
            return ___ice_ids(in, current);
        }
        case 21:
        {
            return ___ice_isA(in, current);
        }
        case 22:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
xce::feed::FeedGroupManager::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedGroupManager::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedGroupManager::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedGroupManager was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedGroupManager::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedGroupManager was not generated with stream support";
    throw ex;
}

void 
xce::feed::__patch__FeedGroupManagerPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedGroupManagerPtr* p = static_cast< ::xce::feed::FeedGroupManagerPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedGroupManagerPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedGroupManager::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedGroupManager& l, const ::xce::feed::FeedGroupManager& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedGroupManager& l, const ::xce::feed::FeedGroupManager& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
xce::feed::FeedGroupCount::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __xce__feed__FeedGroupCount_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedGroupCount"
};

bool
xce::feed::FeedGroupCount::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedGroupCount_ids, __xce__feed__FeedGroupCount_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedGroupCount::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedGroupCount_ids[0], &__xce__feed__FeedGroupCount_ids[2]);
}

const ::std::string&
xce::feed::FeedGroupCount::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedGroupCount_ids[1];
}

const ::std::string&
xce::feed::FeedGroupCount::ice_staticId()
{
    return __xce__feed__FeedGroupCount_ids[1];
}

::Ice::DispatchStatus
xce::feed::FeedGroupCount::___GetUnread(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::MyUtil::IntSeq groups;
    __is->read(uid);
    __is->read(groups);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::MyUtil::Int2IntMap __ret = GetUnread(uid, groups, __current);
    ::MyUtil::__writeInt2IntMap(__os, __ret);
    return ::Ice::DispatchOK;
}

static ::std::string __xce__feed__FeedGroupCount_all[] =
{
    "GetUnread",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
xce::feed::FeedGroupCount::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__xce__feed__FeedGroupCount_all, __xce__feed__FeedGroupCount_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __xce__feed__FeedGroupCount_all)
    {
        case 0:
        {
            return ___GetUnread(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
xce::feed::FeedGroupCount::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedGroupCount::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedGroupCount::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedGroupCount was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedGroupCount::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedGroupCount was not generated with stream support";
    throw ex;
}

void 
xce::feed::__patch__FeedGroupCountPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedGroupCountPtr* p = static_cast< ::xce::feed::FeedGroupCountPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedGroupCountPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedGroupCount::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedGroupCount& l, const ::xce::feed::FeedGroupCount& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedGroupCount& l, const ::xce::feed::FeedGroupCount& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
xce::feed::FeedContentManager::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __xce__feed__FeedContentManager_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedContentManager"
};

bool
xce::feed::FeedContentManager::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedContentManager_ids, __xce__feed__FeedContentManager_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedContentManager::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedContentManager_ids[0], &__xce__feed__FeedContentManager_ids[2]);
}

const ::std::string&
xce::feed::FeedContentManager::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedContentManager_ids[1];
}

const ::std::string&
xce::feed::FeedContentManager::ice_staticId()
{
    return __xce__feed__FeedContentManager_ids[1];
}

::Ice::DispatchStatus
xce::feed::FeedContentManager::___getFeedDict(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::MyUtil::LongSeq feedIds;
    __is->read(feedIds);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedContentDict __ret = getFeedDict(feedIds, __current);
    ::xce::feed::__writeFeedContentDict(__os, __ret);
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedContentManager::___addFeedContent(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::xce::feed::FeedDataPtr data;
    __is->read(::xce::feed::__patch__FeedDataPtr, &data);
    __is->readPendingObjects();
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = addFeedContent(data, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedContentManager::___replaceFeedReply(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::MyUtil::LongSeq feedIds;
    ::xce::feed::FeedReplyPtr reply;
    __is->read(feedIds);
    __is->read(::xce::feed::__patch__FeedReplyPtr, &reply);
    __is->readPendingObjects();
    __is->endReadEncaps();
    replaceFeedReply(feedIds, reply, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedContentManager::___removeFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long feedId;
    __is->read(feedId);
    __is->endReadEncaps();
    removeFeed(feedId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedContentManager::___removeFeeds(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::MyUtil::LongSeq feedIds;
    __is->read(feedIds);
    __is->endReadEncaps();
    removeFeeds(feedIds, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedContentManager::___recoveryContent(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long feedId;
    __is->read(feedId);
    __is->endReadEncaps();
    recoveryContent(feedId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedContentManager::___ReplaceXML(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::MyUtil::LongSeq feedIds;
    ::std::string xml;
    __is->read(feedIds);
    __is->read(xml);
    __is->endReadEncaps();
    ReplaceXML(feedIds, xml, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __xce__feed__FeedContentManager_all[] =
{
    "ReplaceXML",
    "addFeedContent",
    "getFeedDict",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "recoveryContent",
    "removeFeed",
    "removeFeeds",
    "replaceFeedReply"
};

::Ice::DispatchStatus
xce::feed::FeedContentManager::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__xce__feed__FeedContentManager_all, __xce__feed__FeedContentManager_all + 11, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __xce__feed__FeedContentManager_all)
    {
        case 0:
        {
            return ___ReplaceXML(in, current);
        }
        case 1:
        {
            return ___addFeedContent(in, current);
        }
        case 2:
        {
            return ___getFeedDict(in, current);
        }
        case 3:
        {
            return ___ice_id(in, current);
        }
        case 4:
        {
            return ___ice_ids(in, current);
        }
        case 5:
        {
            return ___ice_isA(in, current);
        }
        case 6:
        {
            return ___ice_ping(in, current);
        }
        case 7:
        {
            return ___recoveryContent(in, current);
        }
        case 8:
        {
            return ___removeFeed(in, current);
        }
        case 9:
        {
            return ___removeFeeds(in, current);
        }
        case 10:
        {
            return ___replaceFeedReply(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
xce::feed::FeedContentManager::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedContentManager::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedContentManager::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedContentManager was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedContentManager::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedContentManager was not generated with stream support";
    throw ex;
}

void 
xce::feed::__patch__FeedContentManagerPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedContentManagerPtr* p = static_cast< ::xce::feed::FeedContentManagerPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedContentManagerPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedContentManager::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedContentManager& l, const ::xce::feed::FeedContentManager& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedContentManager& l, const ::xce::feed::FeedContentManager& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

xce::feed::FeedIndex::FeedIndex(::Ice::Long __ice_feed, ::Ice::Long __ice_newsMerge, ::Ice::Long __ice_miniMerge, ::Ice::Long __ice_source, ::Ice::Long __ice_psource, ::Ice::Int __ice_actor, ::Ice::Int __ice_time, ::Ice::Int __ice_stype, ::Ice::Int __ice_ptype) :
    feed(__ice_feed),
    newsMerge(__ice_newsMerge),
    miniMerge(__ice_miniMerge),
    source(__ice_source),
    psource(__ice_psource),
    actor(__ice_actor),
    time(__ice_time),
    stype(__ice_stype),
    ptype(__ice_ptype)
{
}

::Ice::ObjectPtr
xce::feed::FeedIndex::ice_clone() const
{
    ::xce::feed::FeedIndexPtr __p = new ::xce::feed::FeedIndex(*this);
    return __p;
}

static const ::std::string __xce__feed__FeedIndex_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedIndex"
};

bool
xce::feed::FeedIndex::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedIndex_ids, __xce__feed__FeedIndex_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedIndex::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedIndex_ids[0], &__xce__feed__FeedIndex_ids[2]);
}

const ::std::string&
xce::feed::FeedIndex::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedIndex_ids[1];
}

const ::std::string&
xce::feed::FeedIndex::ice_staticId()
{
    return __xce__feed__FeedIndex_ids[1];
}

void
xce::feed::FeedIndex::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(feed);
    __os->write(newsMerge);
    __os->write(miniMerge);
    __os->write(source);
    __os->write(psource);
    __os->write(actor);
    __os->write(time);
    __os->write(stype);
    __os->write(ptype);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedIndex::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(feed);
    __is->read(newsMerge);
    __is->read(miniMerge);
    __is->read(source);
    __is->read(psource);
    __is->read(actor);
    __is->read(time);
    __is->read(stype);
    __is->read(ptype);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedIndex::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedIndex was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedIndex::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedIndex was not generated with stream support";
    throw ex;
}

class __F__xce__feed__FeedIndex : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::xce::feed::FeedIndex::ice_staticId());
        return new ::xce::feed::FeedIndex;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__xce__feed__FeedIndex_Ptr = new __F__xce__feed__FeedIndex;

const ::Ice::ObjectFactoryPtr&
xce::feed::FeedIndex::ice_factory()
{
    return __F__xce__feed__FeedIndex_Ptr;
}

class __F__xce__feed__FeedIndex__Init
{
public:

    __F__xce__feed__FeedIndex__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::xce::feed::FeedIndex::ice_staticId(), ::xce::feed::FeedIndex::ice_factory());
    }

    ~__F__xce__feed__FeedIndex__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::xce::feed::FeedIndex::ice_staticId());
    }
};

static __F__xce__feed__FeedIndex__Init __F__xce__feed__FeedIndex__i;

#ifdef __APPLE__
extern "C" { void __F__xce__feed__FeedIndex__initializer() {} }
#endif

void 
xce::feed::__patch__FeedIndexPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedIndexPtr* p = static_cast< ::xce::feed::FeedIndexPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedIndexPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedIndex::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedIndex& l, const ::xce::feed::FeedIndex& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedIndex& l, const ::xce::feed::FeedIndex& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
xce::feed::FeedIndexManager::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __xce__feed__FeedIndexManager_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedIndexManager"
};

bool
xce::feed::FeedIndexManager::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedIndexManager_ids, __xce__feed__FeedIndexManager_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedIndexManager::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedIndexManager_ids[0], &__xce__feed__FeedIndexManager_ids[2]);
}

const ::std::string&
xce::feed::FeedIndexManager::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedIndexManager_ids[1];
}

const ::std::string&
xce::feed::FeedIndexManager::ice_staticId()
{
    return __xce__feed__FeedIndexManager_ids[1];
}

::Ice::DispatchStatus
xce::feed::FeedIndexManager::___add(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::xce::feed::FeedIndexPtr index;
    __is->read(::xce::feed::__patch__FeedIndexPtr, &index);
    __is->readPendingObjects();
    __is->endReadEncaps();
    add(index, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedIndexManager::___removeBySource(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long source;
    ::Ice::Int stype;
    __is->read(source);
    __is->read(stype);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::MyUtil::LongSeq __ret = removeBySource(source, stype, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedIndexManager::___removeByParent(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long parent;
    ::Ice::Int ptype;
    __is->read(parent);
    __is->read(ptype);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::MyUtil::LongSeq __ret = removeByParent(parent, ptype, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedIndexManager::___remove(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long source;
    ::Ice::Int stype;
    ::Ice::Int actor;
    __is->read(source);
    __is->read(stype);
    __is->read(actor);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::MyUtil::LongSeq __ret = remove(source, stype, actor, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedIndexManager::___getBySourceAndStype(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long source;
    ::Ice::Int stype;
    ::Ice::Int size;
    __is->read(source);
    __is->read(stype);
    __is->read(size);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedIndexSeq __ret = getBySourceAndStype(source, stype, size, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedIndexSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedIndexManager::___getByParent(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long parent;
    ::Ice::Int ptype;
    ::Ice::Int size;
    __is->read(parent);
    __is->read(ptype);
    __is->read(size);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedIndexSeq __ret = getByParent(parent, ptype, size, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedIndexSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedIndexManager::___get(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long source;
    ::Ice::Int stype;
    ::Ice::Int actor;
    __is->read(source);
    __is->read(stype);
    __is->read(actor);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::MyUtil::LongSeq __ret = get(source, stype, actor, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedIndexManager::___getByFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long feed;
    __is->read(feed);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedIndexPtr __ret = getByFeed(feed, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

static ::std::string __xce__feed__FeedIndexManager_all[] =
{
    "add",
    "get",
    "getByFeed",
    "getByParent",
    "getBySourceAndStype",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "remove",
    "removeByParent",
    "removeBySource"
};

::Ice::DispatchStatus
xce::feed::FeedIndexManager::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__xce__feed__FeedIndexManager_all, __xce__feed__FeedIndexManager_all + 12, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __xce__feed__FeedIndexManager_all)
    {
        case 0:
        {
            return ___add(in, current);
        }
        case 1:
        {
            return ___get(in, current);
        }
        case 2:
        {
            return ___getByFeed(in, current);
        }
        case 3:
        {
            return ___getByParent(in, current);
        }
        case 4:
        {
            return ___getBySourceAndStype(in, current);
        }
        case 5:
        {
            return ___ice_id(in, current);
        }
        case 6:
        {
            return ___ice_ids(in, current);
        }
        case 7:
        {
            return ___ice_isA(in, current);
        }
        case 8:
        {
            return ___ice_ping(in, current);
        }
        case 9:
        {
            return ___remove(in, current);
        }
        case 10:
        {
            return ___removeByParent(in, current);
        }
        case 11:
        {
            return ___removeBySource(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
xce::feed::FeedIndexManager::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedIndexManager::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedIndexManager::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedIndexManager was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedIndexManager::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedIndexManager was not generated with stream support";
    throw ex;
}

void 
xce::feed::__patch__FeedIndexManagerPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedIndexManagerPtr* p = static_cast< ::xce::feed::FeedIndexManagerPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedIndexManagerPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedIndexManager::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedIndexManager& l, const ::xce::feed::FeedIndexManager& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedIndexManager& l, const ::xce::feed::FeedIndexManager& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
xce::feed::FeedAssistant::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __xce__feed__FeedAssistant_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedAssistant"
};

bool
xce::feed::FeedAssistant::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedAssistant_ids, __xce__feed__FeedAssistant_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedAssistant::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedAssistant_ids[0], &__xce__feed__FeedAssistant_ids[2]);
}

const ::std::string&
xce::feed::FeedAssistant::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedAssistant_ids[1];
}

const ::std::string&
xce::feed::FeedAssistant::ice_staticId()
{
    return __xce__feed__FeedAssistant_ids[1];
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___removeFeedById(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long feedId;
    __is->read(feedId);
    __is->endReadEncaps();
    removeFeedById(feedId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___removeFeedBySource(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long source;
    ::Ice::Int stype;
    __is->read(source);
    __is->read(stype);
    __is->endReadEncaps();
    removeFeedBySource(source, stype, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___removeFeedBySourceHS(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long source;
    ::Ice::Int stype;
    __is->read(source);
    __is->read(stype);
    __is->endReadEncaps();
    removeFeedBySourceHS(source, stype, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___removeFeedByParent(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long parent;
    ::Ice::Int ptype;
    __is->read(parent);
    __is->read(ptype);
    __is->endReadEncaps();
    removeFeedByParent(parent, ptype, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___removeFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long source;
    ::Ice::Int stype;
    ::Ice::Int actor;
    __is->read(source);
    __is->read(stype);
    __is->read(actor);
    __is->endReadEncaps();
    removeFeed(source, stype, actor, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___removeFeedReply(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long source;
    ::Ice::Int stype;
    ::Ice::Int actor;
    ::Ice::Long removeReplyId;
    ::xce::feed::FeedReplyPtr reply;
    __is->read(source);
    __is->read(stype);
    __is->read(actor);
    __is->read(removeReplyId);
    __is->read(::xce::feed::__patch__FeedReplyPtr, &reply);
    __is->readPendingObjects();
    __is->endReadEncaps();
    removeFeedReply(source, stype, actor, removeReplyId, reply, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___removeFeedReplyById(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int stype;
    ::Ice::Long feedid;
    ::Ice::Long removeReplyId;
    ::xce::feed::FeedReplyPtr reply;
    __is->read(stype);
    __is->read(feedid);
    __is->read(removeReplyId);
    __is->read(::xce::feed::__patch__FeedReplyPtr, &reply);
    __is->readPendingObjects();
    __is->endReadEncaps();
    removeFeedReplyById(stype, feedid, removeReplyId, reply, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___readNews(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int user;
    ::Ice::Long feed;
    __is->read(user);
    __is->read(feed);
    __is->endReadEncaps();
    readNews(user, feed, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___readAllNews(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int user;
    __is->read(user);
    __is->endReadEncaps();
    readAllNews(user, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___readMini(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int user;
    ::Ice::Long feed;
    __is->read(user);
    __is->read(feed);
    __is->endReadEncaps();
    readMini(user, feed, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___readAllMini(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int user;
    __is->read(user);
    __is->endReadEncaps();
    readAllMini(user, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___dispatch(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::xce::feed::FeedSeedPtr seed;
    __is->read(::xce::feed::__patch__FeedSeedPtr, &seed);
    __is->readPendingObjects();
    __is->endReadEncaps();
    dispatch(seed, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___dispatchEDM(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::xce::feed::FeedSeedPtr seed;
    __is->read(::xce::feed::__patch__FeedSeedPtr, &seed);
    __is->readPendingObjects();
    __is->endReadEncaps();
    dispatchEDM(seed, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___addFeedReplyById(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int stype;
    ::Ice::Long feedid;
    ::xce::feed::FeedReplyPtr reply;
    __is->read(stype);
    __is->read(feedid);
    __is->read(::xce::feed::__patch__FeedReplyPtr, &reply);
    __is->readPendingObjects();
    __is->endReadEncaps();
    addFeedReplyById(stype, feedid, reply, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___dispatchWithReply(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::xce::feed::FeedSeedPtr seed;
    ::xce::feed::FeedReplyPtr reply;
    __is->read(::xce::feed::__patch__FeedSeedPtr, &seed);
    __is->read(::xce::feed::__patch__FeedReplyPtr, &reply);
    __is->readPendingObjects();
    __is->endReadEncaps();
    dispatchWithReply(seed, reply, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___addFeedReply(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long source;
    ::Ice::Int stype;
    ::Ice::Int actor;
    ::xce::feed::FeedReplyPtr reply;
    __is->read(source);
    __is->read(stype);
    __is->read(actor);
    __is->read(::xce::feed::__patch__FeedReplyPtr, &reply);
    __is->readPendingObjects();
    __is->endReadEncaps();
    addFeedReply(source, stype, actor, reply, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___addFeedReplyWithConfig(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long source;
    ::Ice::Int stype;
    ::Ice::Int actor;
    ::xce::feed::FeedReplyPtr reply;
    ::MyUtil::Str2StrMap replyConfig;
    __is->read(source);
    __is->read(stype);
    __is->read(actor);
    __is->read(::xce::feed::__patch__FeedReplyPtr, &reply);
    ::MyUtil::__readStr2StrMap(__is, replyConfig);
    __is->readPendingObjects();
    __is->endReadEncaps();
    addFeedReplyWithConfig(source, stype, actor, reply, replyConfig, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___getFeedId(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long source;
    ::Ice::Int stype;
    ::Ice::Int actor;
    __is->read(source);
    __is->read(stype);
    __is->read(actor);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Long __ret = getFeedId(source, stype, actor, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___cacheSync(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long source;
    ::Ice::Int stype;
    ::Ice::Int actor;
    __is->read(source);
    __is->read(stype);
    __is->read(actor);
    __is->endReadEncaps();
    cacheSync(source, stype, actor, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___createFeedId(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Long __ret = createFeedId(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___dispatchAgain(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long source;
    ::Ice::Int stype;
    ::Ice::Int actor;
    ::Ice::Int toid;
    __is->read(source);
    __is->read(stype);
    __is->read(actor);
    __is->read(toid);
    __is->endReadEncaps();
    dispatchAgain(source, stype, actor, toid, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___ReplaceXML(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long source;
    ::Ice::Int stype;
    ::Ice::Int actor;
    ::std::string xml;
    __is->read(source);
    __is->read(stype);
    __is->read(actor);
    __is->read(xml);
    __is->endReadEncaps();
    ReplaceXML(source, stype, actor, xml, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___DirectedSend(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long source;
    ::Ice::Int stype;
    ::Ice::Int actor;
    ::MyUtil::IntSeq targets;
    __is->read(source);
    __is->read(stype);
    __is->read(actor);
    __is->read(targets);
    __is->endReadEncaps();
    DirectedSend(source, stype, actor, targets, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedAssistant::___MarkFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Long fid;
    ::Ice::Long source;
    ::Ice::Int stype;
    ::Ice::Int actor;
    bool mark;
    __is->read(uid);
    __is->read(fid);
    __is->read(source);
    __is->read(stype);
    __is->read(actor);
    __is->read(mark);
    __is->endReadEncaps();
    MarkFeed(uid, fid, source, stype, actor, mark, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __xce__feed__FeedAssistant_all[] =
{
    "DirectedSend",
    "MarkFeed",
    "ReplaceXML",
    "addFeedReply",
    "addFeedReplyById",
    "addFeedReplyWithConfig",
    "cacheSync",
    "createFeedId",
    "dispatch",
    "dispatchAgain",
    "dispatchEDM",
    "dispatchWithReply",
    "getFeedId",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "readAllMini",
    "readAllNews",
    "readMini",
    "readNews",
    "removeFeed",
    "removeFeedById",
    "removeFeedByParent",
    "removeFeedBySource",
    "removeFeedBySourceHS",
    "removeFeedReply",
    "removeFeedReplyById"
};

::Ice::DispatchStatus
xce::feed::FeedAssistant::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__xce__feed__FeedAssistant_all, __xce__feed__FeedAssistant_all + 28, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __xce__feed__FeedAssistant_all)
    {
        case 0:
        {
            return ___DirectedSend(in, current);
        }
        case 1:
        {
            return ___MarkFeed(in, current);
        }
        case 2:
        {
            return ___ReplaceXML(in, current);
        }
        case 3:
        {
            return ___addFeedReply(in, current);
        }
        case 4:
        {
            return ___addFeedReplyById(in, current);
        }
        case 5:
        {
            return ___addFeedReplyWithConfig(in, current);
        }
        case 6:
        {
            return ___cacheSync(in, current);
        }
        case 7:
        {
            return ___createFeedId(in, current);
        }
        case 8:
        {
            return ___dispatch(in, current);
        }
        case 9:
        {
            return ___dispatchAgain(in, current);
        }
        case 10:
        {
            return ___dispatchEDM(in, current);
        }
        case 11:
        {
            return ___dispatchWithReply(in, current);
        }
        case 12:
        {
            return ___getFeedId(in, current);
        }
        case 13:
        {
            return ___ice_id(in, current);
        }
        case 14:
        {
            return ___ice_ids(in, current);
        }
        case 15:
        {
            return ___ice_isA(in, current);
        }
        case 16:
        {
            return ___ice_ping(in, current);
        }
        case 17:
        {
            return ___readAllMini(in, current);
        }
        case 18:
        {
            return ___readAllNews(in, current);
        }
        case 19:
        {
            return ___readMini(in, current);
        }
        case 20:
        {
            return ___readNews(in, current);
        }
        case 21:
        {
            return ___removeFeed(in, current);
        }
        case 22:
        {
            return ___removeFeedById(in, current);
        }
        case 23:
        {
            return ___removeFeedByParent(in, current);
        }
        case 24:
        {
            return ___removeFeedBySource(in, current);
        }
        case 25:
        {
            return ___removeFeedBySourceHS(in, current);
        }
        case 26:
        {
            return ___removeFeedReply(in, current);
        }
        case 27:
        {
            return ___removeFeedReplyById(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
xce::feed::FeedAssistant::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedAssistant::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedAssistant::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedAssistant was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedAssistant::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedAssistant was not generated with stream support";
    throw ex;
}

void 
xce::feed::__patch__FeedAssistantPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedAssistantPtr* p = static_cast< ::xce::feed::FeedAssistantPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedAssistantPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedAssistant::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedAssistant& l, const ::xce::feed::FeedAssistant& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedAssistant& l, const ::xce::feed::FeedAssistant& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
xce::feed::FocusManager::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __xce__feed__FocusManager_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FocusManager"
};

bool
xce::feed::FocusManager::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FocusManager_ids, __xce__feed__FocusManager_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FocusManager::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FocusManager_ids[0], &__xce__feed__FocusManager_ids[2]);
}

const ::std::string&
xce::feed::FocusManager::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FocusManager_ids[1];
}

const ::std::string&
xce::feed::FocusManager::ice_staticId()
{
    return __xce__feed__FocusManager_ids[1];
}

::Ice::DispatchStatus
xce::feed::FocusManager::___GetFocusFeedData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int user;
    ::Ice::Int begin;
    ::Ice::Int limit;
    __is->read(user);
    __is->read(begin);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataSeq __ret = GetFocusFeedData(user, begin, limit, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedDataSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FocusManager::___GetFocusFeedDataByStype(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int user;
    ::Ice::Int begin;
    ::Ice::Int limit;
    ::MyUtil::IntSeq stypes;
    __is->read(user);
    __is->read(begin);
    __is->read(limit);
    __is->read(stypes);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataSeq __ret = GetFocusFeedDataByStype(user, begin, limit, stypes, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedDataSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FocusManager::___AddFocuses(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int user;
    ::Ice::Int target;
    __is->read(user);
    __is->read(target);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = AddFocuses(user, target, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FocusManager::___DelFocuses(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int user;
    ::Ice::Int target;
    __is->read(user);
    __is->read(target);
    __is->endReadEncaps();
    DelFocuses(user, target, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FocusManager::___GetFocuses(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int user;
    __is->read(user);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::MyUtil::IntSeq __ret = GetFocuses(user, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FocusManager::___GetFocusFeedIncCount(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int user;
    __is->read(user);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = GetFocusFeedIncCount(user, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FocusManager::___AddFocusWithCheck(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int user;
    ::Ice::Int target;
    __is->read(user);
    __is->read(target);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = AddFocusWithCheck(user, target, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

static ::std::string __xce__feed__FocusManager_all[] =
{
    "AddFocusWithCheck",
    "AddFocuses",
    "DelFocuses",
    "GetFocusFeedData",
    "GetFocusFeedDataByStype",
    "GetFocusFeedIncCount",
    "GetFocuses",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
xce::feed::FocusManager::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__xce__feed__FocusManager_all, __xce__feed__FocusManager_all + 11, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __xce__feed__FocusManager_all)
    {
        case 0:
        {
            return ___AddFocusWithCheck(in, current);
        }
        case 1:
        {
            return ___AddFocuses(in, current);
        }
        case 2:
        {
            return ___DelFocuses(in, current);
        }
        case 3:
        {
            return ___GetFocusFeedData(in, current);
        }
        case 4:
        {
            return ___GetFocusFeedDataByStype(in, current);
        }
        case 5:
        {
            return ___GetFocusFeedIncCount(in, current);
        }
        case 6:
        {
            return ___GetFocuses(in, current);
        }
        case 7:
        {
            return ___ice_id(in, current);
        }
        case 8:
        {
            return ___ice_ids(in, current);
        }
        case 9:
        {
            return ___ice_isA(in, current);
        }
        case 10:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
xce::feed::FocusManager::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FocusManager::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FocusManager::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FocusManager was not generated with stream support";
    throw ex;
}

void
xce::feed::FocusManager::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FocusManager was not generated with stream support";
    throw ex;
}

void 
xce::feed::__patch__FocusManagerPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FocusManagerPtr* p = static_cast< ::xce::feed::FocusManagerPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FocusManagerPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FocusManager::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FocusManager& l, const ::xce::feed::FocusManager& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FocusManager& l, const ::xce::feed::FocusManager& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

xce::feed::FeedDataRes::FeedDataRes(::Ice::Int __ice_UnviewedCount, const ::xce::feed::FeedDataSeq& __ice_data) :
    UnviewedCount(__ice_UnviewedCount),
    data(__ice_data)
{
}

::Ice::ObjectPtr
xce::feed::FeedDataRes::ice_clone() const
{
    ::xce::feed::FeedDataResPtr __p = new ::xce::feed::FeedDataRes(*this);
    return __p;
}

static const ::std::string __xce__feed__FeedDataRes_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedDataRes"
};

bool
xce::feed::FeedDataRes::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedDataRes_ids, __xce__feed__FeedDataRes_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedDataRes::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedDataRes_ids[0], &__xce__feed__FeedDataRes_ids[2]);
}

const ::std::string&
xce::feed::FeedDataRes::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedDataRes_ids[1];
}

const ::std::string&
xce::feed::FeedDataRes::ice_staticId()
{
    return __xce__feed__FeedDataRes_ids[1];
}

void
xce::feed::FeedDataRes::__incRef()
{
    __gcIncRef();
}

void
xce::feed::FeedDataRes::__decRef()
{
    __gcDecRef();
}

void
xce::feed::FeedDataRes::__addObject(::IceInternal::GCCountMap& _c)
{
    ::IceInternal::GCCountMap::iterator pos = _c.find(this);
    if(pos == _c.end())
    {
        _c[this] = 1;
    }
    else
    {
        ++pos->second;
    }
}

bool
xce::feed::FeedDataRes::__usesClasses()
{
    return true;
}

void
xce::feed::FeedDataRes::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    {
        for(::xce::feed::FeedDataSeq::const_iterator _i0 = data.begin(); _i0 != data.end(); ++_i0)
        {
            if((*_i0))
            {
                ::IceInternal::upCast((*_i0).get())->__addObject(_c);
            }
        }
    }
}

void
xce::feed::FeedDataRes::__gcClear()
{
    {
        for(::xce::feed::FeedDataSeq::iterator _i0 = data.begin(); _i0 != data.end(); ++_i0)
        {
            if((*_i0))
            {
                if(::IceInternal::upCast((*_i0).get())->__usesClasses())
                {
                    ::IceInternal::upCast((*_i0).get())->__decRefUnsafe();
                    (*_i0).__clearHandleUnsafe();
                }
                else
                {
                    (*_i0) = 0;
                }
            }
        }
    }
}

void
xce::feed::FeedDataRes::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(UnviewedCount);
    if(data.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedDataSeq(__os, &data[0], &data[0] + data.size());
    }
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedDataRes::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(UnviewedCount);
    ::xce::feed::__readFeedDataSeq(__is, data);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedDataRes::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedDataRes was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedDataRes::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedDataRes was not generated with stream support";
    throw ex;
}

class __F__xce__feed__FeedDataRes : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::xce::feed::FeedDataRes::ice_staticId());
        return new ::xce::feed::FeedDataRes;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__xce__feed__FeedDataRes_Ptr = new __F__xce__feed__FeedDataRes;

const ::Ice::ObjectFactoryPtr&
xce::feed::FeedDataRes::ice_factory()
{
    return __F__xce__feed__FeedDataRes_Ptr;
}

class __F__xce__feed__FeedDataRes__Init
{
public:

    __F__xce__feed__FeedDataRes__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::xce::feed::FeedDataRes::ice_staticId(), ::xce::feed::FeedDataRes::ice_factory());
    }

    ~__F__xce__feed__FeedDataRes__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::xce::feed::FeedDataRes::ice_staticId());
    }
};

static __F__xce__feed__FeedDataRes__Init __F__xce__feed__FeedDataRes__i;

#ifdef __APPLE__
extern "C" { void __F__xce__feed__FeedDataRes__initializer() {} }
#endif

void 
xce::feed::__patch__FeedDataResPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedDataResPtr* p = static_cast< ::xce::feed::FeedDataResPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedDataResPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedDataRes::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedDataRes& l, const ::xce::feed::FeedDataRes& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedDataRes& l, const ::xce::feed::FeedDataRes& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
xce::feed::FeedNewsManager::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __xce__feed__FeedNewsManager_ids[2] =
{
    "::Ice::Object",
    "::xce::feed::FeedNewsManager"
};

bool
xce::feed::FeedNewsManager::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__feed__FeedNewsManager_ids, __xce__feed__FeedNewsManager_ids + 2, _s);
}

::std::vector< ::std::string>
xce::feed::FeedNewsManager::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__feed__FeedNewsManager_ids[0], &__xce__feed__FeedNewsManager_ids[2]);
}

const ::std::string&
xce::feed::FeedNewsManager::ice_id(const ::Ice::Current&) const
{
    return __xce__feed__FeedNewsManager_ids[1];
}

const ::std::string&
xce::feed::FeedNewsManager::ice_staticId()
{
    return __xce__feed__FeedNewsManager_ids[1];
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___GetLiveFeedData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Int begin;
    ::Ice::Int limit;
    __is->read(uid);
    __is->read(begin);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataResPtr __ret = GetLiveFeedData(uid, begin, limit, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___GetLiveFeedDataByStype(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::MyUtil::IntSeq stypes;
    ::Ice::Int begin;
    ::Ice::Int limit;
    __is->read(uid);
    __is->read(stypes);
    __is->read(begin);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataResPtr __ret = GetLiveFeedDataByStype(uid, stypes, begin, limit, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___GetLiveFeedDataByType(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::MyUtil::IntSeq stypes;
    ::Ice::Int begin;
    ::Ice::Int limit;
    __is->read(uid);
    __is->read(stypes);
    __is->read(begin);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataResPtr __ret = GetLiveFeedDataByType(uid, stypes, begin, limit, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___GetHotFeedData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Int begin;
    ::Ice::Int limit;
    __is->read(uid);
    __is->read(begin);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataResPtr __ret = GetHotFeedData(uid, begin, limit, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___GetHotFeedDataByStype(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::MyUtil::IntSeq stypes;
    ::Ice::Int begin;
    ::Ice::Int limit;
    __is->read(uid);
    __is->read(stypes);
    __is->read(begin);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataResPtr __ret = GetHotFeedDataByStype(uid, stypes, begin, limit, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___GetHotFeedDataByType(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::MyUtil::IntSeq stypes;
    ::Ice::Int begin;
    ::Ice::Int limit;
    __is->read(uid);
    __is->read(stypes);
    __is->read(begin);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataResPtr __ret = GetHotFeedDataByType(uid, stypes, begin, limit, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___GetFeedDataByIds(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::MyUtil::LongSeq fids;
    __is->read(fids);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataSeq __ret = GetFeedDataByIds(fids, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedDataSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___GetFeedDataByIdsWithUid(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::MyUtil::LongSeq fids;
    ::Ice::Long first;
    ::Ice::Int stype;
    __is->read(uid);
    __is->read(fids);
    __is->read(first);
    __is->read(stype);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedDataSeq __ret = GetFeedDataByIdsWithUid(uid, fids, first, stype, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedDataSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___GetOriginalFeedData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    __is->read(uid);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedItemSeq __ret = GetOriginalFeedData(uid, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedItemSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___GetUnviewedCount(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Int type;
    __is->read(uid);
    __is->read(type);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = GetUnviewedCount(uid, type, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___GetCountMapByStype(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::MyUtil::IntSeq stypes;
    bool unviewed;
    __is->read(uid);
    __is->read(stypes);
    __is->read(unviewed);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::MyUtil::Int2IntMap __ret = GetCountMapByStype(uid, stypes, unviewed, __current);
    ::MyUtil::__writeInt2IntMap(__os, __ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___AddFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::xce::feed::FeedItem item;
    ::xce::feed::FeedConfigPtr config;
    ::MyUtil::Int2IntMap id2weight;
    item.__read(__is);
    __is->read(::xce::feed::__patch__FeedConfigPtr, &config);
    ::MyUtil::__readInt2IntMap(__is, id2weight);
    __is->readPendingObjects();
    __is->endReadEncaps();
    AddFeed(item, config, id2weight, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___SetRead(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Int stype;
    ::Ice::Long merge;
    __is->read(uid);
    __is->read(stype);
    __is->read(merge);
    __is->endReadEncaps();
    SetRead(uid, stype, merge, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___SetReadById(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Long feedId;
    __is->read(uid);
    __is->read(feedId);
    __is->endReadEncaps();
    SetReadById(uid, feedId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___SetReadAll(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    __is->read(uid);
    __is->endReadEncaps();
    SetReadAll(uid, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___HasFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    __is->read(uid);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = HasFeed(uid, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___load(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userid;
    __is->read(userid);
    __is->endReadEncaps();
    load(userid, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___GetFeedItemSeqSeqByUsers(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::MyUtil::IntSeq uids;
    __is->read(uids);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::feed::FeedItemSeqSeq __ret = GetFeedItemSeqSeqByUsers(uids, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::xce::feed::__writeFeedItemSeqSeq(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___MarkFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Long fid;
    ::Ice::Long source;
    ::Ice::Int stype;
    ::Ice::Int actor;
    bool mark;
    __is->read(uid);
    __is->read(fid);
    __is->read(source);
    __is->read(stype);
    __is->read(actor);
    __is->read(mark);
    __is->endReadEncaps();
    MarkFeed(uid, fid, source, stype, actor, mark, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___EraseUser(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    __is->read(uid);
    __is->endReadEncaps();
    EraseUser(uid, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___AddFeedReply(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::xce::feed::FeedIndexPtr idx;
    ::Ice::Int replycnt;
    __is->read(::xce::feed::__patch__FeedIndexPtr, &idx);
    __is->read(replycnt);
    __is->readPendingObjects();
    __is->endReadEncaps();
    AddFeedReply(idx, replycnt, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___AddWhiteList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userid;
    __is->read(userid);
    __is->endReadEncaps();
    AddWhiteList(userid, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___DelWhiteList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userid;
    __is->read(userid);
    __is->endReadEncaps();
    DelWhiteList(userid, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___GetWhiteList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::MyUtil::IntSeq __ret = GetWhiteList(__current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::feed::FeedNewsManager::___ClearWhiteList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ClearWhiteList(__current);
    return ::Ice::DispatchOK;
}

static ::std::string __xce__feed__FeedNewsManager_all[] =
{
    "AddFeed",
    "AddFeedReply",
    "AddWhiteList",
    "ClearWhiteList",
    "DelWhiteList",
    "EraseUser",
    "GetCountMapByStype",
    "GetFeedDataByIds",
    "GetFeedDataByIdsWithUid",
    "GetFeedItemSeqSeqByUsers",
    "GetHotFeedData",
    "GetHotFeedDataByStype",
    "GetHotFeedDataByType",
    "GetLiveFeedData",
    "GetLiveFeedDataByStype",
    "GetLiveFeedDataByType",
    "GetOriginalFeedData",
    "GetUnviewedCount",
    "GetWhiteList",
    "HasFeed",
    "MarkFeed",
    "SetRead",
    "SetReadAll",
    "SetReadById",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "load"
};

::Ice::DispatchStatus
xce::feed::FeedNewsManager::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__xce__feed__FeedNewsManager_all, __xce__feed__FeedNewsManager_all + 29, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __xce__feed__FeedNewsManager_all)
    {
        case 0:
        {
            return ___AddFeed(in, current);
        }
        case 1:
        {
            return ___AddFeedReply(in, current);
        }
        case 2:
        {
            return ___AddWhiteList(in, current);
        }
        case 3:
        {
            return ___ClearWhiteList(in, current);
        }
        case 4:
        {
            return ___DelWhiteList(in, current);
        }
        case 5:
        {
            return ___EraseUser(in, current);
        }
        case 6:
        {
            return ___GetCountMapByStype(in, current);
        }
        case 7:
        {
            return ___GetFeedDataByIds(in, current);
        }
        case 8:
        {
            return ___GetFeedDataByIdsWithUid(in, current);
        }
        case 9:
        {
            return ___GetFeedItemSeqSeqByUsers(in, current);
        }
        case 10:
        {
            return ___GetHotFeedData(in, current);
        }
        case 11:
        {
            return ___GetHotFeedDataByStype(in, current);
        }
        case 12:
        {
            return ___GetHotFeedDataByType(in, current);
        }
        case 13:
        {
            return ___GetLiveFeedData(in, current);
        }
        case 14:
        {
            return ___GetLiveFeedDataByStype(in, current);
        }
        case 15:
        {
            return ___GetLiveFeedDataByType(in, current);
        }
        case 16:
        {
            return ___GetOriginalFeedData(in, current);
        }
        case 17:
        {
            return ___GetUnviewedCount(in, current);
        }
        case 18:
        {
            return ___GetWhiteList(in, current);
        }
        case 19:
        {
            return ___HasFeed(in, current);
        }
        case 20:
        {
            return ___MarkFeed(in, current);
        }
        case 21:
        {
            return ___SetRead(in, current);
        }
        case 22:
        {
            return ___SetReadAll(in, current);
        }
        case 23:
        {
            return ___SetReadById(in, current);
        }
        case 24:
        {
            return ___ice_id(in, current);
        }
        case 25:
        {
            return ___ice_ids(in, current);
        }
        case 26:
        {
            return ___ice_isA(in, current);
        }
        case 27:
        {
            return ___ice_ping(in, current);
        }
        case 28:
        {
            return ___load(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
xce::feed::FeedNewsManager::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
xce::feed::FeedNewsManager::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
xce::feed::FeedNewsManager::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedNewsManager was not generated with stream support";
    throw ex;
}

void
xce::feed::FeedNewsManager::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::feed::FeedNewsManager was not generated with stream support";
    throw ex;
}

void 
xce::feed::__patch__FeedNewsManagerPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::feed::FeedNewsManagerPtr* p = static_cast< ::xce::feed::FeedNewsManagerPtr*>(__addr);
    assert(p);
    *p = ::xce::feed::FeedNewsManagerPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::feed::FeedNewsManager::ice_staticId(), v->ice_id());
    }
}

bool
xce::feed::operator==(const ::xce::feed::FeedNewsManager& l, const ::xce::feed::FeedNewsManager& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::feed::operator<(const ::xce::feed::FeedNewsManager& l, const ::xce::feed::FeedNewsManager& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
