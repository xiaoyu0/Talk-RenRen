// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `recommendService.ice'

#ifndef __recommendService_h__
#define __recommendService_h__

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
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <base.h>
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

namespace renren
{

namespace sixin
{

namespace account
{

class RelationShip;

class Message;

class RecomMsgsResult;

class RecommendService;

}

}

}

}

}

namespace com
{

namespace renren
{

namespace sixin
{

namespace account
{

class RelationShip;
bool operator==(const RelationShip&, const RelationShip&);
bool operator<(const RelationShip&, const RelationShip&);

class Message;
bool operator==(const Message&, const Message&);
bool operator<(const Message&, const Message&);

class RecomMsgsResult;
bool operator==(const RecomMsgsResult&, const RecomMsgsResult&);
bool operator<(const RecomMsgsResult&, const RecomMsgsResult&);

class RecommendService;
bool operator==(const RecommendService&, const RecommendService&);
bool operator<(const RecommendService&, const RecommendService&);

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::renren::sixin::account::RelationShip*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::renren::sixin::account::RelationShip*);

::Ice::Object* upCast(::com::renren::sixin::account::Message*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::renren::sixin::account::Message*);

::Ice::Object* upCast(::com::renren::sixin::account::RecomMsgsResult*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::renren::sixin::account::RecomMsgsResult*);

::Ice::Object* upCast(::com::renren::sixin::account::RecommendService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::renren::sixin::account::RecommendService*);

}

namespace com
{

namespace renren
{

namespace sixin
{

namespace account
{

typedef ::IceInternal::Handle< ::com::renren::sixin::account::RelationShip> RelationShipPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::renren::sixin::account::RelationShip> RelationShipPrx;

void __read(::IceInternal::BasicStream*, RelationShipPrx&);
void __patch__RelationShipPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::renren::sixin::account::Message> MessagePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::renren::sixin::account::Message> MessagePrx;

void __read(::IceInternal::BasicStream*, MessagePrx&);
void __patch__MessagePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::renren::sixin::account::RecomMsgsResult> RecomMsgsResultPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::renren::sixin::account::RecomMsgsResult> RecomMsgsResultPrx;

void __read(::IceInternal::BasicStream*, RecomMsgsResultPrx&);
void __patch__RecomMsgsResultPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::renren::sixin::account::RecommendService> RecommendServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::renren::sixin::account::RecommendService> RecommendServicePrx;

void __read(::IceInternal::BasicStream*, RecommendServicePrx&);
void __patch__RecommendServicePtr(void*, ::Ice::ObjectPtr&);

}

}

}

}

namespace com
{

namespace renren
{

namespace sixin
{

namespace account
{

enum RelationTypeEnum
{
    AKnowsB,
    BKnowsA,
    KnownEachOther
};

void __write(::IceInternal::BasicStream*, RelationTypeEnum);
void __read(::IceInternal::BasicStream*, RelationTypeEnum&);

typedef ::std::vector< ::com::renren::sixin::account::RelationShipPtr> RelationShipList;
void __writeRelationShipList(::IceInternal::BasicStream*, const ::com::renren::sixin::account::RelationShipPtr*, const ::com::renren::sixin::account::RelationShipPtr*);
void __readRelationShipList(::IceInternal::BasicStream*, RelationShipList&);

typedef ::std::vector< ::com::renren::sixin::account::MessagePtr> RecomMsgList;
void __writeRecomMsgList(::IceInternal::BasicStream*, const ::com::renren::sixin::account::MessagePtr*, const ::com::renren::sixin::account::MessagePtr*);
void __readRecomMsgList(::IceInternal::BasicStream*, RecomMsgList&);

}

}

}

}

namespace IceProxy
{

namespace com
{

namespace renren
{

namespace sixin
{

namespace account
{

class RelationShip : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<RelationShip> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationShip> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationShip*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RelationShip*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Message : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Message> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RecomMsgsResult : virtual public ::IceProxy::com::renren::sixin::account::BaseResult
{
public:
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecomMsgsResult> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecomMsgsResult*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RecomMsgsResult*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RecommendService : virtual public ::IceProxy::Ice::Object
{
public:

    ::com::renren::sixin::account::RecomMsgsResultPtr getRecomMsgs(::Ice::Long userId, bool isDone)
    {
        return getRecomMsgs(userId, isDone, 0);
    }
    ::com::renren::sixin::account::RecomMsgsResultPtr getRecomMsgs(::Ice::Long userId, bool isDone, const ::Ice::Context& __ctx)
    {
        return getRecomMsgs(userId, isDone, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::RecomMsgsResultPtr getRecomMsgs(::Ice::Long, bool, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::BaseResultPtr recommendRelationShips(const ::com::renren::sixin::account::RelationShipList& relationShip, ::com::renren::sixin::account::BindAccountEnum accountType)
    {
        return recommendRelationShips(relationShip, accountType, 0);
    }
    ::com::renren::sixin::account::BaseResultPtr recommendRelationShips(const ::com::renren::sixin::account::RelationShipList& relationShip, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context& __ctx)
    {
        return recommendRelationShips(relationShip, accountType, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BaseResultPtr recommendRelationShips(const ::com::renren::sixin::account::RelationShipList&, ::com::renren::sixin::account::BindAccountEnum, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RecommendService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RecommendService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RecommendService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RecommendService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace renren
{

namespace sixin
{

namespace account
{

class RelationShip : virtual public ::IceDelegate::Ice::Object
{
public:
};

class Message : virtual public ::IceDelegate::Ice::Object
{
public:
};

class RecomMsgsResult : virtual public ::IceDelegate::com::renren::sixin::account::BaseResult
{
public:
};

class RecommendService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::RecomMsgsResultPtr getRecomMsgs(::Ice::Long, bool, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::BaseResultPtr recommendRelationShips(const ::com::renren::sixin::account::RelationShipList&, ::com::renren::sixin::account::BindAccountEnum, const ::Ice::Context*) = 0;
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

namespace renren
{

namespace sixin
{

namespace account
{

class RelationShip : virtual public ::IceDelegate::com::renren::sixin::account::RelationShip,
                     virtual public ::IceDelegateM::Ice::Object
{
public:
};

class Message : virtual public ::IceDelegate::com::renren::sixin::account::Message,
                virtual public ::IceDelegateM::Ice::Object
{
public:
};

class RecomMsgsResult : virtual public ::IceDelegate::com::renren::sixin::account::RecomMsgsResult,
                        virtual public ::IceDelegateM::com::renren::sixin::account::BaseResult
{
public:
};

class RecommendService : virtual public ::IceDelegate::com::renren::sixin::account::RecommendService,
                         virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::RecomMsgsResultPtr getRecomMsgs(::Ice::Long, bool, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr recommendRelationShips(const ::com::renren::sixin::account::RelationShipList&, ::com::renren::sixin::account::BindAccountEnum, const ::Ice::Context*);
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

namespace renren
{

namespace sixin
{

namespace account
{

class RelationShip : virtual public ::IceDelegate::com::renren::sixin::account::RelationShip,
                     virtual public ::IceDelegateD::Ice::Object
{
public:
};

class Message : virtual public ::IceDelegate::com::renren::sixin::account::Message,
                virtual public ::IceDelegateD::Ice::Object
{
public:
};

class RecomMsgsResult : virtual public ::IceDelegate::com::renren::sixin::account::RecomMsgsResult,
                        virtual public ::IceDelegateD::com::renren::sixin::account::BaseResult
{
public:
};

class RecommendService : virtual public ::IceDelegate::com::renren::sixin::account::RecommendService,
                         virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::RecomMsgsResultPtr getRecomMsgs(::Ice::Long, bool, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr recommendRelationShips(const ::com::renren::sixin::account::RelationShipList&, ::com::renren::sixin::account::BindAccountEnum, const ::Ice::Context*);
};

}

}

}

}

}

namespace com
{

namespace renren
{

namespace sixin
{

namespace account
{

class RelationShip : virtual public ::Ice::Object
{
public:

    typedef RelationShipPrx ProxyType;
    typedef RelationShipPtr PointerType;
    
    RelationShip() {}
    RelationShip(::Ice::Long, ::Ice::Long, ::com::renren::sixin::account::RelationTypeEnum);
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

    virtual ~RelationShip() {}

    friend class RelationShip__staticInit;

public:

    ::Ice::Long activeId;

    ::Ice::Long associatId;

    ::com::renren::sixin::account::RelationTypeEnum type;
};

class RelationShip__staticInit
{
public:

    ::com::renren::sixin::account::RelationShip _init;
};

static RelationShip__staticInit _RelationShip_init;

class Message : virtual public ::Ice::Object
{
public:

    typedef MessagePrx ProxyType;
    typedef MessagePtr PointerType;
    
    Message() {}
    Message(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int, const ::std::string&);
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

    virtual ~Message() {}

public:

    ::Ice::Long toId;

    ::Ice::Long gId;

    ::Ice::Int fromType;

    ::std::string fromText;

    ::std::string headUrl;

    ::std::string name;

    ::Ice::Int type;

    ::std::string text;
};

class RecomMsgsResult : virtual public ::com::renren::sixin::account::BaseResult
{
public:

    typedef RecomMsgsResultPrx ProxyType;
    typedef RecomMsgsResultPtr PointerType;
    
    RecomMsgsResult() {}
    RecomMsgsResult(bool, ::com::renren::sixin::account::AccountErrorCodeEnum, const ::std::string&, const ::com::renren::sixin::account::RecomMsgList&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~RecomMsgsResult() {}

public:

    ::com::renren::sixin::account::RecomMsgList msgList;
};

class RecommendService : virtual public ::Ice::Object
{
public:

    typedef RecommendServicePrx ProxyType;
    typedef RecommendServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::com::renren::sixin::account::RecomMsgsResultPtr getRecomMsgs(::Ice::Long, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRecomMsgs(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::BaseResultPtr recommendRelationShips(const ::com::renren::sixin::account::RelationShipList&, ::com::renren::sixin::account::BindAccountEnum, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___recommendRelationShips(::IceInternal::Incoming&, const ::Ice::Current&);

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
