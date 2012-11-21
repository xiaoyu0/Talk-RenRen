// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `registerService.ice'

#ifndef __src_ice_src__registerService_h__
#define __src_ice_src__registerService_h__

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

class RegisterService;

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

class RegisterService;
bool operator==(const RegisterService&, const RegisterService&);
bool operator<(const RegisterService&, const RegisterService&);

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::renren::sixin::account::RegisterService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::renren::sixin::account::RegisterService*);

}

namespace com
{

namespace renren
{

namespace sixin
{

namespace account
{

typedef ::IceInternal::Handle< ::com::renren::sixin::account::RegisterService> RegisterServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::renren::sixin::account::RegisterService> RegisterServicePrx;

void __read(::IceInternal::BasicStream*, RegisterServicePrx&);
void __patch__RegisterServicePtr(void*, ::Ice::ObjectPtr&);

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

class RegisterService : virtual public ::IceProxy::Ice::Object
{
public:

    ::com::renren::sixin::account::BoolResultPtr isAliasUsed(const ::std::string& alias)
    {
        return isAliasUsed(alias, 0);
    }
    ::com::renren::sixin::account::BoolResultPtr isAliasUsed(const ::std::string& alias, const ::Ice::Context& __ctx)
    {
        return isAliasUsed(alias, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BoolResultPtr isAliasUsed(const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::BaseResultPtr _cpp_register(const ::std::string& alias, const ::std::string& password)
    {
        return _cpp_register(alias, password, 0);
    }
    ::com::renren::sixin::account::BaseResultPtr _cpp_register(const ::std::string& alias, const ::std::string& password, const ::Ice::Context& __ctx)
    {
        return _cpp_register(alias, password, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BaseResultPtr _cpp_register(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::BaseResultPtr registWithProfile(const ::std::string& alias, const ::std::string& password, const ::com::renren::sixin::account::BaseProfilePtr& profile)
    {
        return registWithProfile(alias, password, profile, 0);
    }
    ::com::renren::sixin::account::BaseResultPtr registWithProfile(const ::std::string& alias, const ::std::string& password, const ::com::renren::sixin::account::BaseProfilePtr& profile, const ::Ice::Context& __ctx)
    {
        return registWithProfile(alias, password, profile, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BaseResultPtr registWithProfile(const ::std::string&, const ::std::string&, const ::com::renren::sixin::account::BaseProfilePtr&, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::BaseResultPtr resetPassword(const ::std::string& alias, const ::std::string& newPassword)
    {
        return resetPassword(alias, newPassword, 0);
    }
    ::com::renren::sixin::account::BaseResultPtr resetPassword(const ::std::string& alias, const ::std::string& newPassword, const ::Ice::Context& __ctx)
    {
        return resetPassword(alias, newPassword, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BaseResultPtr resetPassword(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::BaseResultPtr modifyPassword(::Ice::Long sixinId, const ::std::string& oldPassword, const ::std::string& newPassword)
    {
        return modifyPassword(sixinId, oldPassword, newPassword, 0);
    }
    ::com::renren::sixin::account::BaseResultPtr modifyPassword(::Ice::Long sixinId, const ::std::string& oldPassword, const ::std::string& newPassword, const ::Ice::Context& __ctx)
    {
        return modifyPassword(sixinId, oldPassword, newPassword, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BaseResultPtr modifyPassword(::Ice::Long, const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RegisterService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RegisterService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RegisterService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RegisterService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class RegisterService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::BoolResultPtr isAliasUsed(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::BaseResultPtr _cpp_register(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::BaseResultPtr registWithProfile(const ::std::string&, const ::std::string&, const ::com::renren::sixin::account::BaseProfilePtr&, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::BaseResultPtr resetPassword(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::BaseResultPtr modifyPassword(::Ice::Long, const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;
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

class RegisterService : virtual public ::IceDelegate::com::renren::sixin::account::RegisterService,
                        virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::BoolResultPtr isAliasUsed(const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr _cpp_register(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr registWithProfile(const ::std::string&, const ::std::string&, const ::com::renren::sixin::account::BaseProfilePtr&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr resetPassword(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr modifyPassword(::Ice::Long, const ::std::string&, const ::std::string&, const ::Ice::Context*);
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

class RegisterService : virtual public ::IceDelegate::com::renren::sixin::account::RegisterService,
                        virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::BoolResultPtr isAliasUsed(const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr _cpp_register(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr registWithProfile(const ::std::string&, const ::std::string&, const ::com::renren::sixin::account::BaseProfilePtr&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr resetPassword(const ::std::string&, const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr modifyPassword(::Ice::Long, const ::std::string&, const ::std::string&, const ::Ice::Context*);
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

class RegisterService : virtual public ::Ice::Object
{
public:

    typedef RegisterServicePrx ProxyType;
    typedef RegisterServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::com::renren::sixin::account::BoolResultPtr isAliasUsed(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isAliasUsed(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::BaseResultPtr _cpp_register(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___register(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::BaseResultPtr registWithProfile(const ::std::string&, const ::std::string&, const ::com::renren::sixin::account::BaseProfilePtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___registWithProfile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::BaseResultPtr resetPassword(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___resetPassword(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::BaseResultPtr modifyPassword(::Ice::Long, const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___modifyPassword(::IceInternal::Incoming&, const ::Ice::Current&);

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
