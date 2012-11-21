// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `OfflineMsgService.ice'

#ifndef __OfflineMsgService_h__
#define __OfflineMsgService_h__

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

namespace offline
{

class OfflineMsgService;

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

namespace offline
{

class OfflineMsgService;
bool operator==(const OfflineMsgService&, const OfflineMsgService&);
bool operator<(const OfflineMsgService&, const OfflineMsgService&);

}

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::xiaonei::wap::talk::offline::OfflineMsgService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService*);

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace talk
{

namespace offline
{

typedef ::IceInternal::Handle< ::com::xiaonei::wap::talk::offline::OfflineMsgService> OfflineMsgServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService> OfflineMsgServicePrx;

void __read(::IceInternal::BasicStream*, OfflineMsgServicePrx&);
void __patch__OfflineMsgServicePtr(void*, ::Ice::ObjectPtr&);

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

namespace offline
{

struct OfflineMessage
{
    ::Ice::Long id;
    ::Ice::Int newsId;
    ::Ice::Long fromId;
    ::Ice::Long toId;
    ::Ice::Short status;
    ::std::string message;
    ::Ice::Int chatType;
    ::std::string createTime;
    ::std::string readTime;

    bool operator==(const OfflineMessage&) const;
    bool operator<(const OfflineMessage&) const;
    bool operator!=(const OfflineMessage& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const OfflineMessage& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const OfflineMessage& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const OfflineMessage& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::com::xiaonei::wap::talk::offline::OfflineMessage> OfflineMsgList;
void __writeOfflineMsgList(::IceInternal::BasicStream*, const ::com::xiaonei::wap::talk::offline::OfflineMessage*, const ::com::xiaonei::wap::talk::offline::OfflineMessage*);
void __readOfflineMsgList(::IceInternal::BasicStream*, OfflineMsgList&);

struct GroupOfflineMessage
{
    ::Ice::Long id;
    ::Ice::Int newsId;
    ::Ice::Long groupId;
    ::Ice::Long fromId;
    ::Ice::Long toId;
    ::Ice::Short status;
    ::std::string message;
    ::Ice::Int chatType;
    ::std::string createTime;
    ::std::string readTime;

    bool operator==(const GroupOfflineMessage&) const;
    bool operator<(const GroupOfflineMessage&) const;
    bool operator!=(const GroupOfflineMessage& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const GroupOfflineMessage& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const GroupOfflineMessage& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const GroupOfflineMessage& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::com::xiaonei::wap::talk::offline::GroupOfflineMessage> GroupOfflineMsgList;
void __writeGroupOfflineMsgList(::IceInternal::BasicStream*, const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage*, const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage*);
void __readGroupOfflineMsgList(::IceInternal::BasicStream*, GroupOfflineMsgList&);

typedef ::std::vector< ::Ice::Int> ChatType;

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

namespace offline
{

class OfflineMsgService : virtual public ::IceProxy::Ice::Object
{
public:

    bool saveOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg)
    {
        return saveOfflineMessage(offlineMsg, 0);
    }
    bool saveOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Context& __ctx)
    {
        return saveOfflineMessage(offlineMsg, &__ctx);
    }
    
private:

    bool saveOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadMsgsByType(::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit)
    {
        return getUnreadMsgsByType(uid, bitChatType, status, limit, 0);
    }
    ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadMsgsByType(::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return getUnreadMsgsByType(uid, bitChatType, status, limit, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadMsgsByType(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int countByType(::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status)
    {
        return countByType(uid, bitChatType, status, 0);
    }
    ::Ice::Int countByType(::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, const ::Ice::Context& __ctx)
    {
        return countByType(uid, bitChatType, status, &__ctx);
    }
    
private:

    ::Ice::Int countByType(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    bool saveGroupOfflineMessage(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage& groupOfflineMsg)
    {
        return saveGroupOfflineMessage(groupOfflineMsg, 0);
    }
    bool saveGroupOfflineMessage(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage& groupOfflineMsg, const ::Ice::Context& __ctx)
    {
        return saveGroupOfflineMessage(groupOfflineMsg, &__ctx);
    }
    
private:

    bool saveGroupOfflineMessage(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::talk::offline::GroupOfflineMsgList getUnreadGroupMsgListByType(::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit)
    {
        return getUnreadGroupMsgListByType(uid, bitChatType, status, limit, 0);
    }
    ::com::xiaonei::wap::talk::offline::GroupOfflineMsgList getUnreadGroupMsgListByType(::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return getUnreadGroupMsgListByType(uid, bitChatType, status, limit, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::talk::offline::GroupOfflineMsgList getUnreadGroupMsgListByType(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void saveOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg)
    {
        saveOfflineMessageV1(offlineMsg, 0);
    }
    void saveOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Context& __ctx)
    {
        saveOfflineMessageV1(offlineMsg, &__ctx);
    }
    
private:

    void saveOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Context*);
    
public:

    void saveGroupOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage& groupOfflineMsg)
    {
        saveGroupOfflineMessageV1(groupOfflineMsg, 0);
    }
    void saveGroupOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage& groupOfflineMsg, const ::Ice::Context& __ctx)
    {
        saveGroupOfflineMessageV1(groupOfflineMsg, &__ctx);
    }
    
private:

    void saveGroupOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage&, const ::Ice::Context*);
    
public:

    void notifyPushOfflineMessageV1(const ::std::string& sessionId, ::Ice::Long uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit)
    {
        notifyPushOfflineMessageV1(sessionId, uid, bitChatType, status, limit, 0);
    }
    void notifyPushOfflineMessageV1(const ::std::string& sessionId, ::Ice::Long uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        notifyPushOfflineMessageV1(sessionId, uid, bitChatType, status, limit, &__ctx);
    }
    
private:

    void notifyPushOfflineMessageV1(const ::std::string&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void notifyPushOfflineMessageV2(const ::std::string& sessionId, ::Ice::Long uid, const ::com::xiaonei::wap::talk::offline::ChatType& chatTypeList, ::Ice::Int status, ::Ice::Int limit)
    {
        notifyPushOfflineMessageV2(sessionId, uid, chatTypeList, status, limit, 0);
    }
    void notifyPushOfflineMessageV2(const ::std::string& sessionId, ::Ice::Long uid, const ::com::xiaonei::wap::talk::offline::ChatType& chatTypeList, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        notifyPushOfflineMessageV2(sessionId, uid, chatTypeList, status, limit, &__ctx);
    }
    
private:

    void notifyPushOfflineMessageV2(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::offline::ChatType&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    void saveSystemOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg)
    {
        saveSystemOfflineMessageV1(offlineMsg, 0);
    }
    void saveSystemOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Context& __ctx)
    {
        saveSystemOfflineMessageV1(offlineMsg, &__ctx);
    }
    
private:

    void saveSystemOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Context*);
    
public:

    void deleteOfflineMessage(::Ice::Long msgKey, ::Ice::Long userid, ::Ice::Int msgType)
    {
        deleteOfflineMessage(msgKey, userid, msgType, 0);
    }
    void deleteOfflineMessage(::Ice::Long msgKey, ::Ice::Long userid, ::Ice::Int msgType, const ::Ice::Context& __ctx)
    {
        deleteOfflineMessage(msgKey, userid, msgType, &__ctx);
    }
    
private:

    void deleteOfflineMessage(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);
    
public:

    bool addOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg)
    {
        return addOfflineMessage(offlineMsg, 0);
    }
    bool addOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Context& __ctx)
    {
        return addOfflineMessage(offlineMsg, &__ctx);
    }
    
private:

    bool addOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadOfflineMsgList(::Ice::Int uid, ::Ice::Int limit)
    {
        return getUnreadOfflineMsgList(uid, limit, 0);
    }
    ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadOfflineMsgList(::Ice::Int uid, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return getUnreadOfflineMsgList(uid, limit, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadOfflineMsgList(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int count(::Ice::Int uid)
    {
        return count(uid, 0);
    }
    ::Ice::Int count(::Ice::Int uid, const ::Ice::Context& __ctx)
    {
        return count(uid, &__ctx);
    }
    
private:

    ::Ice::Int count(::Ice::Int, const ::Ice::Context*);
    
public:

    bool updateOfflineMessage(::Ice::Int uid, ::Ice::Int id, ::Ice::Int status)
    {
        return updateOfflineMessage(uid, id, status, 0);
    }
    bool updateOfflineMessage(::Ice::Int uid, ::Ice::Int id, ::Ice::Int status, const ::Ice::Context& __ctx)
    {
        return updateOfflineMessage(uid, id, status, &__ctx);
    }
    
private:

    bool updateOfflineMessage(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadTimeoutOfflineMsgList(::Ice::Int uid, ::Ice::Int timeout, ::Ice::Int limit)
    {
        return getUnreadTimeoutOfflineMsgList(uid, timeout, limit, 0);
    }
    ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadTimeoutOfflineMsgList(::Ice::Int uid, ::Ice::Int timeout, ::Ice::Int limit, const ::Ice::Context& __ctx)
    {
        return getUnreadTimeoutOfflineMsgList(uid, timeout, limit, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadTimeoutOfflineMsgList(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OfflineMsgService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OfflineMsgService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<OfflineMsgService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace offline
{

class OfflineMsgService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual bool saveOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadMsgsByType(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int countByType(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual bool saveGroupOfflineMessage(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::talk::offline::GroupOfflineMsgList getUnreadGroupMsgListByType(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void saveOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Context*) = 0;

    virtual void saveGroupOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage&, const ::Ice::Context*) = 0;

    virtual void notifyPushOfflineMessageV1(const ::std::string&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void notifyPushOfflineMessageV2(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::offline::ChatType&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual void saveSystemOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Context*) = 0;

    virtual void deleteOfflineMessage(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual bool addOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadOfflineMsgList(::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int count(::Ice::Int, const ::Ice::Context*) = 0;

    virtual bool updateOfflineMessage(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadTimeoutOfflineMsgList(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*) = 0;
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

namespace offline
{

class OfflineMsgService : virtual public ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService,
                          virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual bool saveOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadMsgsByType(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int countByType(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual bool saveGroupOfflineMessage(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::offline::GroupOfflineMsgList getUnreadGroupMsgListByType(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void saveOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Context*);

    virtual void saveGroupOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage&, const ::Ice::Context*);

    virtual void notifyPushOfflineMessageV1(const ::std::string&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void notifyPushOfflineMessageV2(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::offline::ChatType&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void saveSystemOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Context*);

    virtual void deleteOfflineMessage(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual bool addOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadOfflineMsgList(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int count(::Ice::Int, const ::Ice::Context*);

    virtual bool updateOfflineMessage(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadTimeoutOfflineMsgList(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
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

namespace offline
{

class OfflineMsgService : virtual public ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService,
                          virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual bool saveOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadMsgsByType(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int countByType(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual bool saveGroupOfflineMessage(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::offline::GroupOfflineMsgList getUnreadGroupMsgListByType(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void saveOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Context*);

    virtual void saveGroupOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage&, const ::Ice::Context*);

    virtual void notifyPushOfflineMessageV1(const ::std::string&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void notifyPushOfflineMessageV2(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::offline::ChatType&, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual void saveSystemOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Context*);

    virtual void deleteOfflineMessage(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::Ice::Context*);

    virtual bool addOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadOfflineMsgList(::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int count(::Ice::Int, const ::Ice::Context*);

    virtual bool updateOfflineMessage(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadTimeoutOfflineMsgList(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Context*);
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

namespace offline
{

class OfflineMsgService : virtual public ::Ice::Object
{
public:

    typedef OfflineMsgServicePrx ProxyType;
    typedef OfflineMsgServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual bool saveOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveOfflineMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadMsgsByType(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUnreadMsgsByType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int countByType(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___countByType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool saveGroupOfflineMessage(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveGroupOfflineMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::talk::offline::GroupOfflineMsgList getUnreadGroupMsgListByType(::Ice::Int, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUnreadGroupMsgListByType(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void saveOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveOfflineMessageV1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void saveGroupOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveGroupOfflineMessageV1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void notifyPushOfflineMessageV1(const ::std::string&, ::Ice::Long, ::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___notifyPushOfflineMessageV1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void notifyPushOfflineMessageV2(const ::std::string&, ::Ice::Long, const ::com::xiaonei::wap::talk::offline::ChatType&, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___notifyPushOfflineMessageV2(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void saveSystemOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveSystemOfflineMessageV1(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void deleteOfflineMessage(::Ice::Long, ::Ice::Long, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteOfflineMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool addOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addOfflineMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadOfflineMsgList(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUnreadOfflineMsgList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int count(::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___count(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool updateOfflineMessage(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___updateOfflineMessage(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::talk::offline::OfflineMsgList getUnreadTimeoutOfflineMsgList(::Ice::Int, ::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUnreadTimeoutOfflineMsgList(::IceInternal::Incoming&, const ::Ice::Current&);

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
