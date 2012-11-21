// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `relationService.ice'

#ifndef __relationService_h__
#define __relationService_h__

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

class ContactResult;

class ContactIdsResult;

class RelationService;

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

class ContactResult;
bool operator==(const ContactResult&, const ContactResult&);
bool operator<(const ContactResult&, const ContactResult&);

class ContactIdsResult;
bool operator==(const ContactIdsResult&, const ContactIdsResult&);
bool operator<(const ContactIdsResult&, const ContactIdsResult&);

class RelationService;
bool operator==(const RelationService&, const RelationService&);
bool operator<(const RelationService&, const RelationService&);

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::renren::sixin::account::ContactResult*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::renren::sixin::account::ContactResult*);

::Ice::Object* upCast(::com::renren::sixin::account::ContactIdsResult*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::renren::sixin::account::ContactIdsResult*);

::Ice::Object* upCast(::com::renren::sixin::account::RelationService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::renren::sixin::account::RelationService*);

}

namespace com
{

namespace renren
{

namespace sixin
{

namespace account
{

typedef ::IceInternal::Handle< ::com::renren::sixin::account::ContactResult> ContactResultPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::renren::sixin::account::ContactResult> ContactResultPrx;

void __read(::IceInternal::BasicStream*, ContactResultPrx&);
void __patch__ContactResultPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::renren::sixin::account::ContactIdsResult> ContactIdsResultPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::renren::sixin::account::ContactIdsResult> ContactIdsResultPrx;

void __read(::IceInternal::BasicStream*, ContactIdsResultPrx&);
void __patch__ContactIdsResultPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::renren::sixin::account::RelationService> RelationServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::renren::sixin::account::RelationService> RelationServicePrx;

void __read(::IceInternal::BasicStream*, RelationServicePrx&);
void __patch__RelationServicePtr(void*, ::Ice::ObjectPtr&);

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

enum RelationEnum
{
    All,
    Contact,
    Block
};

void __write(::IceInternal::BasicStream*, RelationEnum);
void __read(::IceInternal::BasicStream*, RelationEnum&);

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

class ContactResult : virtual public ::IceProxy::com::renren::sixin::account::BaseResult
{
public:
    
    ::IceInternal::ProxyHandle<ContactResult> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactResult> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactResult*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ContactResult*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ContactIdsResult : virtual public ::IceProxy::com::renren::sixin::account::BaseResult
{
public:
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ContactIdsResult> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ContactIdsResult*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ContactIdsResult*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RelationService : virtual public ::IceProxy::Ice::Object
{
public:

    ::com::renren::sixin::account::BaseResultPtr addContact(::Ice::Long hostId, ::Ice::Long associateId)
    {
        return addContact(hostId, associateId, 0);
    }
    ::com::renren::sixin::account::BaseResultPtr addContact(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context& __ctx)
    {
        return addContact(hostId, associateId, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BaseResultPtr addContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::BaseResultPtr addContactWithValidateMsg(::Ice::Long hostId, ::Ice::Long associateId, ::Ice::Int sceneType, const ::std::string& message)
    {
        return addContactWithValidateMsg(hostId, associateId, sceneType, message, 0);
    }
    ::com::renren::sixin::account::BaseResultPtr addContactWithValidateMsg(::Ice::Long hostId, ::Ice::Long associateId, ::Ice::Int sceneType, const ::std::string& message, const ::Ice::Context& __ctx)
    {
        return addContactWithValidateMsg(hostId, associateId, sceneType, message, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BaseResultPtr addContactWithValidateMsg(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::BaseResultPtr deleteContact(::Ice::Long hostId, ::Ice::Long associateId)
    {
        return deleteContact(hostId, associateId, 0);
    }
    ::com::renren::sixin::account::BaseResultPtr deleteContact(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context& __ctx)
    {
        return deleteContact(hostId, associateId, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BaseResultPtr deleteContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::BaseResultPtr blockContact(::Ice::Long hostId, ::Ice::Long associateId)
    {
        return blockContact(hostId, associateId, 0);
    }
    ::com::renren::sixin::account::BaseResultPtr blockContact(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context& __ctx)
    {
        return blockContact(hostId, associateId, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BaseResultPtr blockContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::BaseResultPtr unblockContact(::Ice::Long hostId, ::Ice::Long associateId)
    {
        return unblockContact(hostId, associateId, 0);
    }
    ::com::renren::sixin::account::BaseResultPtr unblockContact(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context& __ctx)
    {
        return unblockContact(hostId, associateId, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BaseResultPtr unblockContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::BaseResultPtr deleteBlockedContact(::Ice::Long userId, ::Ice::Long contactId)
    {
        return deleteBlockedContact(userId, contactId, 0);
    }
    ::com::renren::sixin::account::BaseResultPtr deleteBlockedContact(::Ice::Long userId, ::Ice::Long contactId, const ::Ice::Context& __ctx)
    {
        return deleteBlockedContact(userId, contactId, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BaseResultPtr deleteBlockedContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::IntResultPtr getContactsCount(::Ice::Long userId)
    {
        return getContactsCount(userId, 0);
    }
    ::com::renren::sixin::account::IntResultPtr getContactsCount(::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        return getContactsCount(userId, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::IntResultPtr getContactsCount(::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::ContactsResultPtr getContacts(::Ice::Long userId, ::Ice::Int begin, ::Ice::Int num)
    {
        return getContacts(userId, begin, num, 0);
    }
    ::com::renren::sixin::account::ContactsResultPtr getContacts(::Ice::Long userId, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Context& __ctx)
    {
        return getContacts(userId, begin, num, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::ContactsResultPtr getContacts(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::ContactIdsResultPtr getContactIds(::Ice::Long userId)
    {
        return getContactIds(userId, 0);
    }
    ::com::renren::sixin::account::ContactIdsResultPtr getContactIds(::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        return getContactIds(userId, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::ContactIdsResultPtr getContactIds(::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::IntResultPtr getBlackListCount(::Ice::Long userId)
    {
        return getBlackListCount(userId, 0);
    }
    ::com::renren::sixin::account::IntResultPtr getBlackListCount(::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        return getBlackListCount(userId, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::IntResultPtr getBlackListCount(::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::ContactsResultPtr getBlackLists(::Ice::Long userId, ::Ice::Int begin, ::Ice::Int num)
    {
        return getBlackLists(userId, begin, num, 0);
    }
    ::com::renren::sixin::account::ContactsResultPtr getBlackLists(::Ice::Long userId, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Context& __ctx)
    {
        return getBlackLists(userId, begin, num, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::ContactsResultPtr getBlackLists(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::ContactIdsResultPtr getRelationIds(::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type)
    {
        return getRelationIds(userId, type, 0);
    }
    ::com::renren::sixin::account::ContactIdsResultPtr getRelationIds(::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type, const ::Ice::Context& __ctx)
    {
        return getRelationIds(userId, type, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::ContactIdsResultPtr getRelationIds(::Ice::Long, ::com::renren::sixin::account::RelationEnum, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::IntResultPtr getRelationsCount(::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type)
    {
        return getRelationsCount(userId, type, 0);
    }
    ::com::renren::sixin::account::IntResultPtr getRelationsCount(::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type, const ::Ice::Context& __ctx)
    {
        return getRelationsCount(userId, type, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::IntResultPtr getRelationsCount(::Ice::Long, ::com::renren::sixin::account::RelationEnum, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::ContactsResultPtr getRelations(::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type, ::Ice::Int begin, ::Ice::Int num)
    {
        return getRelations(userId, type, begin, num, 0);
    }
    ::com::renren::sixin::account::ContactsResultPtr getRelations(::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Context& __ctx)
    {
        return getRelations(userId, type, begin, num, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::ContactsResultPtr getRelations(::Ice::Long, ::com::renren::sixin::account::RelationEnum, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::ContactResultPtr getRelation(::Ice::Long hostId, ::Ice::Long associateId)
    {
        return getRelation(hostId, associateId, 0);
    }
    ::com::renren::sixin::account::ContactResultPtr getRelation(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context& __ctx)
    {
        return getRelation(hostId, associateId, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::ContactResultPtr getRelation(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::BoolResultPtr isBlocked(::Ice::Long hostId, ::Ice::Long associateId)
    {
        return isBlocked(hostId, associateId, 0);
    }
    ::com::renren::sixin::account::BoolResultPtr isBlocked(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context& __ctx)
    {
        return isBlocked(hostId, associateId, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BoolResultPtr isBlocked(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RelationService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RelationService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RelationService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RelationService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class ContactResult : virtual public ::IceDelegate::com::renren::sixin::account::BaseResult
{
public:
};

class ContactIdsResult : virtual public ::IceDelegate::com::renren::sixin::account::BaseResult
{
public:
};

class RelationService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::BaseResultPtr addContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::BaseResultPtr addContactWithValidateMsg(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::BaseResultPtr deleteContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::BaseResultPtr blockContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::BaseResultPtr unblockContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::BaseResultPtr deleteBlockedContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::IntResultPtr getContactsCount(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::ContactsResultPtr getContacts(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::ContactIdsResultPtr getContactIds(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::IntResultPtr getBlackListCount(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::ContactsResultPtr getBlackLists(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::ContactIdsResultPtr getRelationIds(::Ice::Long, ::com::renren::sixin::account::RelationEnum, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::IntResultPtr getRelationsCount(::Ice::Long, ::com::renren::sixin::account::RelationEnum, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::ContactsResultPtr getRelations(::Ice::Long, ::com::renren::sixin::account::RelationEnum, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::ContactResultPtr getRelation(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::BoolResultPtr isBlocked(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;
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

class ContactResult : virtual public ::IceDelegate::com::renren::sixin::account::ContactResult,
                      virtual public ::IceDelegateM::com::renren::sixin::account::BaseResult
{
public:
};

class ContactIdsResult : virtual public ::IceDelegate::com::renren::sixin::account::ContactIdsResult,
                         virtual public ::IceDelegateM::com::renren::sixin::account::BaseResult
{
public:
};

class RelationService : virtual public ::IceDelegate::com::renren::sixin::account::RelationService,
                        virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::BaseResultPtr addContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr addContactWithValidateMsg(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr deleteContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr blockContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr unblockContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr deleteBlockedContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::IntResultPtr getContactsCount(::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::ContactsResultPtr getContacts(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::ContactIdsResultPtr getContactIds(::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::IntResultPtr getBlackListCount(::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::ContactsResultPtr getBlackLists(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::ContactIdsResultPtr getRelationIds(::Ice::Long, ::com::renren::sixin::account::RelationEnum, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::IntResultPtr getRelationsCount(::Ice::Long, ::com::renren::sixin::account::RelationEnum, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::ContactsResultPtr getRelations(::Ice::Long, ::com::renren::sixin::account::RelationEnum, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::ContactResultPtr getRelation(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BoolResultPtr isBlocked(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
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

class ContactResult : virtual public ::IceDelegate::com::renren::sixin::account::ContactResult,
                      virtual public ::IceDelegateD::com::renren::sixin::account::BaseResult
{
public:
};

class ContactIdsResult : virtual public ::IceDelegate::com::renren::sixin::account::ContactIdsResult,
                         virtual public ::IceDelegateD::com::renren::sixin::account::BaseResult
{
public:
};

class RelationService : virtual public ::IceDelegate::com::renren::sixin::account::RelationService,
                        virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::BaseResultPtr addContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr addContactWithValidateMsg(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr deleteContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr blockContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr unblockContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr deleteBlockedContact(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::IntResultPtr getContactsCount(::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::ContactsResultPtr getContacts(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::ContactIdsResultPtr getContactIds(::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::IntResultPtr getBlackListCount(::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::ContactsResultPtr getBlackLists(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::ContactIdsResultPtr getRelationIds(::Ice::Long, ::com::renren::sixin::account::RelationEnum, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::IntResultPtr getRelationsCount(::Ice::Long, ::com::renren::sixin::account::RelationEnum, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::ContactsResultPtr getRelations(::Ice::Long, ::com::renren::sixin::account::RelationEnum, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::ContactResultPtr getRelation(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BoolResultPtr isBlocked(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
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

class ContactResult : virtual public ::com::renren::sixin::account::BaseResult
{
public:

    typedef ContactResultPrx ProxyType;
    typedef ContactResultPtr PointerType;
    
    ContactResult() {}
    ContactResult(bool, ::com::renren::sixin::account::AccountErrorCodeEnum, const ::std::string&, const ::com::renren::sixin::account::ContactInfoPtr&);
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

    virtual ~ContactResult() {}

    friend class ContactResult__staticInit;

public:

    ::com::renren::sixin::account::ContactInfoPtr contact;
};

class ContactResult__staticInit
{
public:

    ::com::renren::sixin::account::ContactResult _init;
};

static ContactResult__staticInit _ContactResult_init;

class ContactIdsResult : virtual public ::com::renren::sixin::account::BaseResult
{
public:

    typedef ContactIdsResultPrx ProxyType;
    typedef ContactIdsResultPtr PointerType;
    
    ContactIdsResult() {}
    ContactIdsResult(bool, ::com::renren::sixin::account::AccountErrorCodeEnum, const ::std::string&, const ::com::renren::sixin::account::LongList&);
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

    virtual ~ContactIdsResult() {}

public:

    ::com::renren::sixin::account::LongList contactIds;
};

class RelationService : virtual public ::Ice::Object
{
public:

    typedef RelationServicePrx ProxyType;
    typedef RelationServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::com::renren::sixin::account::BaseResultPtr addContact(::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::BaseResultPtr addContactWithValidateMsg(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addContactWithValidateMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::BaseResultPtr deleteContact(::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::BaseResultPtr blockContact(::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___blockContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::BaseResultPtr unblockContact(::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___unblockContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::BaseResultPtr deleteBlockedContact(::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteBlockedContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::IntResultPtr getContactsCount(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getContactsCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::ContactsResultPtr getContacts(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getContacts(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::ContactIdsResultPtr getContactIds(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getContactIds(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::IntResultPtr getBlackListCount(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getBlackListCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::ContactsResultPtr getBlackLists(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getBlackLists(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::ContactIdsResultPtr getRelationIds(::Ice::Long, ::com::renren::sixin::account::RelationEnum, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRelationIds(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::IntResultPtr getRelationsCount(::Ice::Long, ::com::renren::sixin::account::RelationEnum, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRelationsCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::ContactsResultPtr getRelations(::Ice::Long, ::com::renren::sixin::account::RelationEnum, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRelations(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::ContactResultPtr getRelation(::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRelation(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::BoolResultPtr isBlocked(::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isBlocked(::IceInternal::Incoming&, const ::Ice::Current&);

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
