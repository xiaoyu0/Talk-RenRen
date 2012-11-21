// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `miscService.ice'

#include <miscService.h>
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

static const ::std::string __com__renren__sixin__account__MiscService__setLanguage_name = "setLanguage";

static const ::std::string __com__renren__sixin__account__MiscService__setOriginalAppId_name = "setOriginalAppId";

static const ::std::string __com__renren__sixin__account__MiscService__getLanguage_name = "getLanguage";

static const ::std::string __com__renren__sixin__account__MiscService__setAppId_name = "setAppId";

static const ::std::string __com__renren__sixin__account__MiscService__syncRenrenAccount_name = "syncRenrenAccount";

static const ::std::string __com__renren__sixin__account__MiscService__getAppVersion_name = "getAppVersion";

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::VersionResult* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::VersionResult* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::MiscService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::MiscService* p) { return p; }

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::VersionResultPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::VersionResult;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::MiscServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::MiscService;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__write(::IceInternal::BasicStream* __os, ::com::renren::sixin::account::AppCatalogEnum v)
{
    __os->write(static_cast< ::Ice::Byte>(v), 2);
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::AppCatalogEnum& v)
{
    ::Ice::Byte val;
    __is->read(val, 2);
    v = static_cast< ::com::renren::sixin::account::AppCatalogEnum>(val);
}

const ::std::string&
IceProxy::com::renren::sixin::account::VersionResult::ice_staticId()
{
    return ::com::renren::sixin::account::VersionResult::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::VersionResult::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::VersionResult);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::VersionResult::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::VersionResult);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::VersionResult::__newInstance() const
{
    return new VersionResult;
}

::com::renren::sixin::account::BaseResultPtr
IceProxy::com::renren::sixin::account::MiscService::setLanguage(::Ice::Long userId, const ::std::string& language, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__MiscService__setLanguage_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::MiscService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::MiscService*>(__delBase.get());
            return __del->setLanguage(userId, language, __ctx);
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

::com::renren::sixin::account::BaseResultPtr
IceProxy::com::renren::sixin::account::MiscService::setOriginalAppId(const ::std::string& alias, ::Ice::Int originalAppId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__MiscService__setOriginalAppId_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::MiscService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::MiscService*>(__delBase.get());
            return __del->setOriginalAppId(alias, originalAppId, __ctx);
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

::com::renren::sixin::account::StringResultPtr
IceProxy::com::renren::sixin::account::MiscService::getLanguage(::Ice::Long userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__MiscService__getLanguage_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::MiscService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::MiscService*>(__delBase.get());
            return __del->getLanguage(userId, __ctx);
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

::com::renren::sixin::account::BaseResultPtr
IceProxy::com::renren::sixin::account::MiscService::setAppId(::Ice::Long userId, ::Ice::Int appId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__MiscService__setAppId_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::MiscService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::MiscService*>(__delBase.get());
            return __del->setAppId(userId, appId, __ctx);
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
IceProxy::com::renren::sixin::account::MiscService::syncRenrenAccount(::Ice::Int renrenUid, ::Ice::Int appId, ::Ice::Int callerType, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::renren::sixin::account::MiscService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::MiscService*>(__delBase.get());
            __del->syncRenrenAccount(renrenUid, appId, callerType, __ctx);
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

::com::renren::sixin::account::VersionResultPtr
IceProxy::com::renren::sixin::account::MiscService::getAppVersion(::Ice::Long userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__MiscService__getAppVersion_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::MiscService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::MiscService*>(__delBase.get());
            return __del->getAppVersion(userId, __ctx);
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
IceProxy::com::renren::sixin::account::MiscService::ice_staticId()
{
    return ::com::renren::sixin::account::MiscService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::MiscService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::MiscService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::MiscService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::MiscService);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::MiscService::__newInstance() const
{
    return new MiscService;
}

::com::renren::sixin::account::BaseResultPtr
IceDelegateM::com::renren::sixin::account::MiscService::setLanguage(::Ice::Long userId, const ::std::string& language, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__MiscService__setLanguage_name, ::Ice::Normal, __context);
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
    ::com::renren::sixin::account::BaseResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__BaseResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::BaseResultPtr
IceDelegateM::com::renren::sixin::account::MiscService::setOriginalAppId(const ::std::string& alias, ::Ice::Int originalAppId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__MiscService__setOriginalAppId_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(alias);
        __os->write(originalAppId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::BaseResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__BaseResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::StringResultPtr
IceDelegateM::com::renren::sixin::account::MiscService::getLanguage(::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__MiscService__getLanguage_name, ::Ice::Normal, __context);
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
    ::com::renren::sixin::account::StringResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__StringResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::BaseResultPtr
IceDelegateM::com::renren::sixin::account::MiscService::setAppId(::Ice::Long userId, ::Ice::Int appId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__MiscService__setAppId_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(appId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::BaseResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__BaseResultPtr, &__ret);
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
IceDelegateM::com::renren::sixin::account::MiscService::syncRenrenAccount(::Ice::Int renrenUid, ::Ice::Int appId, ::Ice::Int callerType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__MiscService__syncRenrenAccount_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(renrenUid);
        __os->write(appId);
        __os->write(callerType);
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

::com::renren::sixin::account::VersionResultPtr
IceDelegateM::com::renren::sixin::account::MiscService::getAppVersion(::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__MiscService__getAppVersion_name, ::Ice::Normal, __context);
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
    ::com::renren::sixin::account::VersionResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__VersionResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::BaseResultPtr
IceDelegateD::com::renren::sixin::account::MiscService::setLanguage(::Ice::Long userId, const ::std::string& language, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BaseResultPtr& __result, ::Ice::Long userId, const ::std::string& language, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_language(language)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::MiscService* servant = dynamic_cast< ::com::renren::sixin::account::MiscService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->setLanguage(_m_userId, _m_language, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BaseResultPtr& _result;
        ::Ice::Long _m_userId;
        const ::std::string& _m_language;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__MiscService__setLanguage_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BaseResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, language, __current);
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

::com::renren::sixin::account::BaseResultPtr
IceDelegateD::com::renren::sixin::account::MiscService::setOriginalAppId(const ::std::string& alias, ::Ice::Int originalAppId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BaseResultPtr& __result, const ::std::string& alias, ::Ice::Int originalAppId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_alias(alias),
            _m_originalAppId(originalAppId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::MiscService* servant = dynamic_cast< ::com::renren::sixin::account::MiscService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->setOriginalAppId(_m_alias, _m_originalAppId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BaseResultPtr& _result;
        const ::std::string& _m_alias;
        ::Ice::Int _m_originalAppId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__MiscService__setOriginalAppId_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BaseResultPtr __result;
    try
    {
        _DirectI __direct(__result, alias, originalAppId, __current);
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

::com::renren::sixin::account::StringResultPtr
IceDelegateD::com::renren::sixin::account::MiscService::getLanguage(::Ice::Long userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::StringResultPtr& __result, ::Ice::Long userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::MiscService* servant = dynamic_cast< ::com::renren::sixin::account::MiscService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getLanguage(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::StringResultPtr& _result;
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__MiscService__getLanguage_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::StringResultPtr __result;
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

::com::renren::sixin::account::BaseResultPtr
IceDelegateD::com::renren::sixin::account::MiscService::setAppId(::Ice::Long userId, ::Ice::Int appId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BaseResultPtr& __result, ::Ice::Long userId, ::Ice::Int appId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_appId(appId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::MiscService* servant = dynamic_cast< ::com::renren::sixin::account::MiscService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->setAppId(_m_userId, _m_appId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BaseResultPtr& _result;
        ::Ice::Long _m_userId;
        ::Ice::Int _m_appId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__MiscService__setAppId_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BaseResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, appId, __current);
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
IceDelegateD::com::renren::sixin::account::MiscService::syncRenrenAccount(::Ice::Int renrenUid, ::Ice::Int appId, ::Ice::Int callerType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int renrenUid, ::Ice::Int appId, ::Ice::Int callerType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_renrenUid(renrenUid),
            _m_appId(appId),
            _m_callerType(callerType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::MiscService* servant = dynamic_cast< ::com::renren::sixin::account::MiscService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->syncRenrenAccount(_m_renrenUid, _m_appId, _m_callerType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_renrenUid;
        ::Ice::Int _m_appId;
        ::Ice::Int _m_callerType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__MiscService__syncRenrenAccount_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(renrenUid, appId, callerType, __current);
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

::com::renren::sixin::account::VersionResultPtr
IceDelegateD::com::renren::sixin::account::MiscService::getAppVersion(::Ice::Long userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::VersionResultPtr& __result, ::Ice::Long userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::MiscService* servant = dynamic_cast< ::com::renren::sixin::account::MiscService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getAppVersion(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::VersionResultPtr& _result;
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__MiscService__getAppVersion_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::VersionResultPtr __result;
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

com::renren::sixin::account::VersionResult::VersionResult(bool __ice_success, ::com::renren::sixin::account::AccountErrorCodeEnum __ice_errorCode, const ::std::string& __ice_errorMessage, ::com::renren::sixin::account::AppCatalogEnum __ice_appCatalog, const ::std::string& __ice_version) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#else
    ::com::renren::sixin::account::BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#endif
,
    appCatalog(__ice_appCatalog),
    version(__ice_version)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::VersionResult::ice_clone() const
{
    ::com::renren::sixin::account::VersionResultPtr __p = new ::com::renren::sixin::account::VersionResult(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__VersionResult_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseResult",
    "::com::renren::sixin::account::VersionResult"
};

bool
com::renren::sixin::account::VersionResult::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__VersionResult_ids, __com__renren__sixin__account__VersionResult_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::VersionResult::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__VersionResult_ids[0], &__com__renren__sixin__account__VersionResult_ids[3]);
}

const ::std::string&
com::renren::sixin::account::VersionResult::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__VersionResult_ids[2];
}

const ::std::string&
com::renren::sixin::account::VersionResult::ice_staticId()
{
    return __com__renren__sixin__account__VersionResult_ids[2];
}

void
com::renren::sixin::account::VersionResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    ::com::renren::sixin::account::__write(__os, appCatalog);
    __os->write(version);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__write(__os);
#else
    ::com::renren::sixin::account::BaseResult::__write(__os);
#endif
}

void
com::renren::sixin::account::VersionResult::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    ::com::renren::sixin::account::__read(__is, appCatalog);
    __is->read(version);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseResult::__read(__is, true);
#endif
}

void
com::renren::sixin::account::VersionResult::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::VersionResult was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::VersionResult::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::VersionResult was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__VersionResult : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::VersionResult::ice_staticId());
        return new ::com::renren::sixin::account::VersionResult;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__VersionResult_Ptr = new __F__com__renren__sixin__account__VersionResult;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::VersionResult::ice_factory()
{
    return __F__com__renren__sixin__account__VersionResult_Ptr;
}

class __F__com__renren__sixin__account__VersionResult__Init
{
public:

    __F__com__renren__sixin__account__VersionResult__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::VersionResult::ice_staticId(), ::com::renren::sixin::account::VersionResult::ice_factory());
    }

    ~__F__com__renren__sixin__account__VersionResult__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::VersionResult::ice_staticId());
    }
};

static __F__com__renren__sixin__account__VersionResult__Init __F__com__renren__sixin__account__VersionResult__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__VersionResult__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__VersionResultPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::VersionResultPtr* p = static_cast< ::com::renren::sixin::account::VersionResultPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::VersionResultPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::VersionResult::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::VersionResult& l, const ::com::renren::sixin::account::VersionResult& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::VersionResult& l, const ::com::renren::sixin::account::VersionResult& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
com::renren::sixin::account::MiscService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__renren__sixin__account__MiscService_ids[2] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::MiscService"
};

bool
com::renren::sixin::account::MiscService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__MiscService_ids, __com__renren__sixin__account__MiscService_ids + 2, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::MiscService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__MiscService_ids[0], &__com__renren__sixin__account__MiscService_ids[2]);
}

const ::std::string&
com::renren::sixin::account::MiscService::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__MiscService_ids[1];
}

const ::std::string&
com::renren::sixin::account::MiscService::ice_staticId()
{
    return __com__renren__sixin__account__MiscService_ids[1];
}

::Ice::DispatchStatus
com::renren::sixin::account::MiscService::___setLanguage(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::std::string language;
    __is->read(userId);
    __is->read(language);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BaseResultPtr __ret = setLanguage(userId, language, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::MiscService::___setOriginalAppId(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string alias;
    ::Ice::Int originalAppId;
    __is->read(alias);
    __is->read(originalAppId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BaseResultPtr __ret = setOriginalAppId(alias, originalAppId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::MiscService::___getLanguage(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::StringResultPtr __ret = getLanguage(userId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::MiscService::___setAppId(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Int appId;
    __is->read(userId);
    __is->read(appId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BaseResultPtr __ret = setAppId(userId, appId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::MiscService::___syncRenrenAccount(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int renrenUid;
    ::Ice::Int appId;
    ::Ice::Int callerType;
    __is->read(renrenUid);
    __is->read(appId);
    __is->read(callerType);
    __is->endReadEncaps();
    syncRenrenAccount(renrenUid, appId, callerType, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::MiscService::___getAppVersion(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::VersionResultPtr __ret = getAppVersion(userId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

static ::std::string __com__renren__sixin__account__MiscService_all[] =
{
    "getAppVersion",
    "getLanguage",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "setAppId",
    "setLanguage",
    "setOriginalAppId",
    "syncRenrenAccount"
};

::Ice::DispatchStatus
com::renren::sixin::account::MiscService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__renren__sixin__account__MiscService_all, __com__renren__sixin__account__MiscService_all + 10, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__renren__sixin__account__MiscService_all)
    {
        case 0:
        {
            return ___getAppVersion(in, current);
        }
        case 1:
        {
            return ___getLanguage(in, current);
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
            return ___setAppId(in, current);
        }
        case 7:
        {
            return ___setLanguage(in, current);
        }
        case 8:
        {
            return ___setOriginalAppId(in, current);
        }
        case 9:
        {
            return ___syncRenrenAccount(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::renren::sixin::account::MiscService::__write(::IceInternal::BasicStream* __os) const
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
com::renren::sixin::account::MiscService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::renren::sixin::account::MiscService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::MiscService was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::MiscService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::MiscService was not generated with stream support";
    throw ex;
}

void 
com::renren::sixin::account::__patch__MiscServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::MiscServicePtr* p = static_cast< ::com::renren::sixin::account::MiscServicePtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::MiscServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::MiscService::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::MiscService& l, const ::com::renren::sixin::account::MiscService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::MiscService& l, const ::com::renren::sixin::account::MiscService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
