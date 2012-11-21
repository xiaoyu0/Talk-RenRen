// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `BoshService.ice'

#ifndef __src_ice_src__BoshService_h__
#define __src_ice_src__BoshService_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/StreamF.h>
#include <Utils.h>
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

namespace talk
{

class BoshService;

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

namespace talk
{

class BoshService;
bool operator==(const BoshService&, const BoshService&);
bool operator<(const BoshService&, const BoshService&);

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::xiaonei::wap::talk::BoshService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::wap::talk::BoshService*);

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace talk
{

typedef ::IceInternal::Handle< ::com::xiaonei::wap::talk::BoshService> BoshServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::wap::talk::BoshService> BoshServicePrx;

void __read(::IceInternal::BasicStream*, BoshServicePrx&);
void __patch__BoshServicePtr(void*, ::Ice::ObjectPtr&);

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

namespace talk
{

class AMI_BoshService_updateSession : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::com::xiaonei::wap::talk::Result&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::com::xiaonei::wap::talk::BoshServicePrx&, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::com::xiaonei::wap::talk::AMI_BoshService_updateSession> AMI_BoshService_updateSessionPtr;

class AMI_BoshService_createSession : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::com::xiaonei::wap::talk::Result&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::com::xiaonei::wap::talk::BoshServicePrx&, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::com::xiaonei::wap::talk::AMI_BoshService_createSession> AMI_BoshService_createSessionPtr;

class AMI_BoshService_sendMessage : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(const ::com::xiaonei::wap::talk::Result&) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::com::xiaonei::wap::talk::BoshServicePrx&, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::com::xiaonei::wap::talk::AMI_BoshService_sendMessage> AMI_BoshService_sendMessagePtr;

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

namespace talk
{

class BoshService : virtual public ::IceProxy::Ice::Object
{
public:

    ::com::xiaonei::wap::talk::Result updateSession(::Ice::Long connectionId, const ::std::string& msg)
    {
        return updateSession(connectionId, msg, 0);
    }
    ::com::xiaonei::wap::talk::Result updateSession(::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context& __ctx)
    {
        return updateSession(connectionId, msg, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::talk::Result updateSession(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:
    bool updateSession_async(const ::com::xiaonei::wap::talk::AMI_BoshService_updateSessionPtr&, ::Ice::Long, const ::std::string&);
    bool updateSession_async(const ::com::xiaonei::wap::talk::AMI_BoshService_updateSessionPtr&, ::Ice::Long, const ::std::string&, const ::Ice::Context&);

    ::com::xiaonei::wap::talk::Result createSession(::Ice::Long connectionId, const ::std::string& msg)
    {
        return createSession(connectionId, msg, 0);
    }
    ::com::xiaonei::wap::talk::Result createSession(::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context& __ctx)
    {
        return createSession(connectionId, msg, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::talk::Result createSession(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:
    bool createSession_async(const ::com::xiaonei::wap::talk::AMI_BoshService_createSessionPtr&, ::Ice::Long, const ::std::string&);
    bool createSession_async(const ::com::xiaonei::wap::talk::AMI_BoshService_createSessionPtr&, ::Ice::Long, const ::std::string&, const ::Ice::Context&);

    ::com::xiaonei::wap::talk::Result sendMessage(::Ice::Long connectionId, const ::std::string& msg)
    {
        return sendMessage(connectionId, msg, 0);
    }
    ::com::xiaonei::wap::talk::Result sendMessage(::Ice::Long connectionId, const ::std::string& msg, const ::Ice::Context& __ctx)
    {
        return sendMessage(connectionId, msg, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::talk::Result sendMessage(::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:
    bool sendMessage_async(const ::com::xiaonei::wap::talk::AMI_BoshService_sendMessagePtr&, ::Ice::Long, const ::std::string&);
    bool sendMessage_async(const ::com::xiaonei::wap::talk::AMI_BoshService_sendMessagePtr&, ::Ice::Long, const ::std::string&, const ::Ice::Context&);

    ::std::string getVersionAndHost()
    {
        return getVersionAndHost(0);
    }
    ::std::string getVersionAndHost(const ::Ice::Context& __ctx)
    {
        return getVersionAndHost(&__ctx);
    }
    
private:

    ::std::string getVersionAndHost(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<BoshService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<BoshService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<BoshService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<BoshService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace xiaonei
{

namespace wap
{

namespace talk
{

class BoshService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::com::xiaonei::wap::talk::Result updateSession(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::talk::Result createSession(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::talk::Result sendMessage(::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::std::string getVersionAndHost(const ::Ice::Context*) = 0;
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

namespace xiaonei
{

namespace wap
{

namespace talk
{

class BoshService : virtual public ::IceDelegate::com::xiaonei::wap::talk::BoshService,
                    virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::com::xiaonei::wap::talk::Result updateSession(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::Result createSession(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::Result sendMessage(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::std::string getVersionAndHost(const ::Ice::Context*);
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

namespace xiaonei
{

namespace wap
{

namespace talk
{

class BoshService : virtual public ::IceDelegate::com::xiaonei::wap::talk::BoshService,
                    virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::com::xiaonei::wap::talk::Result updateSession(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::Result createSession(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::Result sendMessage(::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::std::string getVersionAndHost(const ::Ice::Context*);
};

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

namespace talk
{

class BoshService : virtual public ::Ice::Object
{
public:

    typedef BoshServicePrx ProxyType;
    typedef BoshServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::com::xiaonei::wap::talk::Result updateSession(::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___updateSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::talk::Result createSession(::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createSession(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::talk::Result sendMessage(::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sendMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::std::string getVersionAndHost(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getVersionAndHost(::IceInternal::Incoming&, const ::Ice::Current&);

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
