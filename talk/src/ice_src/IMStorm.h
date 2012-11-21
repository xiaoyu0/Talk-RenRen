// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IMStorm.ice'

#ifndef __src_ice_src__IMStorm_h__
#define __src_ice_src__IMStorm_h__

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
#include <Util.h>
#include <TalkCommon.h>
#include <TalkProxy.h>
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

namespace xce
{

namespace talk
{

class Observer;

class IMStorm;

class TestStorm;

}

}

}

namespace xce
{

namespace talk
{

class Observer;
bool operator==(const Observer&, const Observer&);
bool operator<(const Observer&, const Observer&);

class IMStorm;
bool operator==(const IMStorm&, const IMStorm&);
bool operator<(const IMStorm&, const IMStorm&);

class TestStorm;
bool operator==(const TestStorm&, const TestStorm&);
bool operator<(const TestStorm&, const TestStorm&);

}

}

namespace IceInternal
{

::Ice::Object* upCast(::xce::talk::Observer*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::talk::Observer*);

::Ice::Object* upCast(::xce::talk::IMStorm*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::talk::IMStorm*);

::Ice::Object* upCast(::xce::talk::TestStorm*);
::IceProxy::Ice::Object* upCast(::IceProxy::xce::talk::TestStorm*);

}

namespace xce
{

namespace talk
{

typedef ::IceInternal::Handle< ::xce::talk::Observer> ObserverPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::talk::Observer> ObserverPrx;

void __read(::IceInternal::BasicStream*, ObserverPrx&);
void __patch__ObserverPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::talk::IMStorm> IMStormPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::talk::IMStorm> IMStormPrx;

void __read(::IceInternal::BasicStream*, IMStormPrx&);
void __patch__IMStormPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::xce::talk::TestStorm> TestStormPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::xce::talk::TestStorm> TestStormPrx;

void __read(::IceInternal::BasicStream*, TestStormPrx&);
void __patch__TestStormPtr(void*, ::Ice::ObjectPtr&);

}

}

namespace xce
{

namespace talk
{

typedef ::std::vector< ::xce::talk::ObserverPrx> ObserverPool;
void __writeObserverPool(::IceInternal::BasicStream*, const ::xce::talk::ObserverPrx*, const ::xce::talk::ObserverPrx*);
void __readObserverPool(::IceInternal::BasicStream*, ObserverPool&);

typedef ::std::map< ::std::string, ::xce::talk::ObserverPool> ObserverPoolMap;
void __writeObserverPoolMap(::IceInternal::BasicStream*, const ObserverPoolMap&);
void __readObserverPoolMap(::IceInternal::BasicStream*, ObserverPoolMap&);

}

}

namespace IceProxy
{

namespace xce
{

namespace talk
{

class Observer : virtual public ::IceProxy::Ice::Object
{
public:

    bool update(const ::MyUtil::Str2StrMap& context)
    {
        return update(context, 0);
    }
    bool update(const ::MyUtil::Str2StrMap& context, const ::Ice::Context& __ctx)
    {
        return update(context, &__ctx);
    }
    
private:

    bool update(const ::MyUtil::Str2StrMap&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Observer> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Observer> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Observer*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Observer*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class IMStorm : virtual public ::IceProxy::com::xiaonei::talk::DeliverInterface
{
public:

    void UserOnlineStatChange(::Ice::Int userid, ::Ice::Int onlinestat, ::Ice::Int onlinetype, const ::MyUtil::IntSeq& notifybuddys)
    {
        UserOnlineStatChange(userid, onlinestat, onlinetype, notifybuddys, 0);
    }
    void UserOnlineStatChange(::Ice::Int userid, ::Ice::Int onlinestat, ::Ice::Int onlinetype, const ::MyUtil::IntSeq& notifybuddys, const ::Ice::Context& __ctx)
    {
        UserOnlineStatChange(userid, onlinestat, onlinetype, notifybuddys, &__ctx);
    }
    
private:

    void UserOnlineStatChange(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*);
    
public:

    void notify(const ::std::string& name, const ::MyUtil::Str2StrMap& context, ::Ice::Int servercount, ::Ice::Int channel)
    {
        notify(name, context, servercount, channel, 0);
    }
    void notify(const ::std::string& name, const ::MyUtil::Str2StrMap& context, ::Ice::Int servercount, ::Ice::Int channel, const ::Ice::Context& __ctx)
    {
        notify(name, context, servercount, channel, &__ctx);
    }
    
private:

    void notify(const ::std::string&, const ::MyUtil::Str2StrMap&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void subscribe(const ::std::string& name, const ::xce::talk::ObserverPrx& o, ::Ice::Int phoneservercount, ::Ice::Int phoneserverindex)
    {
        subscribe(name, o, phoneservercount, phoneserverindex, 0);
    }
    void subscribe(const ::std::string& name, const ::xce::talk::ObserverPrx& o, ::Ice::Int phoneservercount, ::Ice::Int phoneserverindex, const ::Ice::Context& __ctx)
    {
        subscribe(name, o, phoneservercount, phoneserverindex, &__ctx);
    }
    
private:

    void subscribe(const ::std::string&, const ::xce::talk::ObserverPrx&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void unsubscribe(const ::std::string& name, const ::xce::talk::ObserverPrx& o)
    {
        unsubscribe(name, o, 0);
    }
    void unsubscribe(const ::std::string& name, const ::xce::talk::ObserverPrx& o, const ::Ice::Context& __ctx)
    {
        unsubscribe(name, o, &__ctx);
    }
    
private:

    void unsubscribe(const ::std::string&, const ::xce::talk::ObserverPrx&, const ::Ice::Context*);
    
public:

    void NotifyPhoneServerDisable()
    {
        NotifyPhoneServerDisable(0);
    }
    void NotifyPhoneServerDisable(const ::Ice::Context& __ctx)
    {
        NotifyPhoneServerDisable(&__ctx);
    }
    
private:

    void NotifyPhoneServerDisable(const ::Ice::Context*);
    
public:

    void NotifyPhoneServerEnalbe()
    {
        NotifyPhoneServerEnalbe(0);
    }
    void NotifyPhoneServerEnalbe(const ::Ice::Context& __ctx)
    {
        NotifyPhoneServerEnalbe(&__ctx);
    }
    
private:

    void NotifyPhoneServerEnalbe(const ::Ice::Context*);
    
public:

    ::xce::talk::ObserverPoolMap query(const ::std::string& name)
    {
        return query(name, 0);
    }
    ::xce::talk::ObserverPoolMap query(const ::std::string& name, const ::Ice::Context& __ctx)
    {
        return query(name, &__ctx);
    }
    
private:

    ::xce::talk::ObserverPoolMap query(const ::std::string&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<IMStorm> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMStorm> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMStorm*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IMStorm*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class TestStorm : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<TestStorm> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<TestStorm> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<TestStorm*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<TestStorm*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace IceDelegate
{

namespace xce
{

namespace talk
{

class Observer : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual bool update(const ::MyUtil::Str2StrMap&, const ::Ice::Context*) = 0;
};

class IMStorm : virtual public ::IceDelegate::com::xiaonei::talk::DeliverInterface
{
public:

    virtual void UserOnlineStatChange(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*) = 0;

    virtual void notify(const ::std::string&, const ::MyUtil::Str2StrMap&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void subscribe(const ::std::string&, const ::xce::talk::ObserverPrx&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void unsubscribe(const ::std::string&, const ::xce::talk::ObserverPrx&, const ::Ice::Context*) = 0;

    virtual void NotifyPhoneServerDisable(const ::Ice::Context*) = 0;

    virtual void NotifyPhoneServerEnalbe(const ::Ice::Context*) = 0;

    virtual ::xce::talk::ObserverPoolMap query(const ::std::string&, const ::Ice::Context*) = 0;
};

class TestStorm : virtual public ::IceDelegate::Ice::Object
{
public:
};

}

}

}

namespace IceDelegateM
{

namespace xce
{

namespace talk
{

class Observer : virtual public ::IceDelegate::xce::talk::Observer,
                 virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual bool update(const ::MyUtil::Str2StrMap&, const ::Ice::Context*);
};

class IMStorm : virtual public ::IceDelegate::xce::talk::IMStorm,
                virtual public ::IceDelegateM::com::xiaonei::talk::DeliverInterface
{
public:

    virtual void UserOnlineStatChange(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual void notify(const ::std::string&, const ::MyUtil::Str2StrMap&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void subscribe(const ::std::string&, const ::xce::talk::ObserverPrx&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void unsubscribe(const ::std::string&, const ::xce::talk::ObserverPrx&, const ::Ice::Context*);

    virtual void NotifyPhoneServerDisable(const ::Ice::Context*);

    virtual void NotifyPhoneServerEnalbe(const ::Ice::Context*);

    virtual ::xce::talk::ObserverPoolMap query(const ::std::string&, const ::Ice::Context*);
};

class TestStorm : virtual public ::IceDelegate::xce::talk::TestStorm,
                  virtual public ::IceDelegateM::Ice::Object
{
public:
};

}

}

}

namespace IceDelegateD
{

namespace xce
{

namespace talk
{

class Observer : virtual public ::IceDelegate::xce::talk::Observer,
                 virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual bool update(const ::MyUtil::Str2StrMap&, const ::Ice::Context*);
};

class IMStorm : virtual public ::IceDelegate::xce::talk::IMStorm,
                virtual public ::IceDelegateD::com::xiaonei::talk::DeliverInterface
{
public:

    virtual void UserOnlineStatChange(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual void notify(const ::std::string&, const ::MyUtil::Str2StrMap&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void subscribe(const ::std::string&, const ::xce::talk::ObserverPrx&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void unsubscribe(const ::std::string&, const ::xce::talk::ObserverPrx&, const ::Ice::Context*);

    virtual void NotifyPhoneServerDisable(const ::Ice::Context*);

    virtual void NotifyPhoneServerEnalbe(const ::Ice::Context*);

    virtual ::xce::talk::ObserverPoolMap query(const ::std::string&, const ::Ice::Context*);
};

class TestStorm : virtual public ::IceDelegate::xce::talk::TestStorm,
                  virtual public ::IceDelegateD::Ice::Object
{
public:
};

}

}

}

namespace xce
{

namespace talk
{

class Observer : virtual public ::Ice::Object
{
public:

    typedef ObserverPrx ProxyType;
    typedef ObserverPtr PointerType;
    
    Observer() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual bool update(const ::MyUtil::Str2StrMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___update(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class IMStorm : virtual public ::com::xiaonei::talk::DeliverInterface
{
public:

    typedef IMStormPrx ProxyType;
    typedef IMStormPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void UserOnlineStatChange(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::MyUtil::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___UserOnlineStatChange(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void notify(const ::std::string&, const ::MyUtil::Str2StrMap&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___notify(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void subscribe(const ::std::string&, const ::xce::talk::ObserverPrx&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___subscribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void unsubscribe(const ::std::string&, const ::xce::talk::ObserverPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unsubscribe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void NotifyPhoneServerDisable(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___NotifyPhoneServerDisable(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void NotifyPhoneServerEnalbe(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___NotifyPhoneServerEnalbe(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::xce::talk::ObserverPoolMap query(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___query(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class TestStorm : virtual public ::Ice::Object
{
public:

    typedef TestStormPrx ProxyType;
    typedef TestStormPtr PointerType;
    
    TestStorm() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~TestStorm() {}

    friend class TestStorm__staticInit;
};

class TestStorm__staticInit
{
public:

    ::xce::talk::TestStorm _init;
};

static TestStorm__staticInit _TestStorm_init;

}

}

#endif
