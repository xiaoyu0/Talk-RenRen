// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `accountService.ice'

#include <accountService.h>
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

static const ::std::string __com__renren__sixin__account__AccountService__getPrivacy_name = "getPrivacy";

static const ::std::string __com__renren__sixin__account__AccountService__getProfile_name = "getProfile";

static const ::std::string __com__renren__sixin__account__AccountService__setPrivacy_name = "setPrivacy";

static const ::std::string __com__renren__sixin__account__AccountService__bindAlias_name = "bindAlias";

static const ::std::string __com__renren__sixin__account__AccountService__getMD5Password_name = "getMD5Password";

static const ::std::string __com__renren__sixin__account__AccountService__isBindAlias_name = "isBindAlias";

static const ::std::string __com__renren__sixin__account__AccountService__isUserExist_name = "isUserExist";

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::PrivacyResult* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::PrivacyResult* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::SxProfileResult* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::SxProfileResult* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::AccountService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::AccountService* p) { return p; }

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::PrivacyResultPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::PrivacyResult;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::SxProfileResultPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::SxProfileResult;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::AccountServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::AccountService;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::com::renren::sixin::account::PrivacyResult::ice_staticId()
{
    return ::com::renren::sixin::account::PrivacyResult::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::PrivacyResult::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::PrivacyResult);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::PrivacyResult::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::PrivacyResult);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::PrivacyResult::__newInstance() const
{
    return new PrivacyResult;
}

const ::std::string&
IceProxy::com::renren::sixin::account::SxProfileResult::ice_staticId()
{
    return ::com::renren::sixin::account::SxProfileResult::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::SxProfileResult::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::SxProfileResult);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::SxProfileResult::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::SxProfileResult);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::SxProfileResult::__newInstance() const
{
    return new SxProfileResult;
}

::com::renren::sixin::account::PrivacyResultPtr
IceProxy::com::renren::sixin::account::AccountService::getPrivacy(::Ice::Long userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__AccountService__getPrivacy_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::AccountService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::AccountService*>(__delBase.get());
            return __del->getPrivacy(userId, __ctx);
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

::com::renren::sixin::account::SxProfileResultPtr
IceProxy::com::renren::sixin::account::AccountService::getProfile(::Ice::Long userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__AccountService__getProfile_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::AccountService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::AccountService*>(__delBase.get());
            return __del->getProfile(userId, __ctx);
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
IceProxy::com::renren::sixin::account::AccountService::setPrivacy(::Ice::Long userId, const ::com::renren::sixin::account::PrivacyInfoPtr& privacy, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__AccountService__setPrivacy_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::AccountService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::AccountService*>(__delBase.get());
            return __del->setPrivacy(userId, privacy, __ctx);
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
IceProxy::com::renren::sixin::account::AccountService::bindAlias(::Ice::Long userId, const ::std::string& newOutAccount, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__AccountService__bindAlias_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::AccountService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::AccountService*>(__delBase.get());
            return __del->bindAlias(userId, newOutAccount, __ctx);
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
IceProxy::com::renren::sixin::account::AccountService::getMD5Password(::Ice::Long userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__AccountService__getMD5Password_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::AccountService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::AccountService*>(__delBase.get());
            return __del->getMD5Password(userId, __ctx);
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

::com::renren::sixin::account::BoolResultPtr
IceProxy::com::renren::sixin::account::AccountService::isBindAlias(::Ice::Long sixinID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__AccountService__isBindAlias_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::AccountService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::AccountService*>(__delBase.get());
            return __del->isBindAlias(sixinID, accountType, __ctx);
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

::com::renren::sixin::account::BoolResultPtr
IceProxy::com::renren::sixin::account::AccountService::isUserExist(::Ice::Long sixinID, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__AccountService__isUserExist_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::AccountService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::AccountService*>(__delBase.get());
            return __del->isUserExist(sixinID, __ctx);
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
IceProxy::com::renren::sixin::account::AccountService::ice_staticId()
{
    return ::com::renren::sixin::account::AccountService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::AccountService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::AccountService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::AccountService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::AccountService);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::AccountService::__newInstance() const
{
    return new AccountService;
}

::com::renren::sixin::account::PrivacyResultPtr
IceDelegateM::com::renren::sixin::account::AccountService::getPrivacy(::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__AccountService__getPrivacy_name, ::Ice::Normal, __context);
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
    ::com::renren::sixin::account::PrivacyResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__PrivacyResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::SxProfileResultPtr
IceDelegateM::com::renren::sixin::account::AccountService::getProfile(::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__AccountService__getProfile_name, ::Ice::Normal, __context);
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
    ::com::renren::sixin::account::SxProfileResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__SxProfileResultPtr, &__ret);
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
IceDelegateM::com::renren::sixin::account::AccountService::setPrivacy(::Ice::Long userId, const ::com::renren::sixin::account::PrivacyInfoPtr& privacy, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__AccountService__setPrivacy_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(privacy.get())));
        __os->writePendingObjects();
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
IceDelegateM::com::renren::sixin::account::AccountService::bindAlias(::Ice::Long userId, const ::std::string& newOutAccount, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__AccountService__bindAlias_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(newOutAccount);
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
IceDelegateM::com::renren::sixin::account::AccountService::getMD5Password(::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__AccountService__getMD5Password_name, ::Ice::Normal, __context);
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

::com::renren::sixin::account::BoolResultPtr
IceDelegateM::com::renren::sixin::account::AccountService::isBindAlias(::Ice::Long sixinID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__AccountService__isBindAlias_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sixinID);
        ::com::renren::sixin::account::__write(__os, accountType);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::BoolResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__BoolResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::BoolResultPtr
IceDelegateM::com::renren::sixin::account::AccountService::isUserExist(::Ice::Long sixinID, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__AccountService__isUserExist_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sixinID);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::BoolResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__BoolResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::PrivacyResultPtr
IceDelegateD::com::renren::sixin::account::AccountService::getPrivacy(::Ice::Long userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::PrivacyResultPtr& __result, ::Ice::Long userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::AccountService* servant = dynamic_cast< ::com::renren::sixin::account::AccountService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getPrivacy(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::PrivacyResultPtr& _result;
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__AccountService__getPrivacy_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::PrivacyResultPtr __result;
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

::com::renren::sixin::account::SxProfileResultPtr
IceDelegateD::com::renren::sixin::account::AccountService::getProfile(::Ice::Long userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::SxProfileResultPtr& __result, ::Ice::Long userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::AccountService* servant = dynamic_cast< ::com::renren::sixin::account::AccountService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getProfile(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::SxProfileResultPtr& _result;
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__AccountService__getProfile_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::SxProfileResultPtr __result;
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
IceDelegateD::com::renren::sixin::account::AccountService::setPrivacy(::Ice::Long userId, const ::com::renren::sixin::account::PrivacyInfoPtr& privacy, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BaseResultPtr& __result, ::Ice::Long userId, const ::com::renren::sixin::account::PrivacyInfoPtr& privacy, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_privacy(privacy)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::AccountService* servant = dynamic_cast< ::com::renren::sixin::account::AccountService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->setPrivacy(_m_userId, _m_privacy, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BaseResultPtr& _result;
        ::Ice::Long _m_userId;
        const ::com::renren::sixin::account::PrivacyInfoPtr& _m_privacy;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__AccountService__setPrivacy_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BaseResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, privacy, __current);
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
IceDelegateD::com::renren::sixin::account::AccountService::bindAlias(::Ice::Long userId, const ::std::string& newOutAccount, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BaseResultPtr& __result, ::Ice::Long userId, const ::std::string& newOutAccount, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_newOutAccount(newOutAccount)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::AccountService* servant = dynamic_cast< ::com::renren::sixin::account::AccountService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->bindAlias(_m_userId, _m_newOutAccount, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BaseResultPtr& _result;
        ::Ice::Long _m_userId;
        const ::std::string& _m_newOutAccount;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__AccountService__bindAlias_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BaseResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, newOutAccount, __current);
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
IceDelegateD::com::renren::sixin::account::AccountService::getMD5Password(::Ice::Long userId, const ::Ice::Context* __context)
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
            ::com::renren::sixin::account::AccountService* servant = dynamic_cast< ::com::renren::sixin::account::AccountService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getMD5Password(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::StringResultPtr& _result;
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__AccountService__getMD5Password_name, ::Ice::Normal, __context);
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

::com::renren::sixin::account::BoolResultPtr
IceDelegateD::com::renren::sixin::account::AccountService::isBindAlias(::Ice::Long sixinID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BoolResultPtr& __result, ::Ice::Long sixinID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_sixinID(sixinID),
            _m_accountType(accountType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::AccountService* servant = dynamic_cast< ::com::renren::sixin::account::AccountService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->isBindAlias(_m_sixinID, _m_accountType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BoolResultPtr& _result;
        ::Ice::Long _m_sixinID;
        ::com::renren::sixin::account::BindAccountEnum _m_accountType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__AccountService__isBindAlias_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BoolResultPtr __result;
    try
    {
        _DirectI __direct(__result, sixinID, accountType, __current);
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

::com::renren::sixin::account::BoolResultPtr
IceDelegateD::com::renren::sixin::account::AccountService::isUserExist(::Ice::Long sixinID, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BoolResultPtr& __result, ::Ice::Long sixinID, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_sixinID(sixinID)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::AccountService* servant = dynamic_cast< ::com::renren::sixin::account::AccountService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->isUserExist(_m_sixinID, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BoolResultPtr& _result;
        ::Ice::Long _m_sixinID;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__AccountService__isUserExist_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BoolResultPtr __result;
    try
    {
        _DirectI __direct(__result, sixinID, __current);
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

com::renren::sixin::account::PrivacyResult::PrivacyResult(bool __ice_success, ::com::renren::sixin::account::AccountErrorCodeEnum __ice_errorCode, const ::std::string& __ice_errorMessage, const ::com::renren::sixin::account::PrivacyInfoPtr& __ice_privacy) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#else
    ::com::renren::sixin::account::BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#endif
,
    privacy(__ice_privacy)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::PrivacyResult::ice_clone() const
{
    ::com::renren::sixin::account::PrivacyResultPtr __p = new ::com::renren::sixin::account::PrivacyResult(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__PrivacyResult_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseResult",
    "::com::renren::sixin::account::PrivacyResult"
};

bool
com::renren::sixin::account::PrivacyResult::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__PrivacyResult_ids, __com__renren__sixin__account__PrivacyResult_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::PrivacyResult::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__PrivacyResult_ids[0], &__com__renren__sixin__account__PrivacyResult_ids[3]);
}

const ::std::string&
com::renren::sixin::account::PrivacyResult::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__PrivacyResult_ids[2];
}

const ::std::string&
com::renren::sixin::account::PrivacyResult::ice_staticId()
{
    return __com__renren__sixin__account__PrivacyResult_ids[2];
}

void
com::renren::sixin::account::PrivacyResult::__incRef()
{
    __gcIncRef();
}

void
com::renren::sixin::account::PrivacyResult::__decRef()
{
    __gcDecRef();
}

void
com::renren::sixin::account::PrivacyResult::__addObject(::IceInternal::GCCountMap& _c)
{
    ::IceInternal::GCCountMap::iterator pos = _c.find(this);
    if(pos == _c.end())
    {
        _c[this] = 1;
    }
    else
    {
        ++pos->second;
    }
}

bool
com::renren::sixin::account::PrivacyResult::__usesClasses()
{
    return true;
}

void
com::renren::sixin::account::PrivacyResult::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(privacy)
    {
        ::IceInternal::upCast(privacy.get())->__addObject(_c);
    }
}

void
com::renren::sixin::account::PrivacyResult::__gcClear()
{
    if(privacy)
    {
        if(::IceInternal::upCast(privacy.get())->__usesClasses())
        {
            ::IceInternal::upCast(privacy.get())->__decRefUnsafe();
            privacy.__clearHandleUnsafe();
        }
        else
        {
            privacy = 0;
        }
    }
}

void
com::renren::sixin::account::PrivacyResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(privacy.get())));
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__write(__os);
#else
    ::com::renren::sixin::account::BaseResult::__write(__os);
#endif
}

void
com::renren::sixin::account::PrivacyResult::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::com::renren::sixin::account::__patch__PrivacyInfoPtr, &privacy);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseResult::__read(__is, true);
#endif
}

void
com::renren::sixin::account::PrivacyResult::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::PrivacyResult was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::PrivacyResult::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::PrivacyResult was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__PrivacyResult : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::PrivacyResult::ice_staticId());
        return new ::com::renren::sixin::account::PrivacyResult;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__PrivacyResult_Ptr = new __F__com__renren__sixin__account__PrivacyResult;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::PrivacyResult::ice_factory()
{
    return __F__com__renren__sixin__account__PrivacyResult_Ptr;
}

class __F__com__renren__sixin__account__PrivacyResult__Init
{
public:

    __F__com__renren__sixin__account__PrivacyResult__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::PrivacyResult::ice_staticId(), ::com::renren::sixin::account::PrivacyResult::ice_factory());
    }

    ~__F__com__renren__sixin__account__PrivacyResult__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::PrivacyResult::ice_staticId());
    }
};

static __F__com__renren__sixin__account__PrivacyResult__Init __F__com__renren__sixin__account__PrivacyResult__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__PrivacyResult__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__PrivacyResultPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::PrivacyResultPtr* p = static_cast< ::com::renren::sixin::account::PrivacyResultPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::PrivacyResultPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::PrivacyResult::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::PrivacyResult& l, const ::com::renren::sixin::account::PrivacyResult& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::PrivacyResult& l, const ::com::renren::sixin::account::PrivacyResult& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::renren::sixin::account::SxProfileResult::SxProfileResult(bool __ice_success, ::com::renren::sixin::account::AccountErrorCodeEnum __ice_errorCode, const ::std::string& __ice_errorMessage, const ::com::renren::sixin::account::SixinProfilePtr& __ice_sxProfile) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#else
    ::com::renren::sixin::account::BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#endif
,
    sxProfile(__ice_sxProfile)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::SxProfileResult::ice_clone() const
{
    ::com::renren::sixin::account::SxProfileResultPtr __p = new ::com::renren::sixin::account::SxProfileResult(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__SxProfileResult_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseResult",
    "::com::renren::sixin::account::SxProfileResult"
};

bool
com::renren::sixin::account::SxProfileResult::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__SxProfileResult_ids, __com__renren__sixin__account__SxProfileResult_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::SxProfileResult::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__SxProfileResult_ids[0], &__com__renren__sixin__account__SxProfileResult_ids[3]);
}

const ::std::string&
com::renren::sixin::account::SxProfileResult::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__SxProfileResult_ids[2];
}

const ::std::string&
com::renren::sixin::account::SxProfileResult::ice_staticId()
{
    return __com__renren__sixin__account__SxProfileResult_ids[2];
}

void
com::renren::sixin::account::SxProfileResult::__incRef()
{
    __gcIncRef();
}

void
com::renren::sixin::account::SxProfileResult::__decRef()
{
    __gcDecRef();
}

void
com::renren::sixin::account::SxProfileResult::__addObject(::IceInternal::GCCountMap& _c)
{
    ::IceInternal::GCCountMap::iterator pos = _c.find(this);
    if(pos == _c.end())
    {
        _c[this] = 1;
    }
    else
    {
        ++pos->second;
    }
}

bool
com::renren::sixin::account::SxProfileResult::__usesClasses()
{
    return true;
}

void
com::renren::sixin::account::SxProfileResult::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(sxProfile)
    {
        ::IceInternal::upCast(sxProfile.get())->__addObject(_c);
    }
}

void
com::renren::sixin::account::SxProfileResult::__gcClear()
{
    if(sxProfile)
    {
        if(::IceInternal::upCast(sxProfile.get())->__usesClasses())
        {
            ::IceInternal::upCast(sxProfile.get())->__decRefUnsafe();
            sxProfile.__clearHandleUnsafe();
        }
        else
        {
            sxProfile = 0;
        }
    }
}

void
com::renren::sixin::account::SxProfileResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(sxProfile.get())));
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__write(__os);
#else
    ::com::renren::sixin::account::BaseResult::__write(__os);
#endif
}

void
com::renren::sixin::account::SxProfileResult::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::com::renren::sixin::account::__patch__SixinProfilePtr, &sxProfile);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseResult::__read(__is, true);
#endif
}

void
com::renren::sixin::account::SxProfileResult::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::SxProfileResult was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::SxProfileResult::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::SxProfileResult was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__SxProfileResult : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::SxProfileResult::ice_staticId());
        return new ::com::renren::sixin::account::SxProfileResult;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__SxProfileResult_Ptr = new __F__com__renren__sixin__account__SxProfileResult;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::SxProfileResult::ice_factory()
{
    return __F__com__renren__sixin__account__SxProfileResult_Ptr;
}

class __F__com__renren__sixin__account__SxProfileResult__Init
{
public:

    __F__com__renren__sixin__account__SxProfileResult__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::SxProfileResult::ice_staticId(), ::com::renren::sixin::account::SxProfileResult::ice_factory());
    }

    ~__F__com__renren__sixin__account__SxProfileResult__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::SxProfileResult::ice_staticId());
    }
};

static __F__com__renren__sixin__account__SxProfileResult__Init __F__com__renren__sixin__account__SxProfileResult__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__SxProfileResult__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__SxProfileResultPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::SxProfileResultPtr* p = static_cast< ::com::renren::sixin::account::SxProfileResultPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::SxProfileResultPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::SxProfileResult::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::SxProfileResult& l, const ::com::renren::sixin::account::SxProfileResult& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::SxProfileResult& l, const ::com::renren::sixin::account::SxProfileResult& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
com::renren::sixin::account::AccountService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__renren__sixin__account__AccountService_ids[2] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::AccountService"
};

bool
com::renren::sixin::account::AccountService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__AccountService_ids, __com__renren__sixin__account__AccountService_ids + 2, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::AccountService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__AccountService_ids[0], &__com__renren__sixin__account__AccountService_ids[2]);
}

const ::std::string&
com::renren::sixin::account::AccountService::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__AccountService_ids[1];
}

const ::std::string&
com::renren::sixin::account::AccountService::ice_staticId()
{
    return __com__renren__sixin__account__AccountService_ids[1];
}

::Ice::DispatchStatus
com::renren::sixin::account::AccountService::___getPrivacy(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::PrivacyResultPtr __ret = getPrivacy(userId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::AccountService::___getProfile(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::SxProfileResultPtr __ret = getProfile(userId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::AccountService::___setPrivacy(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::com::renren::sixin::account::PrivacyInfoPtr privacy;
    __is->read(userId);
    __is->read(::com::renren::sixin::account::__patch__PrivacyInfoPtr, &privacy);
    __is->readPendingObjects();
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BaseResultPtr __ret = setPrivacy(userId, privacy, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::AccountService::___bindAlias(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::std::string newOutAccount;
    __is->read(userId);
    __is->read(newOutAccount);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BaseResultPtr __ret = bindAlias(userId, newOutAccount, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::AccountService::___getMD5Password(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::StringResultPtr __ret = getMD5Password(userId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::AccountService::___isBindAlias(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long sixinID;
    ::com::renren::sixin::account::BindAccountEnum accountType;
    __is->read(sixinID);
    ::com::renren::sixin::account::__read(__is, accountType);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BoolResultPtr __ret = isBindAlias(sixinID, accountType, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::AccountService::___isUserExist(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long sixinID;
    __is->read(sixinID);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BoolResultPtr __ret = isUserExist(sixinID, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

static ::std::string __com__renren__sixin__account__AccountService_all[] =
{
    "bindAlias",
    "getMD5Password",
    "getPrivacy",
    "getProfile",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "isBindAlias",
    "isUserExist",
    "setPrivacy"
};

::Ice::DispatchStatus
com::renren::sixin::account::AccountService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__renren__sixin__account__AccountService_all, __com__renren__sixin__account__AccountService_all + 11, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__renren__sixin__account__AccountService_all)
    {
        case 0:
        {
            return ___bindAlias(in, current);
        }
        case 1:
        {
            return ___getMD5Password(in, current);
        }
        case 2:
        {
            return ___getPrivacy(in, current);
        }
        case 3:
        {
            return ___getProfile(in, current);
        }
        case 4:
        {
            return ___ice_id(in, current);
        }
        case 5:
        {
            return ___ice_ids(in, current);
        }
        case 6:
        {
            return ___ice_isA(in, current);
        }
        case 7:
        {
            return ___ice_ping(in, current);
        }
        case 8:
        {
            return ___isBindAlias(in, current);
        }
        case 9:
        {
            return ___isUserExist(in, current);
        }
        case 10:
        {
            return ___setPrivacy(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::renren::sixin::account::AccountService::__write(::IceInternal::BasicStream* __os) const
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
com::renren::sixin::account::AccountService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::renren::sixin::account::AccountService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::AccountService was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::AccountService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::AccountService was not generated with stream support";
    throw ex;
}

void 
com::renren::sixin::account::__patch__AccountServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::AccountServicePtr* p = static_cast< ::com::renren::sixin::account::AccountServicePtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::AccountServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::AccountService::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::AccountService& l, const ::com::renren::sixin::account::AccountService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::AccountService& l, const ::com::renren::sixin::account::AccountService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
