// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `pushMsg.ice'

#ifndef __src_ice_src__pushMsg_h__
#define __src_ice_src__pushMsg_h__

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

namespace talk
{

class OfflineMessageService;

class MessageService;

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

namespace talk
{

class OfflineMessageService;
bool operator==(const OfflineMessageService&, const OfflineMessageService&);
bool operator<(const OfflineMessageService&, const OfflineMessageService&);

class MessageService;
bool operator==(const MessageService&, const MessageService&);
bool operator<(const MessageService&, const MessageService&);

}

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::xiaonei::wap::push::talk::OfflineMessageService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::wap::push::talk::OfflineMessageService*);

::Ice::Object* upCast(::com::xiaonei::wap::push::talk::MessageService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::wap::push::talk::MessageService*);

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace push
{

namespace talk
{

typedef ::IceInternal::Handle< ::com::xiaonei::wap::push::talk::OfflineMessageService> OfflineMessageServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::wap::push::talk::OfflineMessageService> OfflineMessageServicePrx;

void __read(::IceInternal::BasicStream*, OfflineMessageServicePrx&);
void __patch__OfflineMessageServicePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::xiaonei::wap::push::talk::MessageService> MessageServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::wap::push::talk::MessageService> MessageServicePrx;

void __read(::IceInternal::BasicStream*, MessageServicePrx&);
void __patch__MessageServicePtr(void*, ::Ice::ObjectPtr&);

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

namespace talk
{

typedef ::std::map< ::std::string, ::std::string> ParamMap;
void __writeParamMap(::IceInternal::BasicStream*, const ParamMap&);
void __readParamMap(::IceInternal::BasicStream*, ParamMap&);

typedef ::std::map< ::Ice::Long, ::std::string> UserIdMap;
void __writeUserIdMap(::IceInternal::BasicStream*, const UserIdMap&);
void __readUserIdMap(::IceInternal::BasicStream*, UserIdMap&);

typedef ::std::vector< ::Ice::Long> longSeq;

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

namespace talk
{

class OfflineMessageService : virtual public ::IceProxy::Ice::Object
{
public:

    void push(::Ice::Long userId, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params)
    {
        push(userId, type, params, 0);
    }
    void push(::Ice::Long userId, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context& __ctx)
    {
        push(userId, type, params, &__ctx);
    }
    
private:

    void push(::Ice::Long, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMessageService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMessageService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<OfflineMessageService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class MessageService : virtual public ::IceProxy::com::xiaonei::wap::push::talk::OfflineMessageService
{
public:

    void pushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params)
    {
        pushFeed(userIds, type, params, 0);
    }
    void pushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context& __ctx)
    {
        pushFeed(userIds, type, params, &__ctx);
    }
    
private:

    void pushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap&, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);
    
public:

    void extPushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, const ::com::xiaonei::wap::push::talk::UserIdMap& gids, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params)
    {
        extPushFeed(userIds, gids, type, params, 0);
    }
    void extPushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, const ::com::xiaonei::wap::push::talk::UserIdMap& gids, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context& __ctx)
    {
        extPushFeed(userIds, gids, type, params, &__ctx);
    }
    
private:

    void extPushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap&, const ::com::xiaonei::wap::push::talk::UserIdMap&, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);
    
public:

    void pushBulk(const ::com::xiaonei::wap::push::talk::longSeq& userId, ::Ice::Int type, ::Ice::Int fromType, const ::com::xiaonei::wap::push::talk::ParamMap& params)
    {
        pushBulk(userId, type, fromType, params, 0);
    }
    void pushBulk(const ::com::xiaonei::wap::push::talk::longSeq& userId, ::Ice::Int type, ::Ice::Int fromType, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context& __ctx)
    {
        pushBulk(userId, type, fromType, params, &__ctx);
    }
    
private:

    void pushBulk(const ::com::xiaonei::wap::push::talk::longSeq&, ::Ice::Int, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);
    
public:

    void pushBulk4ChatFromIm(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params)
    {
        pushBulk4ChatFromIm(userIds, type, params, 0);
    }
    void pushBulk4ChatFromIm(const ::com::xiaonei::wap::push::talk::UserIdMap& userIds, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context& __ctx)
    {
        pushBulk4ChatFromIm(userIds, type, params, &__ctx);
    }
    
private:

    void pushBulk4ChatFromIm(const ::com::xiaonei::wap::push::talk::UserIdMap&, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);
    
public:

    void pushBulk4OfflineFromIm(const ::com::xiaonei::wap::push::talk::longSeq& userIds, ::Ice::Long toId, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params)
    {
        pushBulk4OfflineFromIm(userIds, toId, type, params, 0);
    }
    void pushBulk4OfflineFromIm(const ::com::xiaonei::wap::push::talk::longSeq& userIds, ::Ice::Long toId, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context& __ctx)
    {
        pushBulk4OfflineFromIm(userIds, toId, type, params, &__ctx);
    }
    
private:

    void pushBulk4OfflineFromIm(const ::com::xiaonei::wap::push::talk::longSeq&, ::Ice::Long, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);
    
public:

    void push4sixin(::Ice::Long userId, ::Ice::Long thirdId, ::Ice::Int thirdType, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params)
    {
        push4sixin(userId, thirdId, thirdType, type, params, 0);
    }
    void push4sixin(::Ice::Long userId, ::Ice::Long thirdId, ::Ice::Int thirdType, ::Ice::Int type, const ::com::xiaonei::wap::push::talk::ParamMap& params, const ::Ice::Context& __ctx)
    {
        push4sixin(userId, thirdId, thirdType, type, params, &__ctx);
    }
    
private:

    void push4sixin(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<MessageService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<MessageService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace talk
{

class OfflineMessageService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void push(::Ice::Long, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*) = 0;
};

class MessageService : virtual public ::IceDelegate::com::xiaonei::wap::push::talk::OfflineMessageService
{
public:

    virtual void pushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap&, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*) = 0;

    virtual void extPushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap&, const ::com::xiaonei::wap::push::talk::UserIdMap&, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*) = 0;

    virtual void pushBulk(const ::com::xiaonei::wap::push::talk::longSeq&, ::Ice::Int, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*) = 0;

    virtual void pushBulk4ChatFromIm(const ::com::xiaonei::wap::push::talk::UserIdMap&, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*) = 0;

    virtual void pushBulk4OfflineFromIm(const ::com::xiaonei::wap::push::talk::longSeq&, ::Ice::Long, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*) = 0;

    virtual void push4sixin(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*) = 0;
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

namespace talk
{

class OfflineMessageService : virtual public ::IceDelegate::com::xiaonei::wap::push::talk::OfflineMessageService,
                              virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void push(::Ice::Long, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);
};

class MessageService : virtual public ::IceDelegate::com::xiaonei::wap::push::talk::MessageService,
                       virtual public ::IceDelegateM::com::xiaonei::wap::push::talk::OfflineMessageService
{
public:

    virtual void pushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap&, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);

    virtual void extPushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap&, const ::com::xiaonei::wap::push::talk::UserIdMap&, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);

    virtual void pushBulk(const ::com::xiaonei::wap::push::talk::longSeq&, ::Ice::Int, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);

    virtual void pushBulk4ChatFromIm(const ::com::xiaonei::wap::push::talk::UserIdMap&, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);

    virtual void pushBulk4OfflineFromIm(const ::com::xiaonei::wap::push::talk::longSeq&, ::Ice::Long, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);

    virtual void push4sixin(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);
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

namespace talk
{

class OfflineMessageService : virtual public ::IceDelegate::com::xiaonei::wap::push::talk::OfflineMessageService,
                              virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void push(::Ice::Long, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);
};

class MessageService : virtual public ::IceDelegate::com::xiaonei::wap::push::talk::MessageService,
                       virtual public ::IceDelegateD::com::xiaonei::wap::push::talk::OfflineMessageService
{
public:

    virtual void pushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap&, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);

    virtual void extPushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap&, const ::com::xiaonei::wap::push::talk::UserIdMap&, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);

    virtual void pushBulk(const ::com::xiaonei::wap::push::talk::longSeq&, ::Ice::Int, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);

    virtual void pushBulk4ChatFromIm(const ::com::xiaonei::wap::push::talk::UserIdMap&, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);

    virtual void pushBulk4OfflineFromIm(const ::com::xiaonei::wap::push::talk::longSeq&, ::Ice::Long, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);

    virtual void push4sixin(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Context*);
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

namespace talk
{

class OfflineMessageService : virtual public ::Ice::Object
{
public:

    typedef OfflineMessageServicePrx ProxyType;
    typedef OfflineMessageServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void push(::Ice::Long, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___push(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class MessageService : virtual public ::com::xiaonei::wap::push::talk::OfflineMessageService
{
public:

    typedef MessageServicePrx ProxyType;
    typedef MessageServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void pushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap&, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___pushFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void extPushFeed(const ::com::xiaonei::wap::push::talk::UserIdMap&, const ::com::xiaonei::wap::push::talk::UserIdMap&, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___extPushFeed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void pushBulk(const ::com::xiaonei::wap::push::talk::longSeq&, ::Ice::Int, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___pushBulk(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void pushBulk4ChatFromIm(const ::com::xiaonei::wap::push::talk::UserIdMap&, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___pushBulk4ChatFromIm(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void pushBulk4OfflineFromIm(const ::com::xiaonei::wap::push::talk::longSeq&, ::Ice::Long, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___pushBulk4OfflineFromIm(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void push4sixin(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::com::xiaonei::wap::push::talk::ParamMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___push4sixin(::IceInternal::Incoming&, const ::Ice::Current&);

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
