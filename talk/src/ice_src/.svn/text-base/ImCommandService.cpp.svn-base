// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ImCommandService.ice'

#include <ImCommandService.h>
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

static const ::std::string __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__online_name = "online";

static const ::std::string __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__offline_name = "offline";

static const ::std::string __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__shortOnlineUserCount_name = "shortOnlineUserCount";

static const ::std::string __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__longOnlineUserCount_name = "longOnlineUserCount";

static const ::std::string __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__cushionCount_name = "cushionCount";

static const ::std::string __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__userStat_name = "userStat";

static const ::std::string __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__usersStat_name = "usersStat";

static const ::std::string __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__removeUser_name = "removeUser";

static const ::std::string __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__removeSpecifiedUsers_name = "removeSpecifiedUsers";

static const ::std::string __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__retainSpecifiedUsers_name = "retainSpecifiedUsers";

static const ::std::string __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__removeUsersByIp_name = "removeUsersByIp";

static const ::std::string __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__clearUsers_name = "clearUsers";

::Ice::Object* IceInternal::upCast(::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* p) { return p; }

void
com::xiaonei::wap::talk::imoa::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::talk::imoa::ImCommandAdapterServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::online(::Ice::Long userId, bool isLongOnline, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(__delBase.get());
            __del->online(userId, isLongOnline, __ctx);
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
IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::offline(::Ice::Long userId, bool isDelLongOnline, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(__delBase.get());
            __del->offline(userId, isDelLongOnline, __ctx);
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

::Ice::Int
IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::shortOnlineUserCount(const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__imoa__ImCommandAdapterService__shortOnlineUserCount_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(__delBase.get());
            return __del->shortOnlineUserCount(__ctx);
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
IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::longOnlineUserCount(const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__imoa__ImCommandAdapterService__longOnlineUserCount_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(__delBase.get());
            return __del->longOnlineUserCount(__ctx);
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
IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::cushionCount(const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__imoa__ImCommandAdapterService__cushionCount_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(__delBase.get());
            return __del->cushionCount(__ctx);
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
IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::userStat(::Ice::Int userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__imoa__ImCommandAdapterService__userStat_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(__delBase.get());
            return __del->userStat(userId, __ctx);
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

::com::xiaonei::wap::talk::imoa::IntSeq
IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::usersStat(const ::com::xiaonei::wap::talk::imoa::IntSeq& serIds, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__imoa__ImCommandAdapterService__usersStat_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(__delBase.get());
            return __del->usersStat(serIds, __ctx);
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
IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::removeUser(::Ice::Int userId, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(__delBase.get());
            __del->removeUser(userId, __ctx);
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
IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::removeSpecifiedUsers(::Ice::Int serverCount, ::Ice::Int mode, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(__delBase.get());
            __del->removeSpecifiedUsers(serverCount, mode, __ctx);
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
IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::retainSpecifiedUsers(::Ice::Int serverCount, ::Ice::Int mode, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(__delBase.get());
            __del->retainSpecifiedUsers(serverCount, mode, __ctx);
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
IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::removeUsersByIp(const ::std::string& crashedIp, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(__delBase.get());
            __del->removeUsersByIp(crashedIp, __ctx);
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
IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::clearUsers(const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(__delBase.get());
            __del->clearUsers(__ctx);
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
IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::ice_staticId()
{
    return ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::wap::talk::imoa::ImCommandAdapterService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::wap::talk::imoa::ImCommandAdapterService);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::__newInstance() const
{
    return new ImCommandAdapterService;
}

void
IceDelegateM::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::online(::Ice::Long userId, bool isLongOnline, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__online_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(isLongOnline);
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
IceDelegateM::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::offline(::Ice::Long userId, bool isDelLongOnline, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__offline_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(isDelLongOnline);
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

::Ice::Int
IceDelegateM::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::shortOnlineUserCount(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__shortOnlineUserCount_name, ::Ice::Normal, __context);
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
IceDelegateM::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::longOnlineUserCount(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__longOnlineUserCount_name, ::Ice::Normal, __context);
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
IceDelegateM::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::cushionCount(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__cushionCount_name, ::Ice::Normal, __context);
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
IceDelegateM::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::userStat(::Ice::Int userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__userStat_name, ::Ice::Normal, __context);
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

::com::xiaonei::wap::talk::imoa::IntSeq
IceDelegateM::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::usersStat(const ::com::xiaonei::wap::talk::imoa::IntSeq& serIds, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__usersStat_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(serIds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&serIds[0], &serIds[0] + serIds.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::talk::imoa::IntSeq __ret;
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
IceDelegateM::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::removeUser(::Ice::Int userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__removeUser_name, ::Ice::Normal, __context);
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
IceDelegateM::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::removeSpecifiedUsers(::Ice::Int serverCount, ::Ice::Int mode, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__removeSpecifiedUsers_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serverCount);
        __os->write(mode);
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
IceDelegateM::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::retainSpecifiedUsers(::Ice::Int serverCount, ::Ice::Int mode, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__retainSpecifiedUsers_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(serverCount);
        __os->write(mode);
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
IceDelegateM::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::removeUsersByIp(const ::std::string& crashedIp, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__removeUsersByIp_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(crashedIp);
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
IceDelegateM::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::clearUsers(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__clearUsers_name, ::Ice::Normal, __context);
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
IceDelegateD::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::online(::Ice::Long userId, bool isLongOnline, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long userId, bool isLongOnline, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_isLongOnline(isLongOnline)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* servant = dynamic_cast< ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->online(_m_userId, _m_isLongOnline, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_userId;
        bool _m_isLongOnline;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__online_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, isLongOnline, __current);
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
IceDelegateD::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::offline(::Ice::Long userId, bool isDelLongOnline, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long userId, bool isDelLongOnline, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_isDelLongOnline(isDelLongOnline)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* servant = dynamic_cast< ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->offline(_m_userId, _m_isDelLongOnline, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_userId;
        bool _m_isDelLongOnline;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__offline_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, isDelLongOnline, __current);
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

::Ice::Int
IceDelegateD::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::shortOnlineUserCount(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* servant = dynamic_cast< ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->shortOnlineUserCount(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__shortOnlineUserCount_name, ::Ice::Normal, __context);
    ::Ice::Int __result;
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

::Ice::Int
IceDelegateD::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::longOnlineUserCount(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* servant = dynamic_cast< ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->longOnlineUserCount(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__longOnlineUserCount_name, ::Ice::Normal, __context);
    ::Ice::Int __result;
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

::Ice::Int
IceDelegateD::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::cushionCount(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* servant = dynamic_cast< ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->cushionCount(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__cushionCount_name, ::Ice::Normal, __context);
    ::Ice::Int __result;
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

::Ice::Int
IceDelegateD::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::userStat(::Ice::Int userId, const ::Ice::Context* __context)
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
            ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* servant = dynamic_cast< ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->userStat(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
        ::Ice::Int _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__userStat_name, ::Ice::Normal, __context);
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

::com::xiaonei::wap::talk::imoa::IntSeq
IceDelegateD::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::usersStat(const ::com::xiaonei::wap::talk::imoa::IntSeq& serIds, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::talk::imoa::IntSeq& __result, const ::com::xiaonei::wap::talk::imoa::IntSeq& serIds, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_serIds(serIds)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* servant = dynamic_cast< ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->usersStat(_m_serIds, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::talk::imoa::IntSeq& _result;
        const ::com::xiaonei::wap::talk::imoa::IntSeq& _m_serIds;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__usersStat_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::talk::imoa::IntSeq __result;
    try
    {
        _DirectI __direct(__result, serIds, __current);
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
IceDelegateD::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::removeUser(::Ice::Int userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* servant = dynamic_cast< ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->removeUser(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__removeUser_name, ::Ice::Normal, __context);
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
IceDelegateD::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::removeSpecifiedUsers(::Ice::Int serverCount, ::Ice::Int mode, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int serverCount, ::Ice::Int mode, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_serverCount(serverCount),
            _m_mode(mode)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* servant = dynamic_cast< ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->removeSpecifiedUsers(_m_serverCount, _m_mode, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_serverCount;
        ::Ice::Int _m_mode;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__removeSpecifiedUsers_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(serverCount, mode, __current);
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
IceDelegateD::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::retainSpecifiedUsers(::Ice::Int serverCount, ::Ice::Int mode, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int serverCount, ::Ice::Int mode, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_serverCount(serverCount),
            _m_mode(mode)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* servant = dynamic_cast< ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->retainSpecifiedUsers(_m_serverCount, _m_mode, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_serverCount;
        ::Ice::Int _m_mode;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__retainSpecifiedUsers_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(serverCount, mode, __current);
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
IceDelegateD::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::removeUsersByIp(const ::std::string& crashedIp, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& crashedIp, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_crashedIp(crashedIp)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* servant = dynamic_cast< ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->removeUsersByIp(_m_crashedIp, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_crashedIp;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__removeUsersByIp_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(crashedIp, __current);
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
IceDelegateD::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::clearUsers(const ::Ice::Context* __context)
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
            ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService* servant = dynamic_cast< ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->clearUsers(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__imoa__ImCommandAdapterService__clearUsers_name, ::Ice::Normal, __context);
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

::Ice::ObjectPtr
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__wap__talk__imoa__ImCommandAdapterService_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::wap::talk::imoa::ImCommandAdapterService"
};

bool
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__wap__talk__imoa__ImCommandAdapterService_ids, __com__xiaonei__wap__talk__imoa__ImCommandAdapterService_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__wap__talk__imoa__ImCommandAdapterService_ids[0], &__com__xiaonei__wap__talk__imoa__ImCommandAdapterService_ids[2]);
}

const ::std::string&
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__wap__talk__imoa__ImCommandAdapterService_ids[1];
}

const ::std::string&
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::ice_staticId()
{
    return __com__xiaonei__wap__talk__imoa__ImCommandAdapterService_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::___online(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    bool isLongOnline;
    __is->read(userId);
    __is->read(isLongOnline);
    __is->endReadEncaps();
    online(userId, isLongOnline, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::___offline(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    bool isDelLongOnline;
    __is->read(userId);
    __is->read(isDelLongOnline);
    __is->endReadEncaps();
    offline(userId, isDelLongOnline, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::___shortOnlineUserCount(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = shortOnlineUserCount(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::___longOnlineUserCount(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = longOnlineUserCount(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::___cushionCount(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = cushionCount(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::___userStat(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userId;
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = userStat(userId, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::___usersStat(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::talk::imoa::IntSeq serIds;
    __is->read(serIds);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::talk::imoa::IntSeq __ret = usersStat(serIds, __current);
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
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::___removeUser(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userId;
    __is->read(userId);
    __is->endReadEncaps();
    removeUser(userId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::___removeSpecifiedUsers(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int serverCount;
    ::Ice::Int mode;
    __is->read(serverCount);
    __is->read(mode);
    __is->endReadEncaps();
    removeSpecifiedUsers(serverCount, mode, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::___retainSpecifiedUsers(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int serverCount;
    ::Ice::Int mode;
    __is->read(serverCount);
    __is->read(mode);
    __is->endReadEncaps();
    retainSpecifiedUsers(serverCount, mode, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::___removeUsersByIp(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string crashedIp;
    __is->read(crashedIp);
    __is->endReadEncaps();
    removeUsersByIp(crashedIp, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::___clearUsers(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    clearUsers(__current);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__wap__talk__imoa__ImCommandAdapterService_all[] =
{
    "clearUsers",
    "cushionCount",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "longOnlineUserCount",
    "offline",
    "online",
    "removeSpecifiedUsers",
    "removeUser",
    "removeUsersByIp",
    "retainSpecifiedUsers",
    "shortOnlineUserCount",
    "userStat",
    "usersStat"
};

::Ice::DispatchStatus
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__wap__talk__imoa__ImCommandAdapterService_all, __com__xiaonei__wap__talk__imoa__ImCommandAdapterService_all + 16, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__wap__talk__imoa__ImCommandAdapterService_all)
    {
        case 0:
        {
            return ___clearUsers(in, current);
        }
        case 1:
        {
            return ___cushionCount(in, current);
        }
        case 2:
        {
            return ___ice_id(in, current);
        }
        case 3:
        {
            return ___ice_ids(in, current);
        }
        case 4:
        {
            return ___ice_isA(in, current);
        }
        case 5:
        {
            return ___ice_ping(in, current);
        }
        case 6:
        {
            return ___longOnlineUserCount(in, current);
        }
        case 7:
        {
            return ___offline(in, current);
        }
        case 8:
        {
            return ___online(in, current);
        }
        case 9:
        {
            return ___removeSpecifiedUsers(in, current);
        }
        case 10:
        {
            return ___removeUser(in, current);
        }
        case 11:
        {
            return ___removeUsersByIp(in, current);
        }
        case 12:
        {
            return ___retainSpecifiedUsers(in, current);
        }
        case 13:
        {
            return ___shortOnlineUserCount(in, current);
        }
        case 14:
        {
            return ___userStat(in, current);
        }
        case 15:
        {
            return ___usersStat(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::talk::imoa::ImCommandAdapterService was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::talk::imoa::ImCommandAdapterService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::talk::imoa::ImCommandAdapterService was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::wap::talk::imoa::__patch__ImCommandAdapterServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::wap::talk::imoa::ImCommandAdapterServicePtr* p = static_cast< ::com::xiaonei::wap::talk::imoa::ImCommandAdapterServicePtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::wap::talk::imoa::ImCommandAdapterServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::wap::talk::imoa::ImCommandAdapterService::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::wap::talk::imoa::operator==(const ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService& l, const ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::wap::talk::imoa::operator<(const ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService& l, const ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
