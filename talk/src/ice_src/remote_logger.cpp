// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `remote_logger.ice'

#include <remote_logger.h>
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

static const ::std::string __com__xiaonei__wap__framework__log__RemoteLogger2__writeLog_name = "writeLog";

::Ice::Object* IceInternal::upCast(::com::xiaonei::wap::framework::log::RemoteLogger2* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::wap::framework::log::RemoteLogger2* p) { return p; }

void
com::xiaonei::wap::framework::log::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::framework::log::RemoteLogger2Prx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::wap::framework::log::RemoteLogger2;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::com::xiaonei::wap::framework::log::RemoteLogger2::writeLog(const ::std::string& loggerName, const ::std::string& logMsg, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::framework::log::RemoteLogger2* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::framework::log::RemoteLogger2*>(__delBase.get());
            __del->writeLog(loggerName, logMsg, __ctx);
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
IceProxy::com::xiaonei::wap::framework::log::RemoteLogger2::ice_staticId()
{
    return ::com::xiaonei::wap::framework::log::RemoteLogger2::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::wap::framework::log::RemoteLogger2::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::wap::framework::log::RemoteLogger2);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::wap::framework::log::RemoteLogger2::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::wap::framework::log::RemoteLogger2);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::wap::framework::log::RemoteLogger2::__newInstance() const
{
    return new RemoteLogger2;
}

void
IceDelegateM::com::xiaonei::wap::framework::log::RemoteLogger2::writeLog(const ::std::string& loggerName, const ::std::string& logMsg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__framework__log__RemoteLogger2__writeLog_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(loggerName);
        __os->write(logMsg);
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
IceDelegateD::com::xiaonei::wap::framework::log::RemoteLogger2::writeLog(const ::std::string& loggerName, const ::std::string& logMsg, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& loggerName, const ::std::string& logMsg, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_loggerName(loggerName),
            _m_logMsg(logMsg)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::framework::log::RemoteLogger2* servant = dynamic_cast< ::com::xiaonei::wap::framework::log::RemoteLogger2*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->writeLog(_m_loggerName, _m_logMsg, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_loggerName;
        const ::std::string& _m_logMsg;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__framework__log__RemoteLogger2__writeLog_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(loggerName, logMsg, __current);
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
com::xiaonei::wap::framework::log::RemoteLogger2::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__wap__framework__log__RemoteLogger2_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::wap::framework::log::RemoteLogger2"
};

bool
com::xiaonei::wap::framework::log::RemoteLogger2::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__wap__framework__log__RemoteLogger2_ids, __com__xiaonei__wap__framework__log__RemoteLogger2_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::wap::framework::log::RemoteLogger2::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__wap__framework__log__RemoteLogger2_ids[0], &__com__xiaonei__wap__framework__log__RemoteLogger2_ids[2]);
}

const ::std::string&
com::xiaonei::wap::framework::log::RemoteLogger2::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__wap__framework__log__RemoteLogger2_ids[1];
}

const ::std::string&
com::xiaonei::wap::framework::log::RemoteLogger2::ice_staticId()
{
    return __com__xiaonei__wap__framework__log__RemoteLogger2_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::wap::framework::log::RemoteLogger2::___writeLog(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string loggerName;
    ::std::string logMsg;
    __is->read(loggerName);
    __is->read(logMsg);
    __is->endReadEncaps();
    writeLog(loggerName, logMsg, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__wap__framework__log__RemoteLogger2_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "writeLog"
};

::Ice::DispatchStatus
com::xiaonei::wap::framework::log::RemoteLogger2::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__wap__framework__log__RemoteLogger2_all, __com__xiaonei__wap__framework__log__RemoteLogger2_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__wap__framework__log__RemoteLogger2_all)
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
            return ___writeLog(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::wap::framework::log::RemoteLogger2::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::wap::framework::log::RemoteLogger2::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::wap::framework::log::RemoteLogger2::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::framework::log::RemoteLogger2 was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::framework::log::RemoteLogger2::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::framework::log::RemoteLogger2 was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::wap::framework::log::__patch__RemoteLogger2Ptr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::wap::framework::log::RemoteLogger2Ptr* p = static_cast< ::com::xiaonei::wap::framework::log::RemoteLogger2Ptr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::wap::framework::log::RemoteLogger2Ptr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::wap::framework::log::RemoteLogger2::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::wap::framework::log::operator==(const ::com::xiaonei::wap::framework::log::RemoteLogger2& l, const ::com::xiaonei::wap::framework::log::RemoteLogger2& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::wap::framework::log::operator<(const ::com::xiaonei::wap::framework::log::RemoteLogger2& l, const ::com::xiaonei::wap::framework::log::RemoteLogger2& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
