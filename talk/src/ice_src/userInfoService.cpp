// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `userInfoService.ice'

#include <userInfoService.h>
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

static const ::std::string __com__renren__sixin__account__UserInfoService__uploadUserInfo_name = "uploadUserInfo";

static const ::std::string __com__renren__sixin__account__UserInfoService__downloadUserInfo_name = "downloadUserInfo";

static const ::std::string __com__renren__sixin__account__UserInfoService__updateHeadPhoto_name = "updateHeadPhoto";

static const ::std::string __com__renren__sixin__account__UserInfoService__getHeadPhoto_name = "getHeadPhoto";

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::UserInfoResult* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::UserInfoResult* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::HeadUrlResult* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::HeadUrlResult* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::UserInfoService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::UserInfoService* p) { return p; }

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::UserInfoResultPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::UserInfoResult;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::HeadUrlResultPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::HeadUrlResult;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::UserInfoServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::UserInfoService;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::com::renren::sixin::account::UserInfoResult::ice_staticId()
{
    return ::com::renren::sixin::account::UserInfoResult::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::UserInfoResult::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::UserInfoResult);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::UserInfoResult::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::UserInfoResult);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::UserInfoResult::__newInstance() const
{
    return new UserInfoResult;
}

const ::std::string&
IceProxy::com::renren::sixin::account::HeadUrlResult::ice_staticId()
{
    return ::com::renren::sixin::account::HeadUrlResult::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::HeadUrlResult::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::HeadUrlResult);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::HeadUrlResult::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::HeadUrlResult);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::HeadUrlResult::__newInstance() const
{
    return new HeadUrlResult;
}

::com::renren::sixin::account::BaseResultPtr
IceProxy::com::renren::sixin::account::UserInfoService::uploadUserInfo(const ::com::renren::sixin::account::SixinProfilePtr& profile, ::Ice::Int type, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__UserInfoService__uploadUserInfo_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::UserInfoService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::UserInfoService*>(__delBase.get());
            return __del->uploadUserInfo(profile, type, __ctx);
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

::com::renren::sixin::account::UserInfoResultPtr
IceProxy::com::renren::sixin::account::UserInfoService::downloadUserInfo(::Ice::Int userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__UserInfoService__downloadUserInfo_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::UserInfoService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::UserInfoService*>(__delBase.get());
            return __del->downloadUserInfo(userId, __ctx);
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
IceProxy::com::renren::sixin::account::UserInfoService::updateHeadPhoto(const ::com::renren::sixin::account::HeadUrlInfoPtr& headUrl, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__UserInfoService__updateHeadPhoto_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::UserInfoService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::UserInfoService*>(__delBase.get());
            return __del->updateHeadPhoto(headUrl, __ctx);
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

::com::renren::sixin::account::HeadUrlResultPtr
IceProxy::com::renren::sixin::account::UserInfoService::getHeadPhoto(::Ice::Long sixinID, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__UserInfoService__getHeadPhoto_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::UserInfoService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::UserInfoService*>(__delBase.get());
            return __del->getHeadPhoto(sixinID, __ctx);
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
IceProxy::com::renren::sixin::account::UserInfoService::ice_staticId()
{
    return ::com::renren::sixin::account::UserInfoService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::UserInfoService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::UserInfoService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::UserInfoService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::UserInfoService);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::UserInfoService::__newInstance() const
{
    return new UserInfoService;
}

::com::renren::sixin::account::BaseResultPtr
IceDelegateM::com::renren::sixin::account::UserInfoService::uploadUserInfo(const ::com::renren::sixin::account::SixinProfilePtr& profile, ::Ice::Int type, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__UserInfoService__uploadUserInfo_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(profile.get())));
        __os->write(type);
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

::com::renren::sixin::account::UserInfoResultPtr
IceDelegateM::com::renren::sixin::account::UserInfoService::downloadUserInfo(::Ice::Int userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__UserInfoService__downloadUserInfo_name, ::Ice::Normal, __context);
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
    ::com::renren::sixin::account::UserInfoResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__UserInfoResultPtr, &__ret);
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
IceDelegateM::com::renren::sixin::account::UserInfoService::updateHeadPhoto(const ::com::renren::sixin::account::HeadUrlInfoPtr& headUrl, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__UserInfoService__updateHeadPhoto_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(headUrl.get())));
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

::com::renren::sixin::account::HeadUrlResultPtr
IceDelegateM::com::renren::sixin::account::UserInfoService::getHeadPhoto(::Ice::Long sixinID, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__UserInfoService__getHeadPhoto_name, ::Ice::Normal, __context);
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
    ::com::renren::sixin::account::HeadUrlResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__HeadUrlResultPtr, &__ret);
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
IceDelegateD::com::renren::sixin::account::UserInfoService::uploadUserInfo(const ::com::renren::sixin::account::SixinProfilePtr& profile, ::Ice::Int type, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BaseResultPtr& __result, const ::com::renren::sixin::account::SixinProfilePtr& profile, ::Ice::Int type, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_profile(profile),
            _m_type(type)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::UserInfoService* servant = dynamic_cast< ::com::renren::sixin::account::UserInfoService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->uploadUserInfo(_m_profile, _m_type, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BaseResultPtr& _result;
        const ::com::renren::sixin::account::SixinProfilePtr& _m_profile;
        ::Ice::Int _m_type;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__UserInfoService__uploadUserInfo_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BaseResultPtr __result;
    try
    {
        _DirectI __direct(__result, profile, type, __current);
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

::com::renren::sixin::account::UserInfoResultPtr
IceDelegateD::com::renren::sixin::account::UserInfoService::downloadUserInfo(::Ice::Int userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::UserInfoResultPtr& __result, ::Ice::Int userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::UserInfoService* servant = dynamic_cast< ::com::renren::sixin::account::UserInfoService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->downloadUserInfo(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::UserInfoResultPtr& _result;
        ::Ice::Int _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__UserInfoService__downloadUserInfo_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::UserInfoResultPtr __result;
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
IceDelegateD::com::renren::sixin::account::UserInfoService::updateHeadPhoto(const ::com::renren::sixin::account::HeadUrlInfoPtr& headUrl, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BaseResultPtr& __result, const ::com::renren::sixin::account::HeadUrlInfoPtr& headUrl, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_headUrl(headUrl)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::UserInfoService* servant = dynamic_cast< ::com::renren::sixin::account::UserInfoService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->updateHeadPhoto(_m_headUrl, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BaseResultPtr& _result;
        const ::com::renren::sixin::account::HeadUrlInfoPtr& _m_headUrl;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__UserInfoService__updateHeadPhoto_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BaseResultPtr __result;
    try
    {
        _DirectI __direct(__result, headUrl, __current);
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

::com::renren::sixin::account::HeadUrlResultPtr
IceDelegateD::com::renren::sixin::account::UserInfoService::getHeadPhoto(::Ice::Long sixinID, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::HeadUrlResultPtr& __result, ::Ice::Long sixinID, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_sixinID(sixinID)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::UserInfoService* servant = dynamic_cast< ::com::renren::sixin::account::UserInfoService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getHeadPhoto(_m_sixinID, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::HeadUrlResultPtr& _result;
        ::Ice::Long _m_sixinID;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__UserInfoService__getHeadPhoto_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::HeadUrlResultPtr __result;
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

com::renren::sixin::account::UserInfoResult::UserInfoResult(bool __ice_success, ::com::renren::sixin::account::AccountErrorCodeEnum __ice_errorCode, const ::std::string& __ice_errorMessage, const ::com::renren::sixin::account::SixinProfilePtr& __ice_sixinInfo, const ::com::renren::sixin::account::PrivacyInfoPtr& __ice_privacy, const ::com::renren::sixin::account::BoundInfoList& __ice_boundList, const ::com::renren::sixin::account::HeadUrlInfoPtr& __ice_headUrl, const ::com::renren::sixin::account::ContactList& __ice_blackContact) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#else
    ::com::renren::sixin::account::BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#endif
,
    sixinInfo(__ice_sixinInfo),
    privacy(__ice_privacy),
    boundList(__ice_boundList),
    headUrl(__ice_headUrl),
    blackContact(__ice_blackContact)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::UserInfoResult::ice_clone() const
{
    ::com::renren::sixin::account::UserInfoResultPtr __p = new ::com::renren::sixin::account::UserInfoResult(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__UserInfoResult_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseResult",
    "::com::renren::sixin::account::UserInfoResult"
};

bool
com::renren::sixin::account::UserInfoResult::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__UserInfoResult_ids, __com__renren__sixin__account__UserInfoResult_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::UserInfoResult::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__UserInfoResult_ids[0], &__com__renren__sixin__account__UserInfoResult_ids[3]);
}

const ::std::string&
com::renren::sixin::account::UserInfoResult::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__UserInfoResult_ids[2];
}

const ::std::string&
com::renren::sixin::account::UserInfoResult::ice_staticId()
{
    return __com__renren__sixin__account__UserInfoResult_ids[2];
}

void
com::renren::sixin::account::UserInfoResult::__incRef()
{
    __gcIncRef();
}

void
com::renren::sixin::account::UserInfoResult::__decRef()
{
    __gcDecRef();
}

void
com::renren::sixin::account::UserInfoResult::__addObject(::IceInternal::GCCountMap& _c)
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
com::renren::sixin::account::UserInfoResult::__usesClasses()
{
    return true;
}

void
com::renren::sixin::account::UserInfoResult::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(sixinInfo)
    {
        ::IceInternal::upCast(sixinInfo.get())->__addObject(_c);
    }
    if(privacy)
    {
        ::IceInternal::upCast(privacy.get())->__addObject(_c);
    }
    {
        for(::com::renren::sixin::account::BoundInfoList::const_iterator _i0 = boundList.begin(); _i0 != boundList.end(); ++_i0)
        {
            if((*_i0))
            {
                ::IceInternal::upCast((*_i0).get())->__addObject(_c);
            }
        }
    }
    if(headUrl)
    {
        ::IceInternal::upCast(headUrl.get())->__addObject(_c);
    }
    {
        for(::com::renren::sixin::account::ContactList::const_iterator _i0 = blackContact.begin(); _i0 != blackContact.end(); ++_i0)
        {
            if((*_i0))
            {
                ::IceInternal::upCast((*_i0).get())->__addObject(_c);
            }
        }
    }
}

void
com::renren::sixin::account::UserInfoResult::__gcClear()
{
    if(sixinInfo)
    {
        if(::IceInternal::upCast(sixinInfo.get())->__usesClasses())
        {
            ::IceInternal::upCast(sixinInfo.get())->__decRefUnsafe();
            sixinInfo.__clearHandleUnsafe();
        }
        else
        {
            sixinInfo = 0;
        }
    }
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
    {
        for(::com::renren::sixin::account::BoundInfoList::iterator _i0 = boundList.begin(); _i0 != boundList.end(); ++_i0)
        {
            if((*_i0))
            {
                if(::IceInternal::upCast((*_i0).get())->__usesClasses())
                {
                    ::IceInternal::upCast((*_i0).get())->__decRefUnsafe();
                    (*_i0).__clearHandleUnsafe();
                }
                else
                {
                    (*_i0) = 0;
                }
            }
        }
    }
    if(headUrl)
    {
        if(::IceInternal::upCast(headUrl.get())->__usesClasses())
        {
            ::IceInternal::upCast(headUrl.get())->__decRefUnsafe();
            headUrl.__clearHandleUnsafe();
        }
        else
        {
            headUrl = 0;
        }
    }
    {
        for(::com::renren::sixin::account::ContactList::iterator _i0 = blackContact.begin(); _i0 != blackContact.end(); ++_i0)
        {
            if((*_i0))
            {
                if(::IceInternal::upCast((*_i0).get())->__usesClasses())
                {
                    ::IceInternal::upCast((*_i0).get())->__decRefUnsafe();
                    (*_i0).__clearHandleUnsafe();
                }
                else
                {
                    (*_i0) = 0;
                }
            }
        }
    }
}

void
com::renren::sixin::account::UserInfoResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(sixinInfo.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(privacy.get())));
    if(boundList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::com::renren::sixin::account::__writeBoundInfoList(__os, &boundList[0], &boundList[0] + boundList.size());
    }
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(headUrl.get())));
    if(blackContact.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::com::renren::sixin::account::__writeContactList(__os, &blackContact[0], &blackContact[0] + blackContact.size());
    }
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__write(__os);
#else
    ::com::renren::sixin::account::BaseResult::__write(__os);
#endif
}

void
com::renren::sixin::account::UserInfoResult::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::com::renren::sixin::account::__patch__SixinProfilePtr, &sixinInfo);
    __is->read(::com::renren::sixin::account::__patch__PrivacyInfoPtr, &privacy);
    ::com::renren::sixin::account::__readBoundInfoList(__is, boundList);
    __is->read(::com::renren::sixin::account::__patch__HeadUrlInfoPtr, &headUrl);
    ::com::renren::sixin::account::__readContactList(__is, blackContact);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseResult::__read(__is, true);
#endif
}

void
com::renren::sixin::account::UserInfoResult::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::UserInfoResult was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::UserInfoResult::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::UserInfoResult was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__UserInfoResult : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::UserInfoResult::ice_staticId());
        return new ::com::renren::sixin::account::UserInfoResult;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__UserInfoResult_Ptr = new __F__com__renren__sixin__account__UserInfoResult;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::UserInfoResult::ice_factory()
{
    return __F__com__renren__sixin__account__UserInfoResult_Ptr;
}

class __F__com__renren__sixin__account__UserInfoResult__Init
{
public:

    __F__com__renren__sixin__account__UserInfoResult__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::UserInfoResult::ice_staticId(), ::com::renren::sixin::account::UserInfoResult::ice_factory());
    }

    ~__F__com__renren__sixin__account__UserInfoResult__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::UserInfoResult::ice_staticId());
    }
};

static __F__com__renren__sixin__account__UserInfoResult__Init __F__com__renren__sixin__account__UserInfoResult__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__UserInfoResult__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__UserInfoResultPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::UserInfoResultPtr* p = static_cast< ::com::renren::sixin::account::UserInfoResultPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::UserInfoResultPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::UserInfoResult::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::UserInfoResult& l, const ::com::renren::sixin::account::UserInfoResult& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::UserInfoResult& l, const ::com::renren::sixin::account::UserInfoResult& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::renren::sixin::account::HeadUrlResult::HeadUrlResult(bool __ice_success, ::com::renren::sixin::account::AccountErrorCodeEnum __ice_errorCode, const ::std::string& __ice_errorMessage, const ::com::renren::sixin::account::HeadUrlInfoPtr& __ice_headUrl) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#else
    ::com::renren::sixin::account::BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#endif
,
    headUrl(__ice_headUrl)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::HeadUrlResult::ice_clone() const
{
    ::com::renren::sixin::account::HeadUrlResultPtr __p = new ::com::renren::sixin::account::HeadUrlResult(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__HeadUrlResult_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseResult",
    "::com::renren::sixin::account::HeadUrlResult"
};

bool
com::renren::sixin::account::HeadUrlResult::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__HeadUrlResult_ids, __com__renren__sixin__account__HeadUrlResult_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::HeadUrlResult::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__HeadUrlResult_ids[0], &__com__renren__sixin__account__HeadUrlResult_ids[3]);
}

const ::std::string&
com::renren::sixin::account::HeadUrlResult::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__HeadUrlResult_ids[2];
}

const ::std::string&
com::renren::sixin::account::HeadUrlResult::ice_staticId()
{
    return __com__renren__sixin__account__HeadUrlResult_ids[2];
}

void
com::renren::sixin::account::HeadUrlResult::__incRef()
{
    __gcIncRef();
}

void
com::renren::sixin::account::HeadUrlResult::__decRef()
{
    __gcDecRef();
}

void
com::renren::sixin::account::HeadUrlResult::__addObject(::IceInternal::GCCountMap& _c)
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
com::renren::sixin::account::HeadUrlResult::__usesClasses()
{
    return true;
}

void
com::renren::sixin::account::HeadUrlResult::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(headUrl)
    {
        ::IceInternal::upCast(headUrl.get())->__addObject(_c);
    }
}

void
com::renren::sixin::account::HeadUrlResult::__gcClear()
{
    if(headUrl)
    {
        if(::IceInternal::upCast(headUrl.get())->__usesClasses())
        {
            ::IceInternal::upCast(headUrl.get())->__decRefUnsafe();
            headUrl.__clearHandleUnsafe();
        }
        else
        {
            headUrl = 0;
        }
    }
}

void
com::renren::sixin::account::HeadUrlResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(headUrl.get())));
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__write(__os);
#else
    ::com::renren::sixin::account::BaseResult::__write(__os);
#endif
}

void
com::renren::sixin::account::HeadUrlResult::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::com::renren::sixin::account::__patch__HeadUrlInfoPtr, &headUrl);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseResult::__read(__is, true);
#endif
}

void
com::renren::sixin::account::HeadUrlResult::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::HeadUrlResult was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::HeadUrlResult::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::HeadUrlResult was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__HeadUrlResult : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::HeadUrlResult::ice_staticId());
        return new ::com::renren::sixin::account::HeadUrlResult;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__HeadUrlResult_Ptr = new __F__com__renren__sixin__account__HeadUrlResult;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::HeadUrlResult::ice_factory()
{
    return __F__com__renren__sixin__account__HeadUrlResult_Ptr;
}

class __F__com__renren__sixin__account__HeadUrlResult__Init
{
public:

    __F__com__renren__sixin__account__HeadUrlResult__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::HeadUrlResult::ice_staticId(), ::com::renren::sixin::account::HeadUrlResult::ice_factory());
    }

    ~__F__com__renren__sixin__account__HeadUrlResult__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::HeadUrlResult::ice_staticId());
    }
};

static __F__com__renren__sixin__account__HeadUrlResult__Init __F__com__renren__sixin__account__HeadUrlResult__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__HeadUrlResult__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__HeadUrlResultPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::HeadUrlResultPtr* p = static_cast< ::com::renren::sixin::account::HeadUrlResultPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::HeadUrlResultPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::HeadUrlResult::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::HeadUrlResult& l, const ::com::renren::sixin::account::HeadUrlResult& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::HeadUrlResult& l, const ::com::renren::sixin::account::HeadUrlResult& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
com::renren::sixin::account::UserInfoService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__renren__sixin__account__UserInfoService_ids[2] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::UserInfoService"
};

bool
com::renren::sixin::account::UserInfoService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__UserInfoService_ids, __com__renren__sixin__account__UserInfoService_ids + 2, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::UserInfoService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__UserInfoService_ids[0], &__com__renren__sixin__account__UserInfoService_ids[2]);
}

const ::std::string&
com::renren::sixin::account::UserInfoService::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__UserInfoService_ids[1];
}

const ::std::string&
com::renren::sixin::account::UserInfoService::ice_staticId()
{
    return __com__renren__sixin__account__UserInfoService_ids[1];
}

::Ice::DispatchStatus
com::renren::sixin::account::UserInfoService::___uploadUserInfo(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::renren::sixin::account::SixinProfilePtr profile;
    ::Ice::Int type;
    __is->read(::com::renren::sixin::account::__patch__SixinProfilePtr, &profile);
    __is->read(type);
    __is->readPendingObjects();
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BaseResultPtr __ret = uploadUserInfo(profile, type, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::UserInfoService::___downloadUserInfo(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userId;
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::UserInfoResultPtr __ret = downloadUserInfo(userId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::UserInfoService::___updateHeadPhoto(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::renren::sixin::account::HeadUrlInfoPtr headUrl;
    __is->read(::com::renren::sixin::account::__patch__HeadUrlInfoPtr, &headUrl);
    __is->readPendingObjects();
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BaseResultPtr __ret = updateHeadPhoto(headUrl, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::UserInfoService::___getHeadPhoto(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long sixinID;
    __is->read(sixinID);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::HeadUrlResultPtr __ret = getHeadPhoto(sixinID, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

static ::std::string __com__renren__sixin__account__UserInfoService_all[] =
{
    "downloadUserInfo",
    "getHeadPhoto",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "updateHeadPhoto",
    "uploadUserInfo"
};

::Ice::DispatchStatus
com::renren::sixin::account::UserInfoService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__renren__sixin__account__UserInfoService_all, __com__renren__sixin__account__UserInfoService_all + 8, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__renren__sixin__account__UserInfoService_all)
    {
        case 0:
        {
            return ___downloadUserInfo(in, current);
        }
        case 1:
        {
            return ___getHeadPhoto(in, current);
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
            return ___updateHeadPhoto(in, current);
        }
        case 7:
        {
            return ___uploadUserInfo(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::renren::sixin::account::UserInfoService::__write(::IceInternal::BasicStream* __os) const
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
com::renren::sixin::account::UserInfoService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::renren::sixin::account::UserInfoService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::UserInfoService was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::UserInfoService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::UserInfoService was not generated with stream support";
    throw ex;
}

void 
com::renren::sixin::account::__patch__UserInfoServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::UserInfoServicePtr* p = static_cast< ::com::renren::sixin::account::UserInfoServicePtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::UserInfoServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::UserInfoService::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::UserInfoService& l, const ::com::renren::sixin::account::UserInfoService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::UserInfoService& l, const ::com::renren::sixin::account::UserInfoService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
