// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Printer.ice'

#include <Printer.h>
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

static const ::std::string __test__Printer__printString_name = "printString";

::Ice::Object* IceInternal::upCast(::test::Printer* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::test::Printer* p) { return p; }

void
test::__read(::IceInternal::BasicStream* __is, ::test::PrinterPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::test::Printer;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::test::Printer::printString(const ::std::string& s, const ::Ice::Context* __ctx)
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
            ::IceDelegate::test::Printer* __del = dynamic_cast< ::IceDelegate::test::Printer*>(__delBase.get());
            __del->printString(s, __ctx);
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
IceProxy::test::Printer::ice_staticId()
{
    return ::test::Printer::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::test::Printer::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::test::Printer);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::test::Printer::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::test::Printer);
}

::IceProxy::Ice::Object*
IceProxy::test::Printer::__newInstance() const
{
    return new Printer;
}

void
IceDelegateM::test::Printer::printString(const ::std::string& s, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __test__Printer__printString_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(s);
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
IceDelegateD::test::Printer::printString(const ::std::string& s, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& s, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_s(s)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::test::Printer* servant = dynamic_cast< ::test::Printer*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->printString(_m_s, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_s;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __test__Printer__printString_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(s, __current);
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
test::Printer::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __test__Printer_ids[2] =
{
    "::Ice::Object",
    "::test::Printer"
};

bool
test::Printer::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__test__Printer_ids, __test__Printer_ids + 2, _s);
}

::std::vector< ::std::string>
test::Printer::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__test__Printer_ids[0], &__test__Printer_ids[2]);
}

const ::std::string&
test::Printer::ice_id(const ::Ice::Current&) const
{
    return __test__Printer_ids[1];
}

const ::std::string&
test::Printer::ice_staticId()
{
    return __test__Printer_ids[1];
}

::Ice::DispatchStatus
test::Printer::___printString(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string s;
    __is->read(s);
    __is->endReadEncaps();
    printString(s, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __test__Printer_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "printString"
};

::Ice::DispatchStatus
test::Printer::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__test__Printer_all, __test__Printer_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __test__Printer_all)
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
            return ___printString(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
test::Printer::__write(::IceInternal::BasicStream* __os) const
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
test::Printer::__read(::IceInternal::BasicStream* __is, bool __rid)
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
test::Printer::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type test::Printer was not generated with stream support";
    throw ex;
}

void
test::Printer::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type test::Printer was not generated with stream support";
    throw ex;
}

void 
test::__patch__PrinterPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::test::PrinterPtr* p = static_cast< ::test::PrinterPtr*>(__addr);
    assert(p);
    *p = ::test::PrinterPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::test::Printer::ice_staticId(), v->ice_id());
    }
}

bool
test::operator==(const ::test::Printer& l, const ::test::Printer& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
test::operator<(const ::test::Printer& l, const ::test::Printer& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
