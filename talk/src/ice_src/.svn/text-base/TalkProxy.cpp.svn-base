// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `TalkProxy.ice'

#include <TalkProxy.h>
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

static const ::std::string __com__xiaonei__talk__DeliverInterface__express_name = "express";

static const ::std::string __com__xiaonei__talk__DeliverInterface__deliver_name = "deliver";

static const ::std::string __com__xiaonei__talk__ProxyManager__indexExist_name = "indexExist";

static const ::std::string __com__xiaonei__talk__ProxyManager__checkTicket_name = "checkTicket";

static const ::std::string __com__xiaonei__talk__ProxyManager__verify_name = "verify";

static const ::std::string __com__xiaonei__talk__ProxyManager__GetTicket_name = "GetTicket";

static const ::std::string __com__xiaonei__talk__ProxyManager__leave_name = "leave";

static const ::std::string __com__xiaonei__talk__ProxyManager__relogin_name = "relogin";

static const ::std::string __com__xiaonei__talk__ProxyManager__broadcast_name = "broadcast";

static const ::std::string __com__xiaonei__talk__ProxyManager__kick_name = "kick";

::Ice::Object* IceInternal::upCast(::com::xiaonei::talk::DeliverInterface* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::talk::DeliverInterface* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::xiaonei::talk::ProxyManager* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::talk::ProxyManager* p) { return p; }

void
com::xiaonei::talk::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::DeliverInterfacePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::talk::DeliverInterface;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::talk::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::ProxyManagerPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::talk::ProxyManager;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::com::xiaonei::talk::DeliverInterface::express(const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& msg, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::talk::DeliverInterface* __del = dynamic_cast< ::IceDelegate::com::xiaonei::talk::DeliverInterface*>(__delBase.get());
            __del->express(jid, msg, __ctx);
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
IceProxy::com::xiaonei::talk::DeliverInterface::deliver(const ::com::xiaonei::talk::common::MessageSeq& msgs, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::talk::DeliverInterface* __del = dynamic_cast< ::IceDelegate::com::xiaonei::talk::DeliverInterface*>(__delBase.get());
            __del->deliver(msgs, __ctx);
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
IceProxy::com::xiaonei::talk::DeliverInterface::ice_staticId()
{
    return ::com::xiaonei::talk::DeliverInterface::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::talk::DeliverInterface::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::talk::DeliverInterface);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::talk::DeliverInterface::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::talk::DeliverInterface);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::talk::DeliverInterface::__newInstance() const
{
    return new DeliverInterface;
}

bool
IceProxy::com::xiaonei::talk::ProxyManager::indexExist(::Ice::Long index, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__talk__ProxyManager__indexExist_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::talk::ProxyManager* __del = dynamic_cast< ::IceDelegate::com::xiaonei::talk::ProxyManager*>(__delBase.get());
            return __del->indexExist(index, __ctx);
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
IceProxy::com::xiaonei::talk::ProxyManager::checkTicket(const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& ticket, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__talk__ProxyManager__checkTicket_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::talk::ProxyManager* __del = dynamic_cast< ::IceDelegate::com::xiaonei::talk::ProxyManager*>(__delBase.get());
            return __del->checkTicket(jid, ticket, __ctx);
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
IceProxy::com::xiaonei::talk::ProxyManager::verify(const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& ticket, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__talk__ProxyManager__verify_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::talk::ProxyManager* __del = dynamic_cast< ::IceDelegate::com::xiaonei::talk::ProxyManager*>(__delBase.get());
            return __del->verify(jid, ticket, __ctx);
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

::std::string
IceProxy::com::xiaonei::talk::ProxyManager::GetTicket(const ::com::xiaonei::talk::common::JidPtr& jid, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__talk__ProxyManager__GetTicket_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::talk::ProxyManager* __del = dynamic_cast< ::IceDelegate::com::xiaonei::talk::ProxyManager*>(__delBase.get());
            return __del->GetTicket(jid, __ctx);
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
IceProxy::com::xiaonei::talk::ProxyManager::leave(const ::com::xiaonei::talk::common::JidPtr& jid, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::talk::ProxyManager* __del = dynamic_cast< ::IceDelegate::com::xiaonei::talk::ProxyManager*>(__delBase.get());
            __del->leave(jid, __ctx);
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
IceProxy::com::xiaonei::talk::ProxyManager::relogin(const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::talk::ProxyManager* __del = dynamic_cast< ::IceDelegate::com::xiaonei::talk::ProxyManager*>(__delBase.get());
            __del->relogin(__ctx);
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
IceProxy::com::xiaonei::talk::ProxyManager::broadcast(const ::std::string& xmlMsg, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::talk::ProxyManager* __del = dynamic_cast< ::IceDelegate::com::xiaonei::talk::ProxyManager*>(__delBase.get());
            __del->broadcast(xmlMsg, __ctx);
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
IceProxy::com::xiaonei::talk::ProxyManager::kick(const ::com::xiaonei::talk::common::JidPtr& jid, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::talk::ProxyManager* __del = dynamic_cast< ::IceDelegate::com::xiaonei::talk::ProxyManager*>(__delBase.get());
            __del->kick(jid, __ctx);
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
IceProxy::com::xiaonei::talk::ProxyManager::ice_staticId()
{
    return ::com::xiaonei::talk::ProxyManager::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::talk::ProxyManager::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::talk::ProxyManager);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::talk::ProxyManager::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::talk::ProxyManager);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::talk::ProxyManager::__newInstance() const
{
    return new ProxyManager;
}

void
IceDelegateM::com::xiaonei::talk::DeliverInterface::express(const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& msg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__talk__DeliverInterface__express_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(jid.get())));
        __os->write(msg);
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
IceDelegateM::com::xiaonei::talk::DeliverInterface::deliver(const ::com::xiaonei::talk::common::MessageSeq& msgs, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__talk__DeliverInterface__deliver_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(msgs.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::com::xiaonei::talk::common::__writeMessageSeq(__os, &msgs[0], &msgs[0] + msgs.size());
        }
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

bool
IceDelegateM::com::xiaonei::talk::ProxyManager::indexExist(::Ice::Long index, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__talk__ProxyManager__indexExist_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(index);
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

bool
IceDelegateM::com::xiaonei::talk::ProxyManager::checkTicket(const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& ticket, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__talk__ProxyManager__checkTicket_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(jid.get())));
        __os->write(ticket);
        __os->writePendingObjects();
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

bool
IceDelegateM::com::xiaonei::talk::ProxyManager::verify(const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& ticket, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__talk__ProxyManager__verify_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(jid.get())));
        __os->write(ticket);
        __os->writePendingObjects();
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

::std::string
IceDelegateM::com::xiaonei::talk::ProxyManager::GetTicket(const ::com::xiaonei::talk::common::JidPtr& jid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__talk__ProxyManager__GetTicket_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(jid.get())));
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::std::string __ret;
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
IceDelegateM::com::xiaonei::talk::ProxyManager::leave(const ::com::xiaonei::talk::common::JidPtr& jid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__talk__ProxyManager__leave_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(jid.get())));
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
IceDelegateM::com::xiaonei::talk::ProxyManager::relogin(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__talk__ProxyManager__relogin_name, ::Ice::Normal, __context);
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
IceDelegateM::com::xiaonei::talk::ProxyManager::broadcast(const ::std::string& xmlMsg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__talk__ProxyManager__broadcast_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(xmlMsg);
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
IceDelegateM::com::xiaonei::talk::ProxyManager::kick(const ::com::xiaonei::talk::common::JidPtr& jid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__talk__ProxyManager__kick_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(jid.get())));
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
IceDelegateD::com::xiaonei::talk::DeliverInterface::express(const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& msg, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& msg, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_jid(jid),
            _m_msg(msg)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::talk::DeliverInterface* servant = dynamic_cast< ::com::xiaonei::talk::DeliverInterface*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->express(_m_jid, _m_msg, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::com::xiaonei::talk::common::JidPtr& _m_jid;
        const ::std::string& _m_msg;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__talk__DeliverInterface__express_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(jid, msg, __current);
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
IceDelegateD::com::xiaonei::talk::DeliverInterface::deliver(const ::com::xiaonei::talk::common::MessageSeq& msgs, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::com::xiaonei::talk::common::MessageSeq& msgs, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_msgs(msgs)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::talk::DeliverInterface* servant = dynamic_cast< ::com::xiaonei::talk::DeliverInterface*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->deliver(_m_msgs, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::com::xiaonei::talk::common::MessageSeq& _m_msgs;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__talk__DeliverInterface__deliver_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(msgs, __current);
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
IceDelegateD::com::xiaonei::talk::ProxyManager::indexExist(::Ice::Long index, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(bool& __result, ::Ice::Long index, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_index(index)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::talk::ProxyManager* servant = dynamic_cast< ::com::xiaonei::talk::ProxyManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->indexExist(_m_index, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        bool& _result;
        ::Ice::Long _m_index;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__talk__ProxyManager__indexExist_name, ::Ice::Normal, __context);
    bool __result;
    try
    {
        _DirectI __direct(__result, index, __current);
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
IceDelegateD::com::xiaonei::talk::ProxyManager::checkTicket(const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& ticket, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(bool& __result, const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& ticket, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_jid(jid),
            _m_ticket(ticket)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::talk::ProxyManager* servant = dynamic_cast< ::com::xiaonei::talk::ProxyManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->checkTicket(_m_jid, _m_ticket, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        bool& _result;
        const ::com::xiaonei::talk::common::JidPtr& _m_jid;
        const ::std::string& _m_ticket;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__talk__ProxyManager__checkTicket_name, ::Ice::Normal, __context);
    bool __result;
    try
    {
        _DirectI __direct(__result, jid, ticket, __current);
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
IceDelegateD::com::xiaonei::talk::ProxyManager::verify(const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& ticket, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(bool& __result, const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& ticket, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_jid(jid),
            _m_ticket(ticket)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::talk::ProxyManager* servant = dynamic_cast< ::com::xiaonei::talk::ProxyManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->verify(_m_jid, _m_ticket, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        bool& _result;
        const ::com::xiaonei::talk::common::JidPtr& _m_jid;
        const ::std::string& _m_ticket;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__talk__ProxyManager__verify_name, ::Ice::Normal, __context);
    bool __result;
    try
    {
        _DirectI __direct(__result, jid, ticket, __current);
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

::std::string
IceDelegateD::com::xiaonei::talk::ProxyManager::GetTicket(const ::com::xiaonei::talk::common::JidPtr& jid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::std::string& __result, const ::com::xiaonei::talk::common::JidPtr& jid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_jid(jid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::talk::ProxyManager* servant = dynamic_cast< ::com::xiaonei::talk::ProxyManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->GetTicket(_m_jid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::std::string& _result;
        const ::com::xiaonei::talk::common::JidPtr& _m_jid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__talk__ProxyManager__GetTicket_name, ::Ice::Normal, __context);
    ::std::string __result;
    try
    {
        _DirectI __direct(__result, jid, __current);
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
IceDelegateD::com::xiaonei::talk::ProxyManager::leave(const ::com::xiaonei::talk::common::JidPtr& jid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::com::xiaonei::talk::common::JidPtr& jid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_jid(jid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::talk::ProxyManager* servant = dynamic_cast< ::com::xiaonei::talk::ProxyManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->leave(_m_jid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::com::xiaonei::talk::common::JidPtr& _m_jid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__talk__ProxyManager__leave_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(jid, __current);
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
IceDelegateD::com::xiaonei::talk::ProxyManager::relogin(const ::Ice::Context* __context)
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
            ::com::xiaonei::talk::ProxyManager* servant = dynamic_cast< ::com::xiaonei::talk::ProxyManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->relogin(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__talk__ProxyManager__relogin_name, ::Ice::Normal, __context);
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

void
IceDelegateD::com::xiaonei::talk::ProxyManager::broadcast(const ::std::string& xmlMsg, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& xmlMsg, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_xmlMsg(xmlMsg)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::talk::ProxyManager* servant = dynamic_cast< ::com::xiaonei::talk::ProxyManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->broadcast(_m_xmlMsg, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_xmlMsg;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__talk__ProxyManager__broadcast_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(xmlMsg, __current);
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
IceDelegateD::com::xiaonei::talk::ProxyManager::kick(const ::com::xiaonei::talk::common::JidPtr& jid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::com::xiaonei::talk::common::JidPtr& jid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_jid(jid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::talk::ProxyManager* servant = dynamic_cast< ::com::xiaonei::talk::ProxyManager*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->kick(_m_jid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::com::xiaonei::talk::common::JidPtr& _m_jid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__talk__ProxyManager__kick_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(jid, __current);
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
com::xiaonei::talk::DeliverInterface::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__talk__DeliverInterface_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::talk::DeliverInterface"
};

bool
com::xiaonei::talk::DeliverInterface::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__talk__DeliverInterface_ids, __com__xiaonei__talk__DeliverInterface_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::talk::DeliverInterface::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__talk__DeliverInterface_ids[0], &__com__xiaonei__talk__DeliverInterface_ids[2]);
}

const ::std::string&
com::xiaonei::talk::DeliverInterface::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__talk__DeliverInterface_ids[1];
}

const ::std::string&
com::xiaonei::talk::DeliverInterface::ice_staticId()
{
    return __com__xiaonei__talk__DeliverInterface_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::talk::DeliverInterface::___express(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::talk::common::JidPtr jid;
    ::std::string msg;
    __is->read(::com::xiaonei::talk::common::__patch__JidPtr, &jid);
    __is->read(msg);
    __is->readPendingObjects();
    __is->endReadEncaps();
    express(jid, msg, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::talk::DeliverInterface::___deliver(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::talk::common::MessageSeq msgs;
    ::com::xiaonei::talk::common::__readMessageSeq(__is, msgs);
    __is->readPendingObjects();
    __is->endReadEncaps();
    deliver(msgs, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__talk__DeliverInterface_all[] =
{
    "deliver",
    "express",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
com::xiaonei::talk::DeliverInterface::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__talk__DeliverInterface_all, __com__xiaonei__talk__DeliverInterface_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__talk__DeliverInterface_all)
    {
        case 0:
        {
            return ___deliver(in, current);
        }
        case 1:
        {
            return ___express(in, current);
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
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::talk::DeliverInterface::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::talk::DeliverInterface::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::talk::DeliverInterface::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::DeliverInterface was not generated with stream support";
    throw ex;
}

void
com::xiaonei::talk::DeliverInterface::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::DeliverInterface was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::talk::__patch__DeliverInterfacePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::talk::DeliverInterfacePtr* p = static_cast< ::com::xiaonei::talk::DeliverInterfacePtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::talk::DeliverInterfacePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::talk::DeliverInterface::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::talk::operator==(const ::com::xiaonei::talk::DeliverInterface& l, const ::com::xiaonei::talk::DeliverInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::talk::operator<(const ::com::xiaonei::talk::DeliverInterface& l, const ::com::xiaonei::talk::DeliverInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
com::xiaonei::talk::ProxyManager::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__talk__ProxyManager_ids[3] =
{
    "::Ice::Object",
    "::com::xiaonei::talk::DeliverInterface",
    "::com::xiaonei::talk::ProxyManager"
};

bool
com::xiaonei::talk::ProxyManager::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__talk__ProxyManager_ids, __com__xiaonei__talk__ProxyManager_ids + 3, _s);
}

::std::vector< ::std::string>
com::xiaonei::talk::ProxyManager::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__talk__ProxyManager_ids[0], &__com__xiaonei__talk__ProxyManager_ids[3]);
}

const ::std::string&
com::xiaonei::talk::ProxyManager::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__talk__ProxyManager_ids[2];
}

const ::std::string&
com::xiaonei::talk::ProxyManager::ice_staticId()
{
    return __com__xiaonei__talk__ProxyManager_ids[2];
}

::Ice::DispatchStatus
com::xiaonei::talk::ProxyManager::___indexExist(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long index;
    __is->read(index);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = indexExist(index, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::talk::ProxyManager::___checkTicket(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::talk::common::JidPtr jid;
    ::std::string ticket;
    __is->read(::com::xiaonei::talk::common::__patch__JidPtr, &jid);
    __is->read(ticket);
    __is->readPendingObjects();
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = checkTicket(jid, ticket, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::talk::ProxyManager::___verify(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::talk::common::JidPtr jid;
    ::std::string ticket;
    __is->read(::com::xiaonei::talk::common::__patch__JidPtr, &jid);
    __is->read(ticket);
    __is->readPendingObjects();
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = verify(jid, ticket, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::talk::ProxyManager::___GetTicket(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::talk::common::JidPtr jid;
    __is->read(::com::xiaonei::talk::common::__patch__JidPtr, &jid);
    __is->readPendingObjects();
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string __ret = GetTicket(jid, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::talk::ProxyManager::___leave(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::talk::common::JidPtr jid;
    __is->read(::com::xiaonei::talk::common::__patch__JidPtr, &jid);
    __is->readPendingObjects();
    __is->endReadEncaps();
    leave(jid, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::talk::ProxyManager::___relogin(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    relogin(__current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::talk::ProxyManager::___broadcast(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string xmlMsg;
    __is->read(xmlMsg);
    __is->endReadEncaps();
    broadcast(xmlMsg, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::talk::ProxyManager::___kick(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::talk::common::JidPtr jid;
    __is->read(::com::xiaonei::talk::common::__patch__JidPtr, &jid);
    __is->readPendingObjects();
    __is->endReadEncaps();
    kick(jid, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__talk__ProxyManager_all[] =
{
    "GetTicket",
    "broadcast",
    "checkTicket",
    "deliver",
    "express",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "indexExist",
    "kick",
    "leave",
    "relogin",
    "verify"
};

::Ice::DispatchStatus
com::xiaonei::talk::ProxyManager::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__talk__ProxyManager_all, __com__xiaonei__talk__ProxyManager_all + 14, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__talk__ProxyManager_all)
    {
        case 0:
        {
            return ___GetTicket(in, current);
        }
        case 1:
        {
            return ___broadcast(in, current);
        }
        case 2:
        {
            return ___checkTicket(in, current);
        }
        case 3:
        {
            return ___deliver(in, current);
        }
        case 4:
        {
            return ___express(in, current);
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
            return ___indexExist(in, current);
        }
        case 10:
        {
            return ___kick(in, current);
        }
        case 11:
        {
            return ___leave(in, current);
        }
        case 12:
        {
            return ___relogin(in, current);
        }
        case 13:
        {
            return ___verify(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::talk::ProxyManager::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::talk::ProxyManager::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::talk::ProxyManager::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::ProxyManager was not generated with stream support";
    throw ex;
}

void
com::xiaonei::talk::ProxyManager::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::ProxyManager was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::talk::__patch__ProxyManagerPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::talk::ProxyManagerPtr* p = static_cast< ::com::xiaonei::talk::ProxyManagerPtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::talk::ProxyManagerPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::talk::ProxyManager::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::talk::operator==(const ::com::xiaonei::talk::ProxyManager& l, const ::com::xiaonei::talk::ProxyManager& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::talk::operator<(const ::com::xiaonei::talk::ProxyManager& l, const ::com::xiaonei::talk::ProxyManager& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
