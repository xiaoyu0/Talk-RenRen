// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `loginService.ice'

#include <loginService.h>
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

static const ::std::string __com__renren__sixin__account__LoginService__commonLogin_name = "commonLogin";

static const ::std::string __com__renren__sixin__account__LoginService__renrenLogin_name = "renrenLogin";

static const ::std::string __com__renren__sixin__account__LoginService__thirdPartyLogin_name = "thirdPartyLogin";

static const ::std::string __com__renren__sixin__account__LoginService__logout_name = "logout";

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::LoginResult* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::LoginResult* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::LoginService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::LoginService* p) { return p; }

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::LoginResultPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::LoginResult;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::LoginServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::LoginService;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__write(::IceInternal::BasicStream* __os, ::com::renren::sixin::account::OauthSiteEnum v)
{
    __os->write(static_cast< ::Ice::Byte>(v), 2);
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::OauthSiteEnum& v)
{
    ::Ice::Byte val;
    __is->read(val, 2);
    v = static_cast< ::com::renren::sixin::account::OauthSiteEnum>(val);
}

const ::std::string&
IceProxy::com::renren::sixin::account::LoginResult::ice_staticId()
{
    return ::com::renren::sixin::account::LoginResult::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::LoginResult::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::LoginResult);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::LoginResult::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::LoginResult);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::LoginResult::__newInstance() const
{
    return new LoginResult;
}

::com::renren::sixin::account::LoginResultPtr
IceProxy::com::renren::sixin::account::LoginService::commonLogin(const ::std::string& account, const ::std::string& password, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__LoginService__commonLogin_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::LoginService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::LoginService*>(__delBase.get());
            return __del->commonLogin(account, password, __ctx);
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

::com::renren::sixin::account::LoginResultPtr
IceProxy::com::renren::sixin::account::LoginService::renrenLogin(const ::std::string& account, const ::std::string& password, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__LoginService__renrenLogin_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::LoginService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::LoginService*>(__delBase.get());
            return __del->renrenLogin(account, password, __ctx);
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

::com::renren::sixin::account::LoginResultPtr
IceProxy::com::renren::sixin::account::LoginService::thirdPartyLogin(const ::com::renren::sixin::account::TokenInfoPtr& token, ::com::renren::sixin::account::BindAccountEnum accountEnum, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__LoginService__thirdPartyLogin_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::LoginService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::LoginService*>(__delBase.get());
            return __del->thirdPartyLogin(token, accountEnum, __ctx);
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

::com::renren::sixin::account::LongResultPtr
IceProxy::com::renren::sixin::account::LoginService::logout(::Ice::Long userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__LoginService__logout_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::LoginService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::LoginService*>(__delBase.get());
            return __del->logout(userId, __ctx);
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
IceProxy::com::renren::sixin::account::LoginService::ice_staticId()
{
    return ::com::renren::sixin::account::LoginService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::LoginService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::LoginService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::LoginService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::LoginService);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::LoginService::__newInstance() const
{
    return new LoginService;
}

::com::renren::sixin::account::LoginResultPtr
IceDelegateM::com::renren::sixin::account::LoginService::commonLogin(const ::std::string& account, const ::std::string& password, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__LoginService__commonLogin_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(account);
        __os->write(password);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::LoginResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__LoginResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::LoginResultPtr
IceDelegateM::com::renren::sixin::account::LoginService::renrenLogin(const ::std::string& account, const ::std::string& password, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__LoginService__renrenLogin_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(account);
        __os->write(password);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::LoginResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__LoginResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::LoginResultPtr
IceDelegateM::com::renren::sixin::account::LoginService::thirdPartyLogin(const ::com::renren::sixin::account::TokenInfoPtr& token, ::com::renren::sixin::account::BindAccountEnum accountEnum, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__LoginService__thirdPartyLogin_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(token.get())));
        ::com::renren::sixin::account::__write(__os, accountEnum);
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::LoginResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__LoginResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::LongResultPtr
IceDelegateM::com::renren::sixin::account::LoginService::logout(::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__LoginService__logout_name, ::Ice::Normal, __context);
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
    ::com::renren::sixin::account::LongResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__LongResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::LoginResultPtr
IceDelegateD::com::renren::sixin::account::LoginService::commonLogin(const ::std::string& account, const ::std::string& password, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::LoginResultPtr& __result, const ::std::string& account, const ::std::string& password, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_account(account),
            _m_password(password)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::LoginService* servant = dynamic_cast< ::com::renren::sixin::account::LoginService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->commonLogin(_m_account, _m_password, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::LoginResultPtr& _result;
        const ::std::string& _m_account;
        const ::std::string& _m_password;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__LoginService__commonLogin_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::LoginResultPtr __result;
    try
    {
        _DirectI __direct(__result, account, password, __current);
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

::com::renren::sixin::account::LoginResultPtr
IceDelegateD::com::renren::sixin::account::LoginService::renrenLogin(const ::std::string& account, const ::std::string& password, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::LoginResultPtr& __result, const ::std::string& account, const ::std::string& password, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_account(account),
            _m_password(password)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::LoginService* servant = dynamic_cast< ::com::renren::sixin::account::LoginService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->renrenLogin(_m_account, _m_password, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::LoginResultPtr& _result;
        const ::std::string& _m_account;
        const ::std::string& _m_password;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__LoginService__renrenLogin_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::LoginResultPtr __result;
    try
    {
        _DirectI __direct(__result, account, password, __current);
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

::com::renren::sixin::account::LoginResultPtr
IceDelegateD::com::renren::sixin::account::LoginService::thirdPartyLogin(const ::com::renren::sixin::account::TokenInfoPtr& token, ::com::renren::sixin::account::BindAccountEnum accountEnum, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::LoginResultPtr& __result, const ::com::renren::sixin::account::TokenInfoPtr& token, ::com::renren::sixin::account::BindAccountEnum accountEnum, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_token(token),
            _m_accountEnum(accountEnum)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::LoginService* servant = dynamic_cast< ::com::renren::sixin::account::LoginService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->thirdPartyLogin(_m_token, _m_accountEnum, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::LoginResultPtr& _result;
        const ::com::renren::sixin::account::TokenInfoPtr& _m_token;
        ::com::renren::sixin::account::BindAccountEnum _m_accountEnum;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__LoginService__thirdPartyLogin_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::LoginResultPtr __result;
    try
    {
        _DirectI __direct(__result, token, accountEnum, __current);
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

::com::renren::sixin::account::LongResultPtr
IceDelegateD::com::renren::sixin::account::LoginService::logout(::Ice::Long userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::LongResultPtr& __result, ::Ice::Long userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::LoginService* servant = dynamic_cast< ::com::renren::sixin::account::LoginService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->logout(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::LongResultPtr& _result;
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__LoginService__logout_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::LongResultPtr __result;
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

com::renren::sixin::account::LoginResult::LoginResult(bool __ice_success, ::com::renren::sixin::account::AccountErrorCodeEnum __ice_errorCode, const ::std::string& __ice_errorMessage, ::Ice::Long __ice_userId, ::Ice::Int __ice_count) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#else
    ::com::renren::sixin::account::BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#endif
,
    userId(__ice_userId),
    count(__ice_count)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::LoginResult::ice_clone() const
{
    ::com::renren::sixin::account::LoginResultPtr __p = new ::com::renren::sixin::account::LoginResult(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__LoginResult_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseResult",
    "::com::renren::sixin::account::LoginResult"
};

bool
com::renren::sixin::account::LoginResult::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__LoginResult_ids, __com__renren__sixin__account__LoginResult_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::LoginResult::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__LoginResult_ids[0], &__com__renren__sixin__account__LoginResult_ids[3]);
}

const ::std::string&
com::renren::sixin::account::LoginResult::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__LoginResult_ids[2];
}

const ::std::string&
com::renren::sixin::account::LoginResult::ice_staticId()
{
    return __com__renren__sixin__account__LoginResult_ids[2];
}

void
com::renren::sixin::account::LoginResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(userId);
    __os->write(count);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__write(__os);
#else
    ::com::renren::sixin::account::BaseResult::__write(__os);
#endif
}

void
com::renren::sixin::account::LoginResult::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(userId);
    __is->read(count);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseResult::__read(__is, true);
#endif
}

void
com::renren::sixin::account::LoginResult::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::LoginResult was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::LoginResult::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::LoginResult was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__LoginResult : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::LoginResult::ice_staticId());
        return new ::com::renren::sixin::account::LoginResult;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__LoginResult_Ptr = new __F__com__renren__sixin__account__LoginResult;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::LoginResult::ice_factory()
{
    return __F__com__renren__sixin__account__LoginResult_Ptr;
}

class __F__com__renren__sixin__account__LoginResult__Init
{
public:

    __F__com__renren__sixin__account__LoginResult__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::LoginResult::ice_staticId(), ::com::renren::sixin::account::LoginResult::ice_factory());
    }

    ~__F__com__renren__sixin__account__LoginResult__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::LoginResult::ice_staticId());
    }
};

static __F__com__renren__sixin__account__LoginResult__Init __F__com__renren__sixin__account__LoginResult__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__LoginResult__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__LoginResultPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::LoginResultPtr* p = static_cast< ::com::renren::sixin::account::LoginResultPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::LoginResultPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::LoginResult::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::LoginResult& l, const ::com::renren::sixin::account::LoginResult& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::LoginResult& l, const ::com::renren::sixin::account::LoginResult& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
com::renren::sixin::account::LoginService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__renren__sixin__account__LoginService_ids[2] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::LoginService"
};

bool
com::renren::sixin::account::LoginService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__LoginService_ids, __com__renren__sixin__account__LoginService_ids + 2, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::LoginService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__LoginService_ids[0], &__com__renren__sixin__account__LoginService_ids[2]);
}

const ::std::string&
com::renren::sixin::account::LoginService::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__LoginService_ids[1];
}

const ::std::string&
com::renren::sixin::account::LoginService::ice_staticId()
{
    return __com__renren__sixin__account__LoginService_ids[1];
}

::Ice::DispatchStatus
com::renren::sixin::account::LoginService::___commonLogin(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string account;
    ::std::string password;
    __is->read(account);
    __is->read(password);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::LoginResultPtr __ret = commonLogin(account, password, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::LoginService::___renrenLogin(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string account;
    ::std::string password;
    __is->read(account);
    __is->read(password);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::LoginResultPtr __ret = renrenLogin(account, password, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::LoginService::___thirdPartyLogin(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::renren::sixin::account::TokenInfoPtr token;
    ::com::renren::sixin::account::BindAccountEnum accountEnum;
    __is->read(::com::renren::sixin::account::__patch__TokenInfoPtr, &token);
    ::com::renren::sixin::account::__read(__is, accountEnum);
    __is->readPendingObjects();
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::LoginResultPtr __ret = thirdPartyLogin(token, accountEnum, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::LoginService::___logout(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::LongResultPtr __ret = logout(userId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

static ::std::string __com__renren__sixin__account__LoginService_all[] =
{
    "commonLogin",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "logout",
    "renrenLogin",
    "thirdPartyLogin"
};

::Ice::DispatchStatus
com::renren::sixin::account::LoginService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__renren__sixin__account__LoginService_all, __com__renren__sixin__account__LoginService_all + 8, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__renren__sixin__account__LoginService_all)
    {
        case 0:
        {
            return ___commonLogin(in, current);
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
            return ___logout(in, current);
        }
        case 6:
        {
            return ___renrenLogin(in, current);
        }
        case 7:
        {
            return ___thirdPartyLogin(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::renren::sixin::account::LoginService::__write(::IceInternal::BasicStream* __os) const
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
com::renren::sixin::account::LoginService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::renren::sixin::account::LoginService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::LoginService was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::LoginService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::LoginService was not generated with stream support";
    throw ex;
}

void 
com::renren::sixin::account::__patch__LoginServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::LoginServicePtr* p = static_cast< ::com::renren::sixin::account::LoginServicePtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::LoginServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::LoginService::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::LoginService& l, const ::com::renren::sixin::account::LoginService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::LoginService& l, const ::com::renren::sixin::account::LoginService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
