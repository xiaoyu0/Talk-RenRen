// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `pusher.ice'

#include <pusher.h>
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

static const ::std::string __com__xiaonei__wap__push__Pusher__processWithParams_name = "processWithParams";

static const ::std::string __com__xiaonei__wap__push__Pusher__process_name = "process";

::Ice::Object* IceInternal::upCast(::com::xiaonei::wap::push::Pusher* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::wap::push::Pusher* p) { return p; }

void
com::xiaonei::wap::push::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::push::PusherPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::wap::push::Pusher;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::wap::push::__writeParamMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::wap::push::ParamMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::wap::push::ParamMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
com::xiaonei::wap::push::__readParamMap(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::push::ParamMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::com::xiaonei::wap::push::ParamMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
IceProxy::com::xiaonei::wap::push::Pusher::processWithParams(::Ice::Int puserId, ::Ice::Long userId, ::Ice::Int type, const ::std::string& version, const ::std::string& message, const ::std::string& token, const ::com::xiaonei::wap::push::ParamMap& params, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::push::Pusher* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::push::Pusher*>(__delBase.get());
            __del->processWithParams(puserId, userId, type, version, message, token, params, __ctx);
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
IceProxy::com::xiaonei::wap::push::Pusher::process(::Ice::Int puserId, ::Ice::Long userId, ::Ice::Int type, const ::std::string& version, const ::std::string& message, const ::std::string& token, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::push::Pusher* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::push::Pusher*>(__delBase.get());
            __del->process(puserId, userId, type, version, message, token, __ctx);
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
IceProxy::com::xiaonei::wap::push::Pusher::ice_staticId()
{
    return ::com::xiaonei::wap::push::Pusher::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::wap::push::Pusher::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::wap::push::Pusher);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::wap::push::Pusher::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::wap::push::Pusher);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::wap::push::Pusher::__newInstance() const
{
    return new Pusher;
}

void
IceDelegateM::com::xiaonei::wap::push::Pusher::processWithParams(::Ice::Int puserId, ::Ice::Long userId, ::Ice::Int type, const ::std::string& version, const ::std::string& message, const ::std::string& token, const ::com::xiaonei::wap::push::ParamMap& params, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__push__Pusher__processWithParams_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(puserId);
        __os->write(userId);
        __os->write(type);
        __os->write(version);
        __os->write(message);
        __os->write(token);
        ::com::xiaonei::wap::push::__writeParamMap(__os, params);
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
IceDelegateM::com::xiaonei::wap::push::Pusher::process(::Ice::Int puserId, ::Ice::Long userId, ::Ice::Int type, const ::std::string& version, const ::std::string& message, const ::std::string& token, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__push__Pusher__process_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(puserId);
        __os->write(userId);
        __os->write(type);
        __os->write(version);
        __os->write(message);
        __os->write(token);
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
IceDelegateD::com::xiaonei::wap::push::Pusher::processWithParams(::Ice::Int puserId, ::Ice::Long userId, ::Ice::Int type, const ::std::string& version, const ::std::string& message, const ::std::string& token, const ::com::xiaonei::wap::push::ParamMap& params, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int puserId, ::Ice::Long userId, ::Ice::Int type, const ::std::string& version, const ::std::string& message, const ::std::string& token, const ::com::xiaonei::wap::push::ParamMap& params, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_puserId(puserId),
            _m_userId(userId),
            _m_type(type),
            _m_version(version),
            _m_message(message),
            _m_token(token),
            _m_params(params)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::push::Pusher* servant = dynamic_cast< ::com::xiaonei::wap::push::Pusher*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->processWithParams(_m_puserId, _m_userId, _m_type, _m_version, _m_message, _m_token, _m_params, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_puserId;
        ::Ice::Long _m_userId;
        ::Ice::Int _m_type;
        const ::std::string& _m_version;
        const ::std::string& _m_message;
        const ::std::string& _m_token;
        const ::com::xiaonei::wap::push::ParamMap& _m_params;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__push__Pusher__processWithParams_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(puserId, userId, type, version, message, token, params, __current);
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
IceDelegateD::com::xiaonei::wap::push::Pusher::process(::Ice::Int puserId, ::Ice::Long userId, ::Ice::Int type, const ::std::string& version, const ::std::string& message, const ::std::string& token, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int puserId, ::Ice::Long userId, ::Ice::Int type, const ::std::string& version, const ::std::string& message, const ::std::string& token, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_puserId(puserId),
            _m_userId(userId),
            _m_type(type),
            _m_version(version),
            _m_message(message),
            _m_token(token)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::push::Pusher* servant = dynamic_cast< ::com::xiaonei::wap::push::Pusher*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->process(_m_puserId, _m_userId, _m_type, _m_version, _m_message, _m_token, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_puserId;
        ::Ice::Long _m_userId;
        ::Ice::Int _m_type;
        const ::std::string& _m_version;
        const ::std::string& _m_message;
        const ::std::string& _m_token;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__push__Pusher__process_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(puserId, userId, type, version, message, token, __current);
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
com::xiaonei::wap::push::Pusher::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__wap__push__Pusher_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::wap::push::Pusher"
};

bool
com::xiaonei::wap::push::Pusher::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__wap__push__Pusher_ids, __com__xiaonei__wap__push__Pusher_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::wap::push::Pusher::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__wap__push__Pusher_ids[0], &__com__xiaonei__wap__push__Pusher_ids[2]);
}

const ::std::string&
com::xiaonei::wap::push::Pusher::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__wap__push__Pusher_ids[1];
}

const ::std::string&
com::xiaonei::wap::push::Pusher::ice_staticId()
{
    return __com__xiaonei__wap__push__Pusher_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::wap::push::Pusher::___processWithParams(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int puserId;
    ::Ice::Long userId;
    ::Ice::Int type;
    ::std::string version;
    ::std::string message;
    ::std::string token;
    ::com::xiaonei::wap::push::ParamMap params;
    __is->read(puserId);
    __is->read(userId);
    __is->read(type);
    __is->read(version);
    __is->read(message);
    __is->read(token);
    ::com::xiaonei::wap::push::__readParamMap(__is, params);
    __is->endReadEncaps();
    processWithParams(puserId, userId, type, version, message, token, params, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::push::Pusher::___process(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int puserId;
    ::Ice::Long userId;
    ::Ice::Int type;
    ::std::string version;
    ::std::string message;
    ::std::string token;
    __is->read(puserId);
    __is->read(userId);
    __is->read(type);
    __is->read(version);
    __is->read(message);
    __is->read(token);
    __is->endReadEncaps();
    process(puserId, userId, type, version, message, token, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__wap__push__Pusher_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "process",
    "processWithParams"
};

::Ice::DispatchStatus
com::xiaonei::wap::push::Pusher::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__wap__push__Pusher_all, __com__xiaonei__wap__push__Pusher_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__wap__push__Pusher_all)
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
            return ___process(in, current);
        }
        case 5:
        {
            return ___processWithParams(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::wap::push::Pusher::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::wap::push::Pusher::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::wap::push::Pusher::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::push::Pusher was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::push::Pusher::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::push::Pusher was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::wap::push::__patch__PusherPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::wap::push::PusherPtr* p = static_cast< ::com::xiaonei::wap::push::PusherPtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::wap::push::PusherPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::wap::push::Pusher::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::wap::push::operator==(const ::com::xiaonei::wap::push::Pusher& l, const ::com::xiaonei::wap::push::Pusher& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::wap::push::operator<(const ::com::xiaonei::wap::push::Pusher& l, const ::com::xiaonei::wap::push::Pusher& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
