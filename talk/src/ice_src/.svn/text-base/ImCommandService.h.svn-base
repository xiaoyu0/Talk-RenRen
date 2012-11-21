// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ImCommandService.ice'

#ifndef __ImCommandService_h__
#define __ImCommandService_h__

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

namespace imoa
{

class ImCommandAdapterService;

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

namespace talk
{

namespace imoa
{

class ImCommandAdapterService;
bool operator==(const ImCommandAdapterService&, const ImCommandAdapterService&);
bool operator<(const ImCommandAdapterService&, const ImCommandAdapterService&);

}

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService*);

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace talk
{

namespace imoa
{

typedef ::IceInternal::Handle< ::com::xiaonei::wap::talk::imoa::ImCommandAdapterService> ImCommandAdapterServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::wap::talk::imoa::ImCommandAdapterService> ImCommandAdapterServicePrx;

void __read(::IceInternal::BasicStream*, ImCommandAdapterServicePrx&);
void __patch__ImCommandAdapterServicePtr(void*, ::Ice::ObjectPtr&);

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

namespace imoa
{

typedef ::std::vector< ::Ice::Int> IntSeq;

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

namespace talk
{

namespace imoa
{

class ImCommandAdapterService : virtual public ::IceProxy::Ice::Object
{
public:

    void online(::Ice::Long userId, bool isLongOnline)
    {
        online(userId, isLongOnline, 0);
    }
    void online(::Ice::Long userId, bool isLongOnline, const ::Ice::Context& __ctx)
    {
        online(userId, isLongOnline, &__ctx);
    }
    
private:

    void online(::Ice::Long, bool, const ::Ice::Context*);
    
public:

    void offline(::Ice::Long userId, bool isDelLongOnline)
    {
        offline(userId, isDelLongOnline, 0);
    }
    void offline(::Ice::Long userId, bool isDelLongOnline, const ::Ice::Context& __ctx)
    {
        offline(userId, isDelLongOnline, &__ctx);
    }
    
private:

    void offline(::Ice::Long, bool, const ::Ice::Context*);
    
public:

    ::Ice::Int shortOnlineUserCount()
    {
        return shortOnlineUserCount(0);
    }
    ::Ice::Int shortOnlineUserCount(const ::Ice::Context& __ctx)
    {
        return shortOnlineUserCount(&__ctx);
    }
    
private:

    ::Ice::Int shortOnlineUserCount(const ::Ice::Context*);
    
public:

    ::Ice::Int longOnlineUserCount()
    {
        return longOnlineUserCount(0);
    }
    ::Ice::Int longOnlineUserCount(const ::Ice::Context& __ctx)
    {
        return longOnlineUserCount(&__ctx);
    }
    
private:

    ::Ice::Int longOnlineUserCount(const ::Ice::Context*);
    
public:

    ::Ice::Int cushionCount()
    {
        return cushionCount(0);
    }
    ::Ice::Int cushionCount(const ::Ice::Context& __ctx)
    {
        return cushionCount(&__ctx);
    }
    
private:

    ::Ice::Int cushionCount(const ::Ice::Context*);
    
public:

    ::Ice::Int userStat(::Ice::Int userId)
    {
        return userStat(userId, 0);
    }
    ::Ice::Int userStat(::Ice::Int userId, const ::Ice::Context& __ctx)
    {
        return userStat(userId, &__ctx);
    }
    
private:

    ::Ice::Int userStat(::Ice::Int, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::talk::imoa::IntSeq usersStat(const ::com::xiaonei::wap::talk::imoa::IntSeq& serIds)
    {
        return usersStat(serIds, 0);
    }
    ::com::xiaonei::wap::talk::imoa::IntSeq usersStat(const ::com::xiaonei::wap::talk::imoa::IntSeq& serIds, const ::Ice::Context& __ctx)
    {
        return usersStat(serIds, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::talk::imoa::IntSeq usersStat(const ::com::xiaonei::wap::talk::imoa::IntSeq&, const ::Ice::Context*);
    
public:

    void removeUser(::Ice::Int userId)
    {
        removeUser(userId, 0);
    }
    void removeUser(::Ice::Int userId, const ::Ice::Context& __ctx)
    {
        removeUser(userId, &__ctx);
    }
    
private:

    void removeUser(::Ice::Int, const ::Ice::Context*);
    
public:

    void removeSpecifiedUsers(::Ice::Int serverCount, ::Ice::Int mode)
    {
        removeSpecifiedUsers(serverCount, mode, 0);
    }
    void removeSpecifiedUsers(::Ice::Int serverCount, ::Ice::Int mode, const ::Ice::Context& __ctx)
    {
        removeSpecifiedUsers(serverCount, mode, &__ctx);
    }
    
private:

    void removeSpecifiedUsers(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void retainSpecifiedUsers(::Ice::Int serverCount, ::Ice::Int mode)
    {
        retainSpecifiedUsers(serverCount, mode, 0);
    }
    void retainSpecifiedUsers(::Ice::Int serverCount, ::Ice::Int mode, const ::Ice::Context& __ctx)
    {
        retainSpecifiedUsers(serverCount, mode, &__ctx);
    }
    
private:

    void retainSpecifiedUsers(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void removeUsersByIp(const ::std::string& crashedIp)
    {
        removeUsersByIp(crashedIp, 0);
    }
    void removeUsersByIp(const ::std::string& crashedIp, const ::Ice::Context& __ctx)
    {
        removeUsersByIp(crashedIp, &__ctx);
    }
    
private:

    void removeUsersByIp(const ::std::string&, const ::Ice::Context*);
    
public:

    void clearUsers()
    {
        clearUsers(0);
    }
    void clearUsers(const ::Ice::Context& __ctx)
    {
        clearUsers(&__ctx);
    }
    
private:

    void clearUsers(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<ImCommandAdapterService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<ImCommandAdapterService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<ImCommandAdapterService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace talk
{

namespace imoa
{

class ImCommandAdapterService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void online(::Ice::Long, bool, const ::Ice::Context*) = 0;

    virtual void offline(::Ice::Long, bool, const ::Ice::Context*) = 0;

    virtual ::Ice::Int shortOnlineUserCount(const ::Ice::Context*) = 0;

    virtual ::Ice::Int longOnlineUserCount(const ::Ice::Context*) = 0;

    virtual ::Ice::Int cushionCount(const ::Ice::Context*) = 0;

    virtual ::Ice::Int userStat(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::talk::imoa::IntSeq usersStat(const ::com::xiaonei::wap::talk::imoa::IntSeq&, const ::Ice::Context*) = 0;

    virtual void removeUser(::Ice::Int, const ::Ice::Context*) = 0;

    virtual void removeSpecifiedUsers(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void retainSpecifiedUsers(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void removeUsersByIp(const ::std::string&, const ::Ice::Context*) = 0;

    virtual void clearUsers(const ::Ice::Context*) = 0;
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

namespace talk
{

namespace imoa
{

class ImCommandAdapterService : virtual public ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService,
                                virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void online(::Ice::Long, bool, const ::Ice::Context*);

    virtual void offline(::Ice::Long, bool, const ::Ice::Context*);

    virtual ::Ice::Int shortOnlineUserCount(const ::Ice::Context*);

    virtual ::Ice::Int longOnlineUserCount(const ::Ice::Context*);

    virtual ::Ice::Int cushionCount(const ::Ice::Context*);

    virtual ::Ice::Int userStat(::Ice::Int, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::imoa::IntSeq usersStat(const ::com::xiaonei::wap::talk::imoa::IntSeq&, const ::Ice::Context*);

    virtual void removeUser(::Ice::Int, const ::Ice::Context*);

    virtual void removeSpecifiedUsers(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void retainSpecifiedUsers(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void removeUsersByIp(const ::std::string&, const ::Ice::Context*);

    virtual void clearUsers(const ::Ice::Context*);
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

namespace talk
{

namespace imoa
{

class ImCommandAdapterService : virtual public ::IceDelegate::com::xiaonei::wap::talk::imoa::ImCommandAdapterService,
                                virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void online(::Ice::Long, bool, const ::Ice::Context*);

    virtual void offline(::Ice::Long, bool, const ::Ice::Context*);

    virtual ::Ice::Int shortOnlineUserCount(const ::Ice::Context*);

    virtual ::Ice::Int longOnlineUserCount(const ::Ice::Context*);

    virtual ::Ice::Int cushionCount(const ::Ice::Context*);

    virtual ::Ice::Int userStat(::Ice::Int, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::imoa::IntSeq usersStat(const ::com::xiaonei::wap::talk::imoa::IntSeq&, const ::Ice::Context*);

    virtual void removeUser(::Ice::Int, const ::Ice::Context*);

    virtual void removeSpecifiedUsers(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void retainSpecifiedUsers(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void removeUsersByIp(const ::std::string&, const ::Ice::Context*);

    virtual void clearUsers(const ::Ice::Context*);
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

namespace talk
{

namespace imoa
{

class ImCommandAdapterService : virtual public ::Ice::Object
{
public:

    typedef ImCommandAdapterServicePrx ProxyType;
    typedef ImCommandAdapterServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void online(::Ice::Long, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___online(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void offline(::Ice::Long, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___offline(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int shortOnlineUserCount(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___shortOnlineUserCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int longOnlineUserCount(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___longOnlineUserCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int cushionCount(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___cushionCount(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int userStat(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___userStat(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::talk::imoa::IntSeq usersStat(const ::com::xiaonei::wap::talk::imoa::IntSeq&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___usersStat(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeUser(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeUser(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeSpecifiedUsers(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeSpecifiedUsers(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void retainSpecifiedUsers(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___retainSpecifiedUsers(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void removeUsersByIp(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeUsersByIp(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void clearUsers(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___clearUsers(::IceInternal::Incoming&, const ::Ice::Current&);

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
