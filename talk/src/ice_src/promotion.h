// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `promotion.ice'

#ifndef __promotion_h__
#define __promotion_h__

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

namespace renren
{

namespace sixin
{

namespace promotion
{

class PromotionService;

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

namespace promotion
{

class PromotionService;
bool operator==(const PromotionService&, const PromotionService&);
bool operator<(const PromotionService&, const PromotionService&);

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::renren::sixin::promotion::PromotionService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::renren::sixin::promotion::PromotionService*);

}

namespace com
{

namespace renren
{

namespace sixin
{

namespace promotion
{

typedef ::IceInternal::Handle< ::com::renren::sixin::promotion::PromotionService> PromotionServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::renren::sixin::promotion::PromotionService> PromotionServicePrx;

void __read(::IceInternal::BasicStream*, PromotionServicePrx&);
void __patch__PromotionServicePtr(void*, ::Ice::ObjectPtr&);

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

namespace promotion
{

class PromotionService : virtual public ::IceProxy::Ice::Object
{
public:

    bool isSixinUser(::Ice::Int userId)
    {
        return isSixinUser(userId, 0);
    }
    bool isSixinUser(::Ice::Int userId, const ::Ice::Context& __ctx)
    {
        return isSixinUser(userId, &__ctx);
    }
    
private:

    bool isSixinUser(::Ice::Int, const ::Ice::Context*);
    
public:

    bool isSupportGroupChat(::Ice::Int userId)
    {
        return isSupportGroupChat(userId, 0);
    }
    bool isSupportGroupChat(::Ice::Int userId, const ::Ice::Context& __ctx)
    {
        return isSupportGroupChat(userId, &__ctx);
    }
    
private:

    bool isSupportGroupChat(::Ice::Int, const ::Ice::Context*);
    
public:

    bool needPromotion(::Ice::Int userId)
    {
        return needPromotion(userId, 0);
    }
    bool needPromotion(::Ice::Int userId, const ::Ice::Context& __ctx)
    {
        return needPromotion(userId, &__ctx);
    }
    
private:

    bool needPromotion(::Ice::Int, const ::Ice::Context*);
    
public:

    void installNotice(::Ice::Int userId, ::Ice::Int appId, const ::std::string& version)
    {
        installNotice(userId, appId, version, 0);
    }
    void installNotice(::Ice::Int userId, ::Ice::Int appId, const ::std::string& version, const ::Ice::Context& __ctx)
    {
        installNotice(userId, appId, version, &__ctx);
    }
    
private:

    void installNotice(::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    void openPromotionLink(::Ice::Int userId)
    {
        openPromotionLink(userId, 0);
    }
    void openPromotionLink(::Ice::Int userId, const ::Ice::Context& __ctx)
    {
        openPromotionLink(userId, &__ctx);
    }
    
private:

    void openPromotionLink(::Ice::Int, const ::Ice::Context*);
    
public:

    bool addAppid()
    {
        return addAppid(0);
    }
    bool addAppid(const ::Ice::Context& __ctx)
    {
        return addAppid(&__ctx);
    }
    
private:

    bool addAppid(const ::Ice::Context*);
    
public:

    bool resetAppids()
    {
        return resetAppids(0);
    }
    bool resetAppids(const ::Ice::Context& __ctx)
    {
        return resetAppids(&__ctx);
    }
    
private:

    bool resetAppids(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<PromotionService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<PromotionService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<PromotionService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<PromotionService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace promotion
{

class PromotionService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual bool isSixinUser(::Ice::Int, const ::Ice::Context*) = 0;

    virtual bool isSupportGroupChat(::Ice::Int, const ::Ice::Context*) = 0;

    virtual bool needPromotion(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void installNotice(::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void openPromotionLink(::Ice::Int, const ::Ice::Context*) = 0;

    virtual bool addAppid(const ::Ice::Context*) = 0;

    virtual bool resetAppids(const ::Ice::Context*) = 0;
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

namespace promotion
{

class PromotionService : virtual public ::IceDelegate::com::renren::sixin::promotion::PromotionService,
                         virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual bool isSixinUser(::Ice::Int, const ::Ice::Context*);

    virtual bool isSupportGroupChat(::Ice::Int, const ::Ice::Context*);

    virtual bool needPromotion(::Ice::Int, const ::Ice::Context*);

    virtual void installNotice(::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual void openPromotionLink(::Ice::Int, const ::Ice::Context*);

    virtual bool addAppid(const ::Ice::Context*);

    virtual bool resetAppids(const ::Ice::Context*);
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

namespace promotion
{

class PromotionService : virtual public ::IceDelegate::com::renren::sixin::promotion::PromotionService,
                         virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual bool isSixinUser(::Ice::Int, const ::Ice::Context*);

    virtual bool isSupportGroupChat(::Ice::Int, const ::Ice::Context*);

    virtual bool needPromotion(::Ice::Int, const ::Ice::Context*);

    virtual void installNotice(::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual void openPromotionLink(::Ice::Int, const ::Ice::Context*);

    virtual bool addAppid(const ::Ice::Context*);

    virtual bool resetAppids(const ::Ice::Context*);
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

namespace promotion
{

class PromotionService : virtual public ::Ice::Object
{
public:

    typedef PromotionServicePrx ProxyType;
    typedef PromotionServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual bool isSixinUser(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isSixinUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool isSupportGroupChat(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___isSupportGroupChat(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool needPromotion(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___needPromotion(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void installNotice(::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___installNotice(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void openPromotionLink(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___openPromotionLink(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool addAppid(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addAppid(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool resetAppids(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___resetAppids(::IceInternal::Incoming&, const ::Ice::Current&);

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
