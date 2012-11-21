// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `BoshService.ice'

#include <BoshService.h>
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

static const ::std::string __com__xiaonei__wap__talk__BoshService__updateSession_name = "updateSession";

static const ::std::string __com__xiaonei__wap__talk__BoshService__createSession_name = "createSession";

static const ::std::string __com__xiaonei__wap__talk__BoshService__sendMessage_name = "sendMessage";

static const ::std::string __com__xiaonei__wap__talk__BoshService__getVersionAndHost_name = "getVersionAndHost";

::Ice::Object* IceInternal::upCast(::com::xiaonei::wap::talk::BoshService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::wap::talk::BoshService* p) { return p; }

void
com::xiaonei::wap::talk::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::talk::BoshServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::wap::talk::BoshService;
        v->__copyFrom(proxy);
    }
}

bool
com::xiaonei::wap::talk::AMI_BoshService_updateSession::__invoke(const ::com::xiaonei::wap::talk::BoshServicePrx& __prx, ::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__com__xiaonei__wap__talk__BoshService__updateSession_name);
        __prepare(__prx, __com__xiaonei__wap__talk__BoshService__updateSession_name, ::Ice::Normal, __ctx);
        __os->write(connectionId);
        __os->write(msg);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
}

void
com::xiaonei::wap::talk::AMI_BoshService_updateSession::__response(bool __ok)
{
    ::com::xiaonei::wap::talk::Result __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
            return;
        }
        __is->startReadEncaps();
        __ret.__read(__is);
        __is->endReadEncaps();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
    ice_response(__ret);
    __releaseCallback();
}

bool
com::xiaonei::wap::talk::AMI_BoshService_createSession::__invoke(const ::com::xiaonei::wap::talk::BoshServicePrx& __prx, ::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__com__xiaonei__wap__talk__BoshService__createSession_name);
        __prepare(__prx, __com__xiaonei__wap__talk__BoshService__createSession_name, ::Ice::Normal, __ctx);
        __os->write(connectionId);
        __os->write(msg);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
}

void
com::xiaonei::wap::talk::AMI_BoshService_createSession::__response(bool __ok)
{
    ::com::xiaonei::wap::talk::Result __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
            return;
        }
        __is->startReadEncaps();
        __ret.__read(__is);
        __is->endReadEncaps();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
    ice_response(__ret);
    __releaseCallback();
}

bool
com::xiaonei::wap::talk::AMI_BoshService_sendMessage::__invoke(const ::com::xiaonei::wap::talk::BoshServicePrx& __prx, ::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly(__com__xiaonei__wap__talk__BoshService__sendMessage_name);
        __prepare(__prx, __com__xiaonei__wap__talk__BoshService__sendMessage_name, ::Ice::Normal, __ctx);
        __os->write(connectionId);
        __os->write(msg);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
}

void
com::xiaonei::wap::talk::AMI_BoshService_sendMessage::__response(bool __ok)
{
    ::com::xiaonei::wap::talk::Result __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
            return;
        }
        __is->startReadEncaps();
        __ret.__read(__is);
        __is->endReadEncaps();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
    ice_response(__ret);
    __releaseCallback();
}

::com::xiaonei::wap::talk::Result
IceProxy::com::xiaonei::wap::talk::BoshService::updateSession(::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__BoshService__updateSession_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::BoshService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::BoshService*>(__delBase.get());
            return __del->updateSession(connectionId, msg, __ctx);
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
IceProxy::com::xiaonei::wap::talk::BoshService::updateSession_async(const ::com::xiaonei::wap::talk::AMI_BoshService_updateSessionPtr& __cb, ::Ice::Long connectionId, const ::std::string& msg)
{
    return __cb->__invoke(this, connectionId, msg, 0);
}

bool
IceProxy::com::xiaonei::wap::talk::BoshService::updateSession_async(const ::com::xiaonei::wap::talk::AMI_BoshService_updateSessionPtr& __cb, ::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, connectionId, msg, &__ctx);
}

::com::xiaonei::wap::talk::Result
IceProxy::com::xiaonei::wap::talk::BoshService::createSession(::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__BoshService__createSession_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::BoshService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::BoshService*>(__delBase.get());
            return __del->createSession(connectionId, msg, __ctx);
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
IceProxy::com::xiaonei::wap::talk::BoshService::createSession_async(const ::com::xiaonei::wap::talk::AMI_BoshService_createSessionPtr& __cb, ::Ice::Long connectionId, const ::std::string& msg)
{
    return __cb->__invoke(this, connectionId, msg, 0);
}

bool
IceProxy::com::xiaonei::wap::talk::BoshService::createSession_async(const ::com::xiaonei::wap::talk::AMI_BoshService_createSessionPtr& __cb, ::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, connectionId, msg, &__ctx);
}

::com::xiaonei::wap::talk::Result
IceProxy::com::xiaonei::wap::talk::BoshService::sendMessage(::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__BoshService__sendMessage_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::BoshService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::BoshService*>(__delBase.get());
            return __del->sendMessage(connectionId, msg, __ctx);
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
IceProxy::com::xiaonei::wap::talk::BoshService::sendMessage_async(const ::com::xiaonei::wap::talk::AMI_BoshService_sendMessagePtr& __cb, ::Ice::Long connectionId, const ::std::string& msg)
{
    return __cb->__invoke(this, connectionId, msg, 0);
}

bool
IceProxy::com::xiaonei::wap::talk::BoshService::sendMessage_async(const ::com::xiaonei::wap::talk::AMI_BoshService_sendMessagePtr& __cb, ::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, connectionId, msg, &__ctx);
}

::std::string
IceProxy::com::xiaonei::wap::talk::BoshService::getVersionAndHost(const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__BoshService__getVersionAndHost_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::BoshService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::BoshService*>(__delBase.get());
            return __del->getVersionAndHost(__ctx);
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
IceProxy::com::xiaonei::wap::talk::BoshService::ice_staticId()
{
    return ::com::xiaonei::wap::talk::BoshService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::wap::talk::BoshService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::wap::talk::BoshService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::wap::talk::BoshService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::wap::talk::BoshService);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::wap::talk::BoshService::__newInstance() const
{
    return new BoshService;
}

::com::xiaonei::wap::talk::Result
IceDelegateM::com::xiaonei::wap::talk::BoshService::updateSession(::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__BoshService__updateSession_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(connectionId);
        __os->write(msg);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::talk::Result __ret;
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
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::talk::Result
IceDelegateM::com::xiaonei::wap::talk::BoshService::createSession(::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__BoshService__createSession_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(connectionId);
        __os->write(msg);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::talk::Result __ret;
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
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::talk::Result
IceDelegateM::com::xiaonei::wap::talk::BoshService::sendMessage(::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__BoshService__sendMessage_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(connectionId);
        __os->write(msg);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::talk::Result __ret;
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
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::std::string
IceDelegateM::com::xiaonei::wap::talk::BoshService::getVersionAndHost(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__BoshService__getVersionAndHost_name, ::Ice::Normal, __context);
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

::com::xiaonei::wap::talk::Result
IceDelegateD::com::xiaonei::wap::talk::BoshService::updateSession(::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::talk::Result& __result, ::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_connectionId(connectionId),
            _m_msg(msg)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::BoshService* servant = dynamic_cast< ::com::xiaonei::wap::talk::BoshService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->updateSession(_m_connectionId, _m_msg, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::talk::Result& _result;
        ::Ice::Long _m_connectionId;
        const ::std::string& _m_msg;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__BoshService__updateSession_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::talk::Result __result;
    try
    {
        _DirectI __direct(__result, connectionId, msg, __current);
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

::com::xiaonei::wap::talk::Result
IceDelegateD::com::xiaonei::wap::talk::BoshService::createSession(::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::talk::Result& __result, ::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_connectionId(connectionId),
            _m_msg(msg)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::BoshService* servant = dynamic_cast< ::com::xiaonei::wap::talk::BoshService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->createSession(_m_connectionId, _m_msg, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::talk::Result& _result;
        ::Ice::Long _m_connectionId;
        const ::std::string& _m_msg;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__BoshService__createSession_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::talk::Result __result;
    try
    {
        _DirectI __direct(__result, connectionId, msg, __current);
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

::com::xiaonei::wap::talk::Result
IceDelegateD::com::xiaonei::wap::talk::BoshService::sendMessage(::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::talk::Result& __result, ::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_connectionId(connectionId),
            _m_msg(msg)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::BoshService* servant = dynamic_cast< ::com::xiaonei::wap::talk::BoshService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->sendMessage(_m_connectionId, _m_msg, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::talk::Result& _result;
        ::Ice::Long _m_connectionId;
        const ::std::string& _m_msg;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__BoshService__sendMessage_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::talk::Result __result;
    try
    {
        _DirectI __direct(__result, connectionId, msg, __current);
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
IceDelegateD::com::xiaonei::wap::talk::BoshService::getVersionAndHost(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::std::string& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::BoshService* servant = dynamic_cast< ::com::xiaonei::wap::talk::BoshService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getVersionAndHost(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::std::string& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__BoshService__getVersionAndHost_name, ::Ice::Normal, __context);
    ::std::string __result;
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

::Ice::ObjectPtr
com::xiaonei::wap::talk::BoshService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__wap__talk__BoshService_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::wap::talk::BoshService"
};

bool
com::xiaonei::wap::talk::BoshService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__wap__talk__BoshService_ids, __com__xiaonei__wap__talk__BoshService_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::wap::talk::BoshService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__wap__talk__BoshService_ids[0], &__com__xiaonei__wap__talk__BoshService_ids[2]);
}

const ::std::string&
com::xiaonei::wap::talk::BoshService::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__wap__talk__BoshService_ids[1];
}

const ::std::string&
com::xiaonei::wap::talk::BoshService::ice_staticId()
{
    return __com__xiaonei__wap__talk__BoshService_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::BoshService::___updateSession(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long connectionId;
    ::std::string msg;
    __is->read(connectionId);
    __is->read(msg);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::talk::Result __ret = updateSession(connectionId, msg, __current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::BoshService::___createSession(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long connectionId;
    ::std::string msg;
    __is->read(connectionId);
    __is->read(msg);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::talk::Result __ret = createSession(connectionId, msg, __current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::BoshService::___sendMessage(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long connectionId;
    ::std::string msg;
    __is->read(connectionId);
    __is->read(msg);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::talk::Result __ret = sendMessage(connectionId, msg, __current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::BoshService::___getVersionAndHost(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string __ret = getVersionAndHost(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__wap__talk__BoshService_all[] =
{
    "createSession",
    "getVersionAndHost",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "sendMessage",
    "updateSession"
};

::Ice::DispatchStatus
com::xiaonei::wap::talk::BoshService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__wap__talk__BoshService_all, __com__xiaonei__wap__talk__BoshService_all + 8, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__wap__talk__BoshService_all)
    {
        case 0:
        {
            return ___createSession(in, current);
        }
        case 1:
        {
            return ___getVersionAndHost(in, current);
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
            return ___sendMessage(in, current);
        }
        case 7:
        {
            return ___updateSession(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::wap::talk::BoshService::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::wap::talk::BoshService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::wap::talk::BoshService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::talk::BoshService was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::talk::BoshService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::talk::BoshService was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::wap::talk::__patch__BoshServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::wap::talk::BoshServicePtr* p = static_cast< ::com::xiaonei::wap::talk::BoshServicePtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::wap::talk::BoshServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::wap::talk::BoshService::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::wap::talk::operator==(const ::com::xiaonei::wap::talk::BoshService& l, const ::com::xiaonei::wap::talk::BoshService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::wap::talk::operator<(const ::com::xiaonei::wap::talk::BoshService& l, const ::com::xiaonei::wap::talk::BoshService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
