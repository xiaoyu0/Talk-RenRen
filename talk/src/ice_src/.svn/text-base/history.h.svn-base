// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `history.ice'

#ifndef __history_h__
#define __history_h__

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

namespace dbService
{

namespace talk
{

class HisMessageService;

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

namespace dbService
{

namespace talk
{

class HisMessageService;
bool operator==(const HisMessageService&, const HisMessageService&);
bool operator<(const HisMessageService&, const HisMessageService&);

}

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::xiaonei::wap::dbService::talk::HisMessageService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService*);

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace dbService
{

namespace talk
{

typedef ::IceInternal::Handle< ::com::xiaonei::wap::dbService::talk::HisMessageService> HisMessageServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::wap::dbService::talk::HisMessageService> HisMessageServicePrx;

void __read(::IceInternal::BasicStream*, HisMessageServicePrx&);
void __patch__HisMessageServicePtr(void*, ::Ice::ObjectPtr&);

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

namespace dbService
{

namespace talk
{

typedef ::std::vector< ::Ice::Long> IntSeq;

typedef ::std::vector< ::std::string> MsgList;

typedef ::std::map< ::Ice::Long, ::std::string> UserMsgMap;
void __writeUserMsgMap(::IceInternal::BasicStream*, const UserMsgMap&);
void __readUserMsgMap(::IceInternal::BasicStream*, UserMsgMap&);

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

namespace dbService
{

namespace talk
{

class HisMessageService : virtual public ::IceProxy::Ice::Object
{
public:

    ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4Group(::Ice::Long roomId, ::Ice::Long userId)
    {
        return getHisMsg4Group(roomId, userId, 0);
    }
    ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4Group(::Ice::Long roomId, ::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        return getHisMsg4Group(roomId, userId, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4Group(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4GroupPage(::Ice::Long roomId, ::Ice::Long userId, ::Ice::Int offset, ::Ice::Int pageSize)
    {
        return getHisMsg4GroupPage(roomId, userId, offset, pageSize, 0);
    }
    ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4GroupPage(::Ice::Long roomId, ::Ice::Long userId, ::Ice::Int offset, ::Ice::Int pageSize, const ::Ice::Context& __ctx)
    {
        return getHisMsg4GroupPage(roomId, userId, offset, pageSize, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4GroupPage(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg(::Ice::Long userId, ::Ice::Long friId)
    {
        return getHisMsg(userId, friId, 0);
    }
    ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg(::Ice::Long userId, ::Ice::Long friId, const ::Ice::Context& __ctx)
    {
        return getHisMsg(userId, friId, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4Page(::Ice::Long userId, ::Ice::Long friId, ::Ice::Int offset, ::Ice::Int pageSize)
    {
        return getHisMsg4Page(userId, friId, offset, pageSize, 0);
    }
    ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4Page(::Ice::Long userId, ::Ice::Long friId, ::Ice::Int offset, ::Ice::Int pageSize, const ::Ice::Context& __ctx)
    {
        return getHisMsg4Page(userId, friId, offset, pageSize, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4Page(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::dbService::talk::MsgList getAllHisMsg(::Ice::Long userId)
    {
        return getAllHisMsg(userId, 0);
    }
    ::com::xiaonei::wap::dbService::talk::MsgList getAllHisMsg(::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        return getAllHisMsg(userId, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::dbService::talk::MsgList getAllHisMsg(::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::dbService::talk::MsgList getAllHisMsg4Page(::Ice::Long userId, ::Ice::Int offset, ::Ice::Int pageSize)
    {
        return getAllHisMsg4Page(userId, offset, pageSize, 0);
    }
    ::com::xiaonei::wap::dbService::talk::MsgList getAllHisMsg4Page(::Ice::Long userId, ::Ice::Int offset, ::Ice::Int pageSize, const ::Ice::Context& __ctx)
    {
        return getAllHisMsg4Page(userId, offset, pageSize, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::dbService::talk::MsgList getAllHisMsg4Page(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void delHisMsg4Group(::Ice::Long roomId, ::Ice::Long userId)
    {
        delHisMsg4Group(roomId, userId, 0);
    }
    void delHisMsg4Group(::Ice::Long roomId, ::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        delHisMsg4Group(roomId, userId, &__ctx);
    }
    
private:

    void delHisMsg4Group(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:

    void delHisMsg(::Ice::Long userId, ::Ice::Long friId)
    {
        delHisMsg(userId, friId, 0);
    }
    void delHisMsg(::Ice::Long userId, ::Ice::Long friId, const ::Ice::Context& __ctx)
    {
        delHisMsg(userId, friId, &__ctx);
    }
    
private:

    void delHisMsg(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:

    void delAllHisMsg(::Ice::Long userId)
    {
        delAllHisMsg(userId, 0);
    }
    void delAllHisMsg(::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        delAllHisMsg(userId, &__ctx);
    }
    
private:

    void delAllHisMsg(::Ice::Long, const ::Ice::Context*);
    
public:

    void saveMsg(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Int channelId, const ::std::string& msg, ::Ice::Long dateTime)
    {
        saveMsg(fromId, toId, channelId, msg, dateTime, 0);
    }
    void saveMsg(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Int channelId, const ::std::string& msg, ::Ice::Long dateTime, const ::Ice::Context& __ctx)
    {
        saveMsg(fromId, toId, channelId, msg, dateTime, &__ctx);
    }
    
private:

    void saveMsg(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::std::string&, ::Ice::Long, const ::Ice::Context*);
    
public:

    void saveMsg4Group(::Ice::Long roomId, ::Ice::Long rcId, ::Ice::Long fromId, const ::com::xiaonei::wap::dbService::talk::IntSeq& intSequence, const ::std::string& msg, ::Ice::Long dateTime)
    {
        saveMsg4Group(roomId, rcId, fromId, intSequence, msg, dateTime, 0);
    }
    void saveMsg4Group(::Ice::Long roomId, ::Ice::Long rcId, ::Ice::Long fromId, const ::com::xiaonei::wap::dbService::talk::IntSeq& intSequence, const ::std::string& msg, ::Ice::Long dateTime, const ::Ice::Context& __ctx)
    {
        saveMsg4Group(roomId, rcId, fromId, intSequence, msg, dateTime, &__ctx);
    }
    
private:

    void saveMsg4Group(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::dbService::talk::IntSeq&, const ::std::string&, ::Ice::Long, const ::Ice::Context*);
    
public:

    void saveMsg4GroupDown(::Ice::Long roomId, ::Ice::Long rcId, ::Ice::Long fromId, const ::com::xiaonei::wap::dbService::talk::UserMsgMap& userMsg, ::Ice::Long dateTime)
    {
        saveMsg4GroupDown(roomId, rcId, fromId, userMsg, dateTime, 0);
    }
    void saveMsg4GroupDown(::Ice::Long roomId, ::Ice::Long rcId, ::Ice::Long fromId, const ::com::xiaonei::wap::dbService::talk::UserMsgMap& userMsg, ::Ice::Long dateTime, const ::Ice::Context& __ctx)
    {
        saveMsg4GroupDown(roomId, rcId, fromId, userMsg, dateTime, &__ctx);
    }
    
private:

    void saveMsg4GroupDown(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::dbService::talk::UserMsgMap&, ::Ice::Long, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<HisMessageService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<HisMessageService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<HisMessageService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace dbService
{

namespace talk
{

class HisMessageService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4Group(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4GroupPage(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4Page(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getAllHisMsg(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getAllHisMsg4Page(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void delHisMsg4Group(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual void delHisMsg(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual void delAllHisMsg(::Ice::Long, const ::Ice::Context*) = 0;

    virtual void saveMsg(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::std::string&, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual void saveMsg4Group(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::dbService::talk::IntSeq&, const ::std::string&, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual void saveMsg4GroupDown(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::dbService::talk::UserMsgMap&, ::Ice::Long, const ::Ice::Context*) = 0;
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

namespace dbService
{

namespace talk
{

class HisMessageService : virtual public ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService,
                          virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4Group(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4GroupPage(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4Page(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getAllHisMsg(::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getAllHisMsg4Page(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void delHisMsg4Group(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual void delHisMsg(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual void delAllHisMsg(::Ice::Long, const ::Ice::Context*);

    virtual void saveMsg(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual void saveMsg4Group(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::dbService::talk::IntSeq&, const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual void saveMsg4GroupDown(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::dbService::talk::UserMsgMap&, ::Ice::Long, const ::Ice::Context*);
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

namespace dbService
{

namespace talk
{

class HisMessageService : virtual public ::IceDelegate::com::xiaonei::wap::dbService::talk::HisMessageService,
                          virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4Group(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4GroupPage(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4Page(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getAllHisMsg(::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getAllHisMsg4Page(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void delHisMsg4Group(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual void delHisMsg(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual void delAllHisMsg(::Ice::Long, const ::Ice::Context*);

    virtual void saveMsg(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual void saveMsg4Group(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::dbService::talk::IntSeq&, const ::std::string&, ::Ice::Long, const ::Ice::Context*);

    virtual void saveMsg4GroupDown(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::dbService::talk::UserMsgMap&, ::Ice::Long, const ::Ice::Context*);
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

namespace dbService
{

namespace talk
{

class HisMessageService : virtual public ::Ice::Object
{
public:

    typedef HisMessageServicePrx ProxyType;
    typedef HisMessageServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4Group(::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getHisMsg4Group(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4GroupPage(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getHisMsg4GroupPage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg(::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getHisMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getHisMsg4Page(::Ice::Long, ::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getHisMsg4Page(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getAllHisMsg(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAllHisMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::dbService::talk::MsgList getAllHisMsg4Page(::Ice::Long, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getAllHisMsg4Page(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void delHisMsg4Group(::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___delHisMsg4Group(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void delHisMsg(::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___delHisMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void delAllHisMsg(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___delAllHisMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void saveMsg(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::std::string&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveMsg(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void saveMsg4Group(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::dbService::talk::IntSeq&, const ::std::string&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveMsg4Group(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void saveMsg4GroupDown(::Ice::Long, ::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::dbService::talk::UserMsgMap&, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveMsg4GroupDown(::IceInternal::Incoming&, const ::Ice::Current&);

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
