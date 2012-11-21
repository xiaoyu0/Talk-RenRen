// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `TalkProxy.ice'

#ifndef __src_ice_src__TalkProxy_h__
#define __src_ice_src__TalkProxy_h__

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
#include <TalkCommon.h>
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

namespace talk
{

class DeliverInterface;

class ProxyManager;

}

}

}

}

namespace com
{

namespace xiaonei
{

namespace talk
{

class DeliverInterface;
bool operator==(const DeliverInterface&, const DeliverInterface&);
bool operator<(const DeliverInterface&, const DeliverInterface&);

class ProxyManager;
bool operator==(const ProxyManager&, const ProxyManager&);
bool operator<(const ProxyManager&, const ProxyManager&);

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::xiaonei::talk::DeliverInterface*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::talk::DeliverInterface*);

::Ice::Object* upCast(::com::xiaonei::talk::ProxyManager*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::talk::ProxyManager*);

}

namespace com
{

namespace xiaonei
{

namespace talk
{

typedef ::IceInternal::Handle< ::com::xiaonei::talk::DeliverInterface> DeliverInterfacePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::talk::DeliverInterface> DeliverInterfacePrx;

void __read(::IceInternal::BasicStream*, DeliverInterfacePrx&);
void __patch__DeliverInterfacePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::xiaonei::talk::ProxyManager> ProxyManagerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::talk::ProxyManager> ProxyManagerPrx;

void __read(::IceInternal::BasicStream*, ProxyManagerPrx&);
void __patch__ProxyManagerPtr(void*, ::Ice::ObjectPtr&);

}

}

}

namespace IceProxy
{

namespace com
{

namespace xiaonei
{

namespace talk
{

class DeliverInterface : virtual public ::IceProxy::Ice::Object
{
public:

    void express(const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& msg)
    {
        express(jid, msg, 0);
    }
    void express(const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& msg, const ::Ice::Context& __ctx)
    {
        express(jid, msg, &__ctx);
    }
    
private:

    void express(const ::com::xiaonei::talk::common::JidPtr&, const ::std::string&, const ::Ice::Context*);
    
public:

    void deliver(const ::com::xiaonei::talk::common::MessageSeq& msgs)
    {
        deliver(msgs, 0);
    }
    void deliver(const ::com::xiaonei::talk::common::MessageSeq& msgs, const ::Ice::Context& __ctx)
    {
        deliver(msgs, &__ctx);
    }
    
private:

    void deliver(const ::com::xiaonei::talk::common::MessageSeq&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<DeliverInterface> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<DeliverInterface*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<DeliverInterface*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ProxyManager : virtual public ::IceProxy::com::xiaonei::talk::DeliverInterface
{
public:

    bool indexExist(::Ice::Long index)
    {
        return indexExist(index, 0);
    }
    bool indexExist(::Ice::Long index, const ::Ice::Context& __ctx)
    {
        return indexExist(index, &__ctx);
    }
    
private:

    bool indexExist(::Ice::Long, const ::Ice::Context*);
    
public:

    bool checkTicket(const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& ticket)
    {
        return checkTicket(jid, ticket, 0);
    }
    bool checkTicket(const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& ticket, const ::Ice::Context& __ctx)
    {
        return checkTicket(jid, ticket, &__ctx);
    }
    
private:

    bool checkTicket(const ::com::xiaonei::talk::common::JidPtr&, const ::std::string&, const ::Ice::Context*);
    
public:

    bool verify(const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& ticket)
    {
        return verify(jid, ticket, 0);
    }
    bool verify(const ::com::xiaonei::talk::common::JidPtr& jid, const ::std::string& ticket, const ::Ice::Context& __ctx)
    {
        return verify(jid, ticket, &__ctx);
    }
    
private:

    bool verify(const ::com::xiaonei::talk::common::JidPtr&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::std::string GetTicket(const ::com::xiaonei::talk::common::JidPtr& jid)
    {
        return GetTicket(jid, 0);
    }
    ::std::string GetTicket(const ::com::xiaonei::talk::common::JidPtr& jid, const ::Ice::Context& __ctx)
    {
        return GetTicket(jid, &__ctx);
    }
    
private:

    ::std::string GetTicket(const ::com::xiaonei::talk::common::JidPtr&, const ::Ice::Context*);
    
public:

    void leave(const ::com::xiaonei::talk::common::JidPtr& jid)
    {
        leave(jid, 0);
    }
    void leave(const ::com::xiaonei::talk::common::JidPtr& jid, const ::Ice::Context& __ctx)
    {
        leave(jid, &__ctx);
    }
    
private:

    void leave(const ::com::xiaonei::talk::common::JidPtr&, const ::Ice::Context*);
    
public:

    void relogin()
    {
        relogin(0);
    }
    void relogin(const ::Ice::Context& __ctx)
    {
        relogin(&__ctx);
    }
    
private:

    void relogin(const ::Ice::Context*);
    
public:

    void broadcast(const ::std::string& xmlMsg)
    {
        broadcast(xmlMsg, 0);
    }
    void broadcast(const ::std::string& xmlMsg, const ::Ice::Context& __ctx)
    {
        broadcast(xmlMsg, &__ctx);
    }
    
private:

    void broadcast(const ::std::string&, const ::Ice::Context*);
    
public:

    void kick(const ::com::xiaonei::talk::common::JidPtr& jid)
    {
        kick(jid, 0);
    }
    void kick(const ::com::xiaonei::talk::common::JidPtr& jid, const ::Ice::Context& __ctx)
    {
        kick(jid, &__ctx);
    }
    
private:

    void kick(const ::com::xiaonei::talk::common::JidPtr&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ProxyManager> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ProxyManager*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ProxyManager*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace IceDelegate
{

namespace com
{

namespace xiaonei
{

namespace talk
{

class DeliverInterface : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void express(const ::com::xiaonei::talk::common::JidPtr&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void deliver(const ::com::xiaonei::talk::common::MessageSeq&, const ::Ice::Context*) = 0;
};

class ProxyManager : virtual public ::IceDelegate::com::xiaonei::talk::DeliverInterface
{
public:

    virtual bool indexExist(::Ice::Long, const ::Ice::Context*) = 0;

    virtual bool checkTicket(const ::com::xiaonei::talk::common::JidPtr&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual bool verify(const ::com::xiaonei::talk::common::JidPtr&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::std::string GetTicket(const ::com::xiaonei::talk::common::JidPtr&, const ::Ice::Context*) = 0;

    virtual void leave(const ::com::xiaonei::talk::common::JidPtr&, const ::Ice::Context*) = 0;

    virtual void relogin(const ::Ice::Context*) = 0;

    virtual void broadcast(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void kick(const ::com::xiaonei::talk::common::JidPtr&, const ::Ice::Context*) = 0;
};

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

namespace talk
{

class DeliverInterface : virtual public ::IceDelegate::com::xiaonei::talk::DeliverInterface,
                         virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void express(const ::com::xiaonei::talk::common::JidPtr&, const ::std::string&, const ::Ice::Context*);

    virtual void deliver(const ::com::xiaonei::talk::common::MessageSeq&, const ::Ice::Context*);
};

class ProxyManager : virtual public ::IceDelegate::com::xiaonei::talk::ProxyManager,
                     virtual public ::IceDelegateM::com::xiaonei::talk::DeliverInterface
{
public:

    virtual bool indexExist(::Ice::Long, const ::Ice::Context*);

    virtual bool checkTicket(const ::com::xiaonei::talk::common::JidPtr&, const ::std::string&, const ::Ice::Context*);

    virtual bool verify(const ::com::xiaonei::talk::common::JidPtr&, const ::std::string&, const ::Ice::Context*);

    virtual ::std::string GetTicket(const ::com::xiaonei::talk::common::JidPtr&, const ::Ice::Context*);

    virtual void leave(const ::com::xiaonei::talk::common::JidPtr&, const ::Ice::Context*);

    virtual void relogin(const ::Ice::Context*);

    virtual void broadcast(const ::std::string&, const ::Ice::Context*);

    virtual void kick(const ::com::xiaonei::talk::common::JidPtr&, const ::Ice::Context*);
};

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

namespace talk
{

class DeliverInterface : virtual public ::IceDelegate::com::xiaonei::talk::DeliverInterface,
                         virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void express(const ::com::xiaonei::talk::common::JidPtr&, const ::std::string&, const ::Ice::Context*);

    virtual void deliver(const ::com::xiaonei::talk::common::MessageSeq&, const ::Ice::Context*);
};

class ProxyManager : virtual public ::IceDelegate::com::xiaonei::talk::ProxyManager,
                     virtual public ::IceDelegateD::com::xiaonei::talk::DeliverInterface
{
public:

    virtual bool indexExist(::Ice::Long, const ::Ice::Context*);

    virtual bool checkTicket(const ::com::xiaonei::talk::common::JidPtr&, const ::std::string&, const ::Ice::Context*);

    virtual bool verify(const ::com::xiaonei::talk::common::JidPtr&, const ::std::string&, const ::Ice::Context*);

    virtual ::std::string GetTicket(const ::com::xiaonei::talk::common::JidPtr&, const ::Ice::Context*);

    virtual void leave(const ::com::xiaonei::talk::common::JidPtr&, const ::Ice::Context*);

    virtual void relogin(const ::Ice::Context*);

    virtual void broadcast(const ::std::string&, const ::Ice::Context*);

    virtual void kick(const ::com::xiaonei::talk::common::JidPtr&, const ::Ice::Context*);
};

}

}

}

}

namespace com
{

namespace xiaonei
{

namespace talk
{

class DeliverInterface : virtual public ::Ice::Object
{
public:

    typedef DeliverInterfacePrx ProxyType;
    typedef DeliverInterfacePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void express(const ::com::xiaonei::talk::common::JidPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___express(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void deliver(const ::com::xiaonei::talk::common::MessageSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deliver(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class ProxyManager : virtual public ::com::xiaonei::talk::DeliverInterface
{
public:

    typedef ProxyManagerPrx ProxyType;
    typedef ProxyManagerPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual bool indexExist(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___indexExist(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool checkTicket(const ::com::xiaonei::talk::common::JidPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___checkTicket(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool verify(const ::com::xiaonei::talk::common::JidPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___verify(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::std::string GetTicket(const ::com::xiaonei::talk::common::JidPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___GetTicket(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void leave(const ::com::xiaonei::talk::common::JidPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___leave(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void relogin(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___relogin(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void broadcast(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___broadcast(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void kick(const ::com::xiaonei::talk::common::JidPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___kick(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

}

}

#endif
