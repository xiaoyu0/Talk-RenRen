// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `SocketService.ice'

#ifndef __src_ice_src__SocketService_h__
#define __src_ice_src__SocketService_h__

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
#include <Utils.h>
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

namespace talk
{

class SocketService;

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

namespace talk
{

class SocketService;
bool operator==(const SocketService&, const SocketService&);
bool operator<(const SocketService&, const SocketService&);

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::xiaonei::wap::talk::SocketService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::wap::talk::SocketService*);

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace talk
{

typedef ::IceInternal::Handle< ::com::xiaonei::wap::talk::SocketService> SocketServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::wap::talk::SocketService> SocketServicePrx;

void __read(::IceInternal::BasicStream*, SocketServicePrx&);
void __patch__SocketServicePtr(void*, ::Ice::ObjectPtr&);

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

namespace talk
{

class SocketService : virtual public ::IceProxy::Ice::Object
{
public:

    ::com::xiaonei::wap::talk::Result createSession(::Ice::Long connectionId, const ::std::string& msg)
    {
        return createSession(connectionId, msg, 0);
    }
    ::com::xiaonei::wap::talk::Result createSession(::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context& __ctx)
    {
        return createSession(connectionId, msg, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::talk::Result createSession(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::talk::Result transferStream(const ::std::string& sessionId, const ::std::string& msg)
    {
        return transferStream(sessionId, msg, 0);
    }
    ::com::xiaonei::wap::talk::Result transferStream(const ::std::string& sessionId, const ::std::string& msg, const ::Ice::Context& __ctx)
    {
        return transferStream(sessionId, msg, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::talk::Result transferStream(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::talk::Result createSessionV1(::Ice::Long connectionId, const ::std::string& msg)
    {
        return createSessionV1(connectionId, msg, 0);
    }
    ::com::xiaonei::wap::talk::Result createSessionV1(::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context& __ctx)
    {
        return createSessionV1(connectionId, msg, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::talk::Result createSessionV1(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::talk::Result updateV1(const ::std::string& sessionId, const ::std::string& msg)
    {
        return updateV1(sessionId, msg, 0);
    }
    ::com::xiaonei::wap::talk::Result updateV1(const ::std::string& sessionId, const ::std::string& msg, const ::Ice::Context& __ctx)
    {
        return updateV1(sessionId, msg, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::talk::Result updateV1(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::talk::Result sendV1(const ::std::string& sessionId, const ::std::string& msg)
    {
        return sendV1(sessionId, msg, 0);
    }
    ::com::xiaonei::wap::talk::Result sendV1(const ::std::string& sessionId, const ::std::string& msg, const ::Ice::Context& __ctx)
    {
        return sendV1(sessionId, msg, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::talk::Result sendV1(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<SocketService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SocketService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SocketService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<SocketService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace talk
{

class SocketService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::com::xiaonei::wap::talk::Result createSession(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::talk::Result transferStream(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::talk::Result createSessionV1(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::talk::Result updateV1(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::talk::Result sendV1(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;
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

namespace talk
{

class SocketService : virtual public ::IceDelegate::com::xiaonei::wap::talk::SocketService,
                      virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::com::xiaonei::wap::talk::Result createSession(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::Result transferStream(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::Result createSessionV1(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::Result updateV1(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::Result sendV1(const ::std::string&, const ::std::string&, const ::Ice::Context*);
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

namespace talk
{

class SocketService : virtual public ::IceDelegate::com::xiaonei::wap::talk::SocketService,
                      virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::com::xiaonei::wap::talk::Result createSession(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::Result transferStream(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::Result createSessionV1(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::Result updateV1(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::Result sendV1(const ::std::string&, const ::std::string&, const ::Ice::Context*);
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

namespace talk
{

class SocketService : virtual public ::Ice::Object
{
public:

    typedef SocketServicePrx ProxyType;
    typedef SocketServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::com::xiaonei::wap::talk::Result createSession(::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::talk::Result transferStream(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___transferStream(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::talk::Result createSessionV1(::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createSessionV1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::talk::Result updateV1(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___updateV1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::talk::Result sendV1(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sendV1(::IceInternal::Incoming&, const ::Ice::Current&);

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
