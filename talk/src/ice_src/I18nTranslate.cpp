// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `I18nTranslate.ice'

#include <I18nTranslate.h>
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

static const ::std::string __com__xiaonei__wap__talk__i18n__I18nTranslateService__translate_name = "translate";

::Ice::Object* IceInternal::upCast(::com::xiaonei::wap::talk::i18n::I18nTranslateService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::wap::talk::i18n::I18nTranslateService* p) { return p; }

void
com::xiaonei::wap::talk::i18n::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::talk::i18n::I18nTranslateServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::wap::talk::i18n::I18nTranslateService;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::com::xiaonei::wap::talk::i18n::I18nTranslateService::translate(const ::std::string& lang, ::std::string& msg, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__i18n__I18nTranslateService__translate_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::i18n::I18nTranslateService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::i18n::I18nTranslateService*>(__delBase.get());
            __del->translate(lang, msg, __ctx);
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
IceProxy::com::xiaonei::wap::talk::i18n::I18nTranslateService::ice_staticId()
{
    return ::com::xiaonei::wap::talk::i18n::I18nTranslateService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::wap::talk::i18n::I18nTranslateService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::wap::talk::i18n::I18nTranslateService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::wap::talk::i18n::I18nTranslateService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::wap::talk::i18n::I18nTranslateService);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::wap::talk::i18n::I18nTranslateService::__newInstance() const
{
    return new I18nTranslateService;
}

void
IceDelegateM::com::xiaonei::wap::talk::i18n::I18nTranslateService::translate(const ::std::string& lang, ::std::string& msg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__i18n__I18nTranslateService__translate_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(lang);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
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
        __is->read(msg);
        __is->endReadEncaps();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateD::com::xiaonei::wap::talk::i18n::I18nTranslateService::translate(const ::std::string& lang, ::std::string& msg, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& lang, ::std::string& msg, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_lang(lang),
            _m_msg(msg)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::i18n::I18nTranslateService* servant = dynamic_cast< ::com::xiaonei::wap::talk::i18n::I18nTranslateService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->translate(_m_lang, _m_msg, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_lang;
        ::std::string& _m_msg;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__i18n__I18nTranslateService__translate_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(lang, msg, __current);
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
com::xiaonei::wap::talk::i18n::I18nTranslateService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__wap__talk__i18n__I18nTranslateService_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::wap::talk::i18n::I18nTranslateService"
};

bool
com::xiaonei::wap::talk::i18n::I18nTranslateService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__wap__talk__i18n__I18nTranslateService_ids, __com__xiaonei__wap__talk__i18n__I18nTranslateService_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::wap::talk::i18n::I18nTranslateService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__wap__talk__i18n__I18nTranslateService_ids[0], &__com__xiaonei__wap__talk__i18n__I18nTranslateService_ids[2]);
}

const ::std::string&
com::xiaonei::wap::talk::i18n::I18nTranslateService::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__wap__talk__i18n__I18nTranslateService_ids[1];
}

const ::std::string&
com::xiaonei::wap::talk::i18n::I18nTranslateService::ice_staticId()
{
    return __com__xiaonei__wap__talk__i18n__I18nTranslateService_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::i18n::I18nTranslateService::___translate(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string lang;
    __is->read(lang);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string msg;
    translate(lang, msg, __current);
    __os->write(msg);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__wap__talk__i18n__I18nTranslateService_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "translate"
};

::Ice::DispatchStatus
com::xiaonei::wap::talk::i18n::I18nTranslateService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__wap__talk__i18n__I18nTranslateService_all, __com__xiaonei__wap__talk__i18n__I18nTranslateService_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__wap__talk__i18n__I18nTranslateService_all)
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
            return ___translate(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::wap::talk::i18n::I18nTranslateService::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::wap::talk::i18n::I18nTranslateService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::wap::talk::i18n::I18nTranslateService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::talk::i18n::I18nTranslateService was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::talk::i18n::I18nTranslateService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::talk::i18n::I18nTranslateService was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::wap::talk::i18n::__patch__I18nTranslateServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::wap::talk::i18n::I18nTranslateServicePtr* p = static_cast< ::com::xiaonei::wap::talk::i18n::I18nTranslateServicePtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::wap::talk::i18n::I18nTranslateServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::wap::talk::i18n::I18nTranslateService::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::wap::talk::i18n::operator==(const ::com::xiaonei::wap::talk::i18n::I18nTranslateService& l, const ::com::xiaonei::wap::talk::i18n::I18nTranslateService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::wap::talk::i18n::operator<(const ::com::xiaonei::wap::talk::i18n::I18nTranslateService& l, const ::com::xiaonei::wap::talk::i18n::I18nTranslateService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
