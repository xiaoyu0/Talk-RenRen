// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `undisturb.ice'

#include <undisturb.h>
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

static const ::std::string __com__xiaonei__wap__push__disturb__disturbService__setDisturbTime_name = "setDisturbTime";

static const ::std::string __com__xiaonei__wap__push__disturb__disturbService4Sixin__setDisturbTime_name = "setDisturbTime";

::Ice::Object* IceInternal::upCast(::com::xiaonei::wap::push::disturb::disturbService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::wap::push::disturb::disturbService* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::xiaonei::wap::push::disturb::disturbService4Sixin* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::wap::push::disturb::disturbService4Sixin* p) { return p; }

void
com::xiaonei::wap::push::disturb::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::push::disturb::disturbServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::wap::push::disturb::disturbService;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::wap::push::disturb::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::push::disturb::disturbService4SixinPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::wap::push::disturb::disturbService4Sixin;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::com::xiaonei::wap::push::disturb::disturbService::setDisturbTime(::Ice::Int userId, ::Ice::Int appType, ::Ice::Long uploadTime, const ::std::string& startTime, const ::std::string& endTime, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::push::disturb::disturbService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::push::disturb::disturbService*>(__delBase.get());
            __del->setDisturbTime(userId, appType, uploadTime, startTime, endTime, __ctx);
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
IceProxy::com::xiaonei::wap::push::disturb::disturbService::ice_staticId()
{
    return ::com::xiaonei::wap::push::disturb::disturbService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::wap::push::disturb::disturbService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::wap::push::disturb::disturbService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::wap::push::disturb::disturbService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::wap::push::disturb::disturbService);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::wap::push::disturb::disturbService::__newInstance() const
{
    return new disturbService;
}

void
IceProxy::com::xiaonei::wap::push::disturb::disturbService4Sixin::setDisturbTime(::Ice::Long userId, ::Ice::Int appType, ::Ice::Long uploadTime, const ::std::string& startTime, const ::std::string& endTime, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::push::disturb::disturbService4Sixin* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::push::disturb::disturbService4Sixin*>(__delBase.get());
            __del->setDisturbTime(userId, appType, uploadTime, startTime, endTime, __ctx);
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
IceProxy::com::xiaonei::wap::push::disturb::disturbService4Sixin::ice_staticId()
{
    return ::com::xiaonei::wap::push::disturb::disturbService4Sixin::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::wap::push::disturb::disturbService4Sixin::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::wap::push::disturb::disturbService4Sixin);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::wap::push::disturb::disturbService4Sixin::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::wap::push::disturb::disturbService4Sixin);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::wap::push::disturb::disturbService4Sixin::__newInstance() const
{
    return new disturbService4Sixin;
}

void
IceDelegateM::com::xiaonei::wap::push::disturb::disturbService::setDisturbTime(::Ice::Int userId, ::Ice::Int appType, ::Ice::Long uploadTime, const ::std::string& startTime, const ::std::string& endTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__push__disturb__disturbService__setDisturbTime_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(appType);
        __os->write(uploadTime);
        __os->write(startTime);
        __os->write(endTime);
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
IceDelegateM::com::xiaonei::wap::push::disturb::disturbService4Sixin::setDisturbTime(::Ice::Long userId, ::Ice::Int appType, ::Ice::Long uploadTime, const ::std::string& startTime, const ::std::string& endTime, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__push__disturb__disturbService4Sixin__setDisturbTime_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(appType);
        __os->write(uploadTime);
        __os->write(startTime);
        __os->write(endTime);
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
IceDelegateD::com::xiaonei::wap::push::disturb::disturbService::setDisturbTime(::Ice::Int userId, ::Ice::Int appType, ::Ice::Long uploadTime, const ::std::string& startTime, const ::std::string& endTime, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int userId, ::Ice::Int appType, ::Ice::Long uploadTime, const ::std::string& startTime, const ::std::string& endTime, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_appType(appType),
            _m_uploadTime(uploadTime),
            _m_startTime(startTime),
            _m_endTime(endTime)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::push::disturb::disturbService* servant = dynamic_cast< ::com::xiaonei::wap::push::disturb::disturbService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->setDisturbTime(_m_userId, _m_appType, _m_uploadTime, _m_startTime, _m_endTime, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_userId;
        ::Ice::Int _m_appType;
        ::Ice::Long _m_uploadTime;
        const ::std::string& _m_startTime;
        const ::std::string& _m_endTime;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__push__disturb__disturbService__setDisturbTime_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, appType, uploadTime, startTime, endTime, __current);
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
IceDelegateD::com::xiaonei::wap::push::disturb::disturbService4Sixin::setDisturbTime(::Ice::Long userId, ::Ice::Int appType, ::Ice::Long uploadTime, const ::std::string& startTime, const ::std::string& endTime, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long userId, ::Ice::Int appType, ::Ice::Long uploadTime, const ::std::string& startTime, const ::std::string& endTime, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_appType(appType),
            _m_uploadTime(uploadTime),
            _m_startTime(startTime),
            _m_endTime(endTime)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::push::disturb::disturbService4Sixin* servant = dynamic_cast< ::com::xiaonei::wap::push::disturb::disturbService4Sixin*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->setDisturbTime(_m_userId, _m_appType, _m_uploadTime, _m_startTime, _m_endTime, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_userId;
        ::Ice::Int _m_appType;
        ::Ice::Long _m_uploadTime;
        const ::std::string& _m_startTime;
        const ::std::string& _m_endTime;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__push__disturb__disturbService4Sixin__setDisturbTime_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, appType, uploadTime, startTime, endTime, __current);
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
com::xiaonei::wap::push::disturb::disturbService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__wap__push__disturb__disturbService_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::wap::push::disturb::disturbService"
};

bool
com::xiaonei::wap::push::disturb::disturbService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__wap__push__disturb__disturbService_ids, __com__xiaonei__wap__push__disturb__disturbService_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::wap::push::disturb::disturbService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__wap__push__disturb__disturbService_ids[0], &__com__xiaonei__wap__push__disturb__disturbService_ids[2]);
}

const ::std::string&
com::xiaonei::wap::push::disturb::disturbService::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__wap__push__disturb__disturbService_ids[1];
}

const ::std::string&
com::xiaonei::wap::push::disturb::disturbService::ice_staticId()
{
    return __com__xiaonei__wap__push__disturb__disturbService_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::wap::push::disturb::disturbService::___setDisturbTime(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userId;
    ::Ice::Int appType;
    ::Ice::Long uploadTime;
    ::std::string startTime;
    ::std::string endTime;
    __is->read(userId);
    __is->read(appType);
    __is->read(uploadTime);
    __is->read(startTime);
    __is->read(endTime);
    __is->endReadEncaps();
    setDisturbTime(userId, appType, uploadTime, startTime, endTime, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__wap__push__disturb__disturbService_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "setDisturbTime"
};

::Ice::DispatchStatus
com::xiaonei::wap::push::disturb::disturbService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__wap__push__disturb__disturbService_all, __com__xiaonei__wap__push__disturb__disturbService_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__wap__push__disturb__disturbService_all)
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
            return ___setDisturbTime(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::wap::push::disturb::disturbService::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::wap::push::disturb::disturbService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::wap::push::disturb::disturbService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::push::disturb::disturbService was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::push::disturb::disturbService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::push::disturb::disturbService was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::wap::push::disturb::__patch__disturbServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::wap::push::disturb::disturbServicePtr* p = static_cast< ::com::xiaonei::wap::push::disturb::disturbServicePtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::wap::push::disturb::disturbServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::wap::push::disturb::disturbService::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::wap::push::disturb::operator==(const ::com::xiaonei::wap::push::disturb::disturbService& l, const ::com::xiaonei::wap::push::disturb::disturbService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::wap::push::disturb::operator<(const ::com::xiaonei::wap::push::disturb::disturbService& l, const ::com::xiaonei::wap::push::disturb::disturbService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
com::xiaonei::wap::push::disturb::disturbService4Sixin::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__wap__push__disturb__disturbService4Sixin_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::wap::push::disturb::disturbService4Sixin"
};

bool
com::xiaonei::wap::push::disturb::disturbService4Sixin::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__wap__push__disturb__disturbService4Sixin_ids, __com__xiaonei__wap__push__disturb__disturbService4Sixin_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::wap::push::disturb::disturbService4Sixin::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__wap__push__disturb__disturbService4Sixin_ids[0], &__com__xiaonei__wap__push__disturb__disturbService4Sixin_ids[2]);
}

const ::std::string&
com::xiaonei::wap::push::disturb::disturbService4Sixin::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__wap__push__disturb__disturbService4Sixin_ids[1];
}

const ::std::string&
com::xiaonei::wap::push::disturb::disturbService4Sixin::ice_staticId()
{
    return __com__xiaonei__wap__push__disturb__disturbService4Sixin_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::wap::push::disturb::disturbService4Sixin::___setDisturbTime(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Int appType;
    ::Ice::Long uploadTime;
    ::std::string startTime;
    ::std::string endTime;
    __is->read(userId);
    __is->read(appType);
    __is->read(uploadTime);
    __is->read(startTime);
    __is->read(endTime);
    __is->endReadEncaps();
    setDisturbTime(userId, appType, uploadTime, startTime, endTime, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__wap__push__disturb__disturbService4Sixin_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "setDisturbTime"
};

::Ice::DispatchStatus
com::xiaonei::wap::push::disturb::disturbService4Sixin::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__wap__push__disturb__disturbService4Sixin_all, __com__xiaonei__wap__push__disturb__disturbService4Sixin_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__wap__push__disturb__disturbService4Sixin_all)
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
            return ___setDisturbTime(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::wap::push::disturb::disturbService4Sixin::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::wap::push::disturb::disturbService4Sixin::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::wap::push::disturb::disturbService4Sixin::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::push::disturb::disturbService4Sixin was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::push::disturb::disturbService4Sixin::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::push::disturb::disturbService4Sixin was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::wap::push::disturb::__patch__disturbService4SixinPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::wap::push::disturb::disturbService4SixinPtr* p = static_cast< ::com::xiaonei::wap::push::disturb::disturbService4SixinPtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::wap::push::disturb::disturbService4SixinPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::wap::push::disturb::disturbService4Sixin::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::wap::push::disturb::operator==(const ::com::xiaonei::wap::push::disturb::disturbService4Sixin& l, const ::com::xiaonei::wap::push::disturb::disturbService4Sixin& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::wap::push::disturb::operator<(const ::com::xiaonei::wap::push::disturb::disturbService4Sixin& l, const ::com::xiaonei::wap::push::disturb::disturbService4Sixin& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
