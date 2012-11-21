// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `pushMsg.ice'

#include <pushMsg.h>
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

static const ::std::string __com__xiaonei__wap__push__talk__OfflineMessageService__push_name = "push";

static const ::std::string __com__xiaonei__wap__push__talk__MessageService__pushFeed_name = "pushFeed";

static const ::std::string __com__xiaonei__wap__push__talk__MessageService__extPushFeed_name = "extPushFeed";

static const ::std::string __com__xiaonei__wap__push__talk__MessageService__pushBulk_name = "pushBulk";

static const ::std::string __com__xiaonei__wap__push__talk__MessageService__pushBulk4ChatFromIm_name = "pushBulk4ChatFromIm";

static const ::std::string __com__xiaonei__wap__push__talk__MessageService__pushBulk4OfflineFromIm_name = "pushBulk4OfflineFromIm";

static const ::std::string __com__xiaonei__wap__push__talk__MessageService__push4sixin_name = "push4sixin";

::Ice::Object* IceInternal::upCast(::com::xiaonei::wap::push::talk::OfflineMessageService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::wap::push::talk::OfflineMessageService* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::xiaonei::wap::push::talk::MessageService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::wap::push::talk::MessageService* p) { return p; }

void
com::xiaonei::wap::push::talk::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::push::talk::OfflineMessageServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::wap::push::talk::OfflineMessageService;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::wap::push::talk::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::push::talk::MessageServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::wap::push::talk::MessageService;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::wap::push::talk::__writeParamMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::wap::push::talk::ParamMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::wap::push::talk::ParamMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
com::xiaonei::wap::push::talk::__readParamMap(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::push::talk::ParamMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::com::xiaonei::wap::push::talk::ParamMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
com::xiaonei::wap::push::talk::__writeUserIdMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::wap::push::talk::UserIdMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::wap::push::talk::UserIdMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
com::xiaonei::wap::push::talk::__readUserIdMap(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::push::talk::UserIdMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Long, ::std::string> pair;
        __is->read(const_cast< ::Ice::Long&>(pair.first));
        ::com::xiaonei::wap::push::talk::UserIdMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
IceProxy::com::xiaonei::wap::push::talk::OfflineMessageService::push(::Ice::Long userId, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::push::talk::OfflineMessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::push::talk::OfflineMessageService*>(__delBase.get());
            __del->push(userId, type, params, __ctx);
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
IceProxy::com::xiaonei::wap::push::talk::OfflineMessageService::ice_staticId()
{
    return ::com::xiaonei::wap::push::talk::OfflineMessageService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::wap::push::talk::OfflineMessageService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::wap::push::talk::OfflineMessageService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::wap::push::talk::OfflineMessageService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::wap::push::talk::OfflineMessageService);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::wap::push::talk::OfflineMessageService::__newInstance() const
{
    return new OfflineMessageService;
}

void
IceProxy::com::xiaonei::wap::push::talk::MessageService::pushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::push::talk::MessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::push::talk::MessageService*>(__delBase.get());
            __del->pushFeed(userIds, type, params, __ctx);
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
IceProxy::com::xiaonei::wap::push::talk::MessageService::extPushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, const ::com::xiaonei::wap::push::talk::UserIdMap& gids, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::push::talk::MessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::push::talk::MessageService*>(__delBase.get());
            __del->extPushFeed(userIds, gids, type, params, __ctx);
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
IceProxy::com::xiaonei::wap::push::talk::MessageService::pushBulk(const ::com::xiaonei::wap::push::talk::longSeq& userId, ::Ice::Int type, ::Ice::Int fromType, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::push::talk::MessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::push::talk::MessageService*>(__delBase.get());
            __del->pushBulk(userId, type, fromType, params, __ctx);
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
IceProxy::com::xiaonei::wap::push::talk::MessageService::pushBulk4ChatFromIm(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::push::talk::MessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::push::talk::MessageService*>(__delBase.get());
            __del->pushBulk4ChatFromIm(userIds, type, params, __ctx);
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
IceProxy::com::xiaonei::wap::push::talk::MessageService::pushBulk4OfflineFromIm(const ::com::xiaonei::wap::push::talk::longSeq& userIds, ::Ice::Long toId, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::push::talk::MessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::push::talk::MessageService*>(__delBase.get());
            __del->pushBulk4OfflineFromIm(userIds, toId, type, params, __ctx);
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
IceProxy::com::xiaonei::wap::push::talk::MessageService::push4sixin(::Ice::Long userId, ::Ice::Long thirdId, ::Ice::Int thirdType, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::push::talk::MessageService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::push::talk::MessageService*>(__delBase.get());
            __del->push4sixin(userId, thirdId, thirdType, type, params, __ctx);
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
IceProxy::com::xiaonei::wap::push::talk::MessageService::ice_staticId()
{
    return ::com::xiaonei::wap::push::talk::MessageService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::wap::push::talk::MessageService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::wap::push::talk::MessageService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::wap::push::talk::MessageService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::wap::push::talk::MessageService);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::wap::push::talk::MessageService::__newInstance() const
{
    return new MessageService;
}

void
IceDelegateM::com::xiaonei::wap::push::talk::OfflineMessageService::push(::Ice::Long userId, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__push__talk__OfflineMessageService__push_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(type);
        ::com::xiaonei::wap::push::talk::__writeParamMap(__os, params);
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
IceDelegateM::com::xiaonei::wap::push::talk::MessageService::pushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__push__talk__MessageService__pushFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        ::com::xiaonei::wap::push::talk::__writeUserIdMap(__os, userIds);
        __os->write(type);
        ::com::xiaonei::wap::push::talk::__writeParamMap(__os, params);
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
IceDelegateM::com::xiaonei::wap::push::talk::MessageService::extPushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, const ::com::xiaonei::wap::push::talk::UserIdMap& gids, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__push__talk__MessageService__extPushFeed_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        ::com::xiaonei::wap::push::talk::__writeUserIdMap(__os, userIds);
        ::com::xiaonei::wap::push::talk::__writeUserIdMap(__os, gids);
        __os->write(type);
        ::com::xiaonei::wap::push::talk::__writeParamMap(__os, params);
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
IceDelegateM::com::xiaonei::wap::push::talk::MessageService::pushBulk(const ::com::xiaonei::wap::push::talk::longSeq& userId, ::Ice::Int type, ::Ice::Int fromType, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__push__talk__MessageService__pushBulk_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(userId.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&userId[0], &userId[0] + userId.size());
        }
        __os->write(type);
        __os->write(fromType);
        ::com::xiaonei::wap::push::talk::__writeParamMap(__os, params);
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
IceDelegateM::com::xiaonei::wap::push::talk::MessageService::pushBulk4ChatFromIm(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__push__talk__MessageService__pushBulk4ChatFromIm_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        ::com::xiaonei::wap::push::talk::__writeUserIdMap(__os, userIds);
        __os->write(type);
        ::com::xiaonei::wap::push::talk::__writeParamMap(__os, params);
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
IceDelegateM::com::xiaonei::wap::push::talk::MessageService::pushBulk4OfflineFromIm(const ::com::xiaonei::wap::push::talk::longSeq& userIds, ::Ice::Long toId, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__push__talk__MessageService__pushBulk4OfflineFromIm_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(userIds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&userIds[0], &userIds[0] + userIds.size());
        }
        __os->write(toId);
        __os->write(type);
        ::com::xiaonei::wap::push::talk::__writeParamMap(__os, params);
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
IceDelegateM::com::xiaonei::wap::push::talk::MessageService::push4sixin(::Ice::Long userId, ::Ice::Long thirdId, ::Ice::Int thirdType, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__push__talk__MessageService__push4sixin_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(thirdId);
        __os->write(thirdType);
        __os->write(type);
        ::com::xiaonei::wap::push::talk::__writeParamMap(__os, params);
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
IceDelegateD::com::xiaonei::wap::push::talk::OfflineMessageService::push(::Ice::Long userId, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long userId, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_type(type),
            _m_params(params)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::push::talk::OfflineMessageService* servant = dynamic_cast< ::com::xiaonei::wap::push::talk::OfflineMessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->push(_m_userId, _m_type, _m_params, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_userId;
        ::Ice::Int _m_type;
        const ::com::xiaonei::wap::push::talk::ParamMap& _m_params;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__push__talk__OfflineMessageService__push_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, type, params, __current);
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
IceDelegateD::com::xiaonei::wap::push::talk::MessageService::pushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userIds(userIds),
            _m_type(type),
            _m_params(params)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::push::talk::MessageService* servant = dynamic_cast< ::com::xiaonei::wap::push::talk::MessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->pushFeed(_m_userIds, _m_type, _m_params, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::com::xiaonei::wap::push::talk::UserIdMap& _m_userIds;
        ::Ice::Int _m_type;
        const ::com::xiaonei::wap::push::talk::ParamMap& _m_params;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__push__talk__MessageService__pushFeed_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userIds, type, params, __current);
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
IceDelegateD::com::xiaonei::wap::push::talk::MessageService::extPushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, const ::com::xiaonei::wap::push::talk::UserIdMap& gids, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, const ::com::xiaonei::wap::push::talk::UserIdMap& gids, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userIds(userIds),
            _m_gids(gids),
            _m_type(type),
            _m_params(params)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::push::talk::MessageService* servant = dynamic_cast< ::com::xiaonei::wap::push::talk::MessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->extPushFeed(_m_userIds, _m_gids, _m_type, _m_params, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::com::xiaonei::wap::push::talk::UserIdMap& _m_userIds;
        const ::com::xiaonei::wap::push::talk::UserIdMap& _m_gids;
        ::Ice::Int _m_type;
        const ::com::xiaonei::wap::push::talk::ParamMap& _m_params;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__push__talk__MessageService__extPushFeed_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userIds, gids, type, params, __current);
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
IceDelegateD::com::xiaonei::wap::push::talk::MessageService::pushBulk(const ::com::xiaonei::wap::push::talk::longSeq& userId, ::Ice::Int type, ::Ice::Int fromType, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::com::xiaonei::wap::push::talk::longSeq& userId, ::Ice::Int type, ::Ice::Int fromType, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_type(type),
            _m_fromType(fromType),
            _m_params(params)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::push::talk::MessageService* servant = dynamic_cast< ::com::xiaonei::wap::push::talk::MessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->pushBulk(_m_userId, _m_type, _m_fromType, _m_params, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::com::xiaonei::wap::push::talk::longSeq& _m_userId;
        ::Ice::Int _m_type;
        ::Ice::Int _m_fromType;
        const ::com::xiaonei::wap::push::talk::ParamMap& _m_params;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__push__talk__MessageService__pushBulk_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, type, fromType, params, __current);
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
IceDelegateD::com::xiaonei::wap::push::talk::MessageService::pushBulk4ChatFromIm(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userIds(userIds),
            _m_type(type),
            _m_params(params)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::push::talk::MessageService* servant = dynamic_cast< ::com::xiaonei::wap::push::talk::MessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->pushBulk4ChatFromIm(_m_userIds, _m_type, _m_params, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::com::xiaonei::wap::push::talk::UserIdMap& _m_userIds;
        ::Ice::Int _m_type;
        const ::com::xiaonei::wap::push::talk::ParamMap& _m_params;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__push__talk__MessageService__pushBulk4ChatFromIm_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userIds, type, params, __current);
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
IceDelegateD::com::xiaonei::wap::push::talk::MessageService::pushBulk4OfflineFromIm(const ::com::xiaonei::wap::push::talk::longSeq& userIds, ::Ice::Long toId, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::com::xiaonei::wap::push::talk::longSeq& userIds, ::Ice::Long toId, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userIds(userIds),
            _m_toId(toId),
            _m_type(type),
            _m_params(params)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::push::talk::MessageService* servant = dynamic_cast< ::com::xiaonei::wap::push::talk::MessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->pushBulk4OfflineFromIm(_m_userIds, _m_toId, _m_type, _m_params, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::com::xiaonei::wap::push::talk::longSeq& _m_userIds;
        ::Ice::Long _m_toId;
        ::Ice::Int _m_type;
        const ::com::xiaonei::wap::push::talk::ParamMap& _m_params;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__push__talk__MessageService__pushBulk4OfflineFromIm_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userIds, toId, type, params, __current);
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
IceDelegateD::com::xiaonei::wap::push::talk::MessageService::push4sixin(::Ice::Long userId, ::Ice::Long thirdId, ::Ice::Int thirdType, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long userId, ::Ice::Long thirdId, ::Ice::Int thirdType, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_thirdId(thirdId),
            _m_thirdType(thirdType),
            _m_type(type),
            _m_params(params)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::push::talk::MessageService* servant = dynamic_cast< ::com::xiaonei::wap::push::talk::MessageService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->push4sixin(_m_userId, _m_thirdId, _m_thirdType, _m_type, _m_params, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_userId;
        ::Ice::Long _m_thirdId;
        ::Ice::Int _m_thirdType;
        ::Ice::Int _m_type;
        const ::com::xiaonei::wap::push::talk::ParamMap& _m_params;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__push__talk__MessageService__push4sixin_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, thirdId, thirdType, type, params, __current);
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
com::xiaonei::wap::push::talk::OfflineMessageService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__wap__push__talk__OfflineMessageService_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::wap::push::talk::OfflineMessageService"
};

bool
com::xiaonei::wap::push::talk::OfflineMessageService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__wap__push__talk__OfflineMessageService_ids, __com__xiaonei__wap__push__talk__OfflineMessageService_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::wap::push::talk::OfflineMessageService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__wap__push__talk__OfflineMessageService_ids[0], &__com__xiaonei__wap__push__talk__OfflineMessageService_ids[2]);
}

const ::std::string&
com::xiaonei::wap::push::talk::OfflineMessageService::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__wap__push__talk__OfflineMessageService_ids[1];
}

const ::std::string&
com::xiaonei::wap::push::talk::OfflineMessageService::ice_staticId()
{
    return __com__xiaonei__wap__push__talk__OfflineMessageService_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::wap::push::talk::OfflineMessageService::___push(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Int type;
    ::com::xiaonei::wap::push::talk::ParamMap params;
    __is->read(userId);
    __is->read(type);
    ::com::xiaonei::wap::push::talk::__readParamMap(__is, params);
    __is->endReadEncaps();
    push(userId, type, params, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__wap__push__talk__OfflineMessageService_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "push"
};

::Ice::DispatchStatus
com::xiaonei::wap::push::talk::OfflineMessageService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__wap__push__talk__OfflineMessageService_all, __com__xiaonei__wap__push__talk__OfflineMessageService_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__wap__push__talk__OfflineMessageService_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___push(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::wap::push::talk::OfflineMessageService::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::wap::push::talk::OfflineMessageService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::wap::push::talk::OfflineMessageService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::push::talk::OfflineMessageService was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::push::talk::OfflineMessageService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::push::talk::OfflineMessageService was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::wap::push::talk::__patch__OfflineMessageServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::wap::push::talk::OfflineMessageServicePtr* p = static_cast< ::com::xiaonei::wap::push::talk::OfflineMessageServicePtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::wap::push::talk::OfflineMessageServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::wap::push::talk::OfflineMessageService::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::wap::push::talk::operator==(const ::com::xiaonei::wap::push::talk::OfflineMessageService& l, const ::com::xiaonei::wap::push::talk::OfflineMessageService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::wap::push::talk::operator<(const ::com::xiaonei::wap::push::talk::OfflineMessageService& l, const ::com::xiaonei::wap::push::talk::OfflineMessageService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
com::xiaonei::wap::push::talk::MessageService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__wap__push__talk__MessageService_ids[3] =
{
    "::Ice::Object",
    "::com::xiaonei::wap::push::talk::MessageService",
    "::com::xiaonei::wap::push::talk::OfflineMessageService"
};

bool
com::xiaonei::wap::push::talk::MessageService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__wap__push__talk__MessageService_ids, __com__xiaonei__wap__push__talk__MessageService_ids + 3, _s);
}

::std::vector< ::std::string>
com::xiaonei::wap::push::talk::MessageService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__wap__push__talk__MessageService_ids[0], &__com__xiaonei__wap__push__talk__MessageService_ids[3]);
}

const ::std::string&
com::xiaonei::wap::push::talk::MessageService::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__wap__push__talk__MessageService_ids[1];
}

const ::std::string&
com::xiaonei::wap::push::talk::MessageService::ice_staticId()
{
    return __com__xiaonei__wap__push__talk__MessageService_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::wap::push::talk::MessageService::___pushFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::push::talk::UserIdMap userIds;
    ::Ice::Int type;
    ::com::xiaonei::wap::push::talk::ParamMap params;
    ::com::xiaonei::wap::push::talk::__readUserIdMap(__is, userIds);
    __is->read(type);
    ::com::xiaonei::wap::push::talk::__readParamMap(__is, params);
    __is->endReadEncaps();
    pushFeed(userIds, type, params, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::push::talk::MessageService::___extPushFeed(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::push::talk::UserIdMap userIds;
    ::com::xiaonei::wap::push::talk::UserIdMap gids;
    ::Ice::Int type;
    ::com::xiaonei::wap::push::talk::ParamMap params;
    ::com::xiaonei::wap::push::talk::__readUserIdMap(__is, userIds);
    ::com::xiaonei::wap::push::talk::__readUserIdMap(__is, gids);
    __is->read(type);
    ::com::xiaonei::wap::push::talk::__readParamMap(__is, params);
    __is->endReadEncaps();
    extPushFeed(userIds, gids, type, params, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::push::talk::MessageService::___pushBulk(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::push::talk::longSeq userId;
    ::Ice::Int type;
    ::Ice::Int fromType;
    ::com::xiaonei::wap::push::talk::ParamMap params;
    __is->read(userId);
    __is->read(type);
    __is->read(fromType);
    ::com::xiaonei::wap::push::talk::__readParamMap(__is, params);
    __is->endReadEncaps();
    pushBulk(userId, type, fromType, params, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::push::talk::MessageService::___pushBulk4ChatFromIm(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::push::talk::UserIdMap userIds;
    ::Ice::Int type;
    ::com::xiaonei::wap::push::talk::ParamMap params;
    ::com::xiaonei::wap::push::talk::__readUserIdMap(__is, userIds);
    __is->read(type);
    ::com::xiaonei::wap::push::talk::__readParamMap(__is, params);
    __is->endReadEncaps();
    pushBulk4ChatFromIm(userIds, type, params, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::push::talk::MessageService::___pushBulk4OfflineFromIm(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::push::talk::longSeq userIds;
    ::Ice::Long toId;
    ::Ice::Int type;
    ::com::xiaonei::wap::push::talk::ParamMap params;
    __is->read(userIds);
    __is->read(toId);
    __is->read(type);
    ::com::xiaonei::wap::push::talk::__readParamMap(__is, params);
    __is->endReadEncaps();
    pushBulk4OfflineFromIm(userIds, toId, type, params, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::push::talk::MessageService::___push4sixin(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Long thirdId;
    ::Ice::Int thirdType;
    ::Ice::Int type;
    ::com::xiaonei::wap::push::talk::ParamMap params;
    __is->read(userId);
    __is->read(thirdId);
    __is->read(thirdType);
    __is->read(type);
    ::com::xiaonei::wap::push::talk::__readParamMap(__is, params);
    __is->endReadEncaps();
    push4sixin(userId, thirdId, thirdType, type, params, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__wap__push__talk__MessageService_all[] =
{
    "extPushFeed",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "push",
    "push4sixin",
    "pushBulk",
    "pushBulk4ChatFromIm",
    "pushBulk4OfflineFromIm",
    "pushFeed"
};

::Ice::DispatchStatus
com::xiaonei::wap::push::talk::MessageService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__wap__push__talk__MessageService_all, __com__xiaonei__wap__push__talk__MessageService_all + 11, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__wap__push__talk__MessageService_all)
    {
        case 0:
        {
            return ___extPushFeed(in, current);
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
        case 5:
        {
            return ___push(in, current);
        }
        case 6:
        {
            return ___push4sixin(in, current);
        }
        case 7:
        {
            return ___pushBulk(in, current);
        }
        case 8:
        {
            return ___pushBulk4ChatFromIm(in, current);
        }
        case 9:
        {
            return ___pushBulk4OfflineFromIm(in, current);
        }
        case 10:
        {
            return ___pushFeed(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::wap::push::talk::MessageService::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::wap::push::talk::MessageService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::wap::push::talk::MessageService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::push::talk::MessageService was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::push::talk::MessageService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::push::talk::MessageService was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::wap::push::talk::__patch__MessageServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::wap::push::talk::MessageServicePtr* p = static_cast< ::com::xiaonei::wap::push::talk::MessageServicePtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::wap::push::talk::MessageServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::wap::push::talk::MessageService::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::wap::push::talk::operator==(const ::com::xiaonei::wap::push::talk::MessageService& l, const ::com::xiaonei::wap::push::talk::MessageService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::wap::push::talk::operator<(const ::com::xiaonei::wap::push::talk::MessageService& l, const ::com::xiaonei::wap::push::talk::MessageService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
