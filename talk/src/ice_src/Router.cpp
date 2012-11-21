// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Router.ice'

#include <Router.h>
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

static const ::std::string __com__sixin__talk__router__RouterService__forwardIq_name = "forwardIq";

static const ::std::string __com__sixin__talk__router__RouterService__forwardPresence_name = "forwardPresence";

static const ::std::string __com__sixin__talk__router__RouterService__forwardMessage_name = "forwardMessage";

::Ice::Object* IceInternal::upCast(::com::sixin::talk::router::RouterService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::sixin::talk::router::RouterService* p) { return p; }

void
com::sixin::talk::router::__read(::IceInternal::BasicStream* __is, ::com::sixin::talk::router::RouterServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::sixin::talk::router::RouterService;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::com::sixin::talk::router::RouterService::forwardIq(const ::std::string& xmppString, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::sixin::talk::router::RouterService* __del = dynamic_cast< ::IceDelegate::com::sixin::talk::router::RouterService*>(__delBase.get());
            __del->forwardIq(xmppString, __ctx);
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
IceProxy::com::sixin::talk::router::RouterService::forwardPresence(const ::std::string& xmppString, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::sixin::talk::router::RouterService* __del = dynamic_cast< ::IceDelegate::com::sixin::talk::router::RouterService*>(__delBase.get());
            __del->forwardPresence(xmppString, __ctx);
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
IceProxy::com::sixin::talk::router::RouterService::forwardMessage(const ::std::string& xmppString, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::sixin::talk::router::RouterService* __del = dynamic_cast< ::IceDelegate::com::sixin::talk::router::RouterService*>(__delBase.get());
            __del->forwardMessage(xmppString, __ctx);
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
IceProxy::com::sixin::talk::router::RouterService::ice_staticId()
{
    return ::com::sixin::talk::router::RouterService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::sixin::talk::router::RouterService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::sixin::talk::router::RouterService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::sixin::talk::router::RouterService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::sixin::talk::router::RouterService);
}

::IceProxy::Ice::Object*
IceProxy::com::sixin::talk::router::RouterService::__newInstance() const
{
    return new RouterService;
}

void
IceDelegateM::com::sixin::talk::router::RouterService::forwardIq(const ::std::string& xmppString, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__sixin__talk__router__RouterService__forwardIq_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(xmppString);
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
IceDelegateM::com::sixin::talk::router::RouterService::forwardPresence(const ::std::string& xmppString, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__sixin__talk__router__RouterService__forwardPresence_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(xmppString);
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
IceDelegateM::com::sixin::talk::router::RouterService::forwardMessage(const ::std::string& xmppString, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__sixin__talk__router__RouterService__forwardMessage_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(xmppString);
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
IceDelegateD::com::sixin::talk::router::RouterService::forwardIq(const ::std::string& xmppString, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& xmppString, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_xmppString(xmppString)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::sixin::talk::router::RouterService* servant = dynamic_cast< ::com::sixin::talk::router::RouterService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->forwardIq(_m_xmppString, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_xmppString;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__sixin__talk__router__RouterService__forwardIq_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(xmppString, __current);
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
IceDelegateD::com::sixin::talk::router::RouterService::forwardPresence(const ::std::string& xmppString, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& xmppString, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_xmppString(xmppString)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::sixin::talk::router::RouterService* servant = dynamic_cast< ::com::sixin::talk::router::RouterService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->forwardPresence(_m_xmppString, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_xmppString;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__sixin__talk__router__RouterService__forwardPresence_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(xmppString, __current);
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
IceDelegateD::com::sixin::talk::router::RouterService::forwardMessage(const ::std::string& xmppString, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& xmppString, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_xmppString(xmppString)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::sixin::talk::router::RouterService* servant = dynamic_cast< ::com::sixin::talk::router::RouterService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->forwardMessage(_m_xmppString, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_xmppString;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__sixin__talk__router__RouterService__forwardMessage_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(xmppString, __current);
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
com::sixin::talk::router::RouterService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__sixin__talk__router__RouterService_ids[2] =
{
    "::Ice::Object",
    "::com::sixin::talk::router::RouterService"
};

bool
com::sixin::talk::router::RouterService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__sixin__talk__router__RouterService_ids, __com__sixin__talk__router__RouterService_ids + 2, _s);
}

::std::vector< ::std::string>
com::sixin::talk::router::RouterService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__sixin__talk__router__RouterService_ids[0], &__com__sixin__talk__router__RouterService_ids[2]);
}

const ::std::string&
com::sixin::talk::router::RouterService::ice_id(const ::Ice::Current&) const
{
    return __com__sixin__talk__router__RouterService_ids[1];
}

const ::std::string&
com::sixin::talk::router::RouterService::ice_staticId()
{
    return __com__sixin__talk__router__RouterService_ids[1];
}

::Ice::DispatchStatus
com::sixin::talk::router::RouterService::___forwardIq(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string xmppString;
    __is->read(xmppString);
    __is->endReadEncaps();
    forwardIq(xmppString, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::sixin::talk::router::RouterService::___forwardPresence(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string xmppString;
    __is->read(xmppString);
    __is->endReadEncaps();
    forwardPresence(xmppString, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::sixin::talk::router::RouterService::___forwardMessage(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string xmppString;
    __is->read(xmppString);
    __is->endReadEncaps();
    forwardMessage(xmppString, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __com__sixin__talk__router__RouterService_all[] =
{
    "forwardIq",
    "forwardMessage",
    "forwardPresence",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
com::sixin::talk::router::RouterService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__sixin__talk__router__RouterService_all, __com__sixin__talk__router__RouterService_all + 7, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__sixin__talk__router__RouterService_all)
    {
        case 0:
        {
            return ___forwardIq(in, current);
        }
        case 1:
        {
            return ___forwardMessage(in, current);
        }
        case 2:
        {
            return ___forwardPresence(in, current);
        }
        case 3:
        {
            return ___ice_id(in, current);
        }
        case 4:
        {
            return ___ice_ids(in, current);
        }
        case 5:
        {
            return ___ice_isA(in, current);
        }
        case 6:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::sixin::talk::router::RouterService::__write(::IceInternal::BasicStream* __os) const
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
com::sixin::talk::router::RouterService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::sixin::talk::router::RouterService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::sixin::talk::router::RouterService was not generated with stream support";
    throw ex;
}

void
com::sixin::talk::router::RouterService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::sixin::talk::router::RouterService was not generated with stream support";
    throw ex;
}

void 
com::sixin::talk::router::__patch__RouterServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::sixin::talk::router::RouterServicePtr* p = static_cast< ::com::sixin::talk::router::RouterServicePtr*>(__addr);
    assert(p);
    *p = ::com::sixin::talk::router::RouterServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::sixin::talk::router::RouterService::ice_staticId(), v->ice_id());
    }
}

bool
com::sixin::talk::router::operator==(const ::com::sixin::talk::router::RouterService& l, const ::com::sixin::talk::router::RouterService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::sixin::talk::router::operator<(const ::com::sixin::talk::router::RouterService& l, const ::com::sixin::talk::router::RouterService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
