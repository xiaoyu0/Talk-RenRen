// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `token.ice'

#include <token.h>
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

static const ::std::string __com__xiaonei__wap__push__token__TokenService__addToken_name = "addToken";

static const ::std::string __com__xiaonei__wap__push__token__TokenService__removeToken_name = "removeToken";

static const ::std::string __com__xiaonei__wap__push__token__TokenService__addToken4Sixin_name = "addToken4Sixin";

static const ::std::string __com__xiaonei__wap__push__token__TokenService__removeToken4Sixin_name = "removeToken4Sixin";

::Ice::Object* IceInternal::upCast(::com::xiaonei::wap::push::token::TokenService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::wap::push::token::TokenService* p) { return p; }

void
com::xiaonei::wap::push::token::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::push::token::TokenServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::wap::push::token::TokenService;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::com::xiaonei::wap::push::token::TokenService::addToken(::Ice::Int userId, ::Ice::Int pushType, const ::std::string& token, const ::std::string& version, ::Ice::Int appId, ::Ice::Int channelId, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::push::token::TokenService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::push::token::TokenService*>(__delBase.get());
            __del->addToken(userId, pushType, token, version, appId, channelId, __ctx);
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
IceProxy::com::xiaonei::wap::push::token::TokenService::removeToken(::Ice::Int userId, ::Ice::Int pushType, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::push::token::TokenService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::push::token::TokenService*>(__delBase.get());
            __del->removeToken(userId, pushType, __ctx);
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
IceProxy::com::xiaonei::wap::push::token::TokenService::addToken4Sixin(::Ice::Long userId, ::Ice::Int pushType, const ::std::string& token, const ::std::string& version, ::Ice::Int appId, ::Ice::Int channelId, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::push::token::TokenService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::push::token::TokenService*>(__delBase.get());
            __del->addToken4Sixin(userId, pushType, token, version, appId, channelId, __ctx);
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
IceProxy::com::xiaonei::wap::push::token::TokenService::removeToken4Sixin(::Ice::Long userId, ::Ice::Int pushType, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::push::token::TokenService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::push::token::TokenService*>(__delBase.get());
            __del->removeToken4Sixin(userId, pushType, __ctx);
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
IceProxy::com::xiaonei::wap::push::token::TokenService::ice_staticId()
{
    return ::com::xiaonei::wap::push::token::TokenService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::wap::push::token::TokenService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::wap::push::token::TokenService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::wap::push::token::TokenService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::wap::push::token::TokenService);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::wap::push::token::TokenService::__newInstance() const
{
    return new TokenService;
}

void
IceDelegateM::com::xiaonei::wap::push::token::TokenService::addToken(::Ice::Int userId, ::Ice::Int pushType, const ::std::string& token, const ::std::string& version, ::Ice::Int appId, ::Ice::Int channelId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__push__token__TokenService__addToken_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(pushType);
        __os->write(token);
        __os->write(version);
        __os->write(appId);
        __os->write(channelId);
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
IceDelegateM::com::xiaonei::wap::push::token::TokenService::removeToken(::Ice::Int userId, ::Ice::Int pushType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__push__token__TokenService__removeToken_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(pushType);
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
IceDelegateM::com::xiaonei::wap::push::token::TokenService::addToken4Sixin(::Ice::Long userId, ::Ice::Int pushType, const ::std::string& token, const ::std::string& version, ::Ice::Int appId, ::Ice::Int channelId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__push__token__TokenService__addToken4Sixin_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(pushType);
        __os->write(token);
        __os->write(version);
        __os->write(appId);
        __os->write(channelId);
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
IceDelegateM::com::xiaonei::wap::push::token::TokenService::removeToken4Sixin(::Ice::Long userId, ::Ice::Int pushType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__push__token__TokenService__removeToken4Sixin_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(pushType);
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
IceDelegateD::com::xiaonei::wap::push::token::TokenService::addToken(::Ice::Int userId, ::Ice::Int pushType, const ::std::string& token, const ::std::string& version, ::Ice::Int appId, ::Ice::Int channelId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int userId, ::Ice::Int pushType, const ::std::string& token, const ::std::string& version, ::Ice::Int appId, ::Ice::Int channelId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_pushType(pushType),
            _m_token(token),
            _m_version(version),
            _m_appId(appId),
            _m_channelId(channelId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::push::token::TokenService* servant = dynamic_cast< ::com::xiaonei::wap::push::token::TokenService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->addToken(_m_userId, _m_pushType, _m_token, _m_version, _m_appId, _m_channelId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_userId;
        ::Ice::Int _m_pushType;
        const ::std::string& _m_token;
        const ::std::string& _m_version;
        ::Ice::Int _m_appId;
        ::Ice::Int _m_channelId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__push__token__TokenService__addToken_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, pushType, token, version, appId, channelId, __current);
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
IceDelegateD::com::xiaonei::wap::push::token::TokenService::removeToken(::Ice::Int userId, ::Ice::Int pushType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int userId, ::Ice::Int pushType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_pushType(pushType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::push::token::TokenService* servant = dynamic_cast< ::com::xiaonei::wap::push::token::TokenService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->removeToken(_m_userId, _m_pushType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_userId;
        ::Ice::Int _m_pushType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__push__token__TokenService__removeToken_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, pushType, __current);
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
IceDelegateD::com::xiaonei::wap::push::token::TokenService::addToken4Sixin(::Ice::Long userId, ::Ice::Int pushType, const ::std::string& token, const ::std::string& version, ::Ice::Int appId, ::Ice::Int channelId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long userId, ::Ice::Int pushType, const ::std::string& token, const ::std::string& version, ::Ice::Int appId, ::Ice::Int channelId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_pushType(pushType),
            _m_token(token),
            _m_version(version),
            _m_appId(appId),
            _m_channelId(channelId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::push::token::TokenService* servant = dynamic_cast< ::com::xiaonei::wap::push::token::TokenService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->addToken4Sixin(_m_userId, _m_pushType, _m_token, _m_version, _m_appId, _m_channelId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_userId;
        ::Ice::Int _m_pushType;
        const ::std::string& _m_token;
        const ::std::string& _m_version;
        ::Ice::Int _m_appId;
        ::Ice::Int _m_channelId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__push__token__TokenService__addToken4Sixin_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, pushType, token, version, appId, channelId, __current);
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
IceDelegateD::com::xiaonei::wap::push::token::TokenService::removeToken4Sixin(::Ice::Long userId, ::Ice::Int pushType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long userId, ::Ice::Int pushType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_pushType(pushType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::push::token::TokenService* servant = dynamic_cast< ::com::xiaonei::wap::push::token::TokenService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->removeToken4Sixin(_m_userId, _m_pushType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_userId;
        ::Ice::Int _m_pushType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__push__token__TokenService__removeToken4Sixin_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, pushType, __current);
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
com::xiaonei::wap::push::token::TokenService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__wap__push__token__TokenService_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::wap::push::token::TokenService"
};

bool
com::xiaonei::wap::push::token::TokenService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__wap__push__token__TokenService_ids, __com__xiaonei__wap__push__token__TokenService_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::wap::push::token::TokenService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__wap__push__token__TokenService_ids[0], &__com__xiaonei__wap__push__token__TokenService_ids[2]);
}

const ::std::string&
com::xiaonei::wap::push::token::TokenService::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__wap__push__token__TokenService_ids[1];
}

const ::std::string&
com::xiaonei::wap::push::token::TokenService::ice_staticId()
{
    return __com__xiaonei__wap__push__token__TokenService_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::wap::push::token::TokenService::___addToken(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userId;
    ::Ice::Int pushType;
    ::std::string token;
    ::std::string version;
    ::Ice::Int appId;
    ::Ice::Int channelId;
    __is->read(userId);
    __is->read(pushType);
    __is->read(token);
    __is->read(version);
    __is->read(appId);
    __is->read(channelId);
    __is->endReadEncaps();
    addToken(userId, pushType, token, version, appId, channelId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::push::token::TokenService::___removeToken(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userId;
    ::Ice::Int pushType;
    __is->read(userId);
    __is->read(pushType);
    __is->endReadEncaps();
    removeToken(userId, pushType, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::push::token::TokenService::___addToken4Sixin(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Int pushType;
    ::std::string token;
    ::std::string version;
    ::Ice::Int appId;
    ::Ice::Int channelId;
    __is->read(userId);
    __is->read(pushType);
    __is->read(token);
    __is->read(version);
    __is->read(appId);
    __is->read(channelId);
    __is->endReadEncaps();
    addToken4Sixin(userId, pushType, token, version, appId, channelId, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::push::token::TokenService::___removeToken4Sixin(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Int pushType;
    __is->read(userId);
    __is->read(pushType);
    __is->endReadEncaps();
    removeToken4Sixin(userId, pushType, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__wap__push__token__TokenService_all[] =
{
    "addToken",
    "addToken4Sixin",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "removeToken",
    "removeToken4Sixin"
};

::Ice::DispatchStatus
com::xiaonei::wap::push::token::TokenService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__wap__push__token__TokenService_all, __com__xiaonei__wap__push__token__TokenService_all + 8, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__wap__push__token__TokenService_all)
    {
        case 0:
        {
            return ___addToken(in, current);
        }
        case 1:
        {
            return ___addToken4Sixin(in, current);
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
            return ___removeToken(in, current);
        }
        case 7:
        {
            return ___removeToken4Sixin(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::wap::push::token::TokenService::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::wap::push::token::TokenService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::wap::push::token::TokenService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::push::token::TokenService was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::push::token::TokenService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::push::token::TokenService was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::wap::push::token::__patch__TokenServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::wap::push::token::TokenServicePtr* p = static_cast< ::com::xiaonei::wap::push::token::TokenServicePtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::wap::push::token::TokenServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::wap::push::token::TokenService::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::wap::push::token::operator==(const ::com::xiaonei::wap::push::token::TokenService& l, const ::com::xiaonei::wap::push::token::TokenService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::wap::push::token::operator<(const ::com::xiaonei::wap::push::token::TokenService& l, const ::com::xiaonei::wap::push::token::TokenService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
