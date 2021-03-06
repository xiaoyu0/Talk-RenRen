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

#ifndef __src_ice_src__pusher_h__
#define __src_ice_src__pusher_h__

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

class Pusher;

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

class Pusher;
bool operator==(const Pusher&, const Pusher&);
bool operator<(const Pusher&, const Pusher&);

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::xiaonei::wap::push::Pusher*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::wap::push::Pusher*);

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace push
{

typedef ::IceInternal::Handle< ::com::xiaonei::wap::push::Pusher> PusherPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::wap::push::Pusher> PusherPrx;

void __read(::IceInternal::BasicStream*, PusherPrx&);
void __patch__PusherPtr(void*, ::Ice::ObjectPtr&);

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

typedef ::std::map< ::std::string, ::std::string> ParamMap;
void __writeParamMap(::IceInternal::BasicStream*, const ParamMap&);
void __readParamMap(::IceInternal::BasicStream*, ParamMap&);

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

class Pusher : virtual public ::IceProxy::Ice::Object
{
public:

    void processWithParams(::Ice::Int puserId, ::Ice::Long userId, ::Ice::Int type, const ::std::string& version, const ::std::string& message, const ::std::string& token, const ::com::xiaonei::wap::push::ParamMap& params)
    {
        processWithParams(puserId, userId, type, version, message, token, params, 0);
    }
    void processWithParams(::Ice::Int puserId, ::Ice::Long userId, ::Ice::Int type, const ::std::string& version, const ::std::string& message, const ::std::string& token, const ::com::xiaonei::wap::push::ParamMap& params, const ::Ice::Context& __ctx)
    {
        processWithParams(puserId, userId, type, version, message, token, params, &__ctx);
    }
    
private:

    void processWithParams(::Ice::Int, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, const ::com::xiaonei::wap::push::ParamMap&, const ::Ice::Context*);
    
public:

    void process(::Ice::Int puserId, ::Ice::Long userId, ::Ice::Int type, const ::std::string& version, const ::std::string& message, const ::std::string& token)
    {
        process(puserId, userId, type, version, message, token, 0);
    }
    void process(::Ice::Int puserId, ::Ice::Long userId, ::Ice::Int type, const ::std::string& version, const ::std::string& message, const ::std::string& token, const ::Ice::Context& __ctx)
    {
        process(puserId, userId, type, version, message, token, &__ctx);
    }
    
private:

    void process(::Ice::Int, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Pusher> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Pusher> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Pusher*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Pusher*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class Pusher : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void processWithParams(::Ice::Int, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, const ::com::xiaonei::wap::push::ParamMap&, const ::Ice::Context*) = 0;

    virtual void process(::Ice::Int, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;
};

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

class Pusher : virtual public ::IceDelegate::com::xiaonei::wap::push::Pusher,
               virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void processWithParams(::Ice::Int, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, const ::com::xiaonei::wap::push::ParamMap&, const ::Ice::Context*);

    virtual void process(::Ice::Int, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
};

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

class Pusher : virtual public ::IceDelegate::com::xiaonei::wap::push::Pusher,
               virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void processWithParams(::Ice::Int, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, const ::com::xiaonei::wap::push::ParamMap&, const ::Ice::Context*);

    virtual void process(::Ice::Int, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Context*);
};

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

class Pusher : virtual public ::Ice::Object
{
public:

    typedef PusherPrx ProxyType;
    typedef PusherPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void processWithParams(::Ice::Int, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, const ::com::xiaonei::wap::push::ParamMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___processWithParams(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void process(::Ice::Int, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___process(::IceInternal::Incoming&, const ::Ice::Current&);

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

#endif
