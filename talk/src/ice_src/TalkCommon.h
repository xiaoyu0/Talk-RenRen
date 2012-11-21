// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `TalkCommon.ice'

#ifndef __src_ice_src__TalkCommon_h__
#define __src_ice_src__TalkCommon_h__

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
#include <Util.h>
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

namespace common
{

class Passport;

class Jid;

class SysJid;

class Avatar;

class OnlineInfo;

class Message;

class RoomId;

class RoomJid;

class RoomMember;

class Occupant;

class RoomType;

class Room;

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

namespace common
{

class Passport;
bool operator==(const Passport&, const Passport&);
bool operator<(const Passport&, const Passport&);

class Jid;
bool operator==(const Jid&, const Jid&);
bool operator<(const Jid&, const Jid&);

class SysJid;
bool operator==(const SysJid&, const SysJid&);
bool operator<(const SysJid&, const SysJid&);

class Avatar;
bool operator==(const Avatar&, const Avatar&);
bool operator<(const Avatar&, const Avatar&);

class OnlineInfo;
bool operator==(const OnlineInfo&, const OnlineInfo&);
bool operator<(const OnlineInfo&, const OnlineInfo&);

class Message;
bool operator==(const Message&, const Message&);
bool operator<(const Message&, const Message&);

class RoomId;
bool operator==(const RoomId&, const RoomId&);
bool operator<(const RoomId&, const RoomId&);

class RoomJid;
bool operator==(const RoomJid&, const RoomJid&);
bool operator<(const RoomJid&, const RoomJid&);

class RoomMember;
bool operator==(const RoomMember&, const RoomMember&);
bool operator<(const RoomMember&, const RoomMember&);

class Occupant;
bool operator==(const Occupant&, const Occupant&);
bool operator<(const Occupant&, const Occupant&);

class RoomType;
bool operator==(const RoomType&, const RoomType&);
bool operator<(const RoomType&, const RoomType&);

class Room;
bool operator==(const Room&, const Room&);
bool operator<(const Room&, const Room&);

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::xiaonei::talk::common::Passport*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::talk::common::Passport*);

::Ice::Object* upCast(::com::xiaonei::talk::common::Jid*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::talk::common::Jid*);

::Ice::Object* upCast(::com::xiaonei::talk::common::SysJid*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::talk::common::SysJid*);

::Ice::Object* upCast(::com::xiaonei::talk::common::Avatar*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::talk::common::Avatar*);

::Ice::Object* upCast(::com::xiaonei::talk::common::OnlineInfo*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::talk::common::OnlineInfo*);

::Ice::Object* upCast(::com::xiaonei::talk::common::Message*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::talk::common::Message*);

::Ice::Object* upCast(::com::xiaonei::talk::common::RoomId*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::talk::common::RoomId*);

::Ice::Object* upCast(::com::xiaonei::talk::common::RoomJid*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::talk::common::RoomJid*);

::Ice::Object* upCast(::com::xiaonei::talk::common::RoomMember*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::talk::common::RoomMember*);

::Ice::Object* upCast(::com::xiaonei::talk::common::Occupant*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::talk::common::Occupant*);

::Ice::Object* upCast(::com::xiaonei::talk::common::RoomType*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::talk::common::RoomType*);

::Ice::Object* upCast(::com::xiaonei::talk::common::Room*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::talk::common::Room*);

}

namespace com
{

namespace xiaonei
{

namespace talk
{

namespace common
{

typedef ::IceInternal::Handle< ::com::xiaonei::talk::common::Passport> PassportPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::talk::common::Passport> PassportPrx;

void __read(::IceInternal::BasicStream*, PassportPrx&);
void __patch__PassportPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::xiaonei::talk::common::Jid> JidPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::talk::common::Jid> JidPrx;

void __read(::IceInternal::BasicStream*, JidPrx&);
void __patch__JidPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::xiaonei::talk::common::SysJid> SysJidPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::talk::common::SysJid> SysJidPrx;

void __read(::IceInternal::BasicStream*, SysJidPrx&);
void __patch__SysJidPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::xiaonei::talk::common::Avatar> AvatarPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::talk::common::Avatar> AvatarPrx;

void __read(::IceInternal::BasicStream*, AvatarPrx&);
void __patch__AvatarPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::xiaonei::talk::common::OnlineInfo> OnlineInfoPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::talk::common::OnlineInfo> OnlineInfoPrx;

void __read(::IceInternal::BasicStream*, OnlineInfoPrx&);
void __patch__OnlineInfoPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::xiaonei::talk::common::Message> MessagePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::talk::common::Message> MessagePrx;

void __read(::IceInternal::BasicStream*, MessagePrx&);
void __patch__MessagePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::xiaonei::talk::common::RoomId> RoomIdPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::talk::common::RoomId> RoomIdPrx;

void __read(::IceInternal::BasicStream*, RoomIdPrx&);
void __patch__RoomIdPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::xiaonei::talk::common::RoomJid> RoomJidPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::talk::common::RoomJid> RoomJidPrx;

void __read(::IceInternal::BasicStream*, RoomJidPrx&);
void __patch__RoomJidPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::xiaonei::talk::common::RoomMember> RoomMemberPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::talk::common::RoomMember> RoomMemberPrx;

void __read(::IceInternal::BasicStream*, RoomMemberPrx&);
void __patch__RoomMemberPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::xiaonei::talk::common::Occupant> OccupantPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::talk::common::Occupant> OccupantPrx;

void __read(::IceInternal::BasicStream*, OccupantPrx&);
void __patch__OccupantPtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::xiaonei::talk::common::RoomType> RoomTypePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::talk::common::RoomType> RoomTypePrx;

void __read(::IceInternal::BasicStream*, RoomTypePrx&);
void __patch__RoomTypePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::com::xiaonei::talk::common::Room> RoomPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::talk::common::Room> RoomPrx;

void __read(::IceInternal::BasicStream*, RoomPrx&);
void __patch__RoomPtr(void*, ::Ice::ObjectPtr&);

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

namespace common
{

const ::std::string TALKDOMAIN = "talk.xiaonei.com";

typedef ::std::vector< ::com::xiaonei::talk::common::JidPtr> JidSeq;
void __writeJidSeq(::IceInternal::BasicStream*, const ::com::xiaonei::talk::common::JidPtr*, const ::com::xiaonei::talk::common::JidPtr*);
void __readJidSeq(::IceInternal::BasicStream*, JidSeq&);

typedef ::std::map< ::Ice::Int, ::com::xiaonei::talk::common::JidPtr> JidMap;
void __writeJidMap(::IceInternal::BasicStream*, const JidMap&);
void __readJidMap(::IceInternal::BasicStream*, JidMap&);

typedef ::std::map< ::Ice::Int, ::com::xiaonei::talk::common::JidSeq> JidSeqMap;
void __writeJidSeqMap(::IceInternal::BasicStream*, const JidSeqMap&);
void __readJidSeqMap(::IceInternal::BasicStream*, JidSeqMap&);

enum OnlineStat
{
    OFFLINE,
    INVISIABLE,
    NOTAVAILABLE,
    BUSY,
    AWAY,
    ONLINE
};

void __write(::IceInternal::BasicStream*, OnlineStat);
void __read(::IceInternal::BasicStream*, OnlineStat&);

typedef ::std::vector< ::com::xiaonei::talk::common::AvatarPtr> AvatarSeq;
void __writeAvatarSeq(::IceInternal::BasicStream*, const ::com::xiaonei::talk::common::AvatarPtr*, const ::com::xiaonei::talk::common::AvatarPtr*);
void __readAvatarSeq(::IceInternal::BasicStream*, AvatarSeq&);

typedef ::std::map< ::Ice::Int, ::com::xiaonei::talk::common::AvatarSeq> AvatarMap;
void __writeAvatarMap(::IceInternal::BasicStream*, const AvatarMap&);
void __readAvatarMap(::IceInternal::BasicStream*, AvatarMap&);

typedef ::std::vector< ::com::xiaonei::talk::common::OnlineInfoPtr> OnlineInfoSeq;
void __writeOnlineInfoSeq(::IceInternal::BasicStream*, const ::com::xiaonei::talk::common::OnlineInfoPtr*, const ::com::xiaonei::talk::common::OnlineInfoPtr*);
void __readOnlineInfoSeq(::IceInternal::BasicStream*, OnlineInfoSeq&);

typedef ::std::map< ::Ice::Int, ::com::xiaonei::talk::common::OnlineInfoSeq> OnlineInfoMap;
void __writeOnlineInfoMap(::IceInternal::BasicStream*, const OnlineInfoMap&);
void __readOnlineInfoMap(::IceInternal::BasicStream*, OnlineInfoMap&);

typedef ::std::vector< ::com::xiaonei::talk::common::MessagePtr> MessageSeq;
void __writeMessageSeq(::IceInternal::BasicStream*, const ::com::xiaonei::talk::common::MessagePtr*, const ::com::xiaonei::talk::common::MessagePtr*);
void __readMessageSeq(::IceInternal::BasicStream*, MessageSeq&);

typedef ::std::map< ::Ice::Long, ::com::xiaonei::talk::common::MessagePtr> MessageMap;
void __writeMessageMap(::IceInternal::BasicStream*, const MessageMap&);
void __readMessageMap(::IceInternal::BasicStream*, MessageMap&);

typedef ::std::vector< ::com::xiaonei::talk::common::RoomIdPtr> RoomIdSeq;
void __writeRoomIdSeq(::IceInternal::BasicStream*, const ::com::xiaonei::talk::common::RoomIdPtr*, const ::com::xiaonei::talk::common::RoomIdPtr*);
void __readRoomIdSeq(::IceInternal::BasicStream*, RoomIdSeq&);

enum Affiliation
{
    Outcast,
    None,
    Member,
    Admin,
    Owner
};

void __write(::IceInternal::BasicStream*, Affiliation);
void __read(::IceInternal::BasicStream*, Affiliation&);

enum RoomRole
{
    NoneRole,
    Visitor,
    Participant,
    Moderator
};

void __write(::IceInternal::BasicStream*, RoomRole);
void __read(::IceInternal::BasicStream*, RoomRole&);

typedef ::std::vector< ::com::xiaonei::talk::common::RoomMemberPtr> RoomMemberSeq;
void __writeRoomMemberSeq(::IceInternal::BasicStream*, const ::com::xiaonei::talk::common::RoomMemberPtr*, const ::com::xiaonei::talk::common::RoomMemberPtr*);
void __readRoomMemberSeq(::IceInternal::BasicStream*, RoomMemberSeq&);

typedef ::std::vector< ::com::xiaonei::talk::common::OccupantPtr> OccupantSeq;
void __writeOccupantSeq(::IceInternal::BasicStream*, const ::com::xiaonei::talk::common::OccupantPtr*, const ::com::xiaonei::talk::common::OccupantPtr*);
void __readOccupantSeq(::IceInternal::BasicStream*, OccupantSeq&);

typedef ::std::vector< ::com::xiaonei::talk::common::RoomPtr> RoomSeq;
void __writeRoomSeq(::IceInternal::BasicStream*, const ::com::xiaonei::talk::common::RoomPtr*, const ::com::xiaonei::talk::common::RoomPtr*);
void __readRoomSeq(::IceInternal::BasicStream*, RoomSeq&);

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

namespace common
{

class Passport : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Passport> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Passport> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Passport*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Passport*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Jid : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Jid> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Jid> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Jid*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Jid*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class SysJid : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<SysJid> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<SysJid> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<SysJid*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<SysJid*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Avatar : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Avatar> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Avatar> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Avatar*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Avatar*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class OnlineInfo : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<OnlineInfo> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<OnlineInfo*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<OnlineInfo*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Message : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Message> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Message> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Message*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Message*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RoomId : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<RoomId> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomId> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomId*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RoomId*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RoomJid : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<RoomJid> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomJid> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomJid*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RoomJid*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RoomMember : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<RoomMember> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomMember> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomMember*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RoomMember*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Occupant : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Occupant> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Occupant> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Occupant*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Occupant*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class RoomType : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<RoomType> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomType> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomType*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RoomType*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Room : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Room> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Room> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Room*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Room*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace common
{

class Passport : virtual public ::IceDelegate::Ice::Object
{
public:
};

class Jid : virtual public ::IceDelegate::Ice::Object
{
public:
};

class SysJid : virtual public ::IceDelegate::Ice::Object
{
public:
};

class Avatar : virtual public ::IceDelegate::Ice::Object
{
public:
};

class OnlineInfo : virtual public ::IceDelegate::Ice::Object
{
public:
};

class Message : virtual public ::IceDelegate::Ice::Object
{
public:
};

class RoomId : virtual public ::IceDelegate::Ice::Object
{
public:
};

class RoomJid : virtual public ::IceDelegate::Ice::Object
{
public:
};

class RoomMember : virtual public ::IceDelegate::Ice::Object
{
public:
};

class Occupant : virtual public ::IceDelegate::Ice::Object
{
public:
};

class RoomType : virtual public ::IceDelegate::Ice::Object
{
public:
};

class Room : virtual public ::IceDelegate::Ice::Object
{
public:
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

namespace common
{

class Passport : virtual public ::IceDelegate::com::xiaonei::talk::common::Passport,
                 virtual public ::IceDelegateM::Ice::Object
{
public:
};

class Jid : virtual public ::IceDelegate::com::xiaonei::talk::common::Jid,
            virtual public ::IceDelegateM::Ice::Object
{
public:
};

class SysJid : virtual public ::IceDelegate::com::xiaonei::talk::common::SysJid,
               virtual public ::IceDelegateM::Ice::Object
{
public:
};

class Avatar : virtual public ::IceDelegate::com::xiaonei::talk::common::Avatar,
               virtual public ::IceDelegateM::Ice::Object
{
public:
};

class OnlineInfo : virtual public ::IceDelegate::com::xiaonei::talk::common::OnlineInfo,
                   virtual public ::IceDelegateM::Ice::Object
{
public:
};

class Message : virtual public ::IceDelegate::com::xiaonei::talk::common::Message,
                virtual public ::IceDelegateM::Ice::Object
{
public:
};

class RoomId : virtual public ::IceDelegate::com::xiaonei::talk::common::RoomId,
               virtual public ::IceDelegateM::Ice::Object
{
public:
};

class RoomJid : virtual public ::IceDelegate::com::xiaonei::talk::common::RoomJid,
                virtual public ::IceDelegateM::Ice::Object
{
public:
};

class RoomMember : virtual public ::IceDelegate::com::xiaonei::talk::common::RoomMember,
                   virtual public ::IceDelegateM::Ice::Object
{
public:
};

class Occupant : virtual public ::IceDelegate::com::xiaonei::talk::common::Occupant,
                 virtual public ::IceDelegateM::Ice::Object
{
public:
};

class RoomType : virtual public ::IceDelegate::com::xiaonei::talk::common::RoomType,
                 virtual public ::IceDelegateM::Ice::Object
{
public:
};

class Room : virtual public ::IceDelegate::com::xiaonei::talk::common::Room,
             virtual public ::IceDelegateM::Ice::Object
{
public:
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

namespace common
{

class Passport : virtual public ::IceDelegate::com::xiaonei::talk::common::Passport,
                 virtual public ::IceDelegateD::Ice::Object
{
public:
};

class Jid : virtual public ::IceDelegate::com::xiaonei::talk::common::Jid,
            virtual public ::IceDelegateD::Ice::Object
{
public:
};

class SysJid : virtual public ::IceDelegate::com::xiaonei::talk::common::SysJid,
               virtual public ::IceDelegateD::Ice::Object
{
public:
};

class Avatar : virtual public ::IceDelegate::com::xiaonei::talk::common::Avatar,
               virtual public ::IceDelegateD::Ice::Object
{
public:
};

class OnlineInfo : virtual public ::IceDelegate::com::xiaonei::talk::common::OnlineInfo,
                   virtual public ::IceDelegateD::Ice::Object
{
public:
};

class Message : virtual public ::IceDelegate::com::xiaonei::talk::common::Message,
                virtual public ::IceDelegateD::Ice::Object
{
public:
};

class RoomId : virtual public ::IceDelegate::com::xiaonei::talk::common::RoomId,
               virtual public ::IceDelegateD::Ice::Object
{
public:
};

class RoomJid : virtual public ::IceDelegate::com::xiaonei::talk::common::RoomJid,
                virtual public ::IceDelegateD::Ice::Object
{
public:
};

class RoomMember : virtual public ::IceDelegate::com::xiaonei::talk::common::RoomMember,
                   virtual public ::IceDelegateD::Ice::Object
{
public:
};

class Occupant : virtual public ::IceDelegate::com::xiaonei::talk::common::Occupant,
                 virtual public ::IceDelegateD::Ice::Object
{
public:
};

class RoomType : virtual public ::IceDelegate::com::xiaonei::talk::common::RoomType,
                 virtual public ::IceDelegateD::Ice::Object
{
public:
};

class Room : virtual public ::IceDelegate::com::xiaonei::talk::common::Room,
             virtual public ::IceDelegateD::Ice::Object
{
public:
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

namespace common
{

class Passport : virtual public ::Ice::Object
{
public:

    typedef PassportPrx ProxyType;
    typedef PassportPtr PointerType;
    
    Passport() {}
    Passport(::Ice::Int, ::Ice::Int);
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

    virtual ~Passport() {}

    friend class Passport__staticInit;

public:

    ::Ice::Int userId;

    ::Ice::Int result;
};

class Passport__staticInit
{
public:

    ::com::xiaonei::talk::common::Passport _init;
};

static Passport__staticInit _Passport_init;

class Jid : virtual public ::Ice::Object
{
public:

    typedef JidPrx ProxyType;
    typedef JidPtr PointerType;
    
    Jid() {}
    Jid(::Ice::Int, const ::std::string&, ::Ice::Long);
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

    virtual ~Jid() {}

public:

    ::Ice::Int userId;

    ::std::string endpoint;

    ::Ice::Long index;
};

class SysJid : virtual public ::Ice::Object
{
public:

    typedef SysJidPrx ProxyType;
    typedef SysJidPtr PointerType;
    
    SysJid() {}
    SysJid(const ::std::string&, const ::std::string&);
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

    virtual ~SysJid() {}

public:

    ::std::string node;

    ::std::string category;
};

class Avatar : virtual public ::Ice::Object
{
public:

    typedef AvatarPrx ProxyType;
    typedef AvatarPtr PointerType;
    
    Avatar() {}
    Avatar(const ::com::xiaonei::talk::common::JidPtr&, ::com::xiaonei::talk::common::OnlineStat, const ::std::string&, const ::std::string&, ::Ice::Int);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~Avatar() {}

public:

    ::com::xiaonei::talk::common::JidPtr jid;

    ::com::xiaonei::talk::common::OnlineStat stat;

    ::std::string ver;

    ::std::string ext;

    ::Ice::Int stamp;
};

class OnlineInfo : virtual public ::Ice::Object
{
public:

    typedef OnlineInfoPrx ProxyType;
    typedef OnlineInfoPtr PointerType;
    
    OnlineInfo() {}
    OnlineInfo(::Ice::Int, const ::std::string&, ::Ice::Long, const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int);
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

    virtual ~OnlineInfo() {}

public:

    ::Ice::Int userId;

    ::std::string endpoint;

    ::Ice::Long index;

    ::std::string show;

    ::std::string ver;

    ::std::string ext;

    ::Ice::Int stamp;
};

class Message : virtual public ::Ice::Object
{
public:

    typedef MessagePrx ProxyType;
    typedef MessagePtr PointerType;
    
    Message() {}
    Message(const ::com::xiaonei::talk::common::JidPtr&, const ::com::xiaonei::talk::common::JidPtr&, const ::std::string&, ::Ice::Int, ::Ice::Long);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~Message() {}

public:

    ::com::xiaonei::talk::common::JidPtr from;

    ::com::xiaonei::talk::common::JidPtr to;

    ::std::string msg;

    ::Ice::Int type;

    ::Ice::Long msgKey;
};

class RoomId : virtual public ::Ice::Object
{
public:

    typedef RoomIdPrx ProxyType;
    typedef RoomIdPtr PointerType;
    
    RoomId() {}
    RoomId(const ::std::string&, const ::std::string&);
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

    virtual ~RoomId() {}

public:

    ::std::string name;

    ::std::string domain;
};

class RoomJid : virtual public ::Ice::Object
{
public:

    typedef RoomJidPrx ProxyType;
    typedef RoomJidPtr PointerType;
    
    RoomJid() {}
    RoomJid(const ::com::xiaonei::talk::common::RoomIdPtr&, const ::std::string&);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~RoomJid() {}

public:

    ::com::xiaonei::talk::common::RoomIdPtr rid;

    ::std::string nick;
};

class RoomMember : virtual public ::Ice::Object
{
public:

    typedef RoomMemberPrx ProxyType;
    typedef RoomMemberPtr PointerType;
    
    RoomMember() {}
    RoomMember(const ::com::xiaonei::talk::common::RoomIdPtr&, ::Ice::Int, ::com::xiaonei::talk::common::Affiliation);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~RoomMember() {}

public:

    ::com::xiaonei::talk::common::RoomIdPtr rid;

    ::Ice::Int userId;

    ::com::xiaonei::talk::common::Affiliation aType;
};

class Occupant : virtual public ::Ice::Object
{
public:

    typedef OccupantPrx ProxyType;
    typedef OccupantPtr PointerType;
    
    Occupant() {}
    Occupant(const ::com::xiaonei::talk::common::RoomJidPtr&, const ::com::xiaonei::talk::common::JidPtr&, ::com::xiaonei::talk::common::Affiliation, ::com::xiaonei::talk::common::RoomRole);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~Occupant() {}

public:

    ::com::xiaonei::talk::common::RoomJidPtr rJid;

    ::com::xiaonei::talk::common::JidPtr fJid;

    ::com::xiaonei::talk::common::Affiliation aType;

    ::com::xiaonei::talk::common::RoomRole role;
};

class RoomType : virtual public ::Ice::Object
{
public:

    typedef RoomTypePrx ProxyType;
    typedef RoomTypePtr PointerType;
    
    RoomType() {}
    RoomType(bool, bool, bool, ::Ice::Int, bool, bool);
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

    virtual ~RoomType() {}

public:

    bool hidden;

    bool memberOnly;

    bool moderated;

    ::Ice::Int anonymousType;

    bool secured;

    bool persistent;
};

class Room : virtual public ::Ice::Object
{
public:

    typedef RoomPrx ProxyType;
    typedef RoomPtr PointerType;
    
    Room() {}
    Room(const ::std::string&, const ::std::string&, const ::com::xiaonei::talk::common::RoomTypePtr&, const ::std::string&, ::Ice::Int, bool);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void __incRef();
    virtual void __decRef();
    virtual void __addObject(::IceInternal::GCCountMap&);
    virtual bool __usesClasses();
    virtual void __gcReachable(::IceInternal::GCCountMap&) const;
    virtual void __gcClear();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~Room() {}

public:

    ::std::string title;

    ::std::string descr;

    ::com::xiaonei::talk::common::RoomTypePtr type;

    ::std::string password;

    ::Ice::Int maxOccupantsCount;

    bool allowUserToInvite;
};

}

}

}

}

#endif
