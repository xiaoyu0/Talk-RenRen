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

#include <TalkService.h>
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

static const ::std::string __com__xiaonei__wap__talk__TalkService__push_name = "push";

static const ::std::string __com__xiaonei__wap__talk__TalkService__pushFromIm_name = "pushFromIm";

static const ::std::string __com__xiaonei__wap__talk__TalkService__pushOfflineFromIm_name = "pushOfflineFromIm";

static const ::std::string __com__xiaonei__wap__talk__TalkService__pushStatFromIm_name = "pushStatFromIm";

static const ::std::string __com__xiaonei__wap__talk__TalkService__pushFeed_name = "pushFeed";

static const ::std::string __com__xiaonei__wap__talk__TalkService__pushFeedBatch_name = "pushFeedBatch";

static const ::std::string __com__xiaonei__wap__talk__TalkService__voicePush_name = "voicePush";

static const ::std::string __com__xiaonei__wap__talk__TalkService__voicePushV1_name = "voicePushV1";

static const ::std::string __com__xiaonei__wap__talk__TalkService__getUsersOnlineStatSeq_name = "getUsersOnlineStatSeq";

static const ::std::string __com__xiaonei__wap__talk__TalkService__getUsersOnlineStatMapV1_name = "getUsersOnlineStatMapV1";

static const ::std::string __com__xiaonei__wap__talk__TalkService__getUsersOnlineStatMap_name = "getUsersOnlineStatMap";

static const ::std::string __com__xiaonei__wap__talk__TalkService__getUserOnlineStat_name = "getUserOnlineStat";

static const ::std::string __com__xiaonei__wap__talk__TalkService__getUserOnlineStatV1_name = "getUserOnlineStatV1";

static const ::std::string __com__xiaonei__wap__talk__TalkService__getUserOnlineTypebyTalk_name = "getUserOnlineTypebyTalk";

static const ::std::string __com__xiaonei__wap__talk__TalkService__logout_name = "logout";

static const ::std::string __com__xiaonei__wap__talk__TalkService__logoutV1_name = "logoutV1";

static const ::std::string __com__xiaonei__wap__talk__TalkService__distribute_name = "distribute";

static const ::std::string __com__xiaonei__wap__talk__TalkService__MucReturn_name = "MucReturn";

static const ::std::string __com__xiaonei__wap__talk__TalkService__pushMucOffline_name = "pushMucOffline";

static const ::std::string __com__xiaonei__wap__talk__TalkService__pushMucOfflineV1_name = "pushMucOfflineV1";

static const ::std::string __com__xiaonei__wap__talk__TalkService__pushOfflineV1_name = "pushOfflineV1";

static const ::std::string __com__xiaonei__wap__talk__TalkService__pushMucOfflineV1For2V_name = "pushMucOfflineV1For2V";

static const ::std::string __com__xiaonei__wap__talk__TalkService__pushOfflineV1For2V_name = "pushOfflineV1For2V";

static const ::std::string __com__xiaonei__wap__talk__TalkService__uninstall_name = "uninstall";

static const ::std::string __com__xiaonei__wap__talk__TalkService__setLang_name = "setLang";

::Ice::Object* IceInternal::upCast(::com::xiaonei::wap::talk::TalkService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::wap::talk::TalkService* p) { return p; }

void
com::xiaonei::wap::talk::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::talk::TalkServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::wap::talk::TalkService;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::wap::talk::__writeInt2IntMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::wap::talk::Int2IntMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::wap::talk::Int2IntMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
com::xiaonei::wap::talk::__readInt2IntMap(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::talk::Int2IntMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Int, ::Ice::Int> pair;
        __is->read(const_cast< ::Ice::Int&>(pair.first));
        ::com::xiaonei::wap::talk::Int2IntMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
com::xiaonei::wap::talk::__writeLong2IntMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::wap::talk::Long2IntMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::wap::talk::Long2IntMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
com::xiaonei::wap::talk::__readLong2IntMap(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::talk::Long2IntMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Long, ::Ice::Int> pair;
        __is->read(const_cast< ::Ice::Long&>(pair.first));
        ::com::xiaonei::wap::talk::Long2IntMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
com::xiaonei::wap::talk::__writeStr2StrMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::wap::talk::Str2StrMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::wap::talk::Str2StrMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
com::xiaonei::wap::talk::__readStr2StrMap(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::talk::Str2StrMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::com::xiaonei::wap::talk::Str2StrMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
com::xiaonei::wap::talk::__writeInt2StrMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::wap::talk::Int2StrMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::wap::talk::Int2StrMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
com::xiaonei::wap::talk::__readInt2StrMap(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::talk::Int2StrMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Int, ::std::string> pair;
        __is->read(const_cast< ::Ice::Int&>(pair.first));
        ::com::xiaonei::wap::talk::Int2StrMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
com::xiaonei::wap::talk::__writeLong2StrMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::wap::talk::Long2StrMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::wap::talk::Long2StrMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
com::xiaonei::wap::talk::__readLong2StrMap(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::talk::Long2StrMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Long, ::std::string> pair;
        __is->read(const_cast< ::Ice::Long&>(pair.first));
        ::com::xiaonei::wap::talk::Long2StrMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

bool
com::xiaonei::wap::talk::OfflineItem::operator==(const OfflineItem& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(fromId != __rhs.fromId)
    {
        return false;
    }
    if(toId != __rhs.toId)
    {
        return false;
    }
    if(msg != __rhs.msg)
    {
        return false;
    }
    return true;
}

bool
com::xiaonei::wap::talk::OfflineItem::operator<(const OfflineItem& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(fromId < __rhs.fromId)
    {
        return true;
    }
    else if(__rhs.fromId < fromId)
    {
        return false;
    }
    if(toId < __rhs.toId)
    {
        return true;
    }
    else if(__rhs.toId < toId)
    {
        return false;
    }
    if(msg < __rhs.msg)
    {
        return true;
    }
    else if(__rhs.msg < msg)
    {
        return false;
    }
    return false;
}

void
com::xiaonei::wap::talk::OfflineItem::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(fromId);
    __os->write(toId);
    __os->write(msg);
}

void
com::xiaonei::wap::talk::OfflineItem::__read(::IceInternal::BasicStream* __is)
{
    __is->read(fromId);
    __is->read(toId);
    __is->read(msg);
}

void
com::xiaonei::wap::talk::__writeOfflineItemList(::IceInternal::BasicStream* __os, const ::com::xiaonei::wap::talk::OfflineItem* begin, const ::com::xiaonei::wap::talk::OfflineItem* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
com::xiaonei::wap::talk::__readOfflineItemList(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::talk::OfflineItemList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 17);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
IceProxy::com::xiaonei::wap::talk::TalkService::push(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->push(fromId, toId, msg, messageType, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::pushFromIm(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int userType, ::Ice::Long msgkey, const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->pushFromIm(fromId, toId, msg, messageType, userType, msgkey, strMap, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::pushOfflineFromIm(const ::com::xiaonei::wap::talk::OfflineItemList& itemList, const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->pushOfflineFromIm(itemList, strMap, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::pushStatFromIm(::Ice::Long fromId, const ::com::xiaonei::wap::talk::Long2StrMap& msgMap, const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->pushStatFromIm(fromId, msgMap, strMap, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::pushFeed(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int type, bool focus, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->pushFeed(fromId, toId, msg, type, focus, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::pushFeedBatch(::Ice::Long fromId, const ::com::xiaonei::wap::talk::Long2StrMap& msgMap, ::Ice::Int type, bool focus, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->pushFeedBatch(fromId, msgMap, type, focus, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::voicePush(::Ice::Int fromId, ::Ice::Int toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int appId, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->voicePush(fromId, toId, msg, messageType, appId, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::voicePushV1(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int appId, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->voicePushV1(fromId, toId, msg, messageType, appId, __ctx);
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

::com::xiaonei::wap::talk::IntSeq
IceProxy::com::xiaonei::wap::talk::TalkService::getUsersOnlineStatSeq(const ::com::xiaonei::wap::talk::LongSeq& users, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__TalkService__getUsersOnlineStatSeq_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            return __del->getUsersOnlineStatSeq(users, __ctx);
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

::com::xiaonei::wap::talk::Long2IntMap
IceProxy::com::xiaonei::wap::talk::TalkService::getUsersOnlineStatMapV1(const ::com::xiaonei::wap::talk::LongSeq& users, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__TalkService__getUsersOnlineStatMapV1_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            return __del->getUsersOnlineStatMapV1(users, __ctx);
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

::com::xiaonei::wap::talk::Int2IntMap
IceProxy::com::xiaonei::wap::talk::TalkService::getUsersOnlineStatMap(const ::com::xiaonei::wap::talk::IntSeq& users, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__TalkService__getUsersOnlineStatMap_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            return __del->getUsersOnlineStatMap(users, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::getUserOnlineStat(::Ice::Int userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__TalkService__getUserOnlineStat_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            return __del->getUserOnlineStat(userId, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::getUserOnlineStatV1(::Ice::Long userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__TalkService__getUserOnlineStatV1_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            return __del->getUserOnlineStatV1(userId, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::getUserOnlineTypebyTalk(::Ice::Long userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__TalkService__getUserOnlineTypebyTalk_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            return __del->getUserOnlineTypebyTalk(userId, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::logout(::Ice::Int userId, const ::std::string& sessionId, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->logout(userId, sessionId, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::logoutV1(::Ice::Long userId, const ::std::string& sessionId, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->logoutV1(userId, sessionId, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::distribute(::Ice::Long roomId, ::Ice::Long toId, const ::std::string& msg, bool isSave, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->distribute(roomId, toId, msg, isSave, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::MucReturn(const ::std::string& sessionId, const ::std::string& msg, bool isSave, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->MucReturn(sessionId, msg, isSave, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::pushMucOffline(::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->pushMucOffline(toId, groupOfflineMessageList, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::pushMucOfflineV1(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->pushMucOfflineV1(sessionId, toId, groupOfflineMessageList, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::pushOfflineV1(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& OfflineMessageList, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->pushOfflineV1(sessionId, toId, OfflineMessageList, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::pushMucOfflineV1For2V(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->pushMucOfflineV1For2V(sessionId, toId, groupOfflineMessageList, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::pushOfflineV1For2V(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& OfflineMessageList, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->pushOfflineV1For2V(sessionId, toId, OfflineMessageList, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::uninstall(::Ice::Long userId, ::Ice::Int pushDefinedTypeId, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->uninstall(userId, pushDefinedTypeId, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::setLang(::Ice::Long userId, const ::std::string& language, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::TalkService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::TalkService*>(__delBase.get());
            __del->setLang(userId, language, __ctx);
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
IceProxy::com::xiaonei::wap::talk::TalkService::ice_staticId()
{
    return ::com::xiaonei::wap::talk::TalkService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::wap::talk::TalkService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::wap::talk::TalkService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::wap::talk::TalkService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::wap::talk::TalkService);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::wap::talk::TalkService::__newInstance() const
{
    return new TalkService;
}

void
IceDelegateM::com::xiaonei::wap::talk::TalkService::push(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__push_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromId);
        __os->write(toId);
        __os->write(msg);
        __os->write(messageType);
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::pushFromIm(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int userType, ::Ice::Long msgkey, const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__pushFromIm_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromId);
        __os->write(toId);
        __os->write(msg);
        __os->write(messageType);
        __os->write(userType);
        __os->write(msgkey);
        ::com::xiaonei::wap::talk::__writeStr2StrMap(__os, strMap);
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::pushOfflineFromIm(const ::com::xiaonei::wap::talk::OfflineItemList& itemList, const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__pushOfflineFromIm_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(itemList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::com::xiaonei::wap::talk::__writeOfflineItemList(__os, &itemList[0], &itemList[0] + itemList.size());
        }
        ::com::xiaonei::wap::talk::__writeStr2StrMap(__os, strMap);
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::pushStatFromIm(::Ice::Long fromId, const ::com::xiaonei::wap::talk::Long2StrMap& msgMap, const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__pushStatFromIm_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromId);
        ::com::xiaonei::wap::talk::__writeLong2StrMap(__os, msgMap);
        ::com::xiaonei::wap::talk::__writeStr2StrMap(__os, strMap);
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::pushFeed(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int type, bool focus, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__pushFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromId);
        __os->write(toId);
        __os->write(msg);
        __os->write(type);
        __os->write(focus);
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::pushFeedBatch(::Ice::Long fromId, const ::com::xiaonei::wap::talk::Long2StrMap& msgMap, ::Ice::Int type, bool focus, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__pushFeedBatch_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromId);
        ::com::xiaonei::wap::talk::__writeLong2StrMap(__os, msgMap);
        __os->write(type);
        __os->write(focus);
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::voicePush(::Ice::Int fromId, ::Ice::Int toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int appId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__voicePush_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromId);
        __os->write(toId);
        __os->write(msg);
        __os->write(messageType);
        __os->write(appId);
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::voicePushV1(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int appId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__voicePushV1_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromId);
        __os->write(toId);
        __os->write(msg);
        __os->write(messageType);
        __os->write(appId);
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

::com::xiaonei::wap::talk::IntSeq
IceDelegateM::com::xiaonei::wap::talk::TalkService::getUsersOnlineStatSeq(const ::com::xiaonei::wap::talk::LongSeq& users, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__getUsersOnlineStatSeq_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(users.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&users[0], &users[0] + users.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::talk::IntSeq __ret;
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

::com::xiaonei::wap::talk::Long2IntMap
IceDelegateM::com::xiaonei::wap::talk::TalkService::getUsersOnlineStatMapV1(const ::com::xiaonei::wap::talk::LongSeq& users, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__getUsersOnlineStatMapV1_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(users.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&users[0], &users[0] + users.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::talk::Long2IntMap __ret;
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
        ::com::xiaonei::wap::talk::__readLong2IntMap(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::talk::Int2IntMap
IceDelegateM::com::xiaonei::wap::talk::TalkService::getUsersOnlineStatMap(const ::com::xiaonei::wap::talk::IntSeq& users, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__getUsersOnlineStatMap_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(users.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&users[0], &users[0] + users.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::talk::Int2IntMap __ret;
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
        ::com::xiaonei::wap::talk::__readInt2IntMap(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::xiaonei::wap::talk::TalkService::getUserOnlineStat(::Ice::Int userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__getUserOnlineStat_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::getUserOnlineStatV1(::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__getUserOnlineStatV1_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::getUserOnlineTypebyTalk(::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__getUserOnlineTypebyTalk_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::logout(::Ice::Int userId, const ::std::string& sessionId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__logout_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(sessionId);
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::logoutV1(::Ice::Long userId, const ::std::string& sessionId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__logoutV1_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(sessionId);
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::distribute(::Ice::Long roomId, ::Ice::Long toId, const ::std::string& msg, bool isSave, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__distribute_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(roomId);
        __os->write(toId);
        __os->write(msg);
        __os->write(isSave);
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::MucReturn(const ::std::string& sessionId, const ::std::string& msg, bool isSave, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__MucReturn_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sessionId);
        __os->write(msg);
        __os->write(isSave);
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::pushMucOffline(::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__pushMucOffline_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(toId);
        if(groupOfflineMessageList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&groupOfflineMessageList[0], &groupOfflineMessageList[0] + groupOfflineMessageList.size());
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::pushMucOfflineV1(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__pushMucOfflineV1_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sessionId);
        __os->write(toId);
        if(groupOfflineMessageList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&groupOfflineMessageList[0], &groupOfflineMessageList[0] + groupOfflineMessageList.size());
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::pushOfflineV1(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& OfflineMessageList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__pushOfflineV1_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sessionId);
        __os->write(toId);
        if(OfflineMessageList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&OfflineMessageList[0], &OfflineMessageList[0] + OfflineMessageList.size());
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::pushMucOfflineV1For2V(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__pushMucOfflineV1For2V_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sessionId);
        __os->write(toId);
        if(groupOfflineMessageList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&groupOfflineMessageList[0], &groupOfflineMessageList[0] + groupOfflineMessageList.size());
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::pushOfflineV1For2V(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& OfflineMessageList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__pushOfflineV1For2V_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sessionId);
        __os->write(toId);
        if(OfflineMessageList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&OfflineMessageList[0], &OfflineMessageList[0] + OfflineMessageList.size());
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::uninstall(::Ice::Long userId, ::Ice::Int pushDefinedTypeId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__uninstall_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(pushDefinedTypeId);
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
IceDelegateM::com::xiaonei::wap::talk::TalkService::setLang(::Ice::Long userId, const ::std::string& language, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__TalkService__setLang_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(language);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::push(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_fromId(fromId),
            _m_toId(toId),
            _m_msg(msg),
            _m_messageType(messageType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->push(_m_fromId, _m_toId, _m_msg, _m_messageType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_fromId;
        ::Ice::Long _m_toId;
        const ::std::string& _m_msg;
        ::Ice::Int _m_messageType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__push_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(fromId, toId, msg, messageType, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::pushFromIm(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int userType, ::Ice::Long msgkey, const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int userType, ::Ice::Long msgkey, const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_fromId(fromId),
            _m_toId(toId),
            _m_msg(msg),
            _m_messageType(messageType),
            _m_userType(userType),
            _m_msgkey(msgkey),
            _m_strMap(strMap)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->pushFromIm(_m_fromId, _m_toId, _m_msg, _m_messageType, _m_userType, _m_msgkey, _m_strMap, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_fromId;
        ::Ice::Long _m_toId;
        const ::std::string& _m_msg;
        ::Ice::Int _m_messageType;
        ::Ice::Int _m_userType;
        ::Ice::Long _m_msgkey;
        const ::com::xiaonei::wap::talk::Str2StrMap& _m_strMap;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__pushFromIm_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(fromId, toId, msg, messageType, userType, msgkey, strMap, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::pushOfflineFromIm(const ::com::xiaonei::wap::talk::OfflineItemList& itemList, const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::com::xiaonei::wap::talk::OfflineItemList& itemList, const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_itemList(itemList),
            _m_strMap(strMap)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->pushOfflineFromIm(_m_itemList, _m_strMap, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::com::xiaonei::wap::talk::OfflineItemList& _m_itemList;
        const ::com::xiaonei::wap::talk::Str2StrMap& _m_strMap;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__pushOfflineFromIm_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(itemList, strMap, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::pushStatFromIm(::Ice::Long fromId, const ::com::xiaonei::wap::talk::Long2StrMap& msgMap, const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long fromId, const ::com::xiaonei::wap::talk::Long2StrMap& msgMap, const ::com::xiaonei::wap::talk::Str2StrMap& strMap, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_fromId(fromId),
            _m_msgMap(msgMap),
            _m_strMap(strMap)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->pushStatFromIm(_m_fromId, _m_msgMap, _m_strMap, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_fromId;
        const ::com::xiaonei::wap::talk::Long2StrMap& _m_msgMap;
        const ::com::xiaonei::wap::talk::Str2StrMap& _m_strMap;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__pushStatFromIm_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(fromId, msgMap, strMap, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::pushFeed(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int type, bool focus, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int type, bool focus, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_fromId(fromId),
            _m_toId(toId),
            _m_msg(msg),
            _m_type(type),
            _m_focus(focus)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->pushFeed(_m_fromId, _m_toId, _m_msg, _m_type, _m_focus, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_fromId;
        ::Ice::Long _m_toId;
        const ::std::string& _m_msg;
        ::Ice::Int _m_type;
        bool _m_focus;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__pushFeed_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(fromId, toId, msg, type, focus, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::pushFeedBatch(::Ice::Long fromId, const ::com::xiaonei::wap::talk::Long2StrMap& msgMap, ::Ice::Int type, bool focus, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long fromId, const ::com::xiaonei::wap::talk::Long2StrMap& msgMap, ::Ice::Int type, bool focus, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_fromId(fromId),
            _m_msgMap(msgMap),
            _m_type(type),
            _m_focus(focus)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->pushFeedBatch(_m_fromId, _m_msgMap, _m_type, _m_focus, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_fromId;
        const ::com::xiaonei::wap::talk::Long2StrMap& _m_msgMap;
        ::Ice::Int _m_type;
        bool _m_focus;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__pushFeedBatch_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(fromId, msgMap, type, focus, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::voicePush(::Ice::Int fromId, ::Ice::Int toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int appId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int fromId, ::Ice::Int toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int appId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_fromId(fromId),
            _m_toId(toId),
            _m_msg(msg),
            _m_messageType(messageType),
            _m_appId(appId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->voicePush(_m_fromId, _m_toId, _m_msg, _m_messageType, _m_appId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_fromId;
        ::Ice::Int _m_toId;
        const ::std::string& _m_msg;
        ::Ice::Int _m_messageType;
        ::Ice::Int _m_appId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__voicePush_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(fromId, toId, msg, messageType, appId, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::voicePushV1(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int appId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int messageType, ::Ice::Int appId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_fromId(fromId),
            _m_toId(toId),
            _m_msg(msg),
            _m_messageType(messageType),
            _m_appId(appId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->voicePushV1(_m_fromId, _m_toId, _m_msg, _m_messageType, _m_appId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_fromId;
        ::Ice::Long _m_toId;
        const ::std::string& _m_msg;
        ::Ice::Int _m_messageType;
        ::Ice::Int _m_appId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__voicePushV1_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(fromId, toId, msg, messageType, appId, __current);
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

::com::xiaonei::wap::talk::IntSeq
IceDelegateD::com::xiaonei::wap::talk::TalkService::getUsersOnlineStatSeq(const ::com::xiaonei::wap::talk::LongSeq& users, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::talk::IntSeq& __result, const ::com::xiaonei::wap::talk::LongSeq& users, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_users(users)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getUsersOnlineStatSeq(_m_users, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::talk::IntSeq& _result;
        const ::com::xiaonei::wap::talk::LongSeq& _m_users;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__getUsersOnlineStatSeq_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::talk::IntSeq __result;
    try
    {
        _DirectI __direct(__result, users, __current);
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

::com::xiaonei::wap::talk::Long2IntMap
IceDelegateD::com::xiaonei::wap::talk::TalkService::getUsersOnlineStatMapV1(const ::com::xiaonei::wap::talk::LongSeq& users, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::talk::Long2IntMap& __result, const ::com::xiaonei::wap::talk::LongSeq& users, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_users(users)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getUsersOnlineStatMapV1(_m_users, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::talk::Long2IntMap& _result;
        const ::com::xiaonei::wap::talk::LongSeq& _m_users;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__getUsersOnlineStatMapV1_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::talk::Long2IntMap __result;
    try
    {
        _DirectI __direct(__result, users, __current);
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

::com::xiaonei::wap::talk::Int2IntMap
IceDelegateD::com::xiaonei::wap::talk::TalkService::getUsersOnlineStatMap(const ::com::xiaonei::wap::talk::IntSeq& users, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::talk::Int2IntMap& __result, const ::com::xiaonei::wap::talk::IntSeq& users, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_users(users)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getUsersOnlineStatMap(_m_users, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::talk::Int2IntMap& _result;
        const ::com::xiaonei::wap::talk::IntSeq& _m_users;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__getUsersOnlineStatMap_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::talk::Int2IntMap __result;
    try
    {
        _DirectI __direct(__result, users, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::getUserOnlineStat(::Ice::Int userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int& __result, ::Ice::Int userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getUserOnlineStat(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
        ::Ice::Int _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__getUserOnlineStat_name, ::Ice::Normal, __context);
    ::Ice::Int __result;
    try
    {
        _DirectI __direct(__result, userId, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::getUserOnlineStatV1(::Ice::Long userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int& __result, ::Ice::Long userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getUserOnlineStatV1(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__getUserOnlineStatV1_name, ::Ice::Normal, __context);
    ::Ice::Int __result;
    try
    {
        _DirectI __direct(__result, userId, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::getUserOnlineTypebyTalk(::Ice::Long userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int& __result, ::Ice::Long userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getUserOnlineTypebyTalk(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__getUserOnlineTypebyTalk_name, ::Ice::Normal, __context);
    ::Ice::Int __result;
    try
    {
        _DirectI __direct(__result, userId, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::logout(::Ice::Int userId, const ::std::string& sessionId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int userId, const ::std::string& sessionId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_sessionId(sessionId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->logout(_m_userId, _m_sessionId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_userId;
        const ::std::string& _m_sessionId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__logout_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, sessionId, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::logoutV1(::Ice::Long userId, const ::std::string& sessionId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long userId, const ::std::string& sessionId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_sessionId(sessionId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->logoutV1(_m_userId, _m_sessionId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_userId;
        const ::std::string& _m_sessionId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__logoutV1_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, sessionId, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::distribute(::Ice::Long roomId, ::Ice::Long toId, const ::std::string& msg, bool isSave, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long roomId, ::Ice::Long toId, const ::std::string& msg, bool isSave, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_roomId(roomId),
            _m_toId(toId),
            _m_msg(msg),
            _m_isSave(isSave)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->distribute(_m_roomId, _m_toId, _m_msg, _m_isSave, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_roomId;
        ::Ice::Long _m_toId;
        const ::std::string& _m_msg;
        bool _m_isSave;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__distribute_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(roomId, toId, msg, isSave, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::MucReturn(const ::std::string& sessionId, const ::std::string& msg, bool isSave, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& sessionId, const ::std::string& msg, bool isSave, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_sessionId(sessionId),
            _m_msg(msg),
            _m_isSave(isSave)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->MucReturn(_m_sessionId, _m_msg, _m_isSave, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_sessionId;
        const ::std::string& _m_msg;
        bool _m_isSave;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__MucReturn_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(sessionId, msg, isSave, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::pushMucOffline(::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_toId(toId),
            _m_groupOfflineMessageList(groupOfflineMessageList)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->pushMucOffline(_m_toId, _m_groupOfflineMessageList, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_toId;
        const ::com::xiaonei::wap::talk::OfflineMsgList& _m_groupOfflineMessageList;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__pushMucOffline_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(toId, groupOfflineMessageList, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::pushMucOfflineV1(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_sessionId(sessionId),
            _m_toId(toId),
            _m_groupOfflineMessageList(groupOfflineMessageList)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->pushMucOfflineV1(_m_sessionId, _m_toId, _m_groupOfflineMessageList, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_sessionId;
        ::Ice::Long _m_toId;
        const ::com::xiaonei::wap::talk::OfflineMsgList& _m_groupOfflineMessageList;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__pushMucOfflineV1_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(sessionId, toId, groupOfflineMessageList, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::pushOfflineV1(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& OfflineMessageList, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& OfflineMessageList, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_sessionId(sessionId),
            _m_toId(toId),
            _m_OfflineMessageList(OfflineMessageList)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->pushOfflineV1(_m_sessionId, _m_toId, _m_OfflineMessageList, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_sessionId;
        ::Ice::Long _m_toId;
        const ::com::xiaonei::wap::talk::OfflineMsgList& _m_OfflineMessageList;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__pushOfflineV1_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(sessionId, toId, OfflineMessageList, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::pushMucOfflineV1For2V(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& groupOfflineMessageList, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_sessionId(sessionId),
            _m_toId(toId),
            _m_groupOfflineMessageList(groupOfflineMessageList)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->pushMucOfflineV1For2V(_m_sessionId, _m_toId, _m_groupOfflineMessageList, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_sessionId;
        ::Ice::Long _m_toId;
        const ::com::xiaonei::wap::talk::OfflineMsgList& _m_groupOfflineMessageList;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__pushMucOfflineV1For2V_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(sessionId, toId, groupOfflineMessageList, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::pushOfflineV1For2V(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& OfflineMessageList, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& sessionId, ::Ice::Long toId, const ::com::xiaonei::wap::talk::OfflineMsgList& OfflineMessageList, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_sessionId(sessionId),
            _m_toId(toId),
            _m_OfflineMessageList(OfflineMessageList)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->pushOfflineV1For2V(_m_sessionId, _m_toId, _m_OfflineMessageList, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_sessionId;
        ::Ice::Long _m_toId;
        const ::com::xiaonei::wap::talk::OfflineMsgList& _m_OfflineMessageList;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__pushOfflineV1For2V_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(sessionId, toId, OfflineMessageList, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::uninstall(::Ice::Long userId, ::Ice::Int pushDefinedTypeId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long userId, ::Ice::Int pushDefinedTypeId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_pushDefinedTypeId(pushDefinedTypeId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->uninstall(_m_userId, _m_pushDefinedTypeId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_userId;
        ::Ice::Int _m_pushDefinedTypeId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__uninstall_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, pushDefinedTypeId, __current);
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
IceDelegateD::com::xiaonei::wap::talk::TalkService::setLang(::Ice::Long userId, const ::std::string& language, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long userId, const ::std::string& language, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_language(language)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::TalkService* servant = dynamic_cast< ::com::xiaonei::wap::talk::TalkService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->setLang(_m_userId, _m_language, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_userId;
        const ::std::string& _m_language;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__TalkService__setLang_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, language, __current);
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

::Ice::ObjectPtr
com::xiaonei::wap::talk::TalkService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__wap__talk__TalkService_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::wap::talk::TalkService"
};

bool
com::xiaonei::wap::talk::TalkService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__wap__talk__TalkService_ids, __com__xiaonei__wap__talk__TalkService_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::wap::talk::TalkService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__wap__talk__TalkService_ids[0], &__com__xiaonei__wap__talk__TalkService_ids[2]);
}

const ::std::string&
com::xiaonei::wap::talk::TalkService::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__wap__talk__TalkService_ids[1];
}

const ::std::string&
com::xiaonei::wap::talk::TalkService::ice_staticId()
{
    return __com__xiaonei__wap__talk__TalkService_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___push(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long fromId;
    ::Ice::Long toId;
    ::std::string msg;
    ::Ice::Int messageType;
    __is->read(fromId);
    __is->read(toId);
    __is->read(msg);
    __is->read(messageType);
    __is->endReadEncaps();
    push(fromId, toId, msg, messageType, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___pushFromIm(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long fromId;
    ::Ice::Long toId;
    ::std::string msg;
    ::Ice::Int messageType;
    ::Ice::Int userType;
    ::Ice::Long msgkey;
    ::com::xiaonei::wap::talk::Str2StrMap strMap;
    __is->read(fromId);
    __is->read(toId);
    __is->read(msg);
    __is->read(messageType);
    __is->read(userType);
    __is->read(msgkey);
    ::com::xiaonei::wap::talk::__readStr2StrMap(__is, strMap);
    __is->endReadEncaps();
    pushFromIm(fromId, toId, msg, messageType, userType, msgkey, strMap, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___pushOfflineFromIm(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::talk::OfflineItemList itemList;
    ::com::xiaonei::wap::talk::Str2StrMap strMap;
    ::com::xiaonei::wap::talk::__readOfflineItemList(__is, itemList);
    ::com::xiaonei::wap::talk::__readStr2StrMap(__is, strMap);
    __is->endReadEncaps();
    pushOfflineFromIm(itemList, strMap, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___pushStatFromIm(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long fromId;
    ::com::xiaonei::wap::talk::Long2StrMap msgMap;
    ::com::xiaonei::wap::talk::Str2StrMap strMap;
    __is->read(fromId);
    ::com::xiaonei::wap::talk::__readLong2StrMap(__is, msgMap);
    ::com::xiaonei::wap::talk::__readStr2StrMap(__is, strMap);
    __is->endReadEncaps();
    pushStatFromIm(fromId, msgMap, strMap, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___pushFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long fromId;
    ::Ice::Long toId;
    ::std::string msg;
    ::Ice::Int type;
    bool focus;
    __is->read(fromId);
    __is->read(toId);
    __is->read(msg);
    __is->read(type);
    __is->read(focus);
    __is->endReadEncaps();
    pushFeed(fromId, toId, msg, type, focus, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___pushFeedBatch(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long fromId;
    ::com::xiaonei::wap::talk::Long2StrMap msgMap;
    ::Ice::Int type;
    bool focus;
    __is->read(fromId);
    ::com::xiaonei::wap::talk::__readLong2StrMap(__is, msgMap);
    __is->read(type);
    __is->read(focus);
    __is->endReadEncaps();
    pushFeedBatch(fromId, msgMap, type, focus, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___voicePush(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int fromId;
    ::Ice::Int toId;
    ::std::string msg;
    ::Ice::Int messageType;
    ::Ice::Int appId;
    __is->read(fromId);
    __is->read(toId);
    __is->read(msg);
    __is->read(messageType);
    __is->read(appId);
    __is->endReadEncaps();
    voicePush(fromId, toId, msg, messageType, appId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___voicePushV1(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long fromId;
    ::Ice::Long toId;
    ::std::string msg;
    ::Ice::Int messageType;
    ::Ice::Int appId;
    __is->read(fromId);
    __is->read(toId);
    __is->read(msg);
    __is->read(messageType);
    __is->read(appId);
    __is->endReadEncaps();
    voicePushV1(fromId, toId, msg, messageType, appId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___getUsersOnlineStatSeq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::talk::LongSeq users;
    __is->read(users);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::talk::IntSeq __ret = getUsersOnlineStatSeq(users, __current);
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
com::xiaonei::wap::talk::TalkService::___getUsersOnlineStatMapV1(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::talk::LongSeq users;
    __is->read(users);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::talk::Long2IntMap __ret = getUsersOnlineStatMapV1(users, __current);
    ::com::xiaonei::wap::talk::__writeLong2IntMap(__os, __ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___getUsersOnlineStatMap(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::talk::IntSeq users;
    __is->read(users);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::talk::Int2IntMap __ret = getUsersOnlineStatMap(users, __current);
    ::com::xiaonei::wap::talk::__writeInt2IntMap(__os, __ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___getUserOnlineStat(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userId;
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = getUserOnlineStat(userId, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___getUserOnlineStatV1(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = getUserOnlineStatV1(userId, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___getUserOnlineTypebyTalk(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = getUserOnlineTypebyTalk(userId, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___logout(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userId;
    ::std::string sessionId;
    __is->read(userId);
    __is->read(sessionId);
    __is->endReadEncaps();
    logout(userId, sessionId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___logoutV1(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::std::string sessionId;
    __is->read(userId);
    __is->read(sessionId);
    __is->endReadEncaps();
    logoutV1(userId, sessionId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___distribute(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long roomId;
    ::Ice::Long toId;
    ::std::string msg;
    bool isSave;
    __is->read(roomId);
    __is->read(toId);
    __is->read(msg);
    __is->read(isSave);
    __is->endReadEncaps();
    distribute(roomId, toId, msg, isSave, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___MucReturn(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string sessionId;
    ::std::string msg;
    bool isSave;
    __is->read(sessionId);
    __is->read(msg);
    __is->read(isSave);
    __is->endReadEncaps();
    MucReturn(sessionId, msg, isSave, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___pushMucOffline(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long toId;
    ::com::xiaonei::wap::talk::OfflineMsgList groupOfflineMessageList;
    __is->read(toId);
    __is->read(groupOfflineMessageList);
    __is->endReadEncaps();
    pushMucOffline(toId, groupOfflineMessageList, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___pushMucOfflineV1(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string sessionId;
    ::Ice::Long toId;
    ::com::xiaonei::wap::talk::OfflineMsgList groupOfflineMessageList;
    __is->read(sessionId);
    __is->read(toId);
    __is->read(groupOfflineMessageList);
    __is->endReadEncaps();
    pushMucOfflineV1(sessionId, toId, groupOfflineMessageList, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___pushOfflineV1(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string sessionId;
    ::Ice::Long toId;
    ::com::xiaonei::wap::talk::OfflineMsgList OfflineMessageList;
    __is->read(sessionId);
    __is->read(toId);
    __is->read(OfflineMessageList);
    __is->endReadEncaps();
    pushOfflineV1(sessionId, toId, OfflineMessageList, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___pushMucOfflineV1For2V(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string sessionId;
    ::Ice::Long toId;
    ::com::xiaonei::wap::talk::OfflineMsgList groupOfflineMessageList;
    __is->read(sessionId);
    __is->read(toId);
    __is->read(groupOfflineMessageList);
    __is->endReadEncaps();
    pushMucOfflineV1For2V(sessionId, toId, groupOfflineMessageList, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___pushOfflineV1For2V(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string sessionId;
    ::Ice::Long toId;
    ::com::xiaonei::wap::talk::OfflineMsgList OfflineMessageList;
    __is->read(sessionId);
    __is->read(toId);
    __is->read(OfflineMessageList);
    __is->endReadEncaps();
    pushOfflineV1For2V(sessionId, toId, OfflineMessageList, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___uninstall(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Int pushDefinedTypeId;
    __is->read(userId);
    __is->read(pushDefinedTypeId);
    __is->endReadEncaps();
    uninstall(userId, pushDefinedTypeId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::___setLang(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::std::string language;
    __is->read(userId);
    __is->read(language);
    __is->endReadEncaps();
    setLang(userId, language, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__wap__talk__TalkService_all[] =
{
    "MucReturn",
    "distribute",
    "getUserOnlineStat",
    "getUserOnlineStatV1",
    "getUserOnlineTypebyTalk",
    "getUsersOnlineStatMap",
    "getUsersOnlineStatMapV1",
    "getUsersOnlineStatSeq",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "logout",
    "logoutV1",
    "push",
    "pushFeed",
    "pushFeedBatch",
    "pushFromIm",
    "pushMucOffline",
    "pushMucOfflineV1",
    "pushMucOfflineV1For2V",
    "pushOfflineFromIm",
    "pushOfflineV1",
    "pushOfflineV1For2V",
    "pushStatFromIm",
    "setLang",
    "uninstall",
    "voicePush",
    "voicePushV1"
};

::Ice::DispatchStatus
com::xiaonei::wap::talk::TalkService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__wap__talk__TalkService_all, __com__xiaonei__wap__talk__TalkService_all + 29, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__wap__talk__TalkService_all)
    {
        case 0:
        {
            return ___MucReturn(in, current);
        }
        case 1:
        {
            return ___distribute(in, current);
        }
        case 2:
        {
            return ___getUserOnlineStat(in, current);
        }
        case 3:
        {
            return ___getUserOnlineStatV1(in, current);
        }
        case 4:
        {
            return ___getUserOnlineTypebyTalk(in, current);
        }
        case 5:
        {
            return ___getUsersOnlineStatMap(in, current);
        }
        case 6:
        {
            return ___getUsersOnlineStatMapV1(in, current);
        }
        case 7:
        {
            return ___getUsersOnlineStatSeq(in, current);
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
            return ___logout(in, current);
        }
        case 13:
        {
            return ___logoutV1(in, current);
        }
        case 14:
        {
            return ___push(in, current);
        }
        case 15:
        {
            return ___pushFeed(in, current);
        }
        case 16:
        {
            return ___pushFeedBatch(in, current);
        }
        case 17:
        {
            return ___pushFromIm(in, current);
        }
        case 18:
        {
            return ___pushMucOffline(in, current);
        }
        case 19:
        {
            return ___pushMucOfflineV1(in, current);
        }
        case 20:
        {
            return ___pushMucOfflineV1For2V(in, current);
        }
        case 21:
        {
            return ___pushOfflineFromIm(in, current);
        }
        case 22:
        {
            return ___pushOfflineV1(in, current);
        }
        case 23:
        {
            return ___pushOfflineV1For2V(in, current);
        }
        case 24:
        {
            return ___pushStatFromIm(in, current);
        }
        case 25:
        {
            return ___setLang(in, current);
        }
        case 26:
        {
            return ___uninstall(in, current);
        }
        case 27:
        {
            return ___voicePush(in, current);
        }
        case 28:
        {
            return ___voicePushV1(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::wap::talk::TalkService::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::wap::talk::TalkService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::wap::talk::TalkService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::talk::TalkService was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::talk::TalkService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::talk::TalkService was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::wap::talk::__patch__TalkServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::wap::talk::TalkServicePtr* p = static_cast< ::com::xiaonei::wap::talk::TalkServicePtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::wap::talk::TalkServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::wap::talk::TalkService::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::wap::talk::operator==(const ::com::xiaonei::wap::talk::TalkService& l, const ::com::xiaonei::wap::talk::TalkService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::wap::talk::operator<(const ::com::xiaonei::wap::talk::TalkService& l, const ::com::xiaonei::wap::talk::TalkService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
