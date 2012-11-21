// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `TalkService.ice'

#ifndef ________src_ice_src__TalkService_h__
#define ________src_ice_src__TalkService_h__

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
#include <Ice/StreamF.h>
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

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace talk
{

class TalkService;

}

}

}

}

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace talk
{

class TalkService;
bool operator==(const TalkService&, const TalkService&);
bool operator<(const TalkService&, const TalkService&);

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::xiaonei::wap::talk::TalkService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::wap::talk::TalkService*);

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace talk
{

typedef ::IceInternal::Handle< ::com::xiaonei::wap::talk::TalkService> TalkServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::wap::talk::TalkService> TalkServicePrx;

void __read(::IceInternal::BasicStream*, TalkServicePrx&);
void __patch__TalkServicePtr(void*, ::Ice::ObjectPtr&);

}

}

}

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace talk
{

typedef ::std::vector< ::Ice::Int> IntSeq;

typedef ::std::vector< ::Ice::Long> LongSeq;

typedef ::std::map< ::Ice::Int, ::Ice::Int> Int2IntMap;
void __writeInt2IntMap(::IceInternal::BasicStream*, const Int2IntMap&);
void __readInt2IntMap(::IceInternal::BasicStream*, Int2IntMap&);

typedef ::std::map< ::Ice::Long, ::Ice::Int> Long2IntMap;
void __writeLong2IntMap(::IceInternal::BasicStream*, const Long2IntMap&);
void __readLong2IntMap(::IceInternal::BasicStream*, Long2IntMap&);

typedef ::std::map< ::std::string, ::std::string> Str2StrMap;
void __writeStr2StrMap(::IceInternal::BasicStream*, const Str2StrMap&);
void __readStr2StrMap(::IceInternal::BasicStream*, Str2StrMap&);

typedef ::std::map< ::Ice::Int, ::std::string> Int2StrMap;
void __writeInt2StrMap(::IceInternal::BasicStream*, const Int2StrMap&);
void __readInt2StrMap(::IceInternal::BasicStream*, Int2StrMap&);

typedef ::std::map< ::Ice::Long, ::std::string> Long2StrMap;
void __writeLong2StrMap(::IceInternal::BasicStream*, const Long2StrMap&);
void __readLong2StrMap(::IceInternal::BasicStream*, Long2StrMap&);

typedef ::std::vector< ::std::string> OfflineMsgList;

struct OfflineItem
{
    ::Ice::Long fromId;
    ::Ice::Long toId;
    ::std::string msg;

    bool operator==(const OfflineItem&) const;
    bool operator<(const OfflineItem&) const;
    bool operator!=(const OfflineItem& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const OfflineItem& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const OfflineItem& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const OfflineItem& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::com::xiaonei::wap::talk::OfflineItem> OfflineItemList;
void __writeOfflineItemList(::IceInternal::BasicStream*, const ::com::xiaonei::wap::talk::OfflineItem*, const ::com::xiaonei::wap::talk::OfflineItem*);
void __readOfflineItemList(::IceInternal::BasicStream*, OfflineItemList&);

}

}

}

}

namespace IceProxy
{

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace talk
{

class TalkService : virtual public ::IceProxy::Ice::Object
{
public:

    void push(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType)
    {
        push(fromId, toId, msg, messageType, 0);
    }
    void push(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, const ::Ice::Context& __ctx)
    {
        push(fromId, toId, msg, messageType, &__ctx);
    }
    
private:

    void push(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    void pushFromIm(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int userType, ::Ice::Long msgkey, const ::com::xiaonei::wap::talk::Str2StrMap& strMap)
    {
        pushFromIm(fromId, toId, msg, messageType, userType, msgkey, strMap, 0);
    }
    void pushFromIm(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int userType, ::Ice::Long msgkey, const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Context& __ctx)
    {
        pushFromIm(fromId, toId, msg, messageType, userType, msgkey, strMap, &__ctx);
    }
    
private:

    void pushFromIm(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Long, const ::com::xiaonei::wap::talk::Str2StrMap&, const ::Ice::Context*);
    
public:

    void pushOfflineFromIm(const ::com::xiaonei::wap::talk::OfflineItemList& itemList, const ::com::xiaonei::wap::talk::Str2StrMap& strMap)
    {
        pushOfflineFromIm(itemList, strMap, 0);
    }
    void pushOfflineFromIm(const ::com::xiaonei::wap::talk::OfflineItemList& itemList, const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Context& __ctx)
    {
        pushOfflineFromIm(itemList, strMap, &__ctx);
    }
    
private:

    void pushOfflineFromIm(const ::com::xiaonei::wap::talk::OfflineItemList&, const ::com::xiaonei::wap::talk::Str2StrMap&, const ::Ice::Context*);
    
public:

    void pushStatFromIm(::Ice::Long fromId, const ::com::xiaonei::wap::talk::Long2StrMap& msgMap, const ::com::xiaonei::wap::talk::Str2StrMap& strMap)
    {
        pushStatFromIm(fromId, msgMap, strMap, 0);
    }
    void pushStatFromIm(::Ice::Long fromId, const ::com::xiaonei::wap::talk::Long2StrMap& msgMap, const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Context& __ctx)
    {
        pushStatFromIm(fromId, msgMap, strMap, &__ctx);
    }
    
private:

    void pushStatFromIm(::Ice::Long, const ::com::xiaonei::wap::talk::Long2StrMap&, const ::com::xiaonei::wap::talk::Str2StrMap&, const ::Ice::Context*);
    
public:

    void pushFeed(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int type, bool focus)
    {
        pushFeed(fromId, toId, msg, type, focus, 0);
    }
    void pushFeed(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int type, bool focus, const ::Ice::Context& __ctx)
    {
        pushFeed(fromId, toId, msg, type, focus, &__ctx);
    }
    
private:

    void pushFeed(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, bool, const ::Ice::Context*);
    
public:

    void pushFeedBatch(::Ice::Long fromId, const ::com::xiaonei::wap::talk::Long2StrMap& msgMap, ::Ice::Int type, bool focus)
    {
        pushFeedBatch(fromId, msgMap, type, focus, 0);
    }
    void pushFeedBatch(::Ice::Long fromId, const ::com::xiaonei::wap::talk::Long2StrMap& msgMap, ::Ice::Int type, bool focus, const ::Ice::Context& __ctx)
    {
        pushFeedBatch(fromId, msgMap, type, focus, &__ctx);
    }
    
private:

    void pushFeedBatch(::Ice::Long, const ::com::xiaonei::wap::talk::Long2StrMap&, ::Ice::Int, bool, const ::Ice::Context*);
    
public:

    void voicePush(::Ice::Int fromId, ::Ice::Int toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int appId)
    {
        voicePush(fromId, toId, msg, messageType, appId, 0);
    }
    void voicePush(::Ice::Int fromId, ::Ice::Int toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int appId, const ::Ice::Context& __ctx)
    {
        voicePush(fromId, toId, msg, messageType, appId, &__ctx);
    }
    
private:

    void voicePush(::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void voicePushV1(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int appId)
    {
        voicePushV1(fromId, toId, msg, messageType, appId, 0);
    }
    void voicePushV1(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int appId, const ::Ice::Context& __ctx)
    {
        voicePushV1(fromId, toId, msg, messageType, appId, &__ctx);
    }
    
private:

    void voicePushV1(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::talk::IntSeq getUsersOnlineStatSeq(const ::com::xiaonei::wap::talk::LongSeq& users)
    {
        return getUsersOnlineStatSeq(users, 0);
    }
    ::com::xiaonei::wap::talk::IntSeq getUsersOnlineStatSeq(const ::com::xiaonei::wap::talk::LongSeq& users, const ::Ice::Context& __ctx)
    {
        return getUsersOnlineStatSeq(users, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::talk::IntSeq getUsersOnlineStatSeq(const ::com::xiaonei::wap::talk::LongSeq&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::talk::Long2IntMap getUsersOnlineStatMapV1(const ::com::xiaonei::wap::talk::LongSeq& users)
    {
        return getUsersOnlineStatMapV1(users, 0);
    }
    ::com::xiaonei::wap::talk::Long2IntMap getUsersOnlineStatMapV1(const ::com::xiaonei::wap::talk::LongSeq& users, const ::Ice::Context& __ctx)
    {
        return getUsersOnlineStatMapV1(users, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::talk::Long2IntMap getUsersOnlineStatMapV1(const ::com::xiaonei::wap::talk::LongSeq&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::talk::Int2IntMap getUsersOnlineStatMap(const ::com::xiaonei::wap::talk::IntSeq& users)
    {
        return getUsersOnlineStatMap(users, 0);
    }
    ::com::xiaonei::wap::talk::Int2IntMap getUsersOnlineStatMap(const ::com::xiaonei::wap::talk::IntSeq& users, const ::Ice::Context& __ctx)
    {
        return getUsersOnlineStatMap(users, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::talk::Int2IntMap getUsersOnlineStatMap(const ::com::xiaonei::wap::talk::IntSeq&, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserOnlineStat(::Ice::Int userId)
    {
        return getUserOnlineStat(userId, 0);
    }
    ::Ice::Int getUserOnlineStat(::Ice::Int userId, const ::Ice::Context& __ctx)
    {
        return getUserOnlineStat(userId, &__ctx);
    }
    
private:

    ::Ice::Int getUserOnlineStat(::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserOnlineStatV1(::Ice::Long userId)
    {
        return getUserOnlineStatV1(userId, 0);
    }
    ::Ice::Int getUserOnlineStatV1(::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        return getUserOnlineStatV1(userId, &__ctx);
    }
    
private:

    ::Ice::Int getUserOnlineStatV1(::Ice::Long, const ::Ice::Context*);
    
public:

    ::Ice::Int getUserOnlineTypebyTalk(::Ice::Long userId)
    {
        return getUserOnlineTypebyTalk(userId, 0);
    }
    ::Ice::Int getUserOnlineTypebyTalk(::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        return getUserOnlineTypebyTalk(userId, &__ctx);
    }
    
private:

    ::Ice::Int getUserOnlineTypebyTalk(::Ice::Long, const ::Ice::Context*);
    
public:

    void logout(::Ice::Int userId, const ::std::string& sessionId)
    {
        logout(userId, sessionId, 0);
    }
    void logout(::Ice::Int userId, const ::std::string& sessionId, const ::Ice::Context& __ctx)
    {
        logout(userId, sessionId, &__ctx);
    }
    
private:

    void logout(::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    void logoutV1(::Ice::Long userId, const ::std::string& sessionId)
    {
        logoutV1(userId, sessionId, 0);
    }
    void logoutV1(::Ice::Long userId, const ::std::string& sessionId, const ::Ice::Context& __ctx)
    {
        logoutV1(userId, sessionId, &__ctx);
    }
    
private:

    void logoutV1(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:

    void distribute(::Ice::Long roomId, ::Ice::Long toId, const ::std::string& msg, bool isSave)
    {
        distribute(roomId, toId, msg, isSave, 0);
    }
    void distribute(::Ice::Long roomId, ::Ice::Long toId, const ::std::string& msg, bool isSave, const ::Ice::Context& __ctx)
    {
        distribute(roomId, toId, msg, isSave, &__ctx);
    }
    
private:

    void distribute(::Ice::Long, ::Ice::Long, const ::std::string&, bool, const ::Ice::Context*);
    
public:

    void MucReturn(const ::std::string& sessionId, const ::std::string& msg, bool isSave)
    {
        MucReturn(sessionId, msg, isSave, 0);
    }
    void MucReturn(const ::std::string& sessionId, const ::std::string& msg, bool isSave, const ::Ice::Context& __ctx)
    {
        MucReturn(sessionId, msg, isSave, &__ctx);
    }
    
private:

    void MucReturn(const ::std::string&, const ::std::string&, bool, const ::Ice::Context*);
    
public:

    void pushMucOffline(::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList)
    {
        pushMucOffline(toId, groupOfflineMessageList, 0);
    }
    void pushMucOffline(::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList, const ::Ice::Context& __ctx)
    {
        pushMucOffline(toId, groupOfflineMessageList, &__ctx);
    }
    
private:

    void pushMucOffline(::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*);
    
public:

    void pushMucOfflineV1(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList)
    {
        pushMucOfflineV1(sessionId, toId, groupOfflineMessageList, 0);
    }
    void pushMucOfflineV1(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList, const ::Ice::Context& __ctx)
    {
        pushMucOfflineV1(sessionId, toId, groupOfflineMessageList, &__ctx);
    }
    
private:

    void pushMucOfflineV1(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*);
    
public:

    void pushOfflineV1(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& OfflineMessageList)
    {
        pushOfflineV1(sessionId, toId, OfflineMessageList, 0);
    }
    void pushOfflineV1(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& OfflineMessageList, const ::Ice::Context& __ctx)
    {
        pushOfflineV1(sessionId, toId, OfflineMessageList, &__ctx);
    }
    
private:

    void pushOfflineV1(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*);
    
public:

    void pushMucOfflineV1For2V(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList)
    {
        pushMucOfflineV1For2V(sessionId, toId, groupOfflineMessageList, 0);
    }
    void pushMucOfflineV1For2V(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList, const ::Ice::Context& __ctx)
    {
        pushMucOfflineV1For2V(sessionId, toId, groupOfflineMessageList, &__ctx);
    }
    
private:

    void pushMucOfflineV1For2V(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*);
    
public:

    void pushOfflineV1For2V(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& OfflineMessageList)
    {
        pushOfflineV1For2V(sessionId, toId, OfflineMessageList, 0);
    }
    void pushOfflineV1For2V(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& OfflineMessageList, const ::Ice::Context& __ctx)
    {
        pushOfflineV1For2V(sessionId, toId, OfflineMessageList, &__ctx);
    }
    
private:

    void pushOfflineV1For2V(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*);
    
public:

    void uninstall(::Ice::Long userId, ::Ice::Int pushDefinedTypeId)
    {
        uninstall(userId, pushDefinedTypeId, 0);
    }
    void uninstall(::Ice::Long userId, ::Ice::Int pushDefinedTypeId, const ::Ice::Context& __ctx)
    {
        uninstall(userId, pushDefinedTypeId, &__ctx);
    }
    
private:

    void uninstall(::Ice::Long, ::Ice::Int, const ::Ice::Context*);
    
public:

    void setLang(::Ice::Long userId, const ::std::string& language)
    {
        setLang(userId, language, 0);
    }
    void setLang(::Ice::Long userId, const ::std::string& language, const ::Ice::Context& __ctx)
    {
        setLang(userId, language, &__ctx);
    }
    
private:

    void setLang(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<TalkService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TalkService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TalkService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<TalkService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

}

}

namespace IceDelegate
{

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace talk
{

class TalkService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void push(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void pushFromIm(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Long, const ::com::xiaonei::wap::talk::Str2StrMap&, const ::Ice::Context*) = 0;

    virtual void pushOfflineFromIm(const ::com::xiaonei::wap::talk::OfflineItemList&, const ::com::xiaonei::wap::talk::Str2StrMap&, const ::Ice::Context*) = 0;

    virtual void pushStatFromIm(::Ice::Long, const ::com::xiaonei::wap::talk::Long2StrMap&, const ::com::xiaonei::wap::talk::Str2StrMap&, const ::Ice::Context*) = 0;

    virtual void pushFeed(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, bool, const ::Ice::Context*) = 0;

    virtual void pushFeedBatch(::Ice::Long, const ::com::xiaonei::wap::talk::Long2StrMap&, ::Ice::Int, bool, const ::Ice::Context*) = 0;

    virtual void voicePush(::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void voicePushV1(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::talk::IntSeq getUsersOnlineStatSeq(const ::com::xiaonei::wap::talk::LongSeq&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::talk::Long2IntMap getUsersOnlineStatMapV1(const ::com::xiaonei::wap::talk::LongSeq&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::talk::Int2IntMap getUsersOnlineStatMap(const ::com::xiaonei::wap::talk::IntSeq&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserOnlineStat(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserOnlineStatV1(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getUserOnlineTypebyTalk(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void logout(::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void logoutV1(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void distribute(::Ice::Long, ::Ice::Long, const ::std::string&, bool, const ::Ice::Context*) = 0;

    virtual void MucReturn(const ::std::string&, const ::std::string&, bool, const ::Ice::Context*) = 0;

    virtual void pushMucOffline(::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*) = 0;

    virtual void pushMucOfflineV1(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*) = 0;

    virtual void pushOfflineV1(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*) = 0;

    virtual void pushMucOfflineV1For2V(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*) = 0;

    virtual void pushOfflineV1For2V(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*) = 0;

    virtual void uninstall(::Ice::Long, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void setLang(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;
};

}

}

}

}

}

namespace IceDelegateM
{

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace talk
{

class TalkService : virtual public ::IceDelegate::com::xiaonei::wap::talk::TalkService,
                    virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void push(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual void pushFromIm(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Long, const ::com::xiaonei::wap::talk::Str2StrMap&, const ::Ice::Context*);

    virtual void pushOfflineFromIm(const ::com::xiaonei::wap::talk::OfflineItemList&, const ::com::xiaonei::wap::talk::Str2StrMap&, const ::Ice::Context*);

    virtual void pushStatFromIm(::Ice::Long, const ::com::xiaonei::wap::talk::Long2StrMap&, const ::com::xiaonei::wap::talk::Str2StrMap&, const ::Ice::Context*);

    virtual void pushFeed(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, bool, const ::Ice::Context*);

    virtual void pushFeedBatch(::Ice::Long, const ::com::xiaonei::wap::talk::Long2StrMap&, ::Ice::Int, bool, const ::Ice::Context*);

    virtual void voicePush(::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void voicePushV1(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::IntSeq getUsersOnlineStatSeq(const ::com::xiaonei::wap::talk::LongSeq&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::Long2IntMap getUsersOnlineStatMapV1(const ::com::xiaonei::wap::talk::LongSeq&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::Int2IntMap getUsersOnlineStatMap(const ::com::xiaonei::wap::talk::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserOnlineStat(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getUserOnlineStatV1(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int getUserOnlineTypebyTalk(::Ice::Long, const ::Ice::Context*);

    virtual void logout(::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual void logoutV1(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual void distribute(::Ice::Long, ::Ice::Long, const ::std::string&, bool, const ::Ice::Context*);

    virtual void MucReturn(const ::std::string&, const ::std::string&, bool, const ::Ice::Context*);

    virtual void pushMucOffline(::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*);

    virtual void pushMucOfflineV1(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*);

    virtual void pushOfflineV1(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*);

    virtual void pushMucOfflineV1For2V(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*);

    virtual void pushOfflineV1For2V(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*);

    virtual void uninstall(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual void setLang(::Ice::Long, const ::std::string&, const ::Ice::Context*);
};

}

}

}

}

}

namespace IceDelegateD
{

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace talk
{

class TalkService : virtual public ::IceDelegate::com::xiaonei::wap::talk::TalkService,
                    virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void push(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual void pushFromIm(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Long, const ::com::xiaonei::wap::talk::Str2StrMap&, const ::Ice::Context*);

    virtual void pushOfflineFromIm(const ::com::xiaonei::wap::talk::OfflineItemList&, const ::com::xiaonei::wap::talk::Str2StrMap&, const ::Ice::Context*);

    virtual void pushStatFromIm(::Ice::Long, const ::com::xiaonei::wap::talk::Long2StrMap&, const ::com::xiaonei::wap::talk::Str2StrMap&, const ::Ice::Context*);

    virtual void pushFeed(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, bool, const ::Ice::Context*);

    virtual void pushFeedBatch(::Ice::Long, const ::com::xiaonei::wap::talk::Long2StrMap&, ::Ice::Int, bool, const ::Ice::Context*);

    virtual void voicePush(::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void voicePushV1(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::IntSeq getUsersOnlineStatSeq(const ::com::xiaonei::wap::talk::LongSeq&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::Long2IntMap getUsersOnlineStatMapV1(const ::com::xiaonei::wap::talk::LongSeq&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::Int2IntMap getUsersOnlineStatMap(const ::com::xiaonei::wap::talk::IntSeq&, const ::Ice::Context*);

    virtual ::Ice::Int getUserOnlineStat(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getUserOnlineStatV1(::Ice::Long, const ::Ice::Context*);

    virtual ::Ice::Int getUserOnlineTypebyTalk(::Ice::Long, const ::Ice::Context*);

    virtual void logout(::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual void logoutV1(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual void distribute(::Ice::Long, ::Ice::Long, const ::std::string&, bool, const ::Ice::Context*);

    virtual void MucReturn(const ::std::string&, const ::std::string&, bool, const ::Ice::Context*);

    virtual void pushMucOffline(::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*);

    virtual void pushMucOfflineV1(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*);

    virtual void pushOfflineV1(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*);

    virtual void pushMucOfflineV1For2V(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*);

    virtual void pushOfflineV1For2V(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Context*);

    virtual void uninstall(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual void setLang(::Ice::Long, const ::std::string&, const ::Ice::Context*);
};

}

}

}

}

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace talk
{

class TalkService : virtual public ::Ice::Object
{
public:

    typedef TalkServicePrx ProxyType;
    typedef TalkServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void push(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___push(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void pushFromIm(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, ::Ice::Long, const ::com::xiaonei::wap::talk::Str2StrMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___pushFromIm(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void pushOfflineFromIm(const ::com::xiaonei::wap::talk::OfflineItemList&, const ::com::xiaonei::wap::talk::Str2StrMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___pushOfflineFromIm(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void pushStatFromIm(::Ice::Long, const ::com::xiaonei::wap::talk::Long2StrMap&, const ::com::xiaonei::wap::talk::Str2StrMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___pushStatFromIm(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void pushFeed(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___pushFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void pushFeedBatch(::Ice::Long, const ::com::xiaonei::wap::talk::Long2StrMap&, ::Ice::Int, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___pushFeedBatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void voicePush(::Ice::Int, ::Ice::Int, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___voicePush(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void voicePushV1(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___voicePushV1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::talk::IntSeq getUsersOnlineStatSeq(const ::com::xiaonei::wap::talk::LongSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUsersOnlineStatSeq(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::talk::Long2IntMap getUsersOnlineStatMapV1(const ::com::xiaonei::wap::talk::LongSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUsersOnlineStatMapV1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::talk::Int2IntMap getUsersOnlineStatMap(const ::com::xiaonei::wap::talk::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUsersOnlineStatMap(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserOnlineStat(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUserOnlineStat(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserOnlineStatV1(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUserOnlineStatV1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int getUserOnlineTypebyTalk(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUserOnlineTypebyTalk(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void logout(::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___logout(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void logoutV1(::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___logoutV1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void distribute(::Ice::Long, ::Ice::Long, const ::std::string&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___distribute(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void MucReturn(const ::std::string&, const ::std::string&, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___MucReturn(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void pushMucOffline(::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___pushMucOffline(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void pushMucOfflineV1(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___pushMucOfflineV1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void pushOfflineV1(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___pushOfflineV1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void pushMucOfflineV1For2V(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___pushMucOfflineV1For2V(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void pushOfflineV1For2V(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::OfflineMsgList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___pushOfflineV1For2V(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void uninstall(::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___uninstall(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void setLang(::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setLang(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

}

}

#endif
