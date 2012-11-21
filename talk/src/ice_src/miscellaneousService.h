// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `miscellaneousService.ice'

#ifndef __miscellaneousService_h__
#define __miscellaneousService_h__

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

class MiscellaneousService;

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

class MiscellaneousService;
bool operator==(const MiscellaneousService&, const MiscellaneousService&);
bool operator<(const MiscellaneousService&, const MiscellaneousService&);

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::renren::sixin::account::MiscellaneousService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::renren::sixin::account::MiscellaneousService*);

}

namespace com
{

namespace renren
{

namespace sixin
{

namespace account
{

typedef ::IceInternal::Handle< ::com::renren::sixin::account::MiscellaneousService> MiscellaneousServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::renren::sixin::account::MiscellaneousService> MiscellaneousServicePrx;

void __read(::IceInternal::BasicStream*, MiscellaneousServicePrx&);
void __patch__MiscellaneousServicePtr(void*, ::Ice::ObjectPtr&);

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

class MiscellaneousService : virtual public ::IceProxy::Ice::Object
{
public:

    ::com::renren::sixin::account::BaseResultPtr setLanguage(::Ice::Long userId, const ::std::string& language)
    {
        return setLanguage(userId, language, 0);
    }
    ::com::renren::sixin::account::BaseResultPtr setLanguage(::Ice::Long userId, const ::std::string& language, const ::Ice::Context& __ctx)
    {
        return setLanguage(userId, language, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BaseResultPtr setLanguage(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::StringResultPtr getLanguage(::Ice::Long userId, const ::std::string& language)
    {
        return getLanguage(userId, language, 0);
    }
    ::com::renren::sixin::account::StringResultPtr getLanguage(::Ice::Long userId, const ::std::string& language, const ::Ice::Context& __ctx)
    {
        return getLanguage(userId, language, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::StringResultPtr getLanguage(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::BaseResultPtr setAppId(::Ice::Long userId, ::Ice::Int appId)
    {
        return setAppId(userId, appId, 0);
    }
    ::com::renren::sixin::account::BaseResultPtr setAppId(::Ice::Long userId, ::Ice::Int appId, const ::Ice::Context& __ctx)
    {
        return setAppId(userId, appId, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::BaseResultPtr setAppId(::Ice::Long, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::com::renren::sixin::account::StringResultPtr getAppVersion(::Ice::Long userId)
    {
        return getAppVersion(userId, 0);
    }
    ::com::renren::sixin::account::StringResultPtr getAppVersion(::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        return getAppVersion(userId, &__ctx);
    }
    
private:

    ::com::renren::sixin::account::StringResultPtr getAppVersion(::Ice::Long, const ::Ice::Context*);
    
public:

    void syncRenrenAccount(const ::std::string& renrenUid, const ::std::string& appKey)
    {
        syncRenrenAccount(renrenUid, appKey, 0);
    }
    void syncRenrenAccount(const ::std::string& renrenUid, const ::std::string& appKey, const ::Ice::Context& __ctx)
    {
        syncRenrenAccount(renrenUid, appKey, &__ctx);
    }
    
private:

    void syncRenrenAccount(const ::std::string&, const ::std::string&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MiscellaneousService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MiscellaneousService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<MiscellaneousService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class MiscellaneousService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::BaseResultPtr setLanguage(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::StringResultPtr getLanguage(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::BaseResultPtr setAppId(::Ice::Long, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::com::renren::sixin::account::StringResultPtr getAppVersion(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void syncRenrenAccount(const ::std::string&, const ::std::string&, const ::Ice::Context*) = 0;
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

class MiscellaneousService : virtual public ::IceDelegate::com::renren::sixin::account::MiscellaneousService,
                             virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::BaseResultPtr setLanguage(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::StringResultPtr getLanguage(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr setAppId(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::StringResultPtr getAppVersion(::Ice::Long, const ::Ice::Context*);

    virtual void syncRenrenAccount(const ::std::string&, const ::std::string&, const ::Ice::Context*);
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

class MiscellaneousService : virtual public ::IceDelegate::com::renren::sixin::account::MiscellaneousService,
                             virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::com::renren::sixin::account::BaseResultPtr setLanguage(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::StringResultPtr getLanguage(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::BaseResultPtr setAppId(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual ::com::renren::sixin::account::StringResultPtr getAppVersion(::Ice::Long, const ::Ice::Context*);

    virtual void syncRenrenAccount(const ::std::string&, const ::std::string&, const ::Ice::Context*);
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

class MiscellaneousService : virtual public ::Ice::Object
{
public:

    typedef MiscellaneousServicePrx ProxyType;
    typedef MiscellaneousServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::com::renren::sixin::account::BaseResultPtr setLanguage(::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setLanguage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::StringResultPtr getLanguage(::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getLanguage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::BaseResultPtr setAppId(::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setAppId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::renren::sixin::account::StringResultPtr getAppVersion(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAppVersion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void syncRenrenAccount(const ::std::string&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___syncRenrenAccount(::IceInternal::Incoming&, const ::Ice::Current&);

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
