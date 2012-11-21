// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `accountService.ice'

#ifndef __accountService_h__
#define __accountService_h__

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

class PrivacyResult;

class SxProfileResult;

class AccountService;

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

class PrivacyResult;
bool operator==(const PrivacyResult&, const PrivacyResult&);
bool operator<(const PrivacyResult&, const PrivacyResult&);

class SxProfileResult;
bool operator==(const SxProfileResult&, const SxProfileResult&);
bool operator<(const SxProfileResult&, const SxProfileResult&);

class AccountService;
bool operator==(const AccountService&, const AccountService&);
bool operator<(const AccountService&, const AccountService&);

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::renren::sixin::account::PrivacyResult*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::renren::sixin::account::PrivacyResult*);

::Ice::Object* upCast(::com::renren::sixin::account::SxProfileResult*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::renren::sixin::account::SxProfileResult*);

::Ice::Object* upCast(::com::renren::sixin::account::AccountService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::renren::sixin::account::AccountService*);

}

namespace com
{

namespace renren
{

namespace sixin
{

namespace account
{

typedef ::IceInternal::Handle< ::com::renren::sixin::account::PrivacyResult> PrivacyResultPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::renren::sixin::account::PrivacyResult> PrivacyResultPrx;

void __read(::IceInternal::BasicStream*, PrivacyResultPrx&);
void __patch__PrivacyResultPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::renren::sixin::account::SxProfileResult> SxProfileResultPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::renren::sixin::account::SxProfileResult> SxProfileResultPrx;

void __read(::IceInternal::BasicStream*, SxProfileResultPrx&);
void __patch__SxProfileResultPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::renren::sixin::account::AccountService> AccountServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::renren::sixin::account::AccountService> AccountServicePrx;

void __read(::IceInternal::BasicStream*, AccountServicePrx&);
void __patch__AccountServicePtr(void*, ::Ice::ObjectPtr&);

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

class PrivacyResult : virtual public ::IceProxy::com::renren::sixin::account::BaseResult
{
public:
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PrivacyResult> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PrivacyResult*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<PrivacyResult*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class SxProfileResult : virtual public ::IceProxy::com::renren::sixin::account::BaseResult
{
public:
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SxProfileResult> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SxProfileResult*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<SxProfileResult*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class AccountService : virtual public ::IceProxy::Ice::Object
{
public:

    ::com::renren::sixin::account::PrivacyResultPtr getPrivacy(::Ice::Long userId)
    {
        return getPrivacy(userId, 0);
    }
    ::com::renren::sixin::account::PrivacyResultPtr getPrivacy(::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        return getPrivacy(userId, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::PrivacyResultPtr getPrivacy(::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::SxProfileResultPtr getProfile(::Ice::Long userId)
    {
        return getProfile(userId, 0);
    }
    ::com::renren::sixin::account::SxProfileResultPtr getProfile(::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        return getProfile(userId, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::SxProfileResultPtr getProfile(::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::BaseResultPtr setPrivacy(::Ice::Long userId, const ::com::renren::sixin::account::PrivacyInfoPtr& privacy)
    {
        return setPrivacy(userId, privacy, 0);
    }
    ::com::renren::sixin::account::BaseResultPtr setPrivacy(::Ice::Long userId, const ::com::renren::sixin::account::PrivacyInfoPtr& privacy, const ::Ice::Context& __ctx)
    {
        return setPrivacy(userId, privacy, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BaseResultPtr setPrivacy(::Ice::Long, const ::com::renren::sixin::account::PrivacyInfoPtr&, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::BaseResultPtr bindAlias(::Ice::Long userId, const ::std::string& newOutAccount)
    {
        return bindAlias(userId, newOutAccount, 0);
    }
    ::com::renren::sixin::account::BaseResultPtr bindAlias(::Ice::Long userId, const ::std::string& newOutAccount, const ::Ice::Context& __ctx)
    {
        return bindAlias(userId, newOutAccount, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BaseResultPtr bindAlias(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::StringResultPtr getMD5Password(::Ice::Long userId)
    {
        return getMD5Password(userId, 0);
    }
    ::com::renren::sixin::account::StringResultPtr getMD5Password(::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        return getMD5Password(userId, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::StringResultPtr getMD5Password(::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::BoolResultPtr isBindAlias(::Ice::Long sixinID, ::com::renren::sixin::account::BindAccountEnum accountType)
    {
        return isBindAlias(sixinID, accountType, 0);
    }
    ::com::renren::sixin::account::BoolResultPtr isBindAlias(::Ice::Long sixinID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context& __ctx)
    {
        return isBindAlias(sixinID, accountType, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BoolResultPtr isBindAlias(::Ice::Long, ::com::renren::sixin::account::BindAccountEnum, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::BoolResultPtr isUserExist(::Ice::Long sixinID)
    {
        return isUserExist(sixinID, 0);
    }
    ::com::renren::sixin::account::BoolResultPtr isUserExist(::Ice::Long sixinID, const ::Ice::Context& __ctx)
    {
        return isUserExist(sixinID, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BoolResultPtr isUserExist(::Ice::Long, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<AccountService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<AccountService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<AccountService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<AccountService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class PrivacyResult : virtual public ::IceDelegate::com::renren::sixin::account::BaseResult
{
public:
};

class SxProfileResult : virtual public ::IceDelegate::com::renren::sixin::account::BaseResult
{
public:
};

class AccountService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::PrivacyResultPtr getPrivacy(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::SxProfileResultPtr getProfile(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::BaseResultPtr setPrivacy(::Ice::Long, const ::com::renren::sixin::account::PrivacyInfoPtr&, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::BaseResultPtr bindAlias(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::StringResultPtr getMD5Password(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::BoolResultPtr isBindAlias(::Ice::Long, ::com::renren::sixin::account::BindAccountEnum, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::BoolResultPtr isUserExist(::Ice::Long, const ::Ice::Context*) = 0;
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

class PrivacyResult : virtual public ::IceDelegate::com::renren::sixin::account::PrivacyResult,
                      virtual public ::IceDelegateM::com::renren::sixin::account::BaseResult
{
public:
};

class SxProfileResult : virtual public ::IceDelegate::com::renren::sixin::account::SxProfileResult,
                        virtual public ::IceDelegateM::com::renren::sixin::account::BaseResult
{
public:
};

class AccountService : virtual public ::IceDelegate::com::renren::sixin::account::AccountService,
                       virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::PrivacyResultPtr getPrivacy(::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::SxProfileResultPtr getProfile(::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr setPrivacy(::Ice::Long, const ::com::renren::sixin::account::PrivacyInfoPtr&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr bindAlias(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::StringResultPtr getMD5Password(::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BoolResultPtr isBindAlias(::Ice::Long, ::com::renren::sixin::account::BindAccountEnum, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BoolResultPtr isUserExist(::Ice::Long, const ::Ice::Context*);
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

class PrivacyResult : virtual public ::IceDelegate::com::renren::sixin::account::PrivacyResult,
                      virtual public ::IceDelegateD::com::renren::sixin::account::BaseResult
{
public:
};

class SxProfileResult : virtual public ::IceDelegate::com::renren::sixin::account::SxProfileResult,
                        virtual public ::IceDelegateD::com::renren::sixin::account::BaseResult
{
public:
};

class AccountService : virtual public ::IceDelegate::com::renren::sixin::account::AccountService,
                       virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::PrivacyResultPtr getPrivacy(::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::SxProfileResultPtr getProfile(::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr setPrivacy(::Ice::Long, const ::com::renren::sixin::account::PrivacyInfoPtr&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr bindAlias(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::StringResultPtr getMD5Password(::Ice::Long, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BoolResultPtr isBindAlias(::Ice::Long, ::com::renren::sixin::account::BindAccountEnum, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BoolResultPtr isUserExist(::Ice::Long, const ::Ice::Context*);
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

class PrivacyResult : virtual public ::com::renren::sixin::account::BaseResult
{
public:

    typedef PrivacyResultPrx ProxyType;
    typedef PrivacyResultPtr PointerType;
    
    PrivacyResult() {}
    PrivacyResult(bool, ::com::renren::sixin::account::AccountErrorCodeEnum, const ::std::string&, const ::com::renren::sixin::account::PrivacyInfoPtr&);
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

    virtual ~PrivacyResult() {}

    friend class PrivacyResult__staticInit;

public:

    ::com::renren::sixin::account::PrivacyInfoPtr privacy;
};

class PrivacyResult__staticInit
{
public:

    ::com::renren::sixin::account::PrivacyResult _init;
};

static PrivacyResult__staticInit _PrivacyResult_init;

class SxProfileResult : virtual public ::com::renren::sixin::account::BaseResult
{
public:

    typedef SxProfileResultPrx ProxyType;
    typedef SxProfileResultPtr PointerType;
    
    SxProfileResult() {}
    SxProfileResult(bool, ::com::renren::sixin::account::AccountErrorCodeEnum, const ::std::string&, const ::com::renren::sixin::account::SixinProfilePtr&);
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

    virtual ~SxProfileResult() {}

public:

    ::com::renren::sixin::account::SixinProfilePtr sxProfile;
};

class AccountService : virtual public ::Ice::Object
{
public:

    typedef AccountServicePrx ProxyType;
    typedef AccountServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::com::renren::sixin::account::PrivacyResultPtr getPrivacy(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getPrivacy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::SxProfileResultPtr getProfile(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::BaseResultPtr setPrivacy(::Ice::Long, const ::com::renren::sixin::account::PrivacyInfoPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setPrivacy(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::BaseResultPtr bindAlias(::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___bindAlias(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::StringResultPtr getMD5Password(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMD5Password(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::BoolResultPtr isBindAlias(::Ice::Long, ::com::renren::sixin::account::BindAccountEnum, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isBindAlias(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::BoolResultPtr isUserExist(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isUserExist(::IceInternal::Incoming&, const ::Ice::Current&);

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
