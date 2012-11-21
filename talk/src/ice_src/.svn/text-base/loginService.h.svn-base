// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `loginService.ice'

#ifndef __loginService_h__
#define __loginService_h__

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

class LoginResult;

class LoginService;

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

class LoginResult;
bool operator==(const LoginResult&, const LoginResult&);
bool operator<(const LoginResult&, const LoginResult&);

class LoginService;
bool operator==(const LoginService&, const LoginService&);
bool operator<(const LoginService&, const LoginService&);

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::renren::sixin::account::LoginResult*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::renren::sixin::account::LoginResult*);

::Ice::Object* upCast(::com::renren::sixin::account::LoginService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::renren::sixin::account::LoginService*);

}

namespace com
{

namespace renren
{

namespace sixin
{

namespace account
{

typedef ::IceInternal::Handle< ::com::renren::sixin::account::LoginResult> LoginResultPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::renren::sixin::account::LoginResult> LoginResultPrx;

void __read(::IceInternal::BasicStream*, LoginResultPrx&);
void __patch__LoginResultPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::renren::sixin::account::LoginService> LoginServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::renren::sixin::account::LoginService> LoginServicePrx;

void __read(::IceInternal::BasicStream*, LoginServicePrx&);
void __patch__LoginServicePtr(void*, ::Ice::ObjectPtr&);

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

enum OauthSiteEnum
{
    FacebookSite,
    SinaWeiBoSite
};

void __write(::IceInternal::BasicStream*, OauthSiteEnum);
void __read(::IceInternal::BasicStream*, OauthSiteEnum&);

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

class LoginResult : virtual public ::IceProxy::com::renren::sixin::account::BaseResult
{
public:
    
    ::IceInternal::ProxyHandle<LoginResult> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginResult> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginResult*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<LoginResult*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class LoginService : virtual public ::IceProxy::Ice::Object
{
public:

    ::com::renren::sixin::account::LoginResultPtr commonLogin(const ::std::string& account, const ::std::string& password)
    {
        return commonLogin(account, password, 0);
    }
    ::com::renren::sixin::account::LoginResultPtr commonLogin(const ::std::string& account, const ::std::string& password, const ::Ice::Context& __ctx)
    {
        return commonLogin(account, password, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::LoginResultPtr commonLogin(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::LoginResultPtr renrenLogin(const ::std::string& account, const ::std::string& password)
    {
        return renrenLogin(account, password, 0);
    }
    ::com::renren::sixin::account::LoginResultPtr renrenLogin(const ::std::string& account, const ::std::string& password, const ::Ice::Context& __ctx)
    {
        return renrenLogin(account, password, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::LoginResultPtr renrenLogin(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::LoginResultPtr thirdPartyLogin(const ::com::renren::sixin::account::TokenInfoPtr& token, ::com::renren::sixin::account::BindAccountEnum accountEnum)
    {
        return thirdPartyLogin(token, accountEnum, 0);
    }
    ::com::renren::sixin::account::LoginResultPtr thirdPartyLogin(const ::com::renren::sixin::account::TokenInfoPtr& token, ::com::renren::sixin::account::BindAccountEnum accountEnum, const ::Ice::Context& __ctx)
    {
        return thirdPartyLogin(token, accountEnum, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::LoginResultPtr thirdPartyLogin(const ::com::renren::sixin::account::TokenInfoPtr&, ::com::renren::sixin::account::BindAccountEnum, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::LongResultPtr logout(::Ice::Long userId)
    {
        return logout(userId, 0);
    }
    ::com::renren::sixin::account::LongResultPtr logout(::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        return logout(userId, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::LongResultPtr logout(::Ice::Long, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<LoginService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<LoginService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<LoginService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<LoginService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class LoginResult : virtual public ::IceDelegate::com::renren::sixin::account::BaseResult
{
public:
};

class LoginService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::LoginResultPtr commonLogin(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::LoginResultPtr renrenLogin(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::LoginResultPtr thirdPartyLogin(const ::com::renren::sixin::account::TokenInfoPtr&, ::com::renren::sixin::account::BindAccountEnum, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::LongResultPtr logout(::Ice::Long, const ::Ice::Context*) = 0;
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

class LoginResult : virtual public ::IceDelegate::com::renren::sixin::account::LoginResult,
                    virtual public ::IceDelegateM::com::renren::sixin::account::BaseResult
{
public:
};

class LoginService : virtual public ::IceDelegate::com::renren::sixin::account::LoginService,
                     virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::LoginResultPtr commonLogin(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::LoginResultPtr renrenLogin(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::LoginResultPtr thirdPartyLogin(const ::com::renren::sixin::account::TokenInfoPtr&, ::com::renren::sixin::account::BindAccountEnum, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::LongResultPtr logout(::Ice::Long, const ::Ice::Context*);
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

class LoginResult : virtual public ::IceDelegate::com::renren::sixin::account::LoginResult,
                    virtual public ::IceDelegateD::com::renren::sixin::account::BaseResult
{
public:
};

class LoginService : virtual public ::IceDelegate::com::renren::sixin::account::LoginService,
                     virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::LoginResultPtr commonLogin(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::LoginResultPtr renrenLogin(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::LoginResultPtr thirdPartyLogin(const ::com::renren::sixin::account::TokenInfoPtr&, ::com::renren::sixin::account::BindAccountEnum, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::LongResultPtr logout(::Ice::Long, const ::Ice::Context*);
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

class LoginResult : virtual public ::com::renren::sixin::account::BaseResult
{
public:

    typedef LoginResultPrx ProxyType;
    typedef LoginResultPtr PointerType;
    
    LoginResult() {}
    LoginResult(bool, ::com::renren::sixin::account::AccountErrorCodeEnum, const ::std::string&, ::Ice::Long, ::Ice::Int);
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

    virtual ~LoginResult() {}

    friend class LoginResult__staticInit;

public:

    ::Ice::Long userId;

    ::Ice::Int count;
};

class LoginResult__staticInit
{
public:

    ::com::renren::sixin::account::LoginResult _init;
};

static LoginResult__staticInit _LoginResult_init;

class LoginService : virtual public ::Ice::Object
{
public:

    typedef LoginServicePrx ProxyType;
    typedef LoginServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::com::renren::sixin::account::LoginResultPtr commonLogin(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___commonLogin(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::LoginResultPtr renrenLogin(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___renrenLogin(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::LoginResultPtr thirdPartyLogin(const ::com::renren::sixin::account::TokenInfoPtr&, ::com::renren::sixin::account::BindAccountEnum, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___thirdPartyLogin(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::LongResultPtr logout(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___logout(::IceInternal::Incoming&, const ::Ice::Current&);

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
