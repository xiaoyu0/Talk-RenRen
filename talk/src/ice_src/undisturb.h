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

#ifndef __src_ice_src__undisturb_h__
#define __src_ice_src__undisturb_h__

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

namespace push
{

namespace disturb
{

class disturbService;

class disturbService4Sixin;

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

namespace push
{

namespace disturb
{

class disturbService;
bool operator==(const disturbService&, const disturbService&);
bool operator<(const disturbService&, const disturbService&);

class disturbService4Sixin;
bool operator==(const disturbService4Sixin&, const disturbService4Sixin&);
bool operator<(const disturbService4Sixin&, const disturbService4Sixin&);

}

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::xiaonei::wap::push::disturb::disturbService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::wap::push::disturb::disturbService*);

::Ice::Object* upCast(::com::xiaonei::wap::push::disturb::disturbService4Sixin*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::wap::push::disturb::disturbService4Sixin*);

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace push
{

namespace disturb
{

typedef ::IceInternal::Handle< ::com::xiaonei::wap::push::disturb::disturbService> disturbServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::wap::push::disturb::disturbService> disturbServicePrx;

void __read(::IceInternal::BasicStream*, disturbServicePrx&);
void __patch__disturbServicePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::xiaonei::wap::push::disturb::disturbService4Sixin> disturbService4SixinPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::wap::push::disturb::disturbService4Sixin> disturbService4SixinPrx;

void __read(::IceInternal::BasicStream*, disturbService4SixinPrx&);
void __patch__disturbService4SixinPtr(void*, ::Ice::ObjectPtr&);

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

namespace push
{

namespace disturb
{

class disturbService : virtual public ::IceProxy::Ice::Object
{
public:

    void setDisturbTime(::Ice::Int userId, ::Ice::Int appType, ::Ice::Long uploadTime, const ::std::string& startTime, const ::std::string& endTime)
    {
        setDisturbTime(userId, appType, uploadTime, startTime, endTime, 0);
    }
    void setDisturbTime(::Ice::Int userId, ::Ice::Int appType, ::Ice::Long uploadTime, const ::std::string& startTime, const ::std::string& endTime, const ::Ice::Context& __ctx)
    {
        setDisturbTime(userId, appType, uploadTime, startTime, endTime, &__ctx);
    }
    
private:

    void setDisturbTime(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<disturbService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<disturbService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class disturbService4Sixin : virtual public ::IceProxy::Ice::Object
{
public:

    void setDisturbTime(::Ice::Long userId, ::Ice::Int appType, ::Ice::Long uploadTime, const ::std::string& startTime, const ::std::string& endTime)
    {
        setDisturbTime(userId, appType, uploadTime, startTime, endTime, 0);
    }
    void setDisturbTime(::Ice::Long userId, ::Ice::Int appType, ::Ice::Long uploadTime, const ::std::string& startTime, const ::std::string& endTime, const ::Ice::Context& __ctx)
    {
        setDisturbTime(userId, appType, uploadTime, startTime, endTime, &__ctx);
    }
    
private:

    void setDisturbTime(::Ice::Long, ::Ice::Int, ::Ice::Long, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<disturbService4Sixin> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<disturbService4Sixin*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<disturbService4Sixin*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace push
{

namespace disturb
{

class disturbService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void setDisturbTime(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;
};

class disturbService4Sixin : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void setDisturbTime(::Ice::Long, ::Ice::Int, ::Ice::Long, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;
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

namespace push
{

namespace disturb
{

class disturbService : virtual public ::IceDelegate::com::xiaonei::wap::push::disturb::disturbService,
                       virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void setDisturbTime(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::std::string&, const ::std::string&, const ::Ice::Context*);
};

class disturbService4Sixin : virtual public ::IceDelegate::com::xiaonei::wap::push::disturb::disturbService4Sixin,
                             virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void setDisturbTime(::Ice::Long, ::Ice::Int, ::Ice::Long, const ::std::string&, const ::std::string&, const ::Ice::Context*);
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

namespace push
{

namespace disturb
{

class disturbService : virtual public ::IceDelegate::com::xiaonei::wap::push::disturb::disturbService,
                       virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void setDisturbTime(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::std::string&, const ::std::string&, const ::Ice::Context*);
};

class disturbService4Sixin : virtual public ::IceDelegate::com::xiaonei::wap::push::disturb::disturbService4Sixin,
                             virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void setDisturbTime(::Ice::Long, ::Ice::Int, ::Ice::Long, const ::std::string&, const ::std::string&, const ::Ice::Context*);
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

namespace push
{

namespace disturb
{

class disturbService : virtual public ::Ice::Object
{
public:

    typedef disturbServicePrx ProxyType;
    typedef disturbServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void setDisturbTime(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDisturbTime(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class disturbService4Sixin : virtual public ::Ice::Object
{
public:

    typedef disturbService4SixinPrx ProxyType;
    typedef disturbService4SixinPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void setDisturbTime(::Ice::Long, ::Ice::Int, ::Ice::Long, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setDisturbTime(::IceInternal::Incoming&, const ::Ice::Current&);

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
