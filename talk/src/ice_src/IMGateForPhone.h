// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `IMGateForPhone.ice'

#ifndef __IMGateForPhone_h__
#define __IMGateForPhone_h__

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
#include <TalkCommon.h>
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

namespace talk
{

namespace gate
{

class IMGateForPhoneManager;

}

}

}

}

}

namespace com
{

namespace xiaonei
{

namespace talk
{

namespace gate
{

class IMGateForPhoneManager;
bool operator==(const IMGateForPhoneManager&, const IMGateForPhoneManager&);
bool operator<(const IMGateForPhoneManager&, const IMGateForPhoneManager&);

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::xiaonei::talk::gate::IMGateForPhoneManager*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::talk::gate::IMGateForPhoneManager*);

}

namespace com
{

namespace xiaonei
{

namespace talk
{

namespace gate
{

typedef ::IceInternal::Handle< ::com::xiaonei::talk::gate::IMGateForPhoneManager> IMGateForPhoneManagerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::talk::gate::IMGateForPhoneManager> IMGateForPhoneManagerPrx;

void __read(::IceInternal::BasicStream*, IMGateForPhoneManagerPrx&);
void __patch__IMGateForPhoneManagerPtr(void*, ::Ice::ObjectPtr&);

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

namespace talk
{

namespace gate
{

class IMGateForPhoneManager : virtual public ::IceProxy::Ice::Object
{
public:

    void SendMessage(::Ice::Int phoneuserid, ::Ice::Int touserid, const ::std::string& message)
    {
        SendMessage(phoneuserid, touserid, message, 0);
    }
    void SendMessage(::Ice::Int phoneuserid, ::Ice::Int touserid, const ::std::string& message, const ::Ice::Context& __ctx)
    {
        SendMessage(phoneuserid, touserid, message, &__ctx);
    }
    
private:

    void SendMessage(::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);
    
public:

    void PhoneUserOnline(::Ice::Int phoneuserid)
    {
        PhoneUserOnline(phoneuserid, 0);
    }
    void PhoneUserOnline(::Ice::Int phoneuserid, const ::Ice::Context& __ctx)
    {
        PhoneUserOnline(phoneuserid, &__ctx);
    }
    
private:

    void PhoneUserOnline(::Ice::Int, const ::Ice::Context*);
    
public:

    void SendMessageWithMsgkey(::Ice::Int phoneuserid, ::Ice::Int touserid, ::Ice::Long msgkey, const ::std::string& message)
    {
        SendMessageWithMsgkey(phoneuserid, touserid, msgkey, message, 0);
    }
    void SendMessageWithMsgkey(::Ice::Int phoneuserid, ::Ice::Int touserid, ::Ice::Long msgkey, const ::std::string& message, const ::Ice::Context& __ctx)
    {
        SendMessageWithMsgkey(phoneuserid, touserid, msgkey, message, &__ctx);
    }
    
private:

    void SendMessageWithMsgkey(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:

    void HeartBeat(const ::MyUtil::IntSeq& seq)
    {
        HeartBeat(seq, 0);
    }
    void HeartBeat(const ::MyUtil::IntSeq& seq, const ::Ice::Context& __ctx)
    {
        HeartBeat(seq, &__ctx);
    }
    
private:

    void HeartBeat(const ::MyUtil::IntSeq&, const ::Ice::Context*);
    
public:

    void PhoneUserOffline(::Ice::Int phoneuserid)
    {
        PhoneUserOffline(phoneuserid, 0);
    }
    void PhoneUserOffline(::Ice::Int phoneuserid, const ::Ice::Context& __ctx)
    {
        PhoneUserOffline(phoneuserid, &__ctx);
    }
    
private:

    void PhoneUserOffline(::Ice::Int, const ::Ice::Context*);
    
public:

    void NotifyMessageSended(::Ice::Int userid, ::Ice::Long msgKey)
    {
        NotifyMessageSended(userid, msgKey, 0);
    }
    void NotifyMessageSended(::Ice::Int userid, ::Ice::Long msgKey, const ::Ice::Context& __ctx)
    {
        NotifyMessageSended(userid, msgKey, &__ctx);
    }
    
private:

    void NotifyMessageSended(::Ice::Int, ::Ice::Long, const ::Ice::Context*);
    
public:

    void ServerDisable()
    {
        ServerDisable(0);
    }
    void ServerDisable(const ::Ice::Context& __ctx)
    {
        ServerDisable(&__ctx);
    }
    
private:

    void ServerDisable(const ::Ice::Context*);
    
public:

    void ServerEnable()
    {
        ServerEnable(0);
    }
    void ServerEnable(const ::Ice::Context& __ctx)
    {
        ServerEnable(&__ctx);
    }
    
private:

    void ServerEnable(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<IMGateForPhoneManager> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<IMGateForPhoneManager*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<IMGateForPhoneManager*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace talk
{

namespace gate
{

class IMGateForPhoneManager : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void SendMessage(::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void PhoneUserOnline(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void SendMessageWithMsgkey(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual void HeartBeat(const ::MyUtil::IntSeq&, const ::Ice::Context*) = 0;

    virtual void PhoneUserOffline(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void NotifyMessageSended(::Ice::Int, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual void ServerDisable(const ::Ice::Context*) = 0;

    virtual void ServerEnable(const ::Ice::Context*) = 0;
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

namespace talk
{

namespace gate
{

class IMGateForPhoneManager : virtual public ::IceDelegate::com::xiaonei::talk::gate::IMGateForPhoneManager,
                              virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void SendMessage(::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual void PhoneUserOnline(::Ice::Int, const ::Ice::Context*);

    virtual void SendMessageWithMsgkey(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual void HeartBeat(const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual void PhoneUserOffline(::Ice::Int, const ::Ice::Context*);

    virtual void NotifyMessageSended(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void ServerDisable(const ::Ice::Context*);

    virtual void ServerEnable(const ::Ice::Context*);
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

namespace talk
{

namespace gate
{

class IMGateForPhoneManager : virtual public ::IceDelegate::com::xiaonei::talk::gate::IMGateForPhoneManager,
                              virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void SendMessage(::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Context*);

    virtual void PhoneUserOnline(::Ice::Int, const ::Ice::Context*);

    virtual void SendMessageWithMsgkey(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual void HeartBeat(const ::MyUtil::IntSeq&, const ::Ice::Context*);

    virtual void PhoneUserOffline(::Ice::Int, const ::Ice::Context*);

    virtual void NotifyMessageSended(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual void ServerDisable(const ::Ice::Context*);

    virtual void ServerEnable(const ::Ice::Context*);
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

namespace talk
{

namespace gate
{

class IMGateForPhoneManager : virtual public ::Ice::Object
{
public:

    typedef IMGateForPhoneManagerPrx ProxyType;
    typedef IMGateForPhoneManagerPtr PointerType;
    
    IMGateForPhoneManager() {}
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void SendMessage(::Ice::Int, ::Ice::Int, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___SendMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void PhoneUserOnline(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___PhoneUserOnline(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void SendMessageWithMsgkey(::Ice::Int, ::Ice::Int, ::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___SendMessageWithMsgkey(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void HeartBeat(const ::MyUtil::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___HeartBeat(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void PhoneUserOffline(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___PhoneUserOffline(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void NotifyMessageSended(::Ice::Int, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___NotifyMessageSended(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void ServerDisable(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___ServerDisable(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void ServerEnable(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___ServerEnable(::IceInternal::Incoming&, const ::Ice::Current&);

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
