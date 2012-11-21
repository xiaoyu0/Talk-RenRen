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

#ifndef __src_ice_src__RFeed_h__
#define __src_ice_src__RFeed_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/UserExceptionFactory.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <Util.h>
#include <Ice/UndefSysMacros.h>

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

namespace IceProxy
{

namespace xce
{

namespace feed
{

class FeedSeed;

class FeedReply;

class ReplyData;

class FeedData;

class FeedDataByte;

class FeedDataByteRes;

class FeedContent;

class FeedConfig;

class FeedDispatcher;

class FeedItemManager;

class FeedGroupManager;

class FeedGroupCount;

class FeedContentManager;

class FeedIndex;

class FeedIndexManager;

class FeedAssistant;

class FocusManager;

class FeedDataRes;

class FeedNewsManager;

}

}

}

namespace xce
{

namespace feed
{

class FeedSeed;
bool operator==(const FeedSeed&, const FeedSeed&);
bool operator<(const FeedSeed&, const FeedSeed&);

class FeedReply;
bool operator==(const FeedReply&, const FeedReply&);
bool operator<(const FeedReply&, const FeedReply&);

class ReplyData;
bool operator==(const ReplyData&, const ReplyData&);
bool operator<(const ReplyData&, const ReplyData&);

class FeedData;
bool operator==(const FeedData&, const FeedData&);
bool operator<(const FeedData&, const FeedData&);

class FeedDataByte;
bool operator==(const FeedDataByte&, const FeedDataByte&);
bool operator<(const FeedDataByte&, const FeedDataByte&);

class FeedDataByteRes;
bool operator==(const FeedDataByteRes&, const FeedDataByteRes&);
bool operator<(const FeedDataByteRes&, const FeedDataByteRes&);

class FeedContent;
bool operator==(const FeedContent&, const FeedContent&);
bool operator<(const FeedContent&, const FeedContent&);

class FeedConfig;
bool operator==(const FeedConfig&, const FeedConfig&);
bool operator<(const FeedConfig&, const FeedConfig&);

class FeedDispatcher;
bool operator==(const FeedDispatcher&, const FeedDispatcher&);
bool operator<(const FeedDispatcher&, const FeedDispatcher&);

class FeedItemManager;
bool operator==(const FeedItemManager&, const FeedItemManager&);
bool operator<(const FeedItemManager&, const FeedItemManager&);

class FeedGroupManager;
bool operator==(const FeedGroupManager&, const FeedGroupManager&);
bool operator<(const FeedGroupManager&, const FeedGroupManager&);

class FeedGroupCount;
bool operator==(const FeedGroupCount&, const FeedGroupCount&);
bool operator<(const FeedGroupCount&, const FeedGroupCount&);

class FeedContentManager;
bool operator==(const FeedContentManager&, const FeedContentManager&);
bool operator<(const FeedContentManager&, const FeedContentManager&);

class FeedIndex;
bool operator==(const FeedIndex&, const FeedIndex&);
bool operator<(const FeedIndex&, const FeedIndex&);

class FeedIndexManager;
bool operator==(const FeedIndexManager&, const FeedIndexManager&);
bool operator<(const FeedIndexManager&, const FeedIndexManager&);

class FeedAssistant;
bool operator==(const FeedAssistant&, const FeedAssistant&);
bool operator<(const FeedAssistant&, const FeedAssistant&);

class FocusManager;
bool operator==(const FocusManager&, const FocusManager&);
bool operator<(const FocusManager&, const FocusManager&);

class FeedDataRes;
bool operator==(const FeedDataRes&, const FeedDataRes&);
bool operator<(const FeedDataRes&, const FeedDataRes&);

class FeedNewsManager;
bool operator==(const FeedNewsManager&, const FeedNewsManager&);
bool operator<(const FeedNewsManager&, const FeedNewsManager&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::xce::feed::FeedSeed*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedSeed*);

::Ice::Object* upCast(::xce::feed::FeedReply*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedReply*);

::Ice::Object* upCast(::xce::feed::ReplyData*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::ReplyData*);

::Ice::Object* upCast(::xce::feed::FeedData*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedData*);

::Ice::Object* upCast(::xce::feed::FeedDataByte*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedDataByte*);

::Ice::Object* upCast(::xce::feed::FeedDataByteRes*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedDataByteRes*);

::Ice::Object* upCast(::xce::feed::FeedContent*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedContent*);

::Ice::Object* upCast(::xce::feed::FeedConfig*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedConfig*);

::Ice::Object* upCast(::xce::feed::FeedDispatcher*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedDispatcher*);

::Ice::Object* upCast(::xce::feed::FeedItemManager*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedItemManager*);

::Ice::Object* upCast(::xce::feed::FeedGroupManager*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedGroupManager*);

::Ice::Object* upCast(::xce::feed::FeedGroupCount*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedGroupCount*);

::Ice::Object* upCast(::xce::feed::FeedContentManager*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedContentManager*);

::Ice::Object* upCast(::xce::feed::FeedIndex*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedIndex*);

::Ice::Object* upCast(::xce::feed::FeedIndexManager*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedIndexManager*);

::Ice::Object* upCast(::xce::feed::FeedAssistant*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedAssistant*);

::Ice::Object* upCast(::xce::feed::FocusManager*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FocusManager*);

::Ice::Object* upCast(::xce::feed::FeedDataRes*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedDataRes*);

::Ice::Object* upCast(::xce::feed::FeedNewsManager*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::feed::FeedNewsManager*);

}

namespace xce
{

namespace feed
{

typedef ::IceInternal::Handle< ::xce::feed::FeedSeed> FeedSeedPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedSeed> FeedSeedPrx;

void __read(::IceInternal::BasicStream*, FeedSeedPrx&);
void __patch__FeedSeedPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FeedReply> FeedReplyPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedReply> FeedReplyPrx;

void __read(::IceInternal::BasicStream*, FeedReplyPrx&);
void __patch__FeedReplyPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::ReplyData> ReplyDataPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::ReplyData> ReplyDataPrx;

void __read(::IceInternal::BasicStream*, ReplyDataPrx&);
void __patch__ReplyDataPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FeedData> FeedDataPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedData> FeedDataPrx;

void __read(::IceInternal::BasicStream*, FeedDataPrx&);
void __patch__FeedDataPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FeedDataByte> FeedDataBytePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedDataByte> FeedDataBytePrx;

void __read(::IceInternal::BasicStream*, FeedDataBytePrx&);
void __patch__FeedDataBytePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FeedDataByteRes> FeedDataByteResPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedDataByteRes> FeedDataByteResPrx;

void __read(::IceInternal::BasicStream*, FeedDataByteResPrx&);
void __patch__FeedDataByteResPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FeedContent> FeedContentPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedContent> FeedContentPrx;

void __read(::IceInternal::BasicStream*, FeedContentPrx&);
void __patch__FeedContentPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FeedConfig> FeedConfigPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedConfig> FeedConfigPrx;

void __read(::IceInternal::BasicStream*, FeedConfigPrx&);
void __patch__FeedConfigPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FeedDispatcher> FeedDispatcherPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedDispatcher> FeedDispatcherPrx;

void __read(::IceInternal::BasicStream*, FeedDispatcherPrx&);
void __patch__FeedDispatcherPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FeedItemManager> FeedItemManagerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedItemManager> FeedItemManagerPrx;

void __read(::IceInternal::BasicStream*, FeedItemManagerPrx&);
void __patch__FeedItemManagerPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FeedGroupManager> FeedGroupManagerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedGroupManager> FeedGroupManagerPrx;

void __read(::IceInternal::BasicStream*, FeedGroupManagerPrx&);
void __patch__FeedGroupManagerPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FeedGroupCount> FeedGroupCountPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedGroupCount> FeedGroupCountPrx;

void __read(::IceInternal::BasicStream*, FeedGroupCountPrx&);
void __patch__FeedGroupCountPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FeedContentManager> FeedContentManagerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedContentManager> FeedContentManagerPrx;

void __read(::IceInternal::BasicStream*, FeedContentManagerPrx&);
void __patch__FeedContentManagerPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FeedIndex> FeedIndexPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedIndex> FeedIndexPrx;

void __read(::IceInternal::BasicStream*, FeedIndexPrx&);
void __patch__FeedIndexPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FeedIndexManager> FeedIndexManagerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedIndexManager> FeedIndexManagerPrx;

void __read(::IceInternal::BasicStream*, FeedIndexManagerPrx&);
void __patch__FeedIndexManagerPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FeedAssistant> FeedAssistantPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedAssistant> FeedAssistantPrx;

void __read(::IceInternal::BasicStream*, FeedAssistantPrx&);
void __patch__FeedAssistantPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FocusManager> FocusManagerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FocusManager> FocusManagerPrx;

void __read(::IceInternal::BasicStream*, FocusManagerPrx&);
void __patch__FocusManagerPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FeedDataRes> FeedDataResPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedDataRes> FeedDataResPrx;

void __read(::IceInternal::BasicStream*, FeedDataResPrx&);
void __patch__FeedDataResPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::feed::FeedNewsManager> FeedNewsManagerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::feed::FeedNewsManager> FeedNewsManagerPrx;

void __read(::IceInternal::BasicStream*, FeedNewsManagerPrx&);
void __patch__FeedNewsManagerPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace xce
{

namespace feed
{

const ::Ice::Int FeedMergeAppend = 2;

const ::Ice::Int FeedMergeReplace = 1;

const ::Ice::Int NewFeedReply = 0;

const ::Ice::Int SideFeedReply = 1;

struct FeedItem
{
    ::Ice::Long feed;
    ::Ice::Long merge;
    ::Ice::Int type;
    ::Ice::Int time;
    ::Ice::Int weight;
    ::Ice::Int actor;

    bool operator==(const FeedItem&) const;
    bool operator<(const FeedItem&) const;
    bool operator!=(const FeedItem& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const FeedItem& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const FeedItem& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const FeedItem& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::xce::feed::FeedItem> FeedItemSeq;
void __writeFeedItemSeq(::IceInternal::BasicStream*, const ::xce::feed::FeedItem*, const ::xce::feed::FeedItem*);
void __readFeedItemSeq(::IceInternal::BasicStream*, FeedItemSeq&);

typedef ::std::map< ::Ice::Int, ::xce::feed::FeedItem> Int2FeedItemMap;
void __writeInt2FeedItemMap(::IceInternal::BasicStream*, const Int2FeedItemMap&);
void __readInt2FeedItemMap(::IceInternal::BasicStream*, Int2FeedItemMap&);

typedef ::std::vector< ::Ice::Byte> ByteSeq;

typedef ::std::vector< ::xce::feed::FeedDataBytePtr> FeedDataByteSeq;
void __writeFeedDataByteSeq(::IceInternal::BasicStream*, const ::xce::feed::FeedDataBytePtr*, const ::xce::feed::FeedDataBytePtr*);
void __readFeedDataByteSeq(::IceInternal::BasicStream*, FeedDataByteSeq&);

typedef ::std::vector< ::xce::feed::FeedContentPtr> FeedContentSeq;
void __writeFeedContentSeq(::IceInternal::BasicStream*, const ::xce::feed::FeedContentPtr*, const ::xce::feed::FeedContentPtr*);
void __readFeedContentSeq(::IceInternal::BasicStream*, FeedContentSeq&);

typedef ::std::vector< ::xce::feed::FeedDataPtr> FeedDataSeq;
void __writeFeedDataSeq(::IceInternal::BasicStream*, const ::xce::feed::FeedDataPtr*, const ::xce::feed::FeedDataPtr*);
void __readFeedDataSeq(::IceInternal::BasicStream*, FeedDataSeq&);

typedef ::std::map< ::Ice::Long, ::xce::feed::FeedContentPtr> FeedContentDict;
void __writeFeedContentDict(::IceInternal::BasicStream*, const FeedContentDict&);
void __readFeedContentDict(::IceInternal::BasicStream*, FeedContentDict&);

enum LoadType
{
    Friend,
    App,
    AppFan,
    Page,
    HighSchool,
    Follow,
    MiniGroup,
    XiaoZu,
    MiniSite,
    GuangJie,
    Tag
};

void __write(::IceInternal::BasicStream*, LoadType);
void __read(::IceInternal::BasicStream*, LoadType&);

typedef ::std::vector< ::xce::feed::FeedItemSeq> FeedItemSeqSeq;
void __writeFeedItemSeqSeq(::IceInternal::BasicStream*, const ::xce::feed::FeedItemSeq*, const ::xce::feed::FeedItemSeq*);
void __readFeedItemSeqSeq(::IceInternal::BasicStream*, FeedItemSeqSeq&);

typedef ::std::map< ::Ice::Long, ::Ice::Int> Feed2WeightMap;
void __writeFeed2WeightMap(::IceInternal::BasicStream*, const Feed2WeightMap&);
void __readFeed2WeightMap(::IceInternal::BasicStream*, Feed2WeightMap&);

typedef ::std::vector< ::xce::feed::FeedIndexPtr> FeedIndexSeq;
void __writeFeedIndexSeq(::IceInternal::BasicStream*, const ::xce::feed::FeedIndexPtr*, const ::xce::feed::FeedIndexPtr*);
void __readFeedIndexSeq(::IceInternal::BasicStream*, FeedIndexSeq&);

}

}

namespace IceProxy
{

namespace xce
{

namespace feed
{

class FeedSeed : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedSeed> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedSeed*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedSeed*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FeedReply : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<FeedReply> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedReply> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedReply*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedReply*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ReplyData : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<ReplyData> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ReplyData> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ReplyData*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ReplyData*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FeedData : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<FeedData> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedData> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedData*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedData*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FeedDataByte : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByte> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByte*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedDataByte*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FeedDataByteRes : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataByteRes> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataByteRes*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedDataByteRes*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FeedContent : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<FeedContent> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContent> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContent*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedContent*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FeedConfig : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedConfig> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedConfig*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedConfig*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FeedDispatcher : virtual public ::IceProxy::Ice::Object
{
public:

    void dispatch(const ::xce::feed::FeedSeedPtr& seed, const ::xce::feed::FeedConfigPtr& config)
    {
        dispatch(seed, config, 0);
    }
    void dispatch(const ::xce::feed::FeedSeedPtr& seed, const ::xce::feed::FeedConfigPtr& config, const ::Ice::Context& __ctx)
    {
        dispatch(seed, config, &__ctx);
    }
    
private:

    void dispatch(const ::xce::feed::FeedSeedPtr&, const ::xce::feed::FeedConfigPtr&, const ::Ice::Context*);
    
public:

    void dispatchReply(const ::xce::feed::ReplyDataPtr& data, const ::xce::feed::FeedConfigPtr& config)
    {
        dispatchReply(data, config, 0);
    }
    void dispatchReply(const ::xce::feed::ReplyDataPtr& data, const ::xce::feed::FeedConfigPtr& config, const ::Ice::Context& __ctx)
    {
        dispatchReply(data, config, &__ctx);
    }
    
private:

    void dispatchReply(const ::xce::feed::ReplyDataPtr&, const ::xce::feed::FeedConfigPtr&, const ::Ice::Context*);
    
public:

    void Reload(::xce::feed::LoadType type, ::Ice::Int id)
    {
        Reload(type, id, 0);
    }
    void Reload(::xce::feed::LoadType type, ::Ice::Int id, const ::Ice::Context& __ctx)
    {
        Reload(type, id, &__ctx);
    }
    
private:

    void Reload(::xce::feed::LoadType, ::Ice::Int, const ::Ice::Context*);
    
public:

    void ReloadBatch(::xce::feed::LoadType type, const ::MyUtil::IntSeq& ids)
    {
        ReloadBatch(type, ids, 0);
    }
    void ReloadBatch(::xce::feed::LoadType type, const ::MyUtil::IntSeq& ids, const ::Ice::Context& __ctx)
    {
        ReloadBatch(type, ids, &__ctx);
    }
    
private:

    void ReloadBatch(::xce::feed::LoadType, const ::MyUtil::IntSeq&, const ::Ice::Context*);
    
public:

    void addBuddyNotify(::Ice::Int host, ::Ice::Int guest)
    {
        addBuddyNotify(host, guest, 0);
    }
    void addBuddyNotify(::Ice::Int host, ::Ice::Int guest, const ::Ice::Context& __ctx)
    {
        addBuddyNotify(host, guest, &__ctx);
    }
    
private:

    void addBuddyNotify(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void buddyApplyNotify(::Ice::Int host, ::Ice::Int guest)
    {
        buddyApplyNotify(host, guest, 0);
    }
    void buddyApplyNotify(::Ice::Int host, ::Ice::Int guest, const ::Ice::Context& __ctx)
    {
        buddyApplyNotify(host, guest, &__ctx);
    }
    
private:

    void buddyApplyNotify(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void joinPageNotify(::Ice::Int page, ::Ice::Int fans)
    {
        joinPageNotify(page, fans, 0);
    }
    void joinPageNotify(::Ice::Int page, ::Ice::Int fans, const ::Ice::Context& __ctx)
    {
        joinPageNotify(page, fans, &__ctx);
    }
    
private:

    void joinPageNotify(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void guideBuddyReplyNotify(::Ice::Int newUser, ::Ice::Int buddy)
    {
        guideBuddyReplyNotify(newUser, buddy, 0);
    }
    void guideBuddyReplyNotify(::Ice::Int newUser, ::Ice::Int buddy, const ::Ice::Context& __ctx)
    {
        guideBuddyReplyNotify(newUser, buddy, &__ctx);
    }
    
private:

    void guideBuddyReplyNotify(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void addMiniSiteFeed(::Ice::Int siteid, ::Ice::Int userid)
    {
        addMiniSiteFeed(siteid, userid, 0);
    }
    void addMiniSiteFeed(::Ice::Int siteid, ::Ice::Int userid, const ::Ice::Context& __ctx)
    {
        addMiniSiteFeed(siteid, userid, &__ctx);
    }
    
private:

    void addMiniSiteFeed(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDispatcher> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDispatcher*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedDispatcher*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FeedItemManager : virtual public ::IceProxy::Ice::Object
{
public:

    ::xce::feed::FeedDataSeq getFeedDataByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit)
    {
        return getFeedDataByStype(uid, stypes, begin, limit, 0);
    }
    ::xce::feed::FeedDataSeq getFeedDataByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return getFeedDataByStype(uid, stypes, begin, limit, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataSeq getFeedDataByStype(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedDataSeq getFeedDataByType(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit)
    {
        return getFeedDataByType(uid, stypes, begin, limit, 0);
    }
    ::xce::feed::FeedDataSeq getFeedDataByType(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return getFeedDataByType(uid, stypes, begin, limit, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataSeq getFeedDataByType(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedDataSeq getFeedData(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit)
    {
        return getFeedData(uid, begin, limit, 0);
    }
    ::xce::feed::FeedDataSeq getFeedData(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return getFeedData(uid, begin, limit, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataSeq getFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedDataSeq getFeedData2(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit)
    {
        return getFeedData2(uid, begin, limit, 0);
    }
    ::xce::feed::FeedDataSeq getFeedData2(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return getFeedData2(uid, begin, limit, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataSeq getFeedData2(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedDataSeq getFeedDataByIds(const ::MyUtil::LongSeq& fids)
    {
        return getFeedDataByIds(fids, 0);
    }
    ::xce::feed::FeedDataSeq getFeedDataByIds(const ::MyUtil::LongSeq& fids, const ::Ice::Context& __ctx)
    {
        return getFeedDataByIds(fids, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataSeq getFeedDataByIds(const ::MyUtil::LongSeq&, const ::Ice::Context*);
    
public:

    void addFeed(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight)
    {
        addFeed(item, config, id2weight, 0);
    }
    void addFeed(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight, const ::Ice::Context& __ctx)
    {
        addFeed(item, config, id2weight, &__ctx);
    }
    
private:

    void addFeed(const ::xce::feed::FeedItem&, const ::xce::feed::FeedConfigPtr&, const ::MyUtil::Int2IntMap&, const ::Ice::Context*);
    
public:

    void setRead(::Ice::Int uid, ::Ice::Int stype, ::Ice::Long merge)
    {
        setRead(uid, stype, merge, 0);
    }
    void setRead(::Ice::Int uid, ::Ice::Int stype, ::Ice::Long merge, const ::Ice::Context& __ctx)
    {
        setRead(uid, stype, merge, &__ctx);
    }
    
private:

    void setRead(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::Ice::Context*);
    
public:

    void setReadById(::Ice::Int uid, ::Ice::Long feedId)
    {
        setReadById(uid, feedId, 0);
    }
    void setReadById(::Ice::Int uid, ::Ice::Long feedId, const ::Ice::Context& __ctx)
    {
        setReadById(uid, feedId, &__ctx);
    }
    
private:

    void setReadById(::Ice::Int, ::Ice::Long, const ::Ice::Context*);
    
public:

    void setReadAll(::Ice::Int uid)
    {
        setReadAll(uid, 0);
    }
    void setReadAll(::Ice::Int uid, const ::Ice::Context& __ctx)
    {
        setReadAll(uid, &__ctx);
    }
    
private:

    void setReadAll(::Ice::Int, const ::Ice::Context*);
    
public:

    bool hasFeed(::Ice::Int uid)
    {
        return hasFeed(uid, 0);
    }
    bool hasFeed(::Ice::Int uid, const ::Ice::Context& __ctx)
    {
        return hasFeed(uid, &__ctx);
    }
    
private:

    bool hasFeed(::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq& uids)
    {
        return GetFeedItemSeqSeqByUsers(uids, 0);
    }
    ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq& uids, const ::Ice::Context& __ctx)
    {
        return GetFeedItemSeqSeqByUsers(uids, &__ctx);
    }
    
private:

    ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq&, const ::Ice::Context*);
    
public:

    void PressureTest(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit)
    {
        PressureTest(uid, begin, limit, 0);
    }
    void PressureTest(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        PressureTest(uid, begin, limit, &__ctx);
    }
    
private:

    void PressureTest(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int uid)
    {
        return GetOriginalFeedData(uid, 0);
    }
    ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int uid, const ::Ice::Context& __ctx)
    {
        return GetOriginalFeedData(uid, &__ctx);
    }
    
private:

    ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int, const ::Ice::Context*);
    
public:

    void Reload(::Ice::Int uid)
    {
        Reload(uid, 0);
    }
    void Reload(::Ice::Int uid, const ::Ice::Context& __ctx)
    {
        Reload(uid, &__ctx);
    }
    
private:

    void Reload(::Ice::Int, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedItemManager> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedItemManager*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedItemManager*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FeedGroupManager : virtual public ::IceProxy::Ice::Object
{
public:

    ::xce::feed::FeedDataSeq GetFeedData(::Ice::Int gid, ::Ice::Int memberid, ::Ice::Int begin, ::Ice::Int limit)
    {
        return GetFeedData(gid, memberid, begin, limit, 0);
    }
    ::xce::feed::FeedDataSeq GetFeedData(::Ice::Int gid, ::Ice::Int memberid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return GetFeedData(gid, memberid, begin, limit, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataSeq GetFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedDataSeq GetFeedDataByType(::Ice::Int gid, ::Ice::Int memberid, const ::MyUtil::IntSeq& types, ::Ice::Int begin, ::Ice::Int limit)
    {
        return GetFeedDataByType(gid, memberid, types, begin, limit, 0);
    }
    ::xce::feed::FeedDataSeq GetFeedDataByType(::Ice::Int gid, ::Ice::Int memberid, const ::MyUtil::IntSeq& types, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return GetFeedDataByType(gid, memberid, types, begin, limit, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataSeq GetFeedDataByType(::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedDataSeq GetFeedDataByStype(::Ice::Int gid, ::Ice::Int memberid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit)
    {
        return GetFeedDataByStype(gid, memberid, stypes, begin, limit, 0);
    }
    ::xce::feed::FeedDataSeq GetFeedDataByStype(::Ice::Int gid, ::Ice::Int memberid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return GetFeedDataByStype(gid, memberid, stypes, begin, limit, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataSeq GetFeedDataByStype(::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByGroups(const ::MyUtil::IntSeq& groups)
    {
        return GetFeedItemSeqSeqByGroups(groups, 0);
    }
    ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByGroups(const ::MyUtil::IntSeq& groups, const ::Ice::Context& __ctx)
    {
        return GetFeedItemSeqSeqByGroups(groups, &__ctx);
    }
    
private:

    ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByGroups(const ::MyUtil::IntSeq&, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int gid)
    {
        return GetOriginalFeedData(gid, 0);
    }
    ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int gid, const ::Ice::Context& __ctx)
    {
        return GetOriginalFeedData(gid, &__ctx);
    }
    
private:

    ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int, const ::Ice::Context*);
    
public:

    void AddFeed(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight)
    {
        AddFeed(item, config, id2weight, 0);
    }
    void AddFeed(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight, const ::Ice::Context& __ctx)
    {
        AddFeed(item, config, id2weight, &__ctx);
    }
    
private:

    void AddFeed(const ::xce::feed::FeedItem&, const ::xce::feed::FeedConfigPtr&, const ::MyUtil::Int2IntMap&, const ::Ice::Context*);
    
public:

    void RemoveFeed(::Ice::Int gid, ::Ice::Int stype, ::Ice::Long merge)
    {
        RemoveFeed(gid, stype, merge, 0);
    }
    void RemoveFeed(::Ice::Int gid, ::Ice::Int stype, ::Ice::Long merge, const ::Ice::Context& __ctx)
    {
        RemoveFeed(gid, stype, merge, &__ctx);
    }
    
private:

    void RemoveFeed(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::Ice::Context*);
    
public:

    void RemoveFeedById(::Ice::Int gid, ::Ice::Long feedId)
    {
        RemoveFeedById(gid, feedId, 0);
    }
    void RemoveFeedById(::Ice::Int gid, ::Ice::Long feedId, const ::Ice::Context& __ctx)
    {
        RemoveFeedById(gid, feedId, &__ctx);
    }
    
private:

    void RemoveFeedById(::Ice::Int, ::Ice::Long, const ::Ice::Context*);
    
public:

    void RemoveAllFeed(::Ice::Int gid)
    {
        RemoveAllFeed(gid, 0);
    }
    void RemoveAllFeed(::Ice::Int gid, const ::Ice::Context& __ctx)
    {
        RemoveAllFeed(gid, &__ctx);
    }
    
private:

    void RemoveAllFeed(::Ice::Int, const ::Ice::Context*);
    
public:

    void RefreshFeed(::Ice::Int gid, ::Ice::Long feedid, ::Ice::Int timestamp)
    {
        RefreshFeed(gid, feedid, timestamp, 0);
    }
    void RefreshFeed(::Ice::Int gid, ::Ice::Long feedid, ::Ice::Int timestamp, const ::Ice::Context& __ctx)
    {
        RefreshFeed(gid, feedid, timestamp, &__ctx);
    }
    
private:

    void RefreshFeed(::Ice::Int, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);
    
public:

    void ReplyFeed(::Ice::Int gid, ::Ice::Long feedid, ::Ice::Int timestamp, ::Ice::Int owner, ::Ice::Int replier)
    {
        ReplyFeed(gid, feedid, timestamp, owner, replier, 0);
    }
    void ReplyFeed(::Ice::Int gid, ::Ice::Long feedid, ::Ice::Int timestamp, ::Ice::Int owner, ::Ice::Int replier, const ::Ice::Context& __ctx)
    {
        ReplyFeed(gid, feedid, timestamp, owner, replier, &__ctx);
    }
    
private:

    void ReplyFeed(::Ice::Int, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::MyUtil::Int2IntMap GetGroupsUnreadCount(::Ice::Int uid, const ::MyUtil::IntSeq& groups)
    {
        return GetGroupsUnreadCount(uid, groups, 0);
    }
    ::MyUtil::Int2IntMap GetGroupsUnreadCount(::Ice::Int uid, const ::MyUtil::IntSeq& groups, const ::Ice::Context& __ctx)
    {
        return GetGroupsUnreadCount(uid, groups, &__ctx);
    }
    
private:

    ::MyUtil::Int2IntMap GetGroupsUnreadCount(::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*);
    
public:

    void AddMember(::Ice::Int groupid, ::Ice::Int memberid)
    {
        AddMember(groupid, memberid, 0);
    }
    void AddMember(::Ice::Int groupid, ::Ice::Int memberid, const ::Ice::Context& __ctx)
    {
        AddMember(groupid, memberid, &__ctx);
    }
    
private:

    void AddMember(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void RemoveMember(::Ice::Int groupid, ::Ice::Int memberid)
    {
        RemoveMember(groupid, memberid, 0);
    }
    void RemoveMember(::Ice::Int groupid, ::Ice::Int memberid, const ::Ice::Context& __ctx)
    {
        RemoveMember(groupid, memberid, &__ctx);
    }
    
private:

    void RemoveMember(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::MyUtil::Int2IntSeqMap GetMembers(const ::MyUtil::IntSeq& gids)
    {
        return GetMembers(gids, 0);
    }
    ::MyUtil::Int2IntSeqMap GetMembers(const ::MyUtil::IntSeq& gids, const ::Ice::Context& __ctx)
    {
        return GetMembers(gids, &__ctx);
    }
    
private:

    ::MyUtil::Int2IntSeqMap GetMembers(const ::MyUtil::IntSeq&, const ::Ice::Context*);
    
public:

    void GetMembersTest(const ::MyUtil::IntSeq& gids)
    {
        GetMembersTest(gids, 0);
    }
    void GetMembersTest(const ::MyUtil::IntSeq& gids, const ::Ice::Context& __ctx)
    {
        GetMembersTest(gids, &__ctx);
    }
    
private:

    void GetMembersTest(const ::MyUtil::IntSeq&, const ::Ice::Context*);
    
public:

    bool HasFeed(::Ice::Int gid)
    {
        return HasFeed(gid, 0);
    }
    bool HasFeed(::Ice::Int gid, const ::Ice::Context& __ctx)
    {
        return HasFeed(gid, &__ctx);
    }
    
private:

    bool HasFeed(::Ice::Int, const ::Ice::Context*);
    
public:

    void ReadAllFeed(::Ice::Int gid, ::Ice::Int uid)
    {
        ReadAllFeed(gid, uid, 0);
    }
    void ReadAllFeed(::Ice::Int gid, ::Ice::Int uid, const ::Ice::Context& __ctx)
    {
        ReadAllFeed(gid, uid, &__ctx);
    }
    
private:

    void ReadAllFeed(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void Test(::Ice::Int gid, ::Ice::Int mid)
    {
        Test(gid, mid, 0);
    }
    void Test(::Ice::Int gid, ::Ice::Int mid, const ::Ice::Context& __ctx)
    {
        Test(gid, mid, &__ctx);
    }
    
private:

    void Test(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupManager> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupManager*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedGroupManager*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FeedGroupCount : virtual public ::IceProxy::Ice::Object
{
public:

    ::MyUtil::Int2IntMap GetUnread(::Ice::Int uid, const ::MyUtil::IntSeq& groups)
    {
        return GetUnread(uid, groups, 0);
    }
    ::MyUtil::Int2IntMap GetUnread(::Ice::Int uid, const ::MyUtil::IntSeq& groups, const ::Ice::Context& __ctx)
    {
        return GetUnread(uid, groups, &__ctx);
    }
    
private:

    ::MyUtil::Int2IntMap GetUnread(::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedGroupCount> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedGroupCount*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedGroupCount*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FeedContentManager : virtual public ::IceProxy::Ice::Object
{
public:

    ::xce::feed::FeedContentDict getFeedDict(const ::MyUtil::LongSeq& feedIds)
    {
        return getFeedDict(feedIds, 0);
    }
    ::xce::feed::FeedContentDict getFeedDict(const ::MyUtil::LongSeq& feedIds, const ::Ice::Context& __ctx)
    {
        return getFeedDict(feedIds, &__ctx);
    }
    
private:

    ::xce::feed::FeedContentDict getFeedDict(const ::MyUtil::LongSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int addFeedContent(const ::xce::feed::FeedDataPtr& data)
    {
        return addFeedContent(data, 0);
    }
    ::Ice::Int addFeedContent(const ::xce::feed::FeedDataPtr& data, const ::Ice::Context& __ctx)
    {
        return addFeedContent(data, &__ctx);
    }
    
private:

    ::Ice::Int addFeedContent(const ::xce::feed::FeedDataPtr&, const ::Ice::Context*);
    
public:

    void replaceFeedReply(const ::MyUtil::LongSeq& feedIds, const ::xce::feed::FeedReplyPtr& reply)
    {
        replaceFeedReply(feedIds, reply, 0);
    }
    void replaceFeedReply(const ::MyUtil::LongSeq& feedIds, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context& __ctx)
    {
        replaceFeedReply(feedIds, reply, &__ctx);
    }
    
private:

    void replaceFeedReply(const ::MyUtil::LongSeq&, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);
    
public:

    void removeFeed(::Ice::Long feedId)
    {
        removeFeed(feedId, 0);
    }
    void removeFeed(::Ice::Long feedId, const ::Ice::Context& __ctx)
    {
        removeFeed(feedId, &__ctx);
    }
    
private:

    void removeFeed(::Ice::Long, const ::Ice::Context*);
    
public:

    void removeFeeds(const ::MyUtil::LongSeq& feedIds)
    {
        removeFeeds(feedIds, 0);
    }
    void removeFeeds(const ::MyUtil::LongSeq& feedIds, const ::Ice::Context& __ctx)
    {
        removeFeeds(feedIds, &__ctx);
    }
    
private:

    void removeFeeds(const ::MyUtil::LongSeq&, const ::Ice::Context*);
    
public:

    void recoveryContent(::Ice::Long feedId)
    {
        recoveryContent(feedId, 0);
    }
    void recoveryContent(::Ice::Long feedId, const ::Ice::Context& __ctx)
    {
        recoveryContent(feedId, &__ctx);
    }
    
private:

    void recoveryContent(::Ice::Long, const ::Ice::Context*);
    
public:

    void ReplaceXML(const ::MyUtil::LongSeq& feedIds, const ::std::string& xml)
    {
        ReplaceXML(feedIds, xml, 0);
    }
    void ReplaceXML(const ::MyUtil::LongSeq& feedIds, const ::std::string& xml, const ::Ice::Context& __ctx)
    {
        ReplaceXML(feedIds, xml, &__ctx);
    }
    
private:

    void ReplaceXML(const ::MyUtil::LongSeq&, const ::std::string&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedContentManager> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedContentManager*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedContentManager*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FeedIndex : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndex> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndex*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedIndex*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FeedIndexManager : virtual public ::IceProxy::Ice::Object
{
public:

    void add(const ::xce::feed::FeedIndexPtr& index)
    {
        add(index, 0);
    }
    void add(const ::xce::feed::FeedIndexPtr& index, const ::Ice::Context& __ctx)
    {
        add(index, &__ctx);
    }
    
private:

    void add(const ::xce::feed::FeedIndexPtr&, const ::Ice::Context*);
    
public:

    ::MyUtil::LongSeq removeBySource(::Ice::Long source, ::Ice::Int stype)
    {
        return removeBySource(source, stype, 0);
    }
    ::MyUtil::LongSeq removeBySource(::Ice::Long source, ::Ice::Int stype, const ::Ice::Context& __ctx)
    {
        return removeBySource(source, stype, &__ctx);
    }
    
private:

    ::MyUtil::LongSeq removeBySource(::Ice::Long, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::MyUtil::LongSeq removeByParent(::Ice::Long parent, ::Ice::Int ptype)
    {
        return removeByParent(parent, ptype, 0);
    }
    ::MyUtil::LongSeq removeByParent(::Ice::Long parent, ::Ice::Int ptype, const ::Ice::Context& __ctx)
    {
        return removeByParent(parent, ptype, &__ctx);
    }
    
private:

    ::MyUtil::LongSeq removeByParent(::Ice::Long, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::MyUtil::LongSeq remove(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor)
    {
        return remove(source, stype, actor, 0);
    }
    ::MyUtil::LongSeq remove(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context& __ctx)
    {
        return remove(source, stype, actor, &__ctx);
    }
    
private:

    ::MyUtil::LongSeq remove(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedIndexSeq getBySourceAndStype(::Ice::Long source, ::Ice::Int stype, ::Ice::Int size)
    {
        return getBySourceAndStype(source, stype, size, 0);
    }
    ::xce::feed::FeedIndexSeq getBySourceAndStype(::Ice::Long source, ::Ice::Int stype, ::Ice::Int size, const ::Ice::Context& __ctx)
    {
        return getBySourceAndStype(source, stype, size, &__ctx);
    }
    
private:

    ::xce::feed::FeedIndexSeq getBySourceAndStype(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedIndexSeq getByParent(::Ice::Long parent, ::Ice::Int ptype, ::Ice::Int size)
    {
        return getByParent(parent, ptype, size, 0);
    }
    ::xce::feed::FeedIndexSeq getByParent(::Ice::Long parent, ::Ice::Int ptype, ::Ice::Int size, const ::Ice::Context& __ctx)
    {
        return getByParent(parent, ptype, size, &__ctx);
    }
    
private:

    ::xce::feed::FeedIndexSeq getByParent(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::MyUtil::LongSeq get(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor)
    {
        return get(source, stype, actor, 0);
    }
    ::MyUtil::LongSeq get(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context& __ctx)
    {
        return get(source, stype, actor, &__ctx);
    }
    
private:

    ::MyUtil::LongSeq get(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedIndexPtr getByFeed(::Ice::Long feed)
    {
        return getByFeed(feed, 0);
    }
    ::xce::feed::FeedIndexPtr getByFeed(::Ice::Long feed, const ::Ice::Context& __ctx)
    {
        return getByFeed(feed, &__ctx);
    }
    
private:

    ::xce::feed::FeedIndexPtr getByFeed(::Ice::Long, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedIndexManager> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedIndexManager*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedIndexManager*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FeedAssistant : virtual public ::IceProxy::Ice::Object
{
public:

    void removeFeedById(::Ice::Long feedId)
    {
        removeFeedById(feedId, 0);
    }
    void removeFeedById(::Ice::Long feedId, const ::Ice::Context& __ctx)
    {
        removeFeedById(feedId, &__ctx);
    }
    
private:

    void removeFeedById(::Ice::Long, const ::Ice::Context*);
    
public:

    void removeFeedBySource(::Ice::Long source, ::Ice::Int stype)
    {
        removeFeedBySource(source, stype, 0);
    }
    void removeFeedBySource(::Ice::Long source, ::Ice::Int stype, const ::Ice::Context& __ctx)
    {
        removeFeedBySource(source, stype, &__ctx);
    }
    
private:

    void removeFeedBySource(::Ice::Long, ::Ice::Int, const ::Ice::Context*);
    
public:

    void removeFeedBySourceHS(::Ice::Long source, ::Ice::Int stype)
    {
        removeFeedBySourceHS(source, stype, 0);
    }
    void removeFeedBySourceHS(::Ice::Long source, ::Ice::Int stype, const ::Ice::Context& __ctx)
    {
        removeFeedBySourceHS(source, stype, &__ctx);
    }
    
private:

    void removeFeedBySourceHS(::Ice::Long, ::Ice::Int, const ::Ice::Context*);
    
public:

    void removeFeedByParent(::Ice::Long parent, ::Ice::Int ptype)
    {
        removeFeedByParent(parent, ptype, 0);
    }
    void removeFeedByParent(::Ice::Long parent, ::Ice::Int ptype, const ::Ice::Context& __ctx)
    {
        removeFeedByParent(parent, ptype, &__ctx);
    }
    
private:

    void removeFeedByParent(::Ice::Long, ::Ice::Int, const ::Ice::Context*);
    
public:

    void removeFeed(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor)
    {
        removeFeed(source, stype, actor, 0);
    }
    void removeFeed(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context& __ctx)
    {
        removeFeed(source, stype, actor, &__ctx);
    }
    
private:

    void removeFeed(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void removeFeedReply(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, ::Ice::Long removeReplyId, const ::xce::feed::FeedReplyPtr& reply)
    {
        removeFeedReply(source, stype, actor, removeReplyId, reply, 0);
    }
    void removeFeedReply(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, ::Ice::Long removeReplyId, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context& __ctx)
    {
        removeFeedReply(source, stype, actor, removeReplyId, reply, &__ctx);
    }
    
private:

    void removeFeedReply(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Long, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);
    
public:

    void removeFeedReplyById(::Ice::Int stype, ::Ice::Long feedid, ::Ice::Long removeReplyId, const ::xce::feed::FeedReplyPtr& reply)
    {
        removeFeedReplyById(stype, feedid, removeReplyId, reply, 0);
    }
    void removeFeedReplyById(::Ice::Int stype, ::Ice::Long feedid, ::Ice::Long removeReplyId, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context& __ctx)
    {
        removeFeedReplyById(stype, feedid, removeReplyId, reply, &__ctx);
    }
    
private:

    void removeFeedReplyById(::Ice::Int, ::Ice::Long, ::Ice::Long, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);
    
public:

    void readNews(::Ice::Int user, ::Ice::Long feed)
    {
        readNews(user, feed, 0);
    }
    void readNews(::Ice::Int user, ::Ice::Long feed, const ::Ice::Context& __ctx)
    {
        readNews(user, feed, &__ctx);
    }
    
private:

    void readNews(::Ice::Int, ::Ice::Long, const ::Ice::Context*);
    
public:

    void readAllNews(::Ice::Int user)
    {
        readAllNews(user, 0);
    }
    void readAllNews(::Ice::Int user, const ::Ice::Context& __ctx)
    {
        readAllNews(user, &__ctx);
    }
    
private:

    void readAllNews(::Ice::Int, const ::Ice::Context*);
    
public:

    void readMini(::Ice::Int user, ::Ice::Long feed)
    {
        readMini(user, feed, 0);
    }
    void readMini(::Ice::Int user, ::Ice::Long feed, const ::Ice::Context& __ctx)
    {
        readMini(user, feed, &__ctx);
    }
    
private:

    void readMini(::Ice::Int, ::Ice::Long, const ::Ice::Context*);
    
public:

    void readAllMini(::Ice::Int user)
    {
        readAllMini(user, 0);
    }
    void readAllMini(::Ice::Int user, const ::Ice::Context& __ctx)
    {
        readAllMini(user, &__ctx);
    }
    
private:

    void readAllMini(::Ice::Int, const ::Ice::Context*);
    
public:

    void dispatch(const ::xce::feed::FeedSeedPtr& seed)
    {
        dispatch(seed, 0);
    }
    void dispatch(const ::xce::feed::FeedSeedPtr& seed, const ::Ice::Context& __ctx)
    {
        dispatch(seed, &__ctx);
    }
    
private:

    void dispatch(const ::xce::feed::FeedSeedPtr&, const ::Ice::Context*);
    
public:

    void dispatchEDM(const ::xce::feed::FeedSeedPtr& seed)
    {
        dispatchEDM(seed, 0);
    }
    void dispatchEDM(const ::xce::feed::FeedSeedPtr& seed, const ::Ice::Context& __ctx)
    {
        dispatchEDM(seed, &__ctx);
    }
    
private:

    void dispatchEDM(const ::xce::feed::FeedSeedPtr&, const ::Ice::Context*);
    
public:

    void addFeedReplyById(::Ice::Int stype, ::Ice::Long feedid, const ::xce::feed::FeedReplyPtr& reply)
    {
        addFeedReplyById(stype, feedid, reply, 0);
    }
    void addFeedReplyById(::Ice::Int stype, ::Ice::Long feedid, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context& __ctx)
    {
        addFeedReplyById(stype, feedid, reply, &__ctx);
    }
    
private:

    void addFeedReplyById(::Ice::Int, ::Ice::Long, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);
    
public:

    void dispatchWithReply(const ::xce::feed::FeedSeedPtr& seed, const ::xce::feed::FeedReplyPtr& reply)
    {
        dispatchWithReply(seed, reply, 0);
    }
    void dispatchWithReply(const ::xce::feed::FeedSeedPtr& seed, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context& __ctx)
    {
        dispatchWithReply(seed, reply, &__ctx);
    }
    
private:

    void dispatchWithReply(const ::xce::feed::FeedSeedPtr&, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);
    
public:

    void addFeedReply(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::xce::feed::FeedReplyPtr& reply)
    {
        addFeedReply(source, stype, actor, reply, 0);
    }
    void addFeedReply(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::xce::feed::FeedReplyPtr& reply, const ::Ice::Context& __ctx)
    {
        addFeedReply(source, stype, actor, reply, &__ctx);
    }
    
private:

    void addFeedReply(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);
    
public:

    void addFeedReplyWithConfig(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::xce::feed::FeedReplyPtr& reply, const ::MyUtil::Str2StrMap& replyConfig)
    {
        addFeedReplyWithConfig(source, stype, actor, reply, replyConfig, 0);
    }
    void addFeedReplyWithConfig(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::xce::feed::FeedReplyPtr& reply, const ::MyUtil::Str2StrMap& replyConfig, const ::Ice::Context& __ctx)
    {
        addFeedReplyWithConfig(source, stype, actor, reply, replyConfig, &__ctx);
    }
    
private:

    void addFeedReplyWithConfig(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::xce::feed::FeedReplyPtr&, const ::MyUtil::Str2StrMap&, const ::Ice::Context*);
    
public:

    ::Ice::Long getFeedId(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor)
    {
        return getFeedId(source, stype, actor, 0);
    }
    ::Ice::Long getFeedId(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context& __ctx)
    {
        return getFeedId(source, stype, actor, &__ctx);
    }
    
private:

    ::Ice::Long getFeedId(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void cacheSync(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor)
    {
        cacheSync(source, stype, actor, 0);
    }
    void cacheSync(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::Ice::Context& __ctx)
    {
        cacheSync(source, stype, actor, &__ctx);
    }
    
private:

    void cacheSync(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Long createFeedId()
    {
        return createFeedId(0);
    }
    ::Ice::Long createFeedId(const ::Ice::Context& __ctx)
    {
        return createFeedId(&__ctx);
    }
    
private:

    ::Ice::Long createFeedId(const ::Ice::Context*);
    
public:

    void dispatchAgain(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, ::Ice::Int toid)
    {
        dispatchAgain(source, stype, actor, toid, 0);
    }
    void dispatchAgain(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, ::Ice::Int toid, const ::Ice::Context& __ctx)
    {
        dispatchAgain(source, stype, actor, toid, &__ctx);
    }
    
private:

    void dispatchAgain(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void ReplaceXML(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::std::string& xml)
    {
        ReplaceXML(source, stype, actor, xml, 0);
    }
    void ReplaceXML(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::std::string& xml, const ::Ice::Context& __ctx)
    {
        ReplaceXML(source, stype, actor, xml, &__ctx);
    }
    
private:

    void ReplaceXML(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    void DirectedSend(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::MyUtil::IntSeq& targets)
    {
        DirectedSend(source, stype, actor, targets, 0);
    }
    void DirectedSend(::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, const ::MyUtil::IntSeq& targets, const ::Ice::Context& __ctx)
    {
        DirectedSend(source, stype, actor, targets, &__ctx);
    }
    
private:

    void DirectedSend(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*);
    
public:

    void MarkFeed(::Ice::Int uid, ::Ice::Long fid, ::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, bool mark)
    {
        MarkFeed(uid, fid, source, stype, actor, mark, 0);
    }
    void MarkFeed(::Ice::Int uid, ::Ice::Long fid, ::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, bool mark, const ::Ice::Context& __ctx)
    {
        MarkFeed(uid, fid, source, stype, actor, mark, &__ctx);
    }
    
private:

    void MarkFeed(::Ice::Int, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, bool, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedAssistant> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedAssistant*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedAssistant*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FocusManager : virtual public ::IceProxy::Ice::Object
{
public:

    ::xce::feed::FeedDataSeq GetFocusFeedData(::Ice::Int user, ::Ice::Int begin, ::Ice::Int limit)
    {
        return GetFocusFeedData(user, begin, limit, 0);
    }
    ::xce::feed::FeedDataSeq GetFocusFeedData(::Ice::Int user, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return GetFocusFeedData(user, begin, limit, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataSeq GetFocusFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedDataSeq GetFocusFeedDataByStype(::Ice::Int user, ::Ice::Int begin, ::Ice::Int limit, const ::MyUtil::IntSeq& stypes)
    {
        return GetFocusFeedDataByStype(user, begin, limit, stypes, 0);
    }
    ::xce::feed::FeedDataSeq GetFocusFeedDataByStype(::Ice::Int user, ::Ice::Int begin, ::Ice::Int limit, const ::MyUtil::IntSeq& stypes, const ::Ice::Context& __ctx)
    {
        return GetFocusFeedDataByStype(user, begin, limit, stypes, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataSeq GetFocusFeedDataByStype(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*);
    
public:

    bool AddFocuses(::Ice::Int user, ::Ice::Int target)
    {
        return AddFocuses(user, target, 0);
    }
    bool AddFocuses(::Ice::Int user, ::Ice::Int target, const ::Ice::Context& __ctx)
    {
        return AddFocuses(user, target, &__ctx);
    }
    
private:

    bool AddFocuses(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void DelFocuses(::Ice::Int user, ::Ice::Int target)
    {
        DelFocuses(user, target, 0);
    }
    void DelFocuses(::Ice::Int user, ::Ice::Int target, const ::Ice::Context& __ctx)
    {
        DelFocuses(user, target, &__ctx);
    }
    
private:

    void DelFocuses(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::MyUtil::IntSeq GetFocuses(::Ice::Int user)
    {
        return GetFocuses(user, 0);
    }
    ::MyUtil::IntSeq GetFocuses(::Ice::Int user, const ::Ice::Context& __ctx)
    {
        return GetFocuses(user, &__ctx);
    }
    
private:

    ::MyUtil::IntSeq GetFocuses(::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int GetFocusFeedIncCount(::Ice::Int user)
    {
        return GetFocusFeedIncCount(user, 0);
    }
    ::Ice::Int GetFocusFeedIncCount(::Ice::Int user, const ::Ice::Context& __ctx)
    {
        return GetFocusFeedIncCount(user, &__ctx);
    }
    
private:

    ::Ice::Int GetFocusFeedIncCount(::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int AddFocusWithCheck(::Ice::Int user, ::Ice::Int target)
    {
        return AddFocusWithCheck(user, target, 0);
    }
    ::Ice::Int AddFocusWithCheck(::Ice::Int user, ::Ice::Int target, const ::Ice::Context& __ctx)
    {
        return AddFocusWithCheck(user, target, &__ctx);
    }
    
private:

    ::Ice::Int AddFocusWithCheck(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<FocusManager> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FocusManager> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FocusManager*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FocusManager*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FeedDataRes : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedDataRes> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedDataRes*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedDataRes*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FeedNewsManager : virtual public ::IceProxy::Ice::Object
{
public:

    ::xce::feed::FeedDataResPtr GetLiveFeedData(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit)
    {
        return GetLiveFeedData(uid, begin, limit, 0);
    }
    ::xce::feed::FeedDataResPtr GetLiveFeedData(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return GetLiveFeedData(uid, begin, limit, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataResPtr GetLiveFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedDataResPtr GetLiveFeedDataByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit)
    {
        return GetLiveFeedDataByStype(uid, stypes, begin, limit, 0);
    }
    ::xce::feed::FeedDataResPtr GetLiveFeedDataByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return GetLiveFeedDataByStype(uid, stypes, begin, limit, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataResPtr GetLiveFeedDataByStype(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedDataResPtr GetLiveFeedDataByType(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit)
    {
        return GetLiveFeedDataByType(uid, stypes, begin, limit, 0);
    }
    ::xce::feed::FeedDataResPtr GetLiveFeedDataByType(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return GetLiveFeedDataByType(uid, stypes, begin, limit, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataResPtr GetLiveFeedDataByType(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedDataResPtr GetHotFeedData(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit)
    {
        return GetHotFeedData(uid, begin, limit, 0);
    }
    ::xce::feed::FeedDataResPtr GetHotFeedData(::Ice::Int uid, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return GetHotFeedData(uid, begin, limit, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataResPtr GetHotFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedDataResPtr GetHotFeedDataByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit)
    {
        return GetHotFeedDataByStype(uid, stypes, begin, limit, 0);
    }
    ::xce::feed::FeedDataResPtr GetHotFeedDataByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return GetHotFeedDataByStype(uid, stypes, begin, limit, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataResPtr GetHotFeedDataByStype(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedDataResPtr GetHotFeedDataByType(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit)
    {
        return GetHotFeedDataByType(uid, stypes, begin, limit, 0);
    }
    ::xce::feed::FeedDataResPtr GetHotFeedDataByType(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, ::Ice::Int begin, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return GetHotFeedDataByType(uid, stypes, begin, limit, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataResPtr GetHotFeedDataByType(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedDataSeq GetFeedDataByIds(const ::MyUtil::LongSeq& fids)
    {
        return GetFeedDataByIds(fids, 0);
    }
    ::xce::feed::FeedDataSeq GetFeedDataByIds(const ::MyUtil::LongSeq& fids, const ::Ice::Context& __ctx)
    {
        return GetFeedDataByIds(fids, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataSeq GetFeedDataByIds(const ::MyUtil::LongSeq&, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedDataSeq GetFeedDataByIdsWithUid(::Ice::Int uid, const ::MyUtil::LongSeq& fids, ::Ice::Long first, ::Ice::Int stype)
    {
        return GetFeedDataByIdsWithUid(uid, fids, first, stype, 0);
    }
    ::xce::feed::FeedDataSeq GetFeedDataByIdsWithUid(::Ice::Int uid, const ::MyUtil::LongSeq& fids, ::Ice::Long first, ::Ice::Int stype, const ::Ice::Context& __ctx)
    {
        return GetFeedDataByIdsWithUid(uid, fids, first, stype, &__ctx);
    }
    
private:

    ::xce::feed::FeedDataSeq GetFeedDataByIdsWithUid(::Ice::Int, const ::MyUtil::LongSeq&, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int uid)
    {
        return GetOriginalFeedData(uid, 0);
    }
    ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int uid, const ::Ice::Context& __ctx)
    {
        return GetOriginalFeedData(uid, &__ctx);
    }
    
private:

    ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int GetUnviewedCount(::Ice::Int uid, ::Ice::Int type)
    {
        return GetUnviewedCount(uid, type, 0);
    }
    ::Ice::Int GetUnviewedCount(::Ice::Int uid, ::Ice::Int type, const ::Ice::Context& __ctx)
    {
        return GetUnviewedCount(uid, type, &__ctx);
    }
    
private:

    ::Ice::Int GetUnviewedCount(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::MyUtil::Int2IntMap GetCountMapByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, bool unviewed)
    {
        return GetCountMapByStype(uid, stypes, unviewed, 0);
    }
    ::MyUtil::Int2IntMap GetCountMapByStype(::Ice::Int uid, const ::MyUtil::IntSeq& stypes, bool unviewed, const ::Ice::Context& __ctx)
    {
        return GetCountMapByStype(uid, stypes, unviewed, &__ctx);
    }
    
private:

    ::MyUtil::Int2IntMap GetCountMapByStype(::Ice::Int, const ::MyUtil::IntSeq&, bool, const ::Ice::Context*);
    
public:

    void AddFeed(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight)
    {
        AddFeed(item, config, id2weight, 0);
    }
    void AddFeed(const ::xce::feed::FeedItem& item, const ::xce::feed::FeedConfigPtr& config, const ::MyUtil::Int2IntMap& id2weight, const ::Ice::Context& __ctx)
    {
        AddFeed(item, config, id2weight, &__ctx);
    }
    
private:

    void AddFeed(const ::xce::feed::FeedItem&, const ::xce::feed::FeedConfigPtr&, const ::MyUtil::Int2IntMap&, const ::Ice::Context*);
    
public:

    void SetRead(::Ice::Int uid, ::Ice::Int stype, ::Ice::Long merge)
    {
        SetRead(uid, stype, merge, 0);
    }
    void SetRead(::Ice::Int uid, ::Ice::Int stype, ::Ice::Long merge, const ::Ice::Context& __ctx)
    {
        SetRead(uid, stype, merge, &__ctx);
    }
    
private:

    void SetRead(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::Ice::Context*);
    
public:

    void SetReadById(::Ice::Int uid, ::Ice::Long feedId)
    {
        SetReadById(uid, feedId, 0);
    }
    void SetReadById(::Ice::Int uid, ::Ice::Long feedId, const ::Ice::Context& __ctx)
    {
        SetReadById(uid, feedId, &__ctx);
    }
    
private:

    void SetReadById(::Ice::Int, ::Ice::Long, const ::Ice::Context*);
    
public:

    void SetReadAll(::Ice::Int uid)
    {
        SetReadAll(uid, 0);
    }
    void SetReadAll(::Ice::Int uid, const ::Ice::Context& __ctx)
    {
        SetReadAll(uid, &__ctx);
    }
    
private:

    void SetReadAll(::Ice::Int, const ::Ice::Context*);
    
public:

    bool HasFeed(::Ice::Int uid)
    {
        return HasFeed(uid, 0);
    }
    bool HasFeed(::Ice::Int uid, const ::Ice::Context& __ctx)
    {
        return HasFeed(uid, &__ctx);
    }
    
private:

    bool HasFeed(::Ice::Int, const ::Ice::Context*);
    
public:

    void load(::Ice::Int userid)
    {
        load(userid, 0);
    }
    void load(::Ice::Int userid, const ::Ice::Context& __ctx)
    {
        load(userid, &__ctx);
    }
    
private:

    void load(::Ice::Int, const ::Ice::Context*);
    
public:

    ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq& uids)
    {
        return GetFeedItemSeqSeqByUsers(uids, 0);
    }
    ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq& uids, const ::Ice::Context& __ctx)
    {
        return GetFeedItemSeqSeqByUsers(uids, &__ctx);
    }
    
private:

    ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq&, const ::Ice::Context*);
    
public:

    void MarkFeed(::Ice::Int uid, ::Ice::Long fid, ::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, bool mark)
    {
        MarkFeed(uid, fid, source, stype, actor, mark, 0);
    }
    void MarkFeed(::Ice::Int uid, ::Ice::Long fid, ::Ice::Long source, ::Ice::Int stype, ::Ice::Int actor, bool mark, const ::Ice::Context& __ctx)
    {
        MarkFeed(uid, fid, source, stype, actor, mark, &__ctx);
    }
    
private:

    void MarkFeed(::Ice::Int, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, bool, const ::Ice::Context*);
    
public:

    void EraseUser(::Ice::Int uid)
    {
        EraseUser(uid, 0);
    }
    void EraseUser(::Ice::Int uid, const ::Ice::Context& __ctx)
    {
        EraseUser(uid, &__ctx);
    }
    
private:

    void EraseUser(::Ice::Int, const ::Ice::Context*);
    
public:

    void AddFeedReply(const ::xce::feed::FeedIndexPtr& idx, ::Ice::Int replycnt)
    {
        AddFeedReply(idx, replycnt, 0);
    }
    void AddFeedReply(const ::xce::feed::FeedIndexPtr& idx, ::Ice::Int replycnt, const ::Ice::Context& __ctx)
    {
        AddFeedReply(idx, replycnt, &__ctx);
    }
    
private:

    void AddFeedReply(const ::xce::feed::FeedIndexPtr&, ::Ice::Int, const ::Ice::Context*);
    
public:

    void AddWhiteList(::Ice::Int userid)
    {
        AddWhiteList(userid, 0);
    }
    void AddWhiteList(::Ice::Int userid, const ::Ice::Context& __ctx)
    {
        AddWhiteList(userid, &__ctx);
    }
    
private:

    void AddWhiteList(::Ice::Int, const ::Ice::Context*);
    
public:

    void DelWhiteList(::Ice::Int userid)
    {
        DelWhiteList(userid, 0);
    }
    void DelWhiteList(::Ice::Int userid, const ::Ice::Context& __ctx)
    {
        DelWhiteList(userid, &__ctx);
    }
    
private:

    void DelWhiteList(::Ice::Int, const ::Ice::Context*);
    
public:

    ::MyUtil::IntSeq GetWhiteList()
    {
        return GetWhiteList(0);
    }
    ::MyUtil::IntSeq GetWhiteList(const ::Ice::Context& __ctx)
    {
        return GetWhiteList(&__ctx);
    }
    
private:

    ::MyUtil::IntSeq GetWhiteList(const ::Ice::Context*);
    
public:

    void ClearWhiteList()
    {
        ClearWhiteList(0);
    }
    void ClearWhiteList(const ::Ice::Context& __ctx)
    {
        ClearWhiteList(&__ctx);
    }
    
private:

    void ClearWhiteList(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FeedNewsManager> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FeedNewsManager*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FeedNewsManager*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

}

namespace IceDelegate
{

namespace xce
{

namespace feed
{

class FeedSeed : virtual public ::IceDelegate::Ice::Object
{
public:
};

class FeedReply : virtual public ::IceDelegate::Ice::Object
{
public:
};

class ReplyData : virtual public ::IceDelegate::Ice::Object
{
public:
};

class FeedData : virtual public ::IceDelegate::Ice::Object
{
public:
};

class FeedDataByte : virtual public ::IceDelegate::Ice::Object
{
public:
};

class FeedDataByteRes : virtual public ::IceDelegate::Ice::Object
{
public:
};

class FeedContent : virtual public ::IceDelegate::Ice::Object
{
public:
};

class FeedConfig : virtual public ::IceDelegate::Ice::Object
{
public:
};

class FeedDispatcher : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void dispatch(const ::xce::feed::FeedSeedPtr&, const ::xce::feed::FeedConfigPtr&, const ::Ice::Context*) = 0;

    virtual void dispatchReply(const ::xce::feed::ReplyDataPtr&, const ::xce::feed::FeedConfigPtr&, const ::Ice::Context*) = 0;

    virtual void Reload(::xce::feed::LoadType, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void ReloadBatch(::xce::feed::LoadType, const ::MyUtil::IntSeq&, const ::Ice::Context*) = 0;

    virtual void addBuddyNotify(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void buddyApplyNotify(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void joinPageNotify(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void guideBuddyReplyNotify(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void addMiniSiteFeed(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;
};

class FeedItemManager : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::xce::feed::FeedDataSeq getFeedDataByStype(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedDataSeq getFeedDataByType(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedDataSeq getFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedDataSeq getFeedData2(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedDataSeq getFeedDataByIds(const ::MyUtil::LongSeq&, const ::Ice::Context*) = 0;

    virtual void addFeed(const ::xce::feed::FeedItem&, const ::xce::feed::FeedConfigPtr&, const ::MyUtil::Int2IntMap&, const ::Ice::Context*) = 0;

    virtual void setRead(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual void setReadById(::Ice::Int, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual void setReadAll(::Ice::Int, const ::Ice::Context*) = 0;

    virtual bool hasFeed(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq&, const ::Ice::Context*) = 0;

    virtual void PressureTest(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void Reload(::Ice::Int, const ::Ice::Context*) = 0;
};

class FeedGroupManager : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::xce::feed::FeedDataSeq GetFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedDataSeq GetFeedDataByType(::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedDataSeq GetFeedDataByStype(::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByGroups(const ::MyUtil::IntSeq&, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void AddFeed(const ::xce::feed::FeedItem&, const ::xce::feed::FeedConfigPtr&, const ::MyUtil::Int2IntMap&, const ::Ice::Context*) = 0;

    virtual void RemoveFeed(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual void RemoveFeedById(::Ice::Int, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual void RemoveAllFeed(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void RefreshFeed(::Ice::Int, ::Ice::Long, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void ReplyFeed(::Ice::Int, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::MyUtil::Int2IntMap GetGroupsUnreadCount(::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*) = 0;

    virtual void AddMember(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void RemoveMember(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::MyUtil::Int2IntSeqMap GetMembers(const ::MyUtil::IntSeq&, const ::Ice::Context*) = 0;

    virtual void GetMembersTest(const ::MyUtil::IntSeq&, const ::Ice::Context*) = 0;

    virtual bool HasFeed(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void ReadAllFeed(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void Test(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;
};

class FeedGroupCount : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::MyUtil::Int2IntMap GetUnread(::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*) = 0;
};

class FeedContentManager : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::xce::feed::FeedContentDict getFeedDict(const ::MyUtil::LongSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int addFeedContent(const ::xce::feed::FeedDataPtr&, const ::Ice::Context*) = 0;

    virtual void replaceFeedReply(const ::MyUtil::LongSeq&, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*) = 0;

    virtual void removeFeed(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void removeFeeds(const ::MyUtil::LongSeq&, const ::Ice::Context*) = 0;

    virtual void recoveryContent(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void ReplaceXML(const ::MyUtil::LongSeq&, const ::std::string&, const ::Ice::Context*) = 0;
};

class FeedIndex : virtual public ::IceDelegate::Ice::Object
{
public:
};

class FeedIndexManager : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void add(const ::xce::feed::FeedIndexPtr&, const ::Ice::Context*) = 0;

    virtual ::MyUtil::LongSeq removeBySource(::Ice::Long, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::MyUtil::LongSeq removeByParent(::Ice::Long, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::MyUtil::LongSeq remove(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedIndexSeq getBySourceAndStype(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedIndexSeq getByParent(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::MyUtil::LongSeq get(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedIndexPtr getByFeed(::Ice::Long, const ::Ice::Context*) = 0;
};

class FeedAssistant : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void removeFeedById(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void removeFeedBySource(::Ice::Long, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void removeFeedBySourceHS(::Ice::Long, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void removeFeedByParent(::Ice::Long, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void removeFeed(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void removeFeedReply(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Long, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*) = 0;

    virtual void removeFeedReplyById(::Ice::Int, ::Ice::Long, ::Ice::Long, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*) = 0;

    virtual void readNews(::Ice::Int, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual void readAllNews(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void readMini(::Ice::Int, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual void readAllMini(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void dispatch(const ::xce::feed::FeedSeedPtr&, const ::Ice::Context*) = 0;

    virtual void dispatchEDM(const ::xce::feed::FeedSeedPtr&, const ::Ice::Context*) = 0;

    virtual void addFeedReplyById(::Ice::Int, ::Ice::Long, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*) = 0;

    virtual void dispatchWithReply(const ::xce::feed::FeedSeedPtr&, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*) = 0;

    virtual void addFeedReply(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*) = 0;

    virtual void addFeedReplyWithConfig(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::xce::feed::FeedReplyPtr&, const ::MyUtil::Str2StrMap&, const ::Ice::Context*) = 0;

    virtual ::Ice::Long getFeedId(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void cacheSync(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Long createFeedId(const ::Ice::Context*) = 0;

    virtual void dispatchAgain(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void ReplaceXML(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void DirectedSend(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*) = 0;

    virtual void MarkFeed(::Ice::Int, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, bool, const ::Ice::Context*) = 0;
};

class FocusManager : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::xce::feed::FeedDataSeq GetFocusFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedDataSeq GetFocusFeedDataByStype(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*) = 0;

    virtual bool AddFocuses(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void DelFocuses(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::MyUtil::IntSeq GetFocuses(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetFocusFeedIncCount(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int AddFocusWithCheck(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;
};

class FeedDataRes : virtual public ::IceDelegate::Ice::Object
{
public:
};

class FeedNewsManager : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::xce::feed::FeedDataResPtr GetLiveFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedDataResPtr GetLiveFeedDataByStype(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedDataResPtr GetLiveFeedDataByType(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedDataResPtr GetHotFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedDataResPtr GetHotFeedDataByStype(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedDataResPtr GetHotFeedDataByType(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedDataSeq GetFeedDataByIds(const ::MyUtil::LongSeq&, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedDataSeq GetFeedDataByIdsWithUid(::Ice::Int, const ::MyUtil::LongSeq&, ::Ice::Long, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int GetUnviewedCount(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::MyUtil::Int2IntMap GetCountMapByStype(::Ice::Int, const ::MyUtil::IntSeq&, bool, const ::Ice::Context*) = 0;

    virtual void AddFeed(const ::xce::feed::FeedItem&, const ::xce::feed::FeedConfigPtr&, const ::MyUtil::Int2IntMap&, const ::Ice::Context*) = 0;

    virtual void SetRead(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual void SetReadById(::Ice::Int, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual void SetReadAll(::Ice::Int, const ::Ice::Context*) = 0;

    virtual bool HasFeed(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void load(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq&, const ::Ice::Context*) = 0;

    virtual void MarkFeed(::Ice::Int, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, bool, const ::Ice::Context*) = 0;

    virtual void EraseUser(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void AddFeedReply(const ::xce::feed::FeedIndexPtr&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void AddWhiteList(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void DelWhiteList(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::MyUtil::IntSeq GetWhiteList(const ::Ice::Context*) = 0;

    virtual void ClearWhiteList(const ::Ice::Context*) = 0;
};

}

}

}

namespace IceDelegateM
{

namespace xce
{

namespace feed
{

class FeedSeed : virtual public ::IceDelegate::xce::feed::FeedSeed,
                 virtual public ::IceDelegateM::Ice::Object
{
public:
};

class FeedReply : virtual public ::IceDelegate::xce::feed::FeedReply,
                  virtual public ::IceDelegateM::Ice::Object
{
public:
};

class ReplyData : virtual public ::IceDelegate::xce::feed::ReplyData,
                  virtual public ::IceDelegateM::Ice::Object
{
public:
};

class FeedData : virtual public ::IceDelegate::xce::feed::FeedData,
                 virtual public ::IceDelegateM::Ice::Object
{
public:
};

class FeedDataByte : virtual public ::IceDelegate::xce::feed::FeedDataByte,
                     virtual public ::IceDelegateM::Ice::Object
{
public:
};

class FeedDataByteRes : virtual public ::IceDelegate::xce::feed::FeedDataByteRes,
                        virtual public ::IceDelegateM::Ice::Object
{
public:
};

class FeedContent : virtual public ::IceDelegate::xce::feed::FeedContent,
                    virtual public ::IceDelegateM::Ice::Object
{
public:
};

class FeedConfig : virtual public ::IceDelegate::xce::feed::FeedConfig,
                   virtual public ::IceDelegateM::Ice::Object
{
public:
};

class FeedDispatcher : virtual public ::IceDelegate::xce::feed::FeedDispatcher,
                       virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void dispatch(const ::xce::feed::FeedSeedPtr&, const ::xce::feed::FeedConfigPtr&, const ::Ice::Context*);

    virtual void dispatchReply(const ::xce::feed::ReplyDataPtr&, const ::xce::feed::FeedConfigPtr&, const ::Ice::Context*);

    virtual void Reload(::xce::feed::LoadType, ::Ice::Int, const ::Ice::Context*);

    virtual void ReloadBatch(::xce::feed::LoadType, const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual void addBuddyNotify(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void buddyApplyNotify(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void joinPageNotify(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void guideBuddyReplyNotify(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void addMiniSiteFeed(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
};

class FeedItemManager : virtual public ::IceDelegate::xce::feed::FeedItemManager,
                        virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::xce::feed::FeedDataSeq getFeedDataByStype(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq getFeedDataByType(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq getFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq getFeedData2(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq getFeedDataByIds(const ::MyUtil::LongSeq&, const ::Ice::Context*);

    virtual void addFeed(const ::xce::feed::FeedItem&, const ::xce::feed::FeedConfigPtr&, const ::MyUtil::Int2IntMap&, const ::Ice::Context*);

    virtual void setRead(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void setReadById(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void setReadAll(::Ice::Int, const ::Ice::Context*);

    virtual bool hasFeed(::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual void PressureTest(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int, const ::Ice::Context*);

    virtual void Reload(::Ice::Int, const ::Ice::Context*);
};

class FeedGroupManager : virtual public ::IceDelegate::xce::feed::FeedGroupManager,
                         virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::xce::feed::FeedDataSeq GetFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq GetFeedDataByType(::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq GetFeedDataByStype(::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByGroups(const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int, const ::Ice::Context*);

    virtual void AddFeed(const ::xce::feed::FeedItem&, const ::xce::feed::FeedConfigPtr&, const ::MyUtil::Int2IntMap&, const ::Ice::Context*);

    virtual void RemoveFeed(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void RemoveFeedById(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void RemoveAllFeed(::Ice::Int, const ::Ice::Context*);

    virtual void RefreshFeed(::Ice::Int, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual void ReplyFeed(::Ice::Int, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::MyUtil::Int2IntMap GetGroupsUnreadCount(::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual void AddMember(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void RemoveMember(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::MyUtil::Int2IntSeqMap GetMembers(const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual void GetMembersTest(const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual bool HasFeed(::Ice::Int, const ::Ice::Context*);

    virtual void ReadAllFeed(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void Test(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
};

class FeedGroupCount : virtual public ::IceDelegate::xce::feed::FeedGroupCount,
                       virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::MyUtil::Int2IntMap GetUnread(::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*);
};

class FeedContentManager : virtual public ::IceDelegate::xce::feed::FeedContentManager,
                           virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::xce::feed::FeedContentDict getFeedDict(const ::MyUtil::LongSeq&, const ::Ice::Context*);

    virtual ::Ice::Int addFeedContent(const ::xce::feed::FeedDataPtr&, const ::Ice::Context*);

    virtual void replaceFeedReply(const ::MyUtil::LongSeq&, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);

    virtual void removeFeed(::Ice::Long, const ::Ice::Context*);

    virtual void removeFeeds(const ::MyUtil::LongSeq&, const ::Ice::Context*);

    virtual void recoveryContent(::Ice::Long, const ::Ice::Context*);

    virtual void ReplaceXML(const ::MyUtil::LongSeq&, const ::std::string&, const ::Ice::Context*);
};

class FeedIndex : virtual public ::IceDelegate::xce::feed::FeedIndex,
                  virtual public ::IceDelegateM::Ice::Object
{
public:
};

class FeedIndexManager : virtual public ::IceDelegate::xce::feed::FeedIndexManager,
                         virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void add(const ::xce::feed::FeedIndexPtr&, const ::Ice::Context*);

    virtual ::MyUtil::LongSeq removeBySource(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual ::MyUtil::LongSeq removeByParent(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual ::MyUtil::LongSeq remove(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedIndexSeq getBySourceAndStype(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedIndexSeq getByParent(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::MyUtil::LongSeq get(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedIndexPtr getByFeed(::Ice::Long, const ::Ice::Context*);
};

class FeedAssistant : virtual public ::IceDelegate::xce::feed::FeedAssistant,
                      virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void removeFeedById(::Ice::Long, const ::Ice::Context*);

    virtual void removeFeedBySource(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual void removeFeedBySourceHS(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual void removeFeedByParent(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual void removeFeed(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void removeFeedReply(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Long, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);

    virtual void removeFeedReplyById(::Ice::Int, ::Ice::Long, ::Ice::Long, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);

    virtual void readNews(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void readAllNews(::Ice::Int, const ::Ice::Context*);

    virtual void readMini(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void readAllMini(::Ice::Int, const ::Ice::Context*);

    virtual void dispatch(const ::xce::feed::FeedSeedPtr&, const ::Ice::Context*);

    virtual void dispatchEDM(const ::xce::feed::FeedSeedPtr&, const ::Ice::Context*);

    virtual void addFeedReplyById(::Ice::Int, ::Ice::Long, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);

    virtual void dispatchWithReply(const ::xce::feed::FeedSeedPtr&, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);

    virtual void addFeedReply(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);

    virtual void addFeedReplyWithConfig(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::xce::feed::FeedReplyPtr&, const ::MyUtil::Str2StrMap&, const ::Ice::Context*);

    virtual ::Ice::Long getFeedId(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void cacheSync(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Long createFeedId(const ::Ice::Context*);

    virtual void dispatchAgain(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void ReplaceXML(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual void DirectedSend(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual void MarkFeed(::Ice::Int, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, bool, const ::Ice::Context*);
};

class FocusManager : virtual public ::IceDelegate::xce::feed::FocusManager,
                     virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::xce::feed::FeedDataSeq GetFocusFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq GetFocusFeedDataByStype(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual bool AddFocuses(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void DelFocuses(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::MyUtil::IntSeq GetFocuses(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetFocusFeedIncCount(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int AddFocusWithCheck(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
};

class FeedDataRes : virtual public ::IceDelegate::xce::feed::FeedDataRes,
                    virtual public ::IceDelegateM::Ice::Object
{
public:
};

class FeedNewsManager : virtual public ::IceDelegate::xce::feed::FeedNewsManager,
                        virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::xce::feed::FeedDataResPtr GetLiveFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataResPtr GetLiveFeedDataByStype(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataResPtr GetLiveFeedDataByType(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataResPtr GetHotFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataResPtr GetHotFeedDataByStype(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataResPtr GetHotFeedDataByType(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq GetFeedDataByIds(const ::MyUtil::LongSeq&, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq GetFeedDataByIdsWithUid(::Ice::Int, const ::MyUtil::LongSeq&, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetUnviewedCount(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::MyUtil::Int2IntMap GetCountMapByStype(::Ice::Int, const ::MyUtil::IntSeq&, bool, const ::Ice::Context*);

    virtual void AddFeed(const ::xce::feed::FeedItem&, const ::xce::feed::FeedConfigPtr&, const ::MyUtil::Int2IntMap&, const ::Ice::Context*);

    virtual void SetRead(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void SetReadById(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void SetReadAll(::Ice::Int, const ::Ice::Context*);

    virtual bool HasFeed(::Ice::Int, const ::Ice::Context*);

    virtual void load(::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual void MarkFeed(::Ice::Int, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, bool, const ::Ice::Context*);

    virtual void EraseUser(::Ice::Int, const ::Ice::Context*);

    virtual void AddFeedReply(const ::xce::feed::FeedIndexPtr&, ::Ice::Int, const ::Ice::Context*);

    virtual void AddWhiteList(::Ice::Int, const ::Ice::Context*);

    virtual void DelWhiteList(::Ice::Int, const ::Ice::Context*);

    virtual ::MyUtil::IntSeq GetWhiteList(const ::Ice::Context*);

    virtual void ClearWhiteList(const ::Ice::Context*);
};

}

}

}

namespace IceDelegateD
{

namespace xce
{

namespace feed
{

class FeedSeed : virtual public ::IceDelegate::xce::feed::FeedSeed,
                 virtual public ::IceDelegateD::Ice::Object
{
public:
};

class FeedReply : virtual public ::IceDelegate::xce::feed::FeedReply,
                  virtual public ::IceDelegateD::Ice::Object
{
public:
};

class ReplyData : virtual public ::IceDelegate::xce::feed::ReplyData,
                  virtual public ::IceDelegateD::Ice::Object
{
public:
};

class FeedData : virtual public ::IceDelegate::xce::feed::FeedData,
                 virtual public ::IceDelegateD::Ice::Object
{
public:
};

class FeedDataByte : virtual public ::IceDelegate::xce::feed::FeedDataByte,
                     virtual public ::IceDelegateD::Ice::Object
{
public:
};

class FeedDataByteRes : virtual public ::IceDelegate::xce::feed::FeedDataByteRes,
                        virtual public ::IceDelegateD::Ice::Object
{
public:
};

class FeedContent : virtual public ::IceDelegate::xce::feed::FeedContent,
                    virtual public ::IceDelegateD::Ice::Object
{
public:
};

class FeedConfig : virtual public ::IceDelegate::xce::feed::FeedConfig,
                   virtual public ::IceDelegateD::Ice::Object
{
public:
};

class FeedDispatcher : virtual public ::IceDelegate::xce::feed::FeedDispatcher,
                       virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void dispatch(const ::xce::feed::FeedSeedPtr&, const ::xce::feed::FeedConfigPtr&, const ::Ice::Context*);

    virtual void dispatchReply(const ::xce::feed::ReplyDataPtr&, const ::xce::feed::FeedConfigPtr&, const ::Ice::Context*);

    virtual void Reload(::xce::feed::LoadType, ::Ice::Int, const ::Ice::Context*);

    virtual void ReloadBatch(::xce::feed::LoadType, const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual void addBuddyNotify(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void buddyApplyNotify(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void joinPageNotify(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void guideBuddyReplyNotify(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void addMiniSiteFeed(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
};

class FeedItemManager : virtual public ::IceDelegate::xce::feed::FeedItemManager,
                        virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::xce::feed::FeedDataSeq getFeedDataByStype(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq getFeedDataByType(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq getFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq getFeedData2(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq getFeedDataByIds(const ::MyUtil::LongSeq&, const ::Ice::Context*);

    virtual void addFeed(const ::xce::feed::FeedItem&, const ::xce::feed::FeedConfigPtr&, const ::MyUtil::Int2IntMap&, const ::Ice::Context*);

    virtual void setRead(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void setReadById(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void setReadAll(::Ice::Int, const ::Ice::Context*);

    virtual bool hasFeed(::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual void PressureTest(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int, const ::Ice::Context*);

    virtual void Reload(::Ice::Int, const ::Ice::Context*);
};

class FeedGroupManager : virtual public ::IceDelegate::xce::feed::FeedGroupManager,
                         virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::xce::feed::FeedDataSeq GetFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq GetFeedDataByType(::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq GetFeedDataByStype(::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByGroups(const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int, const ::Ice::Context*);

    virtual void AddFeed(const ::xce::feed::FeedItem&, const ::xce::feed::FeedConfigPtr&, const ::MyUtil::Int2IntMap&, const ::Ice::Context*);

    virtual void RemoveFeed(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void RemoveFeedById(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void RemoveAllFeed(::Ice::Int, const ::Ice::Context*);

    virtual void RefreshFeed(::Ice::Int, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual void ReplyFeed(::Ice::Int, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::MyUtil::Int2IntMap GetGroupsUnreadCount(::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual void AddMember(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void RemoveMember(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::MyUtil::Int2IntSeqMap GetMembers(const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual void GetMembersTest(const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual bool HasFeed(::Ice::Int, const ::Ice::Context*);

    virtual void ReadAllFeed(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void Test(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
};

class FeedGroupCount : virtual public ::IceDelegate::xce::feed::FeedGroupCount,
                       virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::MyUtil::Int2IntMap GetUnread(::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*);
};

class FeedContentManager : virtual public ::IceDelegate::xce::feed::FeedContentManager,
                           virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::xce::feed::FeedContentDict getFeedDict(const ::MyUtil::LongSeq&, const ::Ice::Context*);

    virtual ::Ice::Int addFeedContent(const ::xce::feed::FeedDataPtr&, const ::Ice::Context*);

    virtual void replaceFeedReply(const ::MyUtil::LongSeq&, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);

    virtual void removeFeed(::Ice::Long, const ::Ice::Context*);

    virtual void removeFeeds(const ::MyUtil::LongSeq&, const ::Ice::Context*);

    virtual void recoveryContent(::Ice::Long, const ::Ice::Context*);

    virtual void ReplaceXML(const ::MyUtil::LongSeq&, const ::std::string&, const ::Ice::Context*);
};

class FeedIndex : virtual public ::IceDelegate::xce::feed::FeedIndex,
                  virtual public ::IceDelegateD::Ice::Object
{
public:
};

class FeedIndexManager : virtual public ::IceDelegate::xce::feed::FeedIndexManager,
                         virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void add(const ::xce::feed::FeedIndexPtr&, const ::Ice::Context*);

    virtual ::MyUtil::LongSeq removeBySource(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual ::MyUtil::LongSeq removeByParent(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual ::MyUtil::LongSeq remove(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedIndexSeq getBySourceAndStype(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedIndexSeq getByParent(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::MyUtil::LongSeq get(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedIndexPtr getByFeed(::Ice::Long, const ::Ice::Context*);
};

class FeedAssistant : virtual public ::IceDelegate::xce::feed::FeedAssistant,
                      virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void removeFeedById(::Ice::Long, const ::Ice::Context*);

    virtual void removeFeedBySource(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual void removeFeedBySourceHS(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual void removeFeedByParent(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual void removeFeed(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void removeFeedReply(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Long, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);

    virtual void removeFeedReplyById(::Ice::Int, ::Ice::Long, ::Ice::Long, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);

    virtual void readNews(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void readAllNews(::Ice::Int, const ::Ice::Context*);

    virtual void readMini(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void readAllMini(::Ice::Int, const ::Ice::Context*);

    virtual void dispatch(const ::xce::feed::FeedSeedPtr&, const ::Ice::Context*);

    virtual void dispatchEDM(const ::xce::feed::FeedSeedPtr&, const ::Ice::Context*);

    virtual void addFeedReplyById(::Ice::Int, ::Ice::Long, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);

    virtual void dispatchWithReply(const ::xce::feed::FeedSeedPtr&, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);

    virtual void addFeedReply(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::xce::feed::FeedReplyPtr&, const ::Ice::Context*);

    virtual void addFeedReplyWithConfig(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::xce::feed::FeedReplyPtr&, const ::MyUtil::Str2StrMap&, const ::Ice::Context*);

    virtual ::Ice::Long getFeedId(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void cacheSync(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Long createFeedId(const ::Ice::Context*);

    virtual void dispatchAgain(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void ReplaceXML(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual void DirectedSend(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual void MarkFeed(::Ice::Int, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, bool, const ::Ice::Context*);
};

class FocusManager : virtual public ::IceDelegate::xce::feed::FocusManager,
                     virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::xce::feed::FeedDataSeq GetFocusFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq GetFocusFeedDataByStype(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual bool AddFocuses(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void DelFocuses(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::MyUtil::IntSeq GetFocuses(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetFocusFeedIncCount(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int AddFocusWithCheck(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
};

class FeedDataRes : virtual public ::IceDelegate::xce::feed::FeedDataRes,
                    virtual public ::IceDelegateD::Ice::Object
{
public:
};

class FeedNewsManager : virtual public ::IceDelegate::xce::feed::FeedNewsManager,
                        virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::xce::feed::FeedDataResPtr GetLiveFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataResPtr GetLiveFeedDataByStype(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataResPtr GetLiveFeedDataByType(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataResPtr GetHotFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataResPtr GetHotFeedDataByStype(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataResPtr GetHotFeedDataByType(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq GetFeedDataByIds(const ::MyUtil::LongSeq&, const ::Ice::Context*);

    virtual ::xce::feed::FeedDataSeq GetFeedDataByIdsWithUid(::Ice::Int, const ::MyUtil::LongSeq&, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int GetUnviewedCount(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::MyUtil::Int2IntMap GetCountMapByStype(::Ice::Int, const ::MyUtil::IntSeq&, bool, const ::Ice::Context*);

    virtual void AddFeed(const ::xce::feed::FeedItem&, const ::xce::feed::FeedConfigPtr&, const ::MyUtil::Int2IntMap&, const ::Ice::Context*);

    virtual void SetRead(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void SetReadById(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void SetReadAll(::Ice::Int, const ::Ice::Context*);

    virtual bool HasFeed(::Ice::Int, const ::Ice::Context*);

    virtual void load(::Ice::Int, const ::Ice::Context*);

    virtual ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual void MarkFeed(::Ice::Int, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, bool, const ::Ice::Context*);

    virtual void EraseUser(::Ice::Int, const ::Ice::Context*);

    virtual void AddFeedReply(const ::xce::feed::FeedIndexPtr&, ::Ice::Int, const ::Ice::Context*);

    virtual void AddWhiteList(::Ice::Int, const ::Ice::Context*);

    virtual void DelWhiteList(::Ice::Int, const ::Ice::Context*);

    virtual ::MyUtil::IntSeq GetWhiteList(const ::Ice::Context*);

    virtual void ClearWhiteList(const ::Ice::Context*);
};

}

}

}

namespace xce
{

namespace feed
{

class FeedSeed : virtual public ::Ice::Object
{
public:

    typedef FeedSeedPrx ProxyType;
    typedef FeedSeedPtr PointerType;
    
    FeedSeed() {}
    FeedSeed(::Ice::Long, ::Ice::Long, ::Ice::Long, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::MyUtil::Str2StrMap&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~FeedSeed() {}

    friend class FeedSeed__staticInit;

public:

    ::Ice::Long feed;

    ::Ice::Long miniMerge;

    ::Ice::Long newsMerge;

    ::Ice::Long source;

    ::Ice::Long psource;

    ::Ice::Int actor;

    ::Ice::Int type;

    ::Ice::Int ptype;

    ::Ice::Int time;

    ::Ice::Int baseWeight;

    ::std::string xml;

    ::MyUtil::Str2StrMap extraProps;
};

class FeedSeed__staticInit
{
public:

    ::xce::feed::FeedSeed _init;
};

static FeedSeed__staticInit _FeedSeed_init;

class FeedReply : virtual public ::Ice::Object
{
public:

    typedef FeedReplyPrx ProxyType;
    typedef FeedReplyPtr PointerType;
    
    FeedReply() {}
    FeedReply(::Ice::Long, const ::std::string&, ::Ice::Long, const ::std::string&, ::Ice::Int);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~FeedReply() {}

public:

    ::Ice::Long oldReplyId;

    ::std::string oldReply;

    ::Ice::Long newReplyId;

    ::std::string newReply;

    ::Ice::Int count;
};

class ReplyData : virtual public ::Ice::Object
{
public:

    typedef ReplyDataPrx ProxyType;
    typedef ReplyDataPtr PointerType;
    
    ReplyData() {}
    ReplyData(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Long, ::Ice::Int, const ::std::string&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~ReplyData() {}

public:

    ::Ice::Long source;

    ::Ice::Int stype;

    ::Ice::Int actor;

    ::Ice::Int replyCount;

    ::Ice::Long replyId;

    ::Ice::Int time;

    ::std::string xml;
};

class FeedData : virtual public ::Ice::Object
{
public:

    typedef FeedDataPrx ProxyType;
    typedef FeedDataPtr PointerType;
    
    FeedData() {}
    FeedData(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~FeedData() {}

public:

    ::Ice::Long feed;

    ::Ice::Long source;

    ::Ice::Int actor;

    ::Ice::Int type;

    ::std::string xml;

    ::Ice::Int time;

    ::Ice::Int weight;
};

class FeedDataByte : virtual public ::Ice::Object
{
public:

    typedef FeedDataBytePrx ProxyType;
    typedef FeedDataBytePtr PointerType;
    
    FeedDataByte() {}
    FeedDataByte(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::xce::feed::ByteSeq&, ::Ice::Int, ::Ice::Int);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~FeedDataByte() {}

public:

    ::Ice::Long feed;

    ::Ice::Long source;

    ::Ice::Int actor;

    ::Ice::Int type;

    ::xce::feed::ByteSeq xml;

    ::Ice::Int time;

    ::Ice::Int weight;
};

class FeedDataByteRes : virtual public ::Ice::Object
{
public:

    typedef FeedDataByteResPrx ProxyType;
    typedef FeedDataByteResPtr PointerType;
    
    FeedDataByteRes() {}
    FeedDataByteRes(::Ice::Int, const ::xce::feed::FeedDataByteSeq&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~FeedDataByteRes() {}

public:

    ::Ice::Int UnviewedCount;

    ::xce::feed::FeedDataByteSeq data;
};

class FeedContent : virtual public ::Ice::Object
{
public:

    typedef FeedContentPrx ProxyType;
    typedef FeedContentPtr PointerType;
    
    FeedContent() {}
    FeedContent(const ::xce::feed::FeedDataPtr&, const ::xce::feed::FeedReplyPtr&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~FeedContent() {}

public:

    ::xce::feed::FeedDataPtr data;

    ::xce::feed::FeedReplyPtr reply;
};

class FeedConfig : virtual public ::Ice::Object
{
public:

    typedef FeedConfigPrx ProxyType;
    typedef FeedConfigPtr PointerType;
    
    FeedConfig() {}
    FeedConfig(const ::std::string&, bool, bool, bool, bool);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~FeedConfig() {}

public:

    ::std::string expr;

    bool updateTime;

    bool sendConfig;

    bool sendNewsConfig;

    bool sendMiniConfig;
};

class FeedDispatcher : virtual public ::Ice::Object
{
public:

    typedef FeedDispatcherPrx ProxyType;
    typedef FeedDispatcherPtr PointerType;
    
    FeedDispatcher() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void dispatch(const ::xce::feed::FeedSeedPtr&, const ::xce::feed::FeedConfigPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void dispatchReply(const ::xce::feed::ReplyDataPtr&, const ::xce::feed::FeedConfigPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___dispatchReply(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void Reload(::xce::feed::LoadType, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___Reload(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void ReloadBatch(::xce::feed::LoadType, const ::MyUtil::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___ReloadBatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addBuddyNotify(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addBuddyNotify(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void buddyApplyNotify(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___buddyApplyNotify(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void joinPageNotify(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___joinPageNotify(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void guideBuddyReplyNotify(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___guideBuddyReplyNotify(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addMiniSiteFeed(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addMiniSiteFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class FeedItemManager : virtual public ::Ice::Object
{
public:

    typedef FeedItemManagerPrx ProxyType;
    typedef FeedItemManagerPtr PointerType;
    
    FeedItemManager() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::xce::feed::FeedDataSeq getFeedDataByStype(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFeedDataByStype(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedDataSeq getFeedDataByType(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFeedDataByType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedDataSeq getFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFeedData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedDataSeq getFeedData2(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFeedData2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedDataSeq getFeedDataByIds(const ::MyUtil::LongSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFeedDataByIds(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addFeed(const ::xce::feed::FeedItem&, const ::xce::feed::FeedConfigPtr&, const ::MyUtil::Int2IntMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setRead(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setRead(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setReadById(::Ice::Int, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setReadById(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setReadAll(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setReadAll(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool hasFeed(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___hasFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetFeedItemSeqSeqByUsers(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void PressureTest(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___PressureTest(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetOriginalFeedData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void Reload(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___Reload(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class FeedGroupManager : virtual public ::Ice::Object
{
public:

    typedef FeedGroupManagerPrx ProxyType;
    typedef FeedGroupManagerPtr PointerType;
    
    FeedGroupManager() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::xce::feed::FeedDataSeq GetFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetFeedData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedDataSeq GetFeedDataByType(::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetFeedDataByType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedDataSeq GetFeedDataByStype(::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetFeedDataByStype(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByGroups(const ::MyUtil::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetFeedItemSeqSeqByGroups(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetOriginalFeedData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddFeed(const ::xce::feed::FeedItem&, const ::xce::feed::FeedConfigPtr&, const ::MyUtil::Int2IntMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___AddFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void RemoveFeed(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___RemoveFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void RemoveFeedById(::Ice::Int, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___RemoveFeedById(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void RemoveAllFeed(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___RemoveAllFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void RefreshFeed(::Ice::Int, ::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___RefreshFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void ReplyFeed(::Ice::Int, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___ReplyFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::MyUtil::Int2IntMap GetGroupsUnreadCount(::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetGroupsUnreadCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddMember(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___AddMember(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void RemoveMember(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___RemoveMember(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::MyUtil::Int2IntSeqMap GetMembers(const ::MyUtil::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetMembers(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void GetMembersTest(const ::MyUtil::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetMembersTest(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool HasFeed(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___HasFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void ReadAllFeed(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___ReadAllFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void Test(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___Test(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class FeedGroupCount : virtual public ::Ice::Object
{
public:

    typedef FeedGroupCountPrx ProxyType;
    typedef FeedGroupCountPtr PointerType;
    
    FeedGroupCount() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::MyUtil::Int2IntMap GetUnread(::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetUnread(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class FeedContentManager : virtual public ::Ice::Object
{
public:

    typedef FeedContentManagerPrx ProxyType;
    typedef FeedContentManagerPtr PointerType;
    
    FeedContentManager() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::xce::feed::FeedContentDict getFeedDict(const ::MyUtil::LongSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFeedDict(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int addFeedContent(const ::xce::feed::FeedDataPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addFeedContent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void replaceFeedReply(const ::MyUtil::LongSeq&, const ::xce::feed::FeedReplyPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___replaceFeedReply(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFeed(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFeeds(const ::MyUtil::LongSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFeeds(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void recoveryContent(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___recoveryContent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void ReplaceXML(const ::MyUtil::LongSeq&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___ReplaceXML(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class FeedIndex : virtual public ::Ice::Object
{
public:

    typedef FeedIndexPrx ProxyType;
    typedef FeedIndexPtr PointerType;
    
    FeedIndex() {}
    FeedIndex(::Ice::Long, ::Ice::Long, ::Ice::Long, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~FeedIndex() {}

public:

    ::Ice::Long feed;

    ::Ice::Long newsMerge;

    ::Ice::Long miniMerge;

    ::Ice::Long source;

    ::Ice::Long psource;

    ::Ice::Int actor;

    ::Ice::Int time;

    ::Ice::Int stype;

    ::Ice::Int ptype;
};

class FeedIndexManager : virtual public ::Ice::Object
{
public:

    typedef FeedIndexManagerPrx ProxyType;
    typedef FeedIndexManagerPtr PointerType;
    
    FeedIndexManager() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void add(const ::xce::feed::FeedIndexPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___add(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::MyUtil::LongSeq removeBySource(::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeBySource(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::MyUtil::LongSeq removeByParent(::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeByParent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::MyUtil::LongSeq remove(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___remove(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedIndexSeq getBySourceAndStype(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getBySourceAndStype(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedIndexSeq getByParent(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getByParent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::MyUtil::LongSeq get(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___get(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedIndexPtr getByFeed(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getByFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class FeedAssistant : virtual public ::Ice::Object
{
public:

    typedef FeedAssistantPrx ProxyType;
    typedef FeedAssistantPtr PointerType;
    
    FeedAssistant() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void removeFeedById(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFeedById(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFeedBySource(::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFeedBySource(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFeedBySourceHS(::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFeedBySourceHS(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFeedByParent(::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFeedByParent(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFeed(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFeedReply(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Long, const ::xce::feed::FeedReplyPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFeedReply(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeFeedReplyById(::Ice::Int, ::Ice::Long, ::Ice::Long, const ::xce::feed::FeedReplyPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeFeedReplyById(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void readNews(::Ice::Int, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___readNews(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void readAllNews(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___readAllNews(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void readMini(::Ice::Int, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___readMini(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void readAllMini(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___readAllMini(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void dispatch(const ::xce::feed::FeedSeedPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void dispatchEDM(const ::xce::feed::FeedSeedPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___dispatchEDM(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addFeedReplyById(::Ice::Int, ::Ice::Long, const ::xce::feed::FeedReplyPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addFeedReplyById(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void dispatchWithReply(const ::xce::feed::FeedSeedPtr&, const ::xce::feed::FeedReplyPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___dispatchWithReply(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addFeedReply(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::xce::feed::FeedReplyPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addFeedReply(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addFeedReplyWithConfig(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::xce::feed::FeedReplyPtr&, const ::MyUtil::Str2StrMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addFeedReplyWithConfig(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Long getFeedId(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getFeedId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void cacheSync(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___cacheSync(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Long createFeedId(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createFeedId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void dispatchAgain(::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___dispatchAgain(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void ReplaceXML(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___ReplaceXML(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void DirectedSend(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___DirectedSend(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void MarkFeed(::Ice::Int, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___MarkFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class FocusManager : virtual public ::Ice::Object
{
public:

    typedef FocusManagerPrx ProxyType;
    typedef FocusManagerPtr PointerType;
    
    FocusManager() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::xce::feed::FeedDataSeq GetFocusFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetFocusFeedData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedDataSeq GetFocusFeedDataByStype(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetFocusFeedDataByStype(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool AddFocuses(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___AddFocuses(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void DelFocuses(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___DelFocuses(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::MyUtil::IntSeq GetFocuses(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetFocuses(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetFocusFeedIncCount(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetFocusFeedIncCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int AddFocusWithCheck(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___AddFocusWithCheck(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class FeedDataRes : virtual public ::Ice::Object
{
public:

    typedef FeedDataResPrx ProxyType;
    typedef FeedDataResPtr PointerType;
    
    FeedDataRes() {}
    FeedDataRes(::Ice::Int, const ::xce::feed::FeedDataSeq&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~FeedDataRes() {}

public:

    ::Ice::Int UnviewedCount;

    ::xce::feed::FeedDataSeq data;
};

class FeedNewsManager : virtual public ::Ice::Object
{
public:

    typedef FeedNewsManagerPrx ProxyType;
    typedef FeedNewsManagerPtr PointerType;
    
    FeedNewsManager() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::xce::feed::FeedDataResPtr GetLiveFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetLiveFeedData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedDataResPtr GetLiveFeedDataByStype(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetLiveFeedDataByStype(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedDataResPtr GetLiveFeedDataByType(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetLiveFeedDataByType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedDataResPtr GetHotFeedData(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetHotFeedData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedDataResPtr GetHotFeedDataByStype(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetHotFeedDataByStype(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedDataResPtr GetHotFeedDataByType(::Ice::Int, const ::MyUtil::IntSeq&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetHotFeedDataByType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedDataSeq GetFeedDataByIds(const ::MyUtil::LongSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetFeedDataByIds(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedDataSeq GetFeedDataByIdsWithUid(::Ice::Int, const ::MyUtil::LongSeq&, ::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetFeedDataByIdsWithUid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedItemSeq GetOriginalFeedData(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetOriginalFeedData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int GetUnviewedCount(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetUnviewedCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::MyUtil::Int2IntMap GetCountMapByStype(::Ice::Int, const ::MyUtil::IntSeq&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetCountMapByStype(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddFeed(const ::xce::feed::FeedItem&, const ::xce::feed::FeedConfigPtr&, const ::MyUtil::Int2IntMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___AddFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void SetRead(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___SetRead(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void SetReadById(::Ice::Int, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___SetReadById(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void SetReadAll(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___SetReadAll(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool HasFeed(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___HasFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void load(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___load(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::feed::FeedItemSeqSeq GetFeedItemSeqSeqByUsers(const ::MyUtil::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetFeedItemSeqSeqByUsers(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void MarkFeed(::Ice::Int, ::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___MarkFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void EraseUser(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___EraseUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddFeedReply(const ::xce::feed::FeedIndexPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___AddFeedReply(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void AddWhiteList(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___AddWhiteList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void DelWhiteList(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___DelWhiteList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::MyUtil::IntSeq GetWhiteList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetWhiteList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void ClearWhiteList(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___ClearWhiteList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

#endif
