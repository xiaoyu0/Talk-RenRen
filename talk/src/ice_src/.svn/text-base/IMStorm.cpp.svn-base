// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IMStorm.ice'

#include <IMStorm.h>
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

static const ::std::string __xce__talk__Observer__update_name = "update";

static const ::std::string __xce__talk__IMStorm__UserOnlineStatChange_name = "UserOnlineStatChange";

static const ::std::string __xce__talk__IMStorm__notify_name = "notify";

static const ::std::string __xce__talk__IMStorm__subscribe_name = "subscribe";

static const ::std::string __xce__talk__IMStorm__unsubscribe_name = "unsubscribe";

static const ::std::string __xce__talk__IMStorm__NotifyPhoneServerDisable_name = "NotifyPhoneServerDisable";

static const ::std::string __xce__talk__IMStorm__NotifyPhoneServerEnalbe_name = "NotifyPhoneServerEnalbe";

static const ::std::string __xce__talk__IMStorm__query_name = "query";

::Ice::Object* IceInternal::upCast(::xce::talk::Observer* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::talk::Observer* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::talk::IMStorm* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::talk::IMStorm* p) { return p; }

::Ice::Object* IceInternal::upCast(::xce::talk::TestStorm* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::xce::talk::TestStorm* p) { return p; }

void
xce::talk::__read(::IceInternal::BasicStream* __is, ::xce::talk::ObserverPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::talk::Observer;
        v->__copyFrom(proxy);
    }
}

void
xce::talk::__read(::IceInternal::BasicStream* __is, ::xce::talk::IMStormPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::talk::IMStorm;
        v->__copyFrom(proxy);
    }
}

void
xce::talk::__read(::IceInternal::BasicStream* __is, ::xce::talk::TestStormPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::xce::talk::TestStorm;
        v->__copyFrom(proxy);
    }
}

void
xce::talk::__writeObserverPool(::IceInternal::BasicStream* __os, const ::xce::talk::ObserverPrx* begin, const ::xce::talk::ObserverPrx* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPrx(::IceInternal::upCast(begin[i].get())));
    }
}

void
xce::talk::__readObserverPool(::IceInternal::BasicStream* __is, ::xce::talk::ObserverPool& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 2);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::xce::talk::__read(__is, v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
xce::talk::__writeObserverPoolMap(::IceInternal::BasicStream* __os, const ::xce::talk::ObserverPoolMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::xce::talk::ObserverPoolMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        if(p->second.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::xce::talk::__writeObserverPool(__os, &p->second[0], &p->second[0] + p->second.size());
        }
    }
}

void
xce::talk::__readObserverPoolMap(::IceInternal::BasicStream* __is, ::xce::talk::ObserverPoolMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::xce::talk::ObserverPool> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::xce::talk::ObserverPoolMap::iterator __i = v.insert(v.end(), pair);
        ::xce::talk::__readObserverPool(__is, __i->second);
    }
}

bool
IceProxy::xce::talk::Observer::update(const ::MyUtil::Str2StrMap& context, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__xce__talk__Observer__update_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::talk::Observer* __del = dynamic_cast< ::IceDelegate::xce::talk::Observer*>(__delBase.get());
            return __del->update(context, __ctx);
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
IceProxy::xce::talk::Observer::ice_staticId()
{
    return ::xce::talk::Observer::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::talk::Observer::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::talk::Observer);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::talk::Observer::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::talk::Observer);
}

::IceProxy::Ice::Object*
IceProxy::xce::talk::Observer::__newInstance() const
{
    return new Observer;
}

void
IceProxy::xce::talk::IMStorm::UserOnlineStatChange(::Ice::Int userid, ::Ice::Int onlinestat, ::Ice::Int onlinetype, const ::MyUtil::IntSeq& notifybuddys, const ::Ice::Context* __ctx)
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
            ::IceDelegate::xce::talk::IMStorm* __del = dynamic_cast< ::IceDelegate::xce::talk::IMStorm*>(__delBase.get());
            __del->UserOnlineStatChange(userid, onlinestat, onlinetype, notifybuddys, __ctx);
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
IceProxy::xce::talk::IMStorm::notify(const ::std::string& name, const ::MyUtil::Str2StrMap& context, ::Ice::Int servercount, ::Ice::Int channel, const ::Ice::Context* __ctx)
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
            ::IceDelegate::xce::talk::IMStorm* __del = dynamic_cast< ::IceDelegate::xce::talk::IMStorm*>(__delBase.get());
            __del->notify(name, context, servercount, channel, __ctx);
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
IceProxy::xce::talk::IMStorm::subscribe(const ::std::string& name, const ::xce::talk::ObserverPrx& o, ::Ice::Int phoneservercount, ::Ice::Int phoneserverindex, const ::Ice::Context* __ctx)
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
            ::IceDelegate::xce::talk::IMStorm* __del = dynamic_cast< ::IceDelegate::xce::talk::IMStorm*>(__delBase.get());
            __del->subscribe(name, o, phoneservercount, phoneserverindex, __ctx);
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
IceProxy::xce::talk::IMStorm::unsubscribe(const ::std::string& name, const ::xce::talk::ObserverPrx& o, const ::Ice::Context* __ctx)
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
            ::IceDelegate::xce::talk::IMStorm* __del = dynamic_cast< ::IceDelegate::xce::talk::IMStorm*>(__delBase.get());
            __del->unsubscribe(name, o, __ctx);
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
IceProxy::xce::talk::IMStorm::NotifyPhoneServerDisable(const ::Ice::Context* __ctx)
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
            ::IceDelegate::xce::talk::IMStorm* __del = dynamic_cast< ::IceDelegate::xce::talk::IMStorm*>(__delBase.get());
            __del->NotifyPhoneServerDisable(__ctx);
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
IceProxy::xce::talk::IMStorm::NotifyPhoneServerEnalbe(const ::Ice::Context* __ctx)
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
            ::IceDelegate::xce::talk::IMStorm* __del = dynamic_cast< ::IceDelegate::xce::talk::IMStorm*>(__delBase.get());
            __del->NotifyPhoneServerEnalbe(__ctx);
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

::xce::talk::ObserverPoolMap
IceProxy::xce::talk::IMStorm::query(const ::std::string& name, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__xce__talk__IMStorm__query_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::xce::talk::IMStorm* __del = dynamic_cast< ::IceDelegate::xce::talk::IMStorm*>(__delBase.get());
            return __del->query(name, __ctx);
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
IceProxy::xce::talk::IMStorm::ice_staticId()
{
    return ::xce::talk::IMStorm::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::talk::IMStorm::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::talk::IMStorm);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::talk::IMStorm::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::talk::IMStorm);
}

::IceProxy::Ice::Object*
IceProxy::xce::talk::IMStorm::__newInstance() const
{
    return new IMStorm;
}

const ::std::string&
IceProxy::xce::talk::TestStorm::ice_staticId()
{
    return ::xce::talk::TestStorm::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::xce::talk::TestStorm::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::xce::talk::TestStorm);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::xce::talk::TestStorm::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::xce::talk::TestStorm);
}

::IceProxy::Ice::Object*
IceProxy::xce::talk::TestStorm::__newInstance() const
{
    return new TestStorm;
}

bool
IceDelegateM::xce::talk::Observer::update(const ::MyUtil::Str2StrMap& context, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__talk__Observer__update_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        ::MyUtil::__writeStr2StrMap(__os, context);
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
IceDelegateM::xce::talk::IMStorm::UserOnlineStatChange(::Ice::Int userid, ::Ice::Int onlinestat, ::Ice::Int onlinetype, const ::MyUtil::IntSeq& notifybuddys, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__talk__IMStorm__UserOnlineStatChange_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userid);
        __os->write(onlinestat);
        __os->write(onlinetype);
        if(notifybuddys.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&notifybuddys[0], &notifybuddys[0] + notifybuddys.size());
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
IceDelegateM::xce::talk::IMStorm::notify(const ::std::string& name, const ::MyUtil::Str2StrMap& context, ::Ice::Int servercount, ::Ice::Int channel, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__talk__IMStorm__notify_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(name);
        ::MyUtil::__writeStr2StrMap(__os, context);
        __os->write(servercount);
        __os->write(channel);
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
IceDelegateM::xce::talk::IMStorm::subscribe(const ::std::string& name, const ::xce::talk::ObserverPrx& o, ::Ice::Int phoneservercount, ::Ice::Int phoneserverindex, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__talk__IMStorm__subscribe_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(name);
        __os->write(::Ice::ObjectPrx(::IceInternal::upCast(o.get())));
        __os->write(phoneservercount);
        __os->write(phoneserverindex);
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
IceDelegateM::xce::talk::IMStorm::unsubscribe(const ::std::string& name, const ::xce::talk::ObserverPrx& o, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__talk__IMStorm__unsubscribe_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(name);
        __os->write(::Ice::ObjectPrx(::IceInternal::upCast(o.get())));
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
IceDelegateM::xce::talk::IMStorm::NotifyPhoneServerDisable(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__talk__IMStorm__NotifyPhoneServerDisable_name, ::Ice::Normal, __context);
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
IceDelegateM::xce::talk::IMStorm::NotifyPhoneServerEnalbe(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__talk__IMStorm__NotifyPhoneServerEnalbe_name, ::Ice::Normal, __context);
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

::xce::talk::ObserverPoolMap
IceDelegateM::xce::talk::IMStorm::query(const ::std::string& name, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __xce__talk__IMStorm__query_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(name);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::xce::talk::ObserverPoolMap __ret;
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
        ::xce::talk::__readObserverPoolMap(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

bool
IceDelegateD::xce::talk::Observer::update(const ::MyUtil::Str2StrMap& context, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(bool& __result, const ::MyUtil::Str2StrMap& context, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_context(context)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::talk::Observer* servant = dynamic_cast< ::xce::talk::Observer*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->update(_m_context, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        bool& _result;
        const ::MyUtil::Str2StrMap& _m_context;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__talk__Observer__update_name, ::Ice::Normal, __context);
    bool __result;
    try
    {
        _DirectI __direct(__result, context, __current);
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
IceDelegateD::xce::talk::IMStorm::UserOnlineStatChange(::Ice::Int userid, ::Ice::Int onlinestat, ::Ice::Int onlinetype, const ::MyUtil::IntSeq& notifybuddys, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int userid, ::Ice::Int onlinestat, ::Ice::Int onlinetype, const ::MyUtil::IntSeq& notifybuddys, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userid(userid),
            _m_onlinestat(onlinestat),
            _m_onlinetype(onlinetype),
            _m_notifybuddys(notifybuddys)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::talk::IMStorm* servant = dynamic_cast< ::xce::talk::IMStorm*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->UserOnlineStatChange(_m_userid, _m_onlinestat, _m_onlinetype, _m_notifybuddys, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_userid;
        ::Ice::Int _m_onlinestat;
        ::Ice::Int _m_onlinetype;
        const ::MyUtil::IntSeq& _m_notifybuddys;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__talk__IMStorm__UserOnlineStatChange_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userid, onlinestat, onlinetype, notifybuddys, __current);
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
IceDelegateD::xce::talk::IMStorm::notify(const ::std::string& name, const ::MyUtil::Str2StrMap& context, ::Ice::Int servercount, ::Ice::Int channel, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& name, const ::MyUtil::Str2StrMap& context, ::Ice::Int servercount, ::Ice::Int channel, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_name(name),
            _m_context(context),
            _m_servercount(servercount),
            _m_channel(channel)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::talk::IMStorm* servant = dynamic_cast< ::xce::talk::IMStorm*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->notify(_m_name, _m_context, _m_servercount, _m_channel, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_name;
        const ::MyUtil::Str2StrMap& _m_context;
        ::Ice::Int _m_servercount;
        ::Ice::Int _m_channel;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__talk__IMStorm__notify_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(name, context, servercount, channel, __current);
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
IceDelegateD::xce::talk::IMStorm::subscribe(const ::std::string& name, const ::xce::talk::ObserverPrx& o, ::Ice::Int phoneservercount, ::Ice::Int phoneserverindex, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& name, const ::xce::talk::ObserverPrx& o, ::Ice::Int phoneservercount, ::Ice::Int phoneserverindex, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_name(name),
            _m_o(o),
            _m_phoneservercount(phoneservercount),
            _m_phoneserverindex(phoneserverindex)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::talk::IMStorm* servant = dynamic_cast< ::xce::talk::IMStorm*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->subscribe(_m_name, _m_o, _m_phoneservercount, _m_phoneserverindex, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_name;
        const ::xce::talk::ObserverPrx& _m_o;
        ::Ice::Int _m_phoneservercount;
        ::Ice::Int _m_phoneserverindex;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__talk__IMStorm__subscribe_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(name, o, phoneservercount, phoneserverindex, __current);
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
IceDelegateD::xce::talk::IMStorm::unsubscribe(const ::std::string& name, const ::xce::talk::ObserverPrx& o, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& name, const ::xce::talk::ObserverPrx& o, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_name(name),
            _m_o(o)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::talk::IMStorm* servant = dynamic_cast< ::xce::talk::IMStorm*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->unsubscribe(_m_name, _m_o, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_name;
        const ::xce::talk::ObserverPrx& _m_o;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__talk__IMStorm__unsubscribe_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(name, o, __current);
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
IceDelegateD::xce::talk::IMStorm::NotifyPhoneServerDisable(const ::Ice::Context* __context)
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
            ::xce::talk::IMStorm* servant = dynamic_cast< ::xce::talk::IMStorm*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->NotifyPhoneServerDisable(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__talk__IMStorm__NotifyPhoneServerDisable_name, ::Ice::Normal, __context);
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
IceDelegateD::xce::talk::IMStorm::NotifyPhoneServerEnalbe(const ::Ice::Context* __context)
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
            ::xce::talk::IMStorm* servant = dynamic_cast< ::xce::talk::IMStorm*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->NotifyPhoneServerEnalbe(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__talk__IMStorm__NotifyPhoneServerEnalbe_name, ::Ice::Normal, __context);
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

::xce::talk::ObserverPoolMap
IceDelegateD::xce::talk::IMStorm::query(const ::std::string& name, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::xce::talk::ObserverPoolMap& __result, const ::std::string& name, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_name(name)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::xce::talk::IMStorm* servant = dynamic_cast< ::xce::talk::IMStorm*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->query(_m_name, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::xce::talk::ObserverPoolMap& _result;
        const ::std::string& _m_name;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __xce__talk__IMStorm__query_name, ::Ice::Normal, __context);
    ::xce::talk::ObserverPoolMap __result;
    try
    {
        _DirectI __direct(__result, name, __current);
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

::Ice::ObjectPtr
xce::talk::Observer::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __xce__talk__Observer_ids[2] =
{
    "::Ice::Object",
    "::xce::talk::Observer"
};

bool
xce::talk::Observer::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__talk__Observer_ids, __xce__talk__Observer_ids + 2, _s);
}

::std::vector< ::std::string>
xce::talk::Observer::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__talk__Observer_ids[0], &__xce__talk__Observer_ids[2]);
}

const ::std::string&
xce::talk::Observer::ice_id(const ::Ice::Current&) const
{
    return __xce__talk__Observer_ids[1];
}

const ::std::string&
xce::talk::Observer::ice_staticId()
{
    return __xce__talk__Observer_ids[1];
}

::Ice::DispatchStatus
xce::talk::Observer::___update(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::MyUtil::Str2StrMap context;
    ::MyUtil::__readStr2StrMap(__is, context);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = update(context, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

static ::std::string __xce__talk__Observer_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "update"
};

::Ice::DispatchStatus
xce::talk::Observer::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__xce__talk__Observer_all, __xce__talk__Observer_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __xce__talk__Observer_all)
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
            return ___update(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
xce::talk::Observer::__write(::IceInternal::BasicStream* __os) const
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
xce::talk::Observer::__read(::IceInternal::BasicStream* __is, bool __rid)
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
xce::talk::Observer::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::talk::Observer was not generated with stream support";
    throw ex;
}

void
xce::talk::Observer::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::talk::Observer was not generated with stream support";
    throw ex;
}

void 
xce::talk::__patch__ObserverPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::talk::ObserverPtr* p = static_cast< ::xce::talk::ObserverPtr*>(__addr);
    assert(p);
    *p = ::xce::talk::ObserverPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::talk::Observer::ice_staticId(), v->ice_id());
    }
}

bool
xce::talk::operator==(const ::xce::talk::Observer& l, const ::xce::talk::Observer& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::talk::operator<(const ::xce::talk::Observer& l, const ::xce::talk::Observer& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
xce::talk::IMStorm::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __xce__talk__IMStorm_ids[3] =
{
    "::Ice::Object",
    "::com::xiaonei::talk::DeliverInterface",
    "::xce::talk::IMStorm"
};

bool
xce::talk::IMStorm::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__talk__IMStorm_ids, __xce__talk__IMStorm_ids + 3, _s);
}

::std::vector< ::std::string>
xce::talk::IMStorm::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__talk__IMStorm_ids[0], &__xce__talk__IMStorm_ids[3]);
}

const ::std::string&
xce::talk::IMStorm::ice_id(const ::Ice::Current&) const
{
    return __xce__talk__IMStorm_ids[2];
}

const ::std::string&
xce::talk::IMStorm::ice_staticId()
{
    return __xce__talk__IMStorm_ids[2];
}

::Ice::DispatchStatus
xce::talk::IMStorm::___UserOnlineStatChange(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userid;
    ::Ice::Int onlinestat;
    ::Ice::Int onlinetype;
    ::MyUtil::IntSeq notifybuddys;
    __is->read(userid);
    __is->read(onlinestat);
    __is->read(onlinetype);
    __is->read(notifybuddys);
    __is->endReadEncaps();
    UserOnlineStatChange(userid, onlinestat, onlinetype, notifybuddys, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::talk::IMStorm::___notify(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string name;
    ::MyUtil::Str2StrMap context;
    ::Ice::Int servercount;
    ::Ice::Int channel;
    __is->read(name);
    ::MyUtil::__readStr2StrMap(__is, context);
    __is->read(servercount);
    __is->read(channel);
    __is->endReadEncaps();
    notify(name, context, servercount, channel, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::talk::IMStorm::___subscribe(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string name;
    ::xce::talk::ObserverPrx o;
    ::Ice::Int phoneservercount;
    ::Ice::Int phoneserverindex;
    __is->read(name);
    ::xce::talk::__read(__is, o);
    __is->read(phoneservercount);
    __is->read(phoneserverindex);
    __is->endReadEncaps();
    subscribe(name, o, phoneservercount, phoneserverindex, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::talk::IMStorm::___unsubscribe(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string name;
    ::xce::talk::ObserverPrx o;
    __is->read(name);
    ::xce::talk::__read(__is, o);
    __is->endReadEncaps();
    unsubscribe(name, o, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::talk::IMStorm::___NotifyPhoneServerDisable(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    NotifyPhoneServerDisable(__current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::talk::IMStorm::___NotifyPhoneServerEnalbe(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    NotifyPhoneServerEnalbe(__current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
xce::talk::IMStorm::___query(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string name;
    __is->read(name);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::xce::talk::ObserverPoolMap __ret = query(name, __current);
    ::xce::talk::__writeObserverPoolMap(__os, __ret);
    return ::Ice::DispatchOK;
}

static ::std::string __xce__talk__IMStorm_all[] =
{
    "NotifyPhoneServerDisable",
    "NotifyPhoneServerEnalbe",
    "UserOnlineStatChange",
    "deliver",
    "express",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "notify",
    "query",
    "subscribe",
    "unsubscribe"
};

::Ice::DispatchStatus
xce::talk::IMStorm::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__xce__talk__IMStorm_all, __xce__talk__IMStorm_all + 13, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __xce__talk__IMStorm_all)
    {
        case 0:
        {
            return ___NotifyPhoneServerDisable(in, current);
        }
        case 1:
        {
            return ___NotifyPhoneServerEnalbe(in, current);
        }
        case 2:
        {
            return ___UserOnlineStatChange(in, current);
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
            return ___notify(in, current);
        }
        case 10:
        {
            return ___query(in, current);
        }
        case 11:
        {
            return ___subscribe(in, current);
        }
        case 12:
        {
            return ___unsubscribe(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
xce::talk::IMStorm::__write(::IceInternal::BasicStream* __os) const
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
xce::talk::IMStorm::__read(::IceInternal::BasicStream* __is, bool __rid)
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
xce::talk::IMStorm::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::talk::IMStorm was not generated with stream support";
    throw ex;
}

void
xce::talk::IMStorm::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::talk::IMStorm was not generated with stream support";
    throw ex;
}

void 
xce::talk::__patch__IMStormPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::talk::IMStormPtr* p = static_cast< ::xce::talk::IMStormPtr*>(__addr);
    assert(p);
    *p = ::xce::talk::IMStormPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::talk::IMStorm::ice_staticId(), v->ice_id());
    }
}

bool
xce::talk::operator==(const ::xce::talk::IMStorm& l, const ::xce::talk::IMStorm& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::talk::operator<(const ::xce::talk::IMStorm& l, const ::xce::talk::IMStorm& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
xce::talk::TestStorm::ice_clone() const
{
    ::xce::talk::TestStormPtr __p = new ::xce::talk::TestStorm(*this);
    return __p;
}

static const ::std::string __xce__talk__TestStorm_ids[2] =
{
    "::Ice::Object",
    "::xce::talk::TestStorm"
};

bool
xce::talk::TestStorm::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__xce__talk__TestStorm_ids, __xce__talk__TestStorm_ids + 2, _s);
}

::std::vector< ::std::string>
xce::talk::TestStorm::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__xce__talk__TestStorm_ids[0], &__xce__talk__TestStorm_ids[2]);
}

const ::std::string&
xce::talk::TestStorm::ice_id(const ::Ice::Current&) const
{
    return __xce__talk__TestStorm_ids[1];
}

const ::std::string&
xce::talk::TestStorm::ice_staticId()
{
    return __xce__talk__TestStorm_ids[1];
}

void
xce::talk::TestStorm::__write(::IceInternal::BasicStream* __os) const
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
xce::talk::TestStorm::__read(::IceInternal::BasicStream* __is, bool __rid)
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
xce::talk::TestStorm::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::talk::TestStorm was not generated with stream support";
    throw ex;
}

void
xce::talk::TestStorm::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type xce::talk::TestStorm was not generated with stream support";
    throw ex;
}

class __F__xce__talk__TestStorm : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::xce::talk::TestStorm::ice_staticId());
        return new ::xce::talk::TestStorm;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__xce__talk__TestStorm_Ptr = new __F__xce__talk__TestStorm;

const ::Ice::ObjectFactoryPtr&
xce::talk::TestStorm::ice_factory()
{
    return __F__xce__talk__TestStorm_Ptr;
}

class __F__xce__talk__TestStorm__Init
{
public:

    __F__xce__talk__TestStorm__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::xce::talk::TestStorm::ice_staticId(), ::xce::talk::TestStorm::ice_factory());
    }

    ~__F__xce__talk__TestStorm__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::xce::talk::TestStorm::ice_staticId());
    }
};

static __F__xce__talk__TestStorm__Init __F__xce__talk__TestStorm__i;

#ifdef __APPLE__
extern "C" { void __F__xce__talk__TestStorm__initializer() {} }
#endif

void 
xce::talk::__patch__TestStormPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::xce::talk::TestStormPtr* p = static_cast< ::xce::talk::TestStormPtr*>(__addr);
    assert(p);
    *p = ::xce::talk::TestStormPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::xce::talk::TestStorm::ice_staticId(), v->ice_id());
    }
}

bool
xce::talk::operator==(const ::xce::talk::TestStorm& l, const ::xce::talk::TestStorm& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
xce::talk::operator<(const ::xce::talk::TestStorm& l, const ::xce::talk::TestStorm& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
