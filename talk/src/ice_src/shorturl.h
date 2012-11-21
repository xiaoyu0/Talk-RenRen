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

#ifndef __src_ice_src__shorturl_h__
#define __src_ice_src__shorturl_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/UserExceptionFactory.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <Ice/UndefSysMacros.h>

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

namespace IceProxy
{

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace xuanyuan
{

namespace service
{

class ShortDomainService;

}

}

}

}

}

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace xuanyuan
{

namespace service
{

class ShortDomainService;
bool operator==(const ShortDomainService&, const ShortDomainService&);
bool operator<(const ShortDomainService&, const ShortDomainService&);

}

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::xiaonei::wap::xuanyuan::service::ShortDomainService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::wap::xuanyuan::service::ShortDomainService*);

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace xuanyuan
{

namespace service
{

typedef ::IceInternal::Handle< ::com::xiaonei::wap::xuanyuan::service::ShortDomainService> ShortDomainServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::wap::xuanyuan::service::ShortDomainService> ShortDomainServicePrx;

void __read(::IceInternal::BasicStream*, ShortDomainServicePrx&);
void __patch__ShortDomainServicePtr(void*, ::Ice::ObjectPtr&);

}

}

}

}

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace xuanyuan
{

namespace service
{

class IllegalUrlException : public ::Ice::UserException
{
public:

    IllegalUrlException() {}
    virtual ~IllegalUrlException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

static IllegalUrlException __IllegalUrlException_init;

typedef ::std::map< ::std::string, ::std::string> String2StringMap;
void __writeString2StringMap(::IceInternal::BasicStream*, const String2StringMap&);
void __readString2StringMap(::IceInternal::BasicStream*, String2StringMap&);

typedef ::std::vector< ::std::string> StringList;

}

}

}

}

}

namespace IceProxy
{

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace xuanyuan
{

namespace service
{

class ShortDomainService : virtual public ::IceProxy::Ice::Object
{
public:

    ::std::string create(const ::std::string& url)
    {
        return create(url, 0);
    }
    ::std::string create(const ::std::string& url, const ::Ice::Context& __ctx)
    {
        return create(url, &__ctx);
    }
    
private:

    ::std::string create(const ::std::string&, const ::Ice::Context*);
    
public:

    ::std::string createCode(const ::std::string& url)
    {
        return createCode(url, 0);
    }
    ::std::string createCode(const ::std::string& url, const ::Ice::Context& __ctx)
    {
        return createCode(url, &__ctx);
    }
    
private:

    ::std::string createCode(const ::std::string&, const ::Ice::Context*);
    
public:

    ::std::string getOriginURL(const ::std::string& code)
    {
        return getOriginURL(code, 0);
    }
    ::std::string getOriginURL(const ::std::string& code, const ::Ice::Context& __ctx)
    {
        return getOriginURL(code, &__ctx);
    }
    
private:

    ::std::string getOriginURL(const ::std::string&, const ::Ice::Context*);
    
public:

    ::std::string getOriginURLByShortURL(const ::std::string& shortUrl)
    {
        return getOriginURLByShortURL(shortUrl, 0);
    }
    ::std::string getOriginURLByShortURL(const ::std::string& shortUrl, const ::Ice::Context& __ctx)
    {
        return getOriginURLByShortURL(shortUrl, &__ctx);
    }
    
private:

    ::std::string getOriginURLByShortURL(const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::xuanyuan::service::String2StringMap batCreate(const ::com::xiaonei::wap::xuanyuan::service::StringList& urlList)
    {
        return batCreate(urlList, 0);
    }
    ::com::xiaonei::wap::xuanyuan::service::String2StringMap batCreate(const ::com::xiaonei::wap::xuanyuan::service::StringList& urlList, const ::Ice::Context& __ctx)
    {
        return batCreate(urlList, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::xuanyuan::service::String2StringMap batCreate(const ::com::xiaonei::wap::xuanyuan::service::StringList&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ShortDomainService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ShortDomainService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ShortDomainService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

}

}

}

}

namespace IceDelegate
{

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace xuanyuan
{

namespace service
{

class ShortDomainService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::std::string create(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::std::string createCode(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::std::string getOriginURL(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::std::string getOriginURLByShortURL(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::xuanyuan::service::String2StringMap batCreate(const ::com::xiaonei::wap::xuanyuan::service::StringList&, const ::Ice::Context*) = 0;
};

}

}

}

}

}

}

namespace IceDelegateM
{

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace xuanyuan
{

namespace service
{

class ShortDomainService : virtual public ::IceDelegate::com::xiaonei::wap::xuanyuan::service::ShortDomainService,
                           virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::std::string create(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string createCode(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string getOriginURL(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string getOriginURLByShortURL(const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::xuanyuan::service::String2StringMap batCreate(const ::com::xiaonei::wap::xuanyuan::service::StringList&, const ::Ice::Context*);
};

}

}

}

}

}

}

namespace IceDelegateD
{

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace xuanyuan
{

namespace service
{

class ShortDomainService : virtual public ::IceDelegate::com::xiaonei::wap::xuanyuan::service::ShortDomainService,
                           virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::std::string create(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string createCode(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string getOriginURL(const ::std::string&, const ::Ice::Context*);

    virtual ::std::string getOriginURLByShortURL(const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::xuanyuan::service::String2StringMap batCreate(const ::com::xiaonei::wap::xuanyuan::service::StringList&, const ::Ice::Context*);
};

}

}

}

}

}

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace xuanyuan
{

namespace service
{

class ShortDomainService : virtual public ::Ice::Object
{
public:

    typedef ShortDomainServicePrx ProxyType;
    typedef ShortDomainServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::std::string create(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___create(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::std::string createCode(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createCode(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::std::string getOriginURL(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOriginURL(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::std::string getOriginURLByShortURL(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getOriginURLByShortURL(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::xuanyuan::service::String2StringMap batCreate(const ::com::xiaonei::wap::xuanyuan::service::StringList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___batCreate(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

}

}

}

#endif
