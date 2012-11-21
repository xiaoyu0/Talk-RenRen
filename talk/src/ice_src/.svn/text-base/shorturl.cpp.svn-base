// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `shorturl.ice'

#include <shorturl.h>
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

static const ::std::string __com__xiaonei__wap__xuanyuan__service__ShortDomainService__create_name = "create";

static const ::std::string __com__xiaonei__wap__xuanyuan__service__ShortDomainService__createCode_name = "createCode";

static const ::std::string __com__xiaonei__wap__xuanyuan__service__ShortDomainService__getOriginURL_name = "getOriginURL";

static const ::std::string __com__xiaonei__wap__xuanyuan__service__ShortDomainService__getOriginURLByShortURL_name = "getOriginURLByShortURL";

static const ::std::string __com__xiaonei__wap__xuanyuan__service__ShortDomainService__batCreate_name = "batCreate";

::Ice::Object* IceInternal::upCast(::com::xiaonei::wap::xuanyuan::service::ShortDomainService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::wap::xuanyuan::service::ShortDomainService* p) { return p; }

void
com::xiaonei::wap::xuanyuan::service::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::xuanyuan::service::ShortDomainServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::wap::xuanyuan::service::ShortDomainService;
        v->__copyFrom(proxy);
    }
}

com::xiaonei::wap::xuanyuan::service::IllegalUrlException::~IllegalUrlException() throw()
{
}

static const char* __com__xiaonei__wap__xuanyuan__service__IllegalUrlException_name = "com::xiaonei::wap::xuanyuan::service::IllegalUrlException";

::std::string
com::xiaonei::wap::xuanyuan::service::IllegalUrlException::ice_name() const
{
    return __com__xiaonei__wap__xuanyuan__service__IllegalUrlException_name;
}

::Ice::Exception*
com::xiaonei::wap::xuanyuan::service::IllegalUrlException::ice_clone() const
{
    return new IllegalUrlException(*this);
}

void
com::xiaonei::wap::xuanyuan::service::IllegalUrlException::ice_throw() const
{
    throw *this;
}

void
com::xiaonei::wap::xuanyuan::service::IllegalUrlException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::com::xiaonei::wap::xuanyuan::service::IllegalUrlException"), false);
    __os->startWriteSlice();
    __os->endWriteSlice();
}

void
com::xiaonei::wap::xuanyuan::service::IllegalUrlException::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->endReadSlice();
}

void
com::xiaonei::wap::xuanyuan::service::IllegalUrlException::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "exception com::xiaonei::wap::xuanyuan::service::IllegalUrlException was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::xuanyuan::service::IllegalUrlException::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "exception com::xiaonei::wap::xuanyuan::service::IllegalUrlException was not generated with stream support";
    throw ex;
}

struct __F__com__xiaonei__wap__xuanyuan__service__IllegalUrlException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::com::xiaonei::wap::xuanyuan::service::IllegalUrlException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__com__xiaonei__wap__xuanyuan__service__IllegalUrlException__Ptr = new __F__com__xiaonei__wap__xuanyuan__service__IllegalUrlException;

const ::IceInternal::UserExceptionFactoryPtr&
com::xiaonei::wap::xuanyuan::service::IllegalUrlException::ice_factory()
{
    return __F__com__xiaonei__wap__xuanyuan__service__IllegalUrlException__Ptr;
}

class __F__com__xiaonei__wap__xuanyuan__service__IllegalUrlException__Init
{
public:

    __F__com__xiaonei__wap__xuanyuan__service__IllegalUrlException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::com::xiaonei::wap::xuanyuan::service::IllegalUrlException", ::com::xiaonei::wap::xuanyuan::service::IllegalUrlException::ice_factory());
    }

    ~__F__com__xiaonei__wap__xuanyuan__service__IllegalUrlException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::com::xiaonei::wap::xuanyuan::service::IllegalUrlException");
    }
};

static __F__com__xiaonei__wap__xuanyuan__service__IllegalUrlException__Init __F__com__xiaonei__wap__xuanyuan__service__IllegalUrlException__i;

#ifdef __APPLE__
extern "C" { void __F__com__xiaonei__wap__xuanyuan__service__IllegalUrlException__initializer() {} }
#endif

void
com::xiaonei::wap::xuanyuan::service::__writeString2StringMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::wap::xuanyuan::service::String2StringMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::wap::xuanyuan::service::String2StringMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
com::xiaonei::wap::xuanyuan::service::__readString2StringMap(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::xuanyuan::service::String2StringMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::com::xiaonei::wap::xuanyuan::service::String2StringMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

::std::string
IceProxy::com::xiaonei::wap::xuanyuan::service::ShortDomainService::create(const ::std::string& url, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__xuanyuan__service__ShortDomainService__create_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::xuanyuan::service::ShortDomainService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::xuanyuan::service::ShortDomainService*>(__delBase.get());
            return __del->create(url, __ctx);
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
IceProxy::com::xiaonei::wap::xuanyuan::service::ShortDomainService::createCode(const ::std::string& url, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__xuanyuan__service__ShortDomainService__createCode_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::xuanyuan::service::ShortDomainService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::xuanyuan::service::ShortDomainService*>(__delBase.get());
            return __del->createCode(url, __ctx);
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
IceProxy::com::xiaonei::wap::xuanyuan::service::ShortDomainService::getOriginURL(const ::std::string& code, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__xuanyuan__service__ShortDomainService__getOriginURL_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::xuanyuan::service::ShortDomainService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::xuanyuan::service::ShortDomainService*>(__delBase.get());
            return __del->getOriginURL(code, __ctx);
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
IceProxy::com::xiaonei::wap::xuanyuan::service::ShortDomainService::getOriginURLByShortURL(const ::std::string& shortUrl, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__xuanyuan__service__ShortDomainService__getOriginURLByShortURL_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::xuanyuan::service::ShortDomainService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::xuanyuan::service::ShortDomainService*>(__delBase.get());
            return __del->getOriginURLByShortURL(shortUrl, __ctx);
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

::com::xiaonei::wap::xuanyuan::service::String2StringMap
IceProxy::com::xiaonei::wap::xuanyuan::service::ShortDomainService::batCreate(const ::com::xiaonei::wap::xuanyuan::service::StringList& urlList, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__xuanyuan__service__ShortDomainService__batCreate_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::xuanyuan::service::ShortDomainService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::xuanyuan::service::ShortDomainService*>(__delBase.get());
            return __del->batCreate(urlList, __ctx);
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
IceProxy::com::xiaonei::wap::xuanyuan::service::ShortDomainService::ice_staticId()
{
    return ::com::xiaonei::wap::xuanyuan::service::ShortDomainService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::wap::xuanyuan::service::ShortDomainService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::wap::xuanyuan::service::ShortDomainService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::wap::xuanyuan::service::ShortDomainService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::wap::xuanyuan::service::ShortDomainService);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::wap::xuanyuan::service::ShortDomainService::__newInstance() const
{
    return new ShortDomainService;
}

::std::string
IceDelegateM::com::xiaonei::wap::xuanyuan::service::ShortDomainService::create(const ::std::string& url, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__xuanyuan__service__ShortDomainService__create_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(url);
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
            catch(const ::com::xiaonei::wap::xuanyuan::service::IllegalUrlException&)
            {
                throw;
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
IceDelegateM::com::xiaonei::wap::xuanyuan::service::ShortDomainService::createCode(const ::std::string& url, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__xuanyuan__service__ShortDomainService__createCode_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(url);
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
            catch(const ::com::xiaonei::wap::xuanyuan::service::IllegalUrlException&)
            {
                throw;
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
IceDelegateM::com::xiaonei::wap::xuanyuan::service::ShortDomainService::getOriginURL(const ::std::string& code, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__xuanyuan__service__ShortDomainService__getOriginURL_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(code);
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

::std::string
IceDelegateM::com::xiaonei::wap::xuanyuan::service::ShortDomainService::getOriginURLByShortURL(const ::std::string& shortUrl, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__xuanyuan__service__ShortDomainService__getOriginURLByShortURL_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(shortUrl);
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
            catch(const ::com::xiaonei::wap::xuanyuan::service::IllegalUrlException&)
            {
                throw;
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

::com::xiaonei::wap::xuanyuan::service::String2StringMap
IceDelegateM::com::xiaonei::wap::xuanyuan::service::ShortDomainService::batCreate(const ::com::xiaonei::wap::xuanyuan::service::StringList& urlList, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__xuanyuan__service__ShortDomainService__batCreate_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(urlList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&urlList[0], &urlList[0] + urlList.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::xuanyuan::service::String2StringMap __ret;
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
        ::com::xiaonei::wap::xuanyuan::service::__readString2StringMap(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::std::string
IceDelegateD::com::xiaonei::wap::xuanyuan::service::ShortDomainService::create(const ::std::string& url, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::std::string& __result, const ::std::string& url, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_url(url)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::xuanyuan::service::ShortDomainService* servant = dynamic_cast< ::com::xiaonei::wap::xuanyuan::service::ShortDomainService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            try
            {
                _result = servant->create(_m_url, _current);
                return ::Ice::DispatchOK;
            }
            catch(const ::Ice::UserException& __ex)
            {
                setUserException(__ex);
                return ::Ice::DispatchUserException;
            }
        }
        
    private:
        
        ::std::string& _result;
        const ::std::string& _m_url;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__xuanyuan__service__ShortDomainService__create_name, ::Ice::Normal, __context);
    ::std::string __result;
    try
    {
        _DirectI __direct(__result, url, __current);
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
    catch(const ::com::xiaonei::wap::xuanyuan::service::IllegalUrlException&)
    {
        throw;
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
IceDelegateD::com::xiaonei::wap::xuanyuan::service::ShortDomainService::createCode(const ::std::string& url, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::std::string& __result, const ::std::string& url, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_url(url)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::xuanyuan::service::ShortDomainService* servant = dynamic_cast< ::com::xiaonei::wap::xuanyuan::service::ShortDomainService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            try
            {
                _result = servant->createCode(_m_url, _current);
                return ::Ice::DispatchOK;
            }
            catch(const ::Ice::UserException& __ex)
            {
                setUserException(__ex);
                return ::Ice::DispatchUserException;
            }
        }
        
    private:
        
        ::std::string& _result;
        const ::std::string& _m_url;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__xuanyuan__service__ShortDomainService__createCode_name, ::Ice::Normal, __context);
    ::std::string __result;
    try
    {
        _DirectI __direct(__result, url, __current);
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
    catch(const ::com::xiaonei::wap::xuanyuan::service::IllegalUrlException&)
    {
        throw;
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
IceDelegateD::com::xiaonei::wap::xuanyuan::service::ShortDomainService::getOriginURL(const ::std::string& code, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::std::string& __result, const ::std::string& code, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_code(code)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::xuanyuan::service::ShortDomainService* servant = dynamic_cast< ::com::xiaonei::wap::xuanyuan::service::ShortDomainService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getOriginURL(_m_code, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::std::string& _result;
        const ::std::string& _m_code;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__xuanyuan__service__ShortDomainService__getOriginURL_name, ::Ice::Normal, __context);
    ::std::string __result;
    try
    {
        _DirectI __direct(__result, code, __current);
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
IceDelegateD::com::xiaonei::wap::xuanyuan::service::ShortDomainService::getOriginURLByShortURL(const ::std::string& shortUrl, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::std::string& __result, const ::std::string& shortUrl, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_shortUrl(shortUrl)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::xuanyuan::service::ShortDomainService* servant = dynamic_cast< ::com::xiaonei::wap::xuanyuan::service::ShortDomainService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            try
            {
                _result = servant->getOriginURLByShortURL(_m_shortUrl, _current);
                return ::Ice::DispatchOK;
            }
            catch(const ::Ice::UserException& __ex)
            {
                setUserException(__ex);
                return ::Ice::DispatchUserException;
            }
        }
        
    private:
        
        ::std::string& _result;
        const ::std::string& _m_shortUrl;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__xuanyuan__service__ShortDomainService__getOriginURLByShortURL_name, ::Ice::Normal, __context);
    ::std::string __result;
    try
    {
        _DirectI __direct(__result, shortUrl, __current);
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
    catch(const ::com::xiaonei::wap::xuanyuan::service::IllegalUrlException&)
    {
        throw;
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

::com::xiaonei::wap::xuanyuan::service::String2StringMap
IceDelegateD::com::xiaonei::wap::xuanyuan::service::ShortDomainService::batCreate(const ::com::xiaonei::wap::xuanyuan::service::StringList& urlList, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::xuanyuan::service::String2StringMap& __result, const ::com::xiaonei::wap::xuanyuan::service::StringList& urlList, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_urlList(urlList)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::xuanyuan::service::ShortDomainService* servant = dynamic_cast< ::com::xiaonei::wap::xuanyuan::service::ShortDomainService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->batCreate(_m_urlList, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::xuanyuan::service::String2StringMap& _result;
        const ::com::xiaonei::wap::xuanyuan::service::StringList& _m_urlList;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__xuanyuan__service__ShortDomainService__batCreate_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::xuanyuan::service::String2StringMap __result;
    try
    {
        _DirectI __direct(__result, urlList, __current);
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
com::xiaonei::wap::xuanyuan::service::ShortDomainService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__wap__xuanyuan__service__ShortDomainService_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::wap::xuanyuan::service::ShortDomainService"
};

bool
com::xiaonei::wap::xuanyuan::service::ShortDomainService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__wap__xuanyuan__service__ShortDomainService_ids, __com__xiaonei__wap__xuanyuan__service__ShortDomainService_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::wap::xuanyuan::service::ShortDomainService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__wap__xuanyuan__service__ShortDomainService_ids[0], &__com__xiaonei__wap__xuanyuan__service__ShortDomainService_ids[2]);
}

const ::std::string&
com::xiaonei::wap::xuanyuan::service::ShortDomainService::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__wap__xuanyuan__service__ShortDomainService_ids[1];
}

const ::std::string&
com::xiaonei::wap::xuanyuan::service::ShortDomainService::ice_staticId()
{
    return __com__xiaonei__wap__xuanyuan__service__ShortDomainService_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::wap::xuanyuan::service::ShortDomainService::___create(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string url;
    __is->read(url);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        ::std::string __ret = create(url, __current);
        __os->write(__ret);
    }
    catch(const ::com::xiaonei::wap::xuanyuan::service::IllegalUrlException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::xuanyuan::service::ShortDomainService::___createCode(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string url;
    __is->read(url);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        ::std::string __ret = createCode(url, __current);
        __os->write(__ret);
    }
    catch(const ::com::xiaonei::wap::xuanyuan::service::IllegalUrlException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::xuanyuan::service::ShortDomainService::___getOriginURL(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string code;
    __is->read(code);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string __ret = getOriginURL(code, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::xuanyuan::service::ShortDomainService::___getOriginURLByShortURL(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string shortUrl;
    __is->read(shortUrl);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        ::std::string __ret = getOriginURLByShortURL(shortUrl, __current);
        __os->write(__ret);
    }
    catch(const ::com::xiaonei::wap::xuanyuan::service::IllegalUrlException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::xuanyuan::service::ShortDomainService::___batCreate(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::xuanyuan::service::StringList urlList;
    __is->read(urlList);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::xuanyuan::service::String2StringMap __ret = batCreate(urlList, __current);
    ::com::xiaonei::wap::xuanyuan::service::__writeString2StringMap(__os, __ret);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__wap__xuanyuan__service__ShortDomainService_all[] =
{
    "batCreate",
    "create",
    "createCode",
    "getOriginURL",
    "getOriginURLByShortURL",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
com::xiaonei::wap::xuanyuan::service::ShortDomainService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__wap__xuanyuan__service__ShortDomainService_all, __com__xiaonei__wap__xuanyuan__service__ShortDomainService_all + 9, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__wap__xuanyuan__service__ShortDomainService_all)
    {
        case 0:
        {
            return ___batCreate(in, current);
        }
        case 1:
        {
            return ___create(in, current);
        }
        case 2:
        {
            return ___createCode(in, current);
        }
        case 3:
        {
            return ___getOriginURL(in, current);
        }
        case 4:
        {
            return ___getOriginURLByShortURL(in, current);
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
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::wap::xuanyuan::service::ShortDomainService::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::wap::xuanyuan::service::ShortDomainService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::wap::xuanyuan::service::ShortDomainService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::xuanyuan::service::ShortDomainService was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::xuanyuan::service::ShortDomainService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::xuanyuan::service::ShortDomainService was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::wap::xuanyuan::service::__patch__ShortDomainServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::wap::xuanyuan::service::ShortDomainServicePtr* p = static_cast< ::com::xiaonei::wap::xuanyuan::service::ShortDomainServicePtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::wap::xuanyuan::service::ShortDomainServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::wap::xuanyuan::service::ShortDomainService::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::wap::xuanyuan::service::operator==(const ::com::xiaonei::wap::xuanyuan::service::ShortDomainService& l, const ::com::xiaonei::wap::xuanyuan::service::ShortDomainService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::wap::xuanyuan::service::operator<(const ::com::xiaonei::wap::xuanyuan::service::ShortDomainService& l, const ::com::xiaonei::wap::xuanyuan::service::ShortDomainService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
