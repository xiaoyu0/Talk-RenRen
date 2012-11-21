// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `MessageWaitManagerService.ice'

#ifndef __src_ice_src__MessageWaitManagerService_h__
#define __src_ice_src__MessageWaitManagerService_h__

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

namespace talk
{

class MessageWaitManagerService;

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

class MessageWaitManagerService;
bool operator==(const MessageWaitManagerService&, const MessageWaitManagerService&);
bool operator<(const MessageWaitManagerService&, const MessageWaitManagerService&);

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::xiaonei::wap::talk::MessageWaitManagerService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::wap::talk::MessageWaitManagerService*);

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace talk
{

typedef ::IceInternal::Handle< ::com::xiaonei::wap::talk::MessageWaitManagerService> MessageWaitManagerServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::wap::talk::MessageWaitManagerService> MessageWaitManagerServicePrx;

void __read(::IceInternal::BasicStream*, MessageWaitManagerServicePrx&);
void __patch__MessageWaitManagerServicePtr(void*, ::Ice::ObjectPtr&);

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

class MessageWaitManagerService : virtual public ::IceProxy::Ice::Object
{
public:

    void addMessage(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Long msgKey, const ::std::string& msg, ::Ice::Int msgType, ::Ice::Int supportToClientType)
    {
        addMessage(fromId, toId, msgKey, msg, msgType, supportToClientType, 0);
    }
    void addMessage(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Long msgKey, const ::std::string& msg, ::Ice::Int msgType, ::Ice::Int supportToClientType, const ::Ice::Context& __ctx)
    {
        addMessage(fromId, toId, msgKey, msg, msgType, supportToClientType, &__ctx);
    }
    
private:

    void addMessage(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void addVoiceMessage(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int supportToClientType)
    {
        addVoiceMessage(fromId, toId, msg, supportToClientType, 0);
    }
    void addVoiceMessage(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int supportToClientType, const ::Ice::Context& __ctx)
    {
        addVoiceMessage(fromId, toId, msg, supportToClientType, &__ctx);
    }
    
private:

    void addVoiceMessage(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    void delMessage(::Ice::Long msgKey, ::Ice::Int clientType)
    {
        delMessage(msgKey, clientType, 0);
    }
    void delMessage(::Ice::Long msgKey, ::Ice::Int clientType, const ::Ice::Context& __ctx)
    {
        delMessage(msgKey, clientType, &__ctx);
    }
    
private:

    void delMessage(::Ice::Long, ::Ice::Int, const ::Ice::Context*);
    
public:

    void delVoiceMessage(const ::std::string& msg, ::Ice::Int clientType)
    {
        delVoiceMessage(msg, clientType, 0);
    }
    void delVoiceMessage(const ::std::string& msg, ::Ice::Int clientType, const ::Ice::Context& __ctx)
    {
        delVoiceMessage(msg, clientType, &__ctx);
    }
    
private:

    void delVoiceMessage(const ::std::string&, ::Ice::Int, const ::Ice::Context*);
    
public:

    void immediatelySend2Offline(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Long msgKey, const ::std::string& msg, ::Ice::Int msgType, ::Ice::Int supportToClientType)
    {
        immediatelySend2Offline(fromId, toId, msgKey, msg, msgType, supportToClientType, 0);
    }
    void immediatelySend2Offline(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Long msgKey, const ::std::string& msg, ::Ice::Int msgType, ::Ice::Int supportToClientType, const ::Ice::Context& __ctx)
    {
        immediatelySend2Offline(fromId, toId, msgKey, msg, msgType, supportToClientType, &__ctx);
    }
    
private:

    void immediatelySend2Offline(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void delMessageWithId(::Ice::Long userId, ::Ice::Long msgKey, ::Ice::Int clientType)
    {
        delMessageWithId(userId, msgKey, clientType, 0);
    }
    void delMessageWithId(::Ice::Long userId, ::Ice::Long msgKey, ::Ice::Int clientType, const ::Ice::Context& __ctx)
    {
        delMessageWithId(userId, msgKey, clientType, &__ctx);
    }
    
private:

    void delMessageWithId(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<MessageWaitManagerService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<MessageWaitManagerService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<MessageWaitManagerService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

class MessageWaitManagerService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void addMessage(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void addVoiceMessage(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void delMessage(::Ice::Long, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void delVoiceMessage(const ::std::string&, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void immediatelySend2Offline(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void delMessageWithId(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::Ice::Context*) = 0;
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

class MessageWaitManagerService : virtual public ::IceDelegate::com::xiaonei::wap::talk::MessageWaitManagerService,
                                  virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void addMessage(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void addVoiceMessage(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual void delMessage(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual void delVoiceMessage(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual void immediatelySend2Offline(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void delMessageWithId(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);
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

class MessageWaitManagerService : virtual public ::IceDelegate::com::xiaonei::wap::talk::MessageWaitManagerService,
                                  virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void addMessage(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void addVoiceMessage(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual void delMessage(::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual void delVoiceMessage(const ::std::string&, ::Ice::Int, const ::Ice::Context*);

    virtual void immediatelySend2Offline(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void delMessageWithId(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);
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

class MessageWaitManagerService : virtual public ::Ice::Object
{
public:

    typedef MessageWaitManagerServicePrx ProxyType;
    typedef MessageWaitManagerServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void addMessage(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void addVoiceMessage(::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addVoiceMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void delMessage(::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___delMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void delVoiceMessage(const ::std::string&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___delVoiceMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void immediatelySend2Offline(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::std::string&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___immediatelySend2Offline(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void delMessageWithId(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___delMessageWithId(::IceInternal::Incoming&, const ::Ice::Current&);

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
