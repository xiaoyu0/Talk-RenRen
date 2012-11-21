// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `history.ice'

#include <history.h>
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

static const ::std::string __com__xiaonei__wap__dbService__talk__HisMessageService__getHisMsg4Group_name = "getHisMsg4Group";

static const ::std::string __com__xiaonei__wap__dbService__talk__HisMessageService__getHisMsg4GroupPage_name = "getHisMsg4GroupPage";

static const ::std::string __com__xiaonei__wap__dbService__talk__HisMessageService__getHisMsg_name = "getHisMsg";

static const ::std::string __com__xiaonei__wap__dbService__talk__HisMessageService__getHisMsg4Page_name = "getHisMsg4Page";

static const ::std::string __com__xiaonei__wap__dbService__talk__HisMessageService__getAllHisMsg_name = "getAllHisMsg";

static const ::std::string __com__xiaonei__wap__dbService__talk__HisMessageService__getAllHisMsg4Page_name = "getAllHisMsg4Page";

static const ::std::string __com__xiaonei__wap__dbService__talk__HisMessageService__delHisMsg4Group_name = "delHisMsg4Group";

static const ::std::string __com__xiaonei__wap__dbService__talk__HisMessageService__delHisMsg_name = "delHisMsg";

static const ::std::string __com__xiaonei__wap__dbService__talk__HisMessageService__delAllHisMsg_name = "delAllHisMsg";

static const ::std::string __com__xiaonei__wap__dbService__talk__HisMessageService__saveMsg_name = "saveMsg";

static const ::std::string __com__xiaonei__wap__dbService__talk__HisMessageService__saveMsg4Group_name = "saveMsg4Group";

static const ::std::string __com__xiaonei__wap__dbService__talk__HisMessageService__saveMsg4GroupDown_name = "saveMsg4GroupDown";

::Ice::Object* IceInternal::upCast(::com::xiaonei::wap::dbService::talk::HisMessageService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService* p) { return p; }

void
com::xiaonei::wap::dbService::talk::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::dbService::talk::HisMessageServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::wap::dbService::talk::__writeUserMsgMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::wap::dbService::talk::UserMsgMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::wap::dbService::talk::UserMsgMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
com::xiaonei::wap::dbService::talk::__readUserMsgMap(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::dbService::talk::UserMsgMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Long, ::std::string> pair;
        __is->read(const_cast< ::Ice::Long&>(pair.first));
        ::com::xiaonei::wap::dbService::talk::UserMsgMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

::com::xiaonei::wap::dbService::talk::MsgList
IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService::getHisMsg4Group(::Ice::Long roomId, ::Ice::Long userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__dbService__talk__HisMessageService__getHisMsg4Group_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService*>(__delBase.get());
            return __del->getHisMsg4Group(roomId, userId, __ctx);
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

::com::xiaonei::wap::dbService::talk::MsgList
IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService::getHisMsg4GroupPage(::Ice::Long roomId, ::Ice::Long userId, ::Ice::Int offset, ::Ice::Int pageSize, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__dbService__talk__HisMessageService__getHisMsg4GroupPage_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService*>(__delBase.get());
            return __del->getHisMsg4GroupPage(roomId, userId, offset, pageSize, __ctx);
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

::com::xiaonei::wap::dbService::talk::MsgList
IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService::getHisMsg(::Ice::Long userId, ::Ice::Long friId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__dbService__talk__HisMessageService__getHisMsg_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService*>(__delBase.get());
            return __del->getHisMsg(userId, friId, __ctx);
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

::com::xiaonei::wap::dbService::talk::MsgList
IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService::getHisMsg4Page(::Ice::Long userId, ::Ice::Long friId, ::Ice::Int offset, ::Ice::Int pageSize, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__dbService__talk__HisMessageService__getHisMsg4Page_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService*>(__delBase.get());
            return __del->getHisMsg4Page(userId, friId, offset, pageSize, __ctx);
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

::com::xiaonei::wap::dbService::talk::MsgList
IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService::getAllHisMsg(::Ice::Long userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__dbService__talk__HisMessageService__getAllHisMsg_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService*>(__delBase.get());
            return __del->getAllHisMsg(userId, __ctx);
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

::com::xiaonei::wap::dbService::talk::MsgList
IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService::getAllHisMsg4Page(::Ice::Long userId, ::Ice::Int offset, ::Ice::Int pageSize, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__dbService__talk__HisMessageService__getAllHisMsg4Page_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService*>(__delBase.get());
            return __del->getAllHisMsg4Page(userId, offset, pageSize, __ctx);
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
IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService::delHisMsg4Group(::Ice::Long roomId, ::Ice::Long userId, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService*>(__delBase.get());
            __del->delHisMsg4Group(roomId, userId, __ctx);
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
IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService::delHisMsg(::Ice::Long userId, ::Ice::Long friId, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService*>(__delBase.get());
            __del->delHisMsg(userId, friId, __ctx);
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
IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService::delAllHisMsg(::Ice::Long userId, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService*>(__delBase.get());
            __del->delAllHisMsg(userId, __ctx);
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
IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService::saveMsg(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Int channelId, const ::std::string& msg, ::Ice::Long dateTime, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService*>(__delBase.get());
            __del->saveMsg(fromId, toId, channelId, msg, dateTime, __ctx);
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
IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService::saveMsg4Group(::Ice::Long roomId, ::Ice::Long rcId, ::Ice::Long fromId, const ::com::xiaonei::wap::dbService::talk::IntSeq& intSequence, const ::std::string& msg, ::Ice::Long dateTime, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService*>(__delBase.get());
            __del->saveMsg4Group(roomId, rcId, fromId, intSequence, msg, dateTime, __ctx);
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
IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService::saveMsg4GroupDown(::Ice::Long roomId, ::Ice::Long rcId, ::Ice::Long fromId, const ::com::xiaonei::wap::dbService::talk::UserMsgMap& userMsg, ::Ice::Long dateTime, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService*>(__delBase.get());
            __del->saveMsg4GroupDown(roomId, rcId, fromId, userMsg, dateTime, __ctx);
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
IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService::ice_staticId()
{
    return ::com::xiaonei::wap::dbService::talk::HisMessageService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::wap::dbService::talk::HisMessageService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::wap::dbService::talk::HisMessageService);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService::__newInstance() const
{
    return new HisMessageService;
}

::com::xiaonei::wap::dbService::talk::MsgList
IceDelegateM::com::xiaonei::wap::dbService::talk::HisMessageService::getHisMsg4Group(::Ice::Long roomId, ::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__dbService__talk__HisMessageService__getHisMsg4Group_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(roomId);
        __os->write(userId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::dbService::talk::MsgList __ret;
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

::com::xiaonei::wap::dbService::talk::MsgList
IceDelegateM::com::xiaonei::wap::dbService::talk::HisMessageService::getHisMsg4GroupPage(::Ice::Long roomId, ::Ice::Long userId, ::Ice::Int offset, ::Ice::Int pageSize, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__dbService__talk__HisMessageService__getHisMsg4GroupPage_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(roomId);
        __os->write(userId);
        __os->write(offset);
        __os->write(pageSize);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::dbService::talk::MsgList __ret;
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

::com::xiaonei::wap::dbService::talk::MsgList
IceDelegateM::com::xiaonei::wap::dbService::talk::HisMessageService::getHisMsg(::Ice::Long userId, ::Ice::Long friId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__dbService__talk__HisMessageService__getHisMsg_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(friId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::dbService::talk::MsgList __ret;
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

::com::xiaonei::wap::dbService::talk::MsgList
IceDelegateM::com::xiaonei::wap::dbService::talk::HisMessageService::getHisMsg4Page(::Ice::Long userId, ::Ice::Long friId, ::Ice::Int offset, ::Ice::Int pageSize, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__dbService__talk__HisMessageService__getHisMsg4Page_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(friId);
        __os->write(offset);
        __os->write(pageSize);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::dbService::talk::MsgList __ret;
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

::com::xiaonei::wap::dbService::talk::MsgList
IceDelegateM::com::xiaonei::wap::dbService::talk::HisMessageService::getAllHisMsg(::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__dbService__talk__HisMessageService__getAllHisMsg_name, ::Ice::Normal, __context);
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
    ::com::xiaonei::wap::dbService::talk::MsgList __ret;
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

::com::xiaonei::wap::dbService::talk::MsgList
IceDelegateM::com::xiaonei::wap::dbService::talk::HisMessageService::getAllHisMsg4Page(::Ice::Long userId, ::Ice::Int offset, ::Ice::Int pageSize, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__dbService__talk__HisMessageService__getAllHisMsg4Page_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(offset);
        __os->write(pageSize);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::dbService::talk::MsgList __ret;
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
IceDelegateM::com::xiaonei::wap::dbService::talk::HisMessageService::delHisMsg4Group(::Ice::Long roomId, ::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__dbService__talk__HisMessageService__delHisMsg4Group_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(roomId);
        __os->write(userId);
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
IceDelegateM::com::xiaonei::wap::dbService::talk::HisMessageService::delHisMsg(::Ice::Long userId, ::Ice::Long friId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__dbService__talk__HisMessageService__delHisMsg_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(friId);
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
IceDelegateM::com::xiaonei::wap::dbService::talk::HisMessageService::delAllHisMsg(::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__dbService__talk__HisMessageService__delAllHisMsg_name, ::Ice::Normal, __context);
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
IceDelegateM::com::xiaonei::wap::dbService::talk::HisMessageService::saveMsg(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Int channelId, const ::std::string& msg, ::Ice::Long dateTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__dbService__talk__HisMessageService__saveMsg_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromId);
        __os->write(toId);
        __os->write(channelId);
        __os->write(msg);
        __os->write(dateTime);
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
IceDelegateM::com::xiaonei::wap::dbService::talk::HisMessageService::saveMsg4Group(::Ice::Long roomId, ::Ice::Long rcId, ::Ice::Long fromId, const ::com::xiaonei::wap::dbService::talk::IntSeq& intSequence, const ::std::string& msg, ::Ice::Long dateTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__dbService__talk__HisMessageService__saveMsg4Group_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(roomId);
        __os->write(rcId);
        __os->write(fromId);
        if(intSequence.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&intSequence[0], &intSequence[0] + intSequence.size());
        }
        __os->write(msg);
        __os->write(dateTime);
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
IceDelegateM::com::xiaonei::wap::dbService::talk::HisMessageService::saveMsg4GroupDown(::Ice::Long roomId, ::Ice::Long rcId, ::Ice::Long fromId, const ::com::xiaonei::wap::dbService::talk::UserMsgMap& userMsg, ::Ice::Long dateTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__dbService__talk__HisMessageService__saveMsg4GroupDown_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(roomId);
        __os->write(rcId);
        __os->write(fromId);
        ::com::xiaonei::wap::dbService::talk::__writeUserMsgMap(__os, userMsg);
        __os->write(dateTime);
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

::com::xiaonei::wap::dbService::talk::MsgList
IceDelegateD::com::xiaonei::wap::dbService::talk::HisMessageService::getHisMsg4Group(::Ice::Long roomId, ::Ice::Long userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::dbService::talk::MsgList& __result, ::Ice::Long roomId, ::Ice::Long userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_roomId(roomId),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::dbService::talk::HisMessageService* servant = dynamic_cast< ::com::xiaonei::wap::dbService::talk::HisMessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getHisMsg4Group(_m_roomId, _m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::dbService::talk::MsgList& _result;
        ::Ice::Long _m_roomId;
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__dbService__talk__HisMessageService__getHisMsg4Group_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::dbService::talk::MsgList __result;
    try
    {
        _DirectI __direct(__result, roomId, userId, __current);
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

::com::xiaonei::wap::dbService::talk::MsgList
IceDelegateD::com::xiaonei::wap::dbService::talk::HisMessageService::getHisMsg4GroupPage(::Ice::Long roomId, ::Ice::Long userId, ::Ice::Int offset, ::Ice::Int pageSize, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::dbService::talk::MsgList& __result, ::Ice::Long roomId, ::Ice::Long userId, ::Ice::Int offset, ::Ice::Int pageSize, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_roomId(roomId),
            _m_userId(userId),
            _m_offset(offset),
            _m_pageSize(pageSize)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::dbService::talk::HisMessageService* servant = dynamic_cast< ::com::xiaonei::wap::dbService::talk::HisMessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getHisMsg4GroupPage(_m_roomId, _m_userId, _m_offset, _m_pageSize, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::dbService::talk::MsgList& _result;
        ::Ice::Long _m_roomId;
        ::Ice::Long _m_userId;
        ::Ice::Int _m_offset;
        ::Ice::Int _m_pageSize;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__dbService__talk__HisMessageService__getHisMsg4GroupPage_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::dbService::talk::MsgList __result;
    try
    {
        _DirectI __direct(__result, roomId, userId, offset, pageSize, __current);
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

::com::xiaonei::wap::dbService::talk::MsgList
IceDelegateD::com::xiaonei::wap::dbService::talk::HisMessageService::getHisMsg(::Ice::Long userId, ::Ice::Long friId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::dbService::talk::MsgList& __result, ::Ice::Long userId, ::Ice::Long friId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_friId(friId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::dbService::talk::HisMessageService* servant = dynamic_cast< ::com::xiaonei::wap::dbService::talk::HisMessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getHisMsg(_m_userId, _m_friId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::dbService::talk::MsgList& _result;
        ::Ice::Long _m_userId;
        ::Ice::Long _m_friId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__dbService__talk__HisMessageService__getHisMsg_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::dbService::talk::MsgList __result;
    try
    {
        _DirectI __direct(__result, userId, friId, __current);
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

::com::xiaonei::wap::dbService::talk::MsgList
IceDelegateD::com::xiaonei::wap::dbService::talk::HisMessageService::getHisMsg4Page(::Ice::Long userId, ::Ice::Long friId, ::Ice::Int offset, ::Ice::Int pageSize, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::dbService::talk::MsgList& __result, ::Ice::Long userId, ::Ice::Long friId, ::Ice::Int offset, ::Ice::Int pageSize, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_friId(friId),
            _m_offset(offset),
            _m_pageSize(pageSize)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::dbService::talk::HisMessageService* servant = dynamic_cast< ::com::xiaonei::wap::dbService::talk::HisMessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getHisMsg4Page(_m_userId, _m_friId, _m_offset, _m_pageSize, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::dbService::talk::MsgList& _result;
        ::Ice::Long _m_userId;
        ::Ice::Long _m_friId;
        ::Ice::Int _m_offset;
        ::Ice::Int _m_pageSize;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__dbService__talk__HisMessageService__getHisMsg4Page_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::dbService::talk::MsgList __result;
    try
    {
        _DirectI __direct(__result, userId, friId, offset, pageSize, __current);
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

::com::xiaonei::wap::dbService::talk::MsgList
IceDelegateD::com::xiaonei::wap::dbService::talk::HisMessageService::getAllHisMsg(::Ice::Long userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::dbService::talk::MsgList& __result, ::Ice::Long userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::dbService::talk::HisMessageService* servant = dynamic_cast< ::com::xiaonei::wap::dbService::talk::HisMessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getAllHisMsg(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::dbService::talk::MsgList& _result;
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__dbService__talk__HisMessageService__getAllHisMsg_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::dbService::talk::MsgList __result;
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

::com::xiaonei::wap::dbService::talk::MsgList
IceDelegateD::com::xiaonei::wap::dbService::talk::HisMessageService::getAllHisMsg4Page(::Ice::Long userId, ::Ice::Int offset, ::Ice::Int pageSize, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::dbService::talk::MsgList& __result, ::Ice::Long userId, ::Ice::Int offset, ::Ice::Int pageSize, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_offset(offset),
            _m_pageSize(pageSize)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::dbService::talk::HisMessageService* servant = dynamic_cast< ::com::xiaonei::wap::dbService::talk::HisMessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getAllHisMsg4Page(_m_userId, _m_offset, _m_pageSize, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::dbService::talk::MsgList& _result;
        ::Ice::Long _m_userId;
        ::Ice::Int _m_offset;
        ::Ice::Int _m_pageSize;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__dbService__talk__HisMessageService__getAllHisMsg4Page_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::dbService::talk::MsgList __result;
    try
    {
        _DirectI __direct(__result, userId, offset, pageSize, __current);
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
IceDelegateD::com::xiaonei::wap::dbService::talk::HisMessageService::delHisMsg4Group(::Ice::Long roomId, ::Ice::Long userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long roomId, ::Ice::Long userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_roomId(roomId),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::dbService::talk::HisMessageService* servant = dynamic_cast< ::com::xiaonei::wap::dbService::talk::HisMessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->delHisMsg4Group(_m_roomId, _m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_roomId;
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__dbService__talk__HisMessageService__delHisMsg4Group_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(roomId, userId, __current);
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
IceDelegateD::com::xiaonei::wap::dbService::talk::HisMessageService::delHisMsg(::Ice::Long userId, ::Ice::Long friId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long userId, ::Ice::Long friId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_friId(friId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::dbService::talk::HisMessageService* servant = dynamic_cast< ::com::xiaonei::wap::dbService::talk::HisMessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->delHisMsg(_m_userId, _m_friId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_userId;
        ::Ice::Long _m_friId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__dbService__talk__HisMessageService__delHisMsg_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, friId, __current);
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
IceDelegateD::com::xiaonei::wap::dbService::talk::HisMessageService::delAllHisMsg(::Ice::Long userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::dbService::talk::HisMessageService* servant = dynamic_cast< ::com::xiaonei::wap::dbService::talk::HisMessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->delAllHisMsg(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__dbService__talk__HisMessageService__delAllHisMsg_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, __current);
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
IceDelegateD::com::xiaonei::wap::dbService::talk::HisMessageService::saveMsg(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Int channelId, const ::std::string& msg, ::Ice::Long dateTime, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Int channelId, const ::std::string& msg, ::Ice::Long dateTime, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_fromId(fromId),
            _m_toId(toId),
            _m_channelId(channelId),
            _m_msg(msg),
            _m_dateTime(dateTime)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::dbService::talk::HisMessageService* servant = dynamic_cast< ::com::xiaonei::wap::dbService::talk::HisMessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->saveMsg(_m_fromId, _m_toId, _m_channelId, _m_msg, _m_dateTime, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_fromId;
        ::Ice::Long _m_toId;
        ::Ice::Int _m_channelId;
        const ::std::string& _m_msg;
        ::Ice::Long _m_dateTime;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__dbService__talk__HisMessageService__saveMsg_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(fromId, toId, channelId, msg, dateTime, __current);
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
IceDelegateD::com::xiaonei::wap::dbService::talk::HisMessageService::saveMsg4Group(::Ice::Long roomId, ::Ice::Long rcId, ::Ice::Long fromId, const ::com::xiaonei::wap::dbService::talk::IntSeq& intSequence, const ::std::string& msg, ::Ice::Long dateTime, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long roomId, ::Ice::Long rcId, ::Ice::Long fromId, const ::com::xiaonei::wap::dbService::talk::IntSeq& intSequence, const ::std::string& msg, ::Ice::Long dateTime, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_roomId(roomId),
            _m_rcId(rcId),
            _m_fromId(fromId),
            _m_intSequence(intSequence),
            _m_msg(msg),
            _m_dateTime(dateTime)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::dbService::talk::HisMessageService* servant = dynamic_cast< ::com::xiaonei::wap::dbService::talk::HisMessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->saveMsg4Group(_m_roomId, _m_rcId, _m_fromId, _m_intSequence, _m_msg, _m_dateTime, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_roomId;
        ::Ice::Long _m_rcId;
        ::Ice::Long _m_fromId;
        const ::com::xiaonei::wap::dbService::talk::IntSeq& _m_intSequence;
        const ::std::string& _m_msg;
        ::Ice::Long _m_dateTime;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__dbService__talk__HisMessageService__saveMsg4Group_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(roomId, rcId, fromId, intSequence, msg, dateTime, __current);
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
IceDelegateD::com::xiaonei::wap::dbService::talk::HisMessageService::saveMsg4GroupDown(::Ice::Long roomId, ::Ice::Long rcId, ::Ice::Long fromId, const ::com::xiaonei::wap::dbService::talk::UserMsgMap& userMsg, ::Ice::Long dateTime, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long roomId, ::Ice::Long rcId, ::Ice::Long fromId, const ::com::xiaonei::wap::dbService::talk::UserMsgMap& userMsg, ::Ice::Long dateTime, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_roomId(roomId),
            _m_rcId(rcId),
            _m_fromId(fromId),
            _m_userMsg(userMsg),
            _m_dateTime(dateTime)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::dbService::talk::HisMessageService* servant = dynamic_cast< ::com::xiaonei::wap::dbService::talk::HisMessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->saveMsg4GroupDown(_m_roomId, _m_rcId, _m_fromId, _m_userMsg, _m_dateTime, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_roomId;
        ::Ice::Long _m_rcId;
        ::Ice::Long _m_fromId;
        const ::com::xiaonei::wap::dbService::talk::UserMsgMap& _m_userMsg;
        ::Ice::Long _m_dateTime;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__dbService__talk__HisMessageService__saveMsg4GroupDown_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(roomId, rcId, fromId, userMsg, dateTime, __current);
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
com::xiaonei::wap::dbService::talk::HisMessageService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__wap__dbService__talk__HisMessageService_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::wap::dbService::talk::HisMessageService"
};

bool
com::xiaonei::wap::dbService::talk::HisMessageService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__wap__dbService__talk__HisMessageService_ids, __com__xiaonei__wap__dbService__talk__HisMessageService_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::wap::dbService::talk::HisMessageService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__wap__dbService__talk__HisMessageService_ids[0], &__com__xiaonei__wap__dbService__talk__HisMessageService_ids[2]);
}

const ::std::string&
com::xiaonei::wap::dbService::talk::HisMessageService::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__wap__dbService__talk__HisMessageService_ids[1];
}

const ::std::string&
com::xiaonei::wap::dbService::talk::HisMessageService::ice_staticId()
{
    return __com__xiaonei__wap__dbService__talk__HisMessageService_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::wap::dbService::talk::HisMessageService::___getHisMsg4Group(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long roomId;
    ::Ice::Long userId;
    __is->read(roomId);
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::dbService::talk::MsgList __ret = getHisMsg4Group(roomId, userId, __current);
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
com::xiaonei::wap::dbService::talk::HisMessageService::___getHisMsg4GroupPage(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long roomId;
    ::Ice::Long userId;
    ::Ice::Int offset;
    ::Ice::Int pageSize;
    __is->read(roomId);
    __is->read(userId);
    __is->read(offset);
    __is->read(pageSize);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::dbService::talk::MsgList __ret = getHisMsg4GroupPage(roomId, userId, offset, pageSize, __current);
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
com::xiaonei::wap::dbService::talk::HisMessageService::___getHisMsg(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Long friId;
    __is->read(userId);
    __is->read(friId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::dbService::talk::MsgList __ret = getHisMsg(userId, friId, __current);
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
com::xiaonei::wap::dbService::talk::HisMessageService::___getHisMsg4Page(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Long friId;
    ::Ice::Int offset;
    ::Ice::Int pageSize;
    __is->read(userId);
    __is->read(friId);
    __is->read(offset);
    __is->read(pageSize);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::dbService::talk::MsgList __ret = getHisMsg4Page(userId, friId, offset, pageSize, __current);
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
com::xiaonei::wap::dbService::talk::HisMessageService::___getAllHisMsg(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::dbService::talk::MsgList __ret = getAllHisMsg(userId, __current);
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
com::xiaonei::wap::dbService::talk::HisMessageService::___getAllHisMsg4Page(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Int offset;
    ::Ice::Int pageSize;
    __is->read(userId);
    __is->read(offset);
    __is->read(pageSize);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::dbService::talk::MsgList __ret = getAllHisMsg4Page(userId, offset, pageSize, __current);
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
com::xiaonei::wap::dbService::talk::HisMessageService::___delHisMsg4Group(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long roomId;
    ::Ice::Long userId;
    __is->read(roomId);
    __is->read(userId);
    __is->endReadEncaps();
    delHisMsg4Group(roomId, userId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::dbService::talk::HisMessageService::___delHisMsg(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Long friId;
    __is->read(userId);
    __is->read(friId);
    __is->endReadEncaps();
    delHisMsg(userId, friId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::dbService::talk::HisMessageService::___delAllHisMsg(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    __is->read(userId);
    __is->endReadEncaps();
    delAllHisMsg(userId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::dbService::talk::HisMessageService::___saveMsg(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long fromId;
    ::Ice::Long toId;
    ::Ice::Int channelId;
    ::std::string msg;
    ::Ice::Long dateTime;
    __is->read(fromId);
    __is->read(toId);
    __is->read(channelId);
    __is->read(msg);
    __is->read(dateTime);
    __is->endReadEncaps();
    saveMsg(fromId, toId, channelId, msg, dateTime, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::dbService::talk::HisMessageService::___saveMsg4Group(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long roomId;
    ::Ice::Long rcId;
    ::Ice::Long fromId;
    ::com::xiaonei::wap::dbService::talk::IntSeq intSequence;
    ::std::string msg;
    ::Ice::Long dateTime;
    __is->read(roomId);
    __is->read(rcId);
    __is->read(fromId);
    __is->read(intSequence);
    __is->read(msg);
    __is->read(dateTime);
    __is->endReadEncaps();
    saveMsg4Group(roomId, rcId, fromId, intSequence, msg, dateTime, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::dbService::talk::HisMessageService::___saveMsg4GroupDown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long roomId;
    ::Ice::Long rcId;
    ::Ice::Long fromId;
    ::com::xiaonei::wap::dbService::talk::UserMsgMap userMsg;
    ::Ice::Long dateTime;
    __is->read(roomId);
    __is->read(rcId);
    __is->read(fromId);
    ::com::xiaonei::wap::dbService::talk::__readUserMsgMap(__is, userMsg);
    __is->read(dateTime);
    __is->endReadEncaps();
    saveMsg4GroupDown(roomId, rcId, fromId, userMsg, dateTime, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__wap__dbService__talk__HisMessageService_all[] =
{
    "delAllHisMsg",
    "delHisMsg",
    "delHisMsg4Group",
    "getAllHisMsg",
    "getAllHisMsg4Page",
    "getHisMsg",
    "getHisMsg4Group",
    "getHisMsg4GroupPage",
    "getHisMsg4Page",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "saveMsg",
    "saveMsg4Group",
    "saveMsg4GroupDown"
};

::Ice::DispatchStatus
com::xiaonei::wap::dbService::talk::HisMessageService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__wap__dbService__talk__HisMessageService_all, __com__xiaonei__wap__dbService__talk__HisMessageService_all + 16, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__wap__dbService__talk__HisMessageService_all)
    {
        case 0:
        {
            return ___delAllHisMsg(in, current);
        }
        case 1:
        {
            return ___delHisMsg(in, current);
        }
        case 2:
        {
            return ___delHisMsg4Group(in, current);
        }
        case 3:
        {
            return ___getAllHisMsg(in, current);
        }
        case 4:
        {
            return ___getAllHisMsg4Page(in, current);
        }
        case 5:
        {
            return ___getHisMsg(in, current);
        }
        case 6:
        {
            return ___getHisMsg4Group(in, current);
        }
        case 7:
        {
            return ___getHisMsg4GroupPage(in, current);
        }
        case 8:
        {
            return ___getHisMsg4Page(in, current);
        }
        case 9:
        {
            return ___ice_id(in, current);
        }
        case 10:
        {
            return ___ice_ids(in, current);
        }
        case 11:
        {
            return ___ice_isA(in, current);
        }
        case 12:
        {
            return ___ice_ping(in, current);
        }
        case 13:
        {
            return ___saveMsg(in, current);
        }
        case 14:
        {
            return ___saveMsg4Group(in, current);
        }
        case 15:
        {
            return ___saveMsg4GroupDown(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::wap::dbService::talk::HisMessageService::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::wap::dbService::talk::HisMessageService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::wap::dbService::talk::HisMessageService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::dbService::talk::HisMessageService was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::dbService::talk::HisMessageService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::dbService::talk::HisMessageService was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::wap::dbService::talk::__patch__HisMessageServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::wap::dbService::talk::HisMessageServicePtr* p = static_cast< ::com::xiaonei::wap::dbService::talk::HisMessageServicePtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::wap::dbService::talk::HisMessageServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::wap::dbService::talk::HisMessageService::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::wap::dbService::talk::operator==(const ::com::xiaonei::wap::dbService::talk::HisMessageService& l, const ::com::xiaonei::wap::dbService::talk::HisMessageService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::wap::dbService::talk::operator<(const ::com::xiaonei::wap::dbService::talk::HisMessageService& l, const ::com::xiaonei::wap::dbService::talk::HisMessageService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
