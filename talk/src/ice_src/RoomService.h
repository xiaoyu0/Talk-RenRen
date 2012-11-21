// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `RoomService.ice'

#ifndef __RoomService_h__
#define __RoomService_h__

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

namespace mtalk
{

namespace muc
{

class RoomService;

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

namespace mtalk
{

namespace muc
{

class RoomService;
bool operator==(const RoomService&, const RoomService&);
bool operator<(const RoomService&, const RoomService&);

}

}

}

}

}

namespace IceInternal
{

::Ice::Object* upCast(::com::xiaonei::wap::mtalk::muc::RoomService*);
::IceProxy::Ice::Object* upCast(::IceProxy::com::xiaonei::wap::mtalk::muc::RoomService*);

}

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace mtalk
{

namespace muc
{

typedef ::IceInternal::Handle< ::com::xiaonei::wap::mtalk::muc::RoomService> RoomServicePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::com::xiaonei::wap::mtalk::muc::RoomService> RoomServicePrx;

void __read(::IceInternal::BasicStream*, RoomServicePrx&);
void __patch__RoomServicePtr(void*, ::Ice::ObjectPtr&);

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

namespace mtalk
{

namespace muc
{

enum RoomOperateErrorStatus
{
    Success,
    Destory,
    NoPermission,
    RoomNotExist,
    AlreadyInRooom,
    CreatedRoomIsFull,
    RoomIsFull,
    NotInRoom,
    AlreadyInContact,
    SubjectIsEmpty,
    NotInContact,
    IllegalArgument,
    Unknown
};

void __write(::IceInternal::BasicStream*, RoomOperateErrorStatus);
void __read(::IceInternal::BasicStream*, RoomOperateErrorStatus&);

typedef ::std::vector< ::Ice::Int> MemberIdList;

typedef ::std::vector< ::Ice::Long> MemberGidList;

struct Member
{
    ::Ice::Long id;
    bool isFriend;
    ::std::string name;
    ::std::string tinyUrl;
    ::std::string headUrl;
    ::std::string mainUrl;
    ::std::string largeUrl;
    bool sixinMark;
    ::Ice::Int extFlag;

    bool operator==(const Member&) const;
    bool operator<(const Member&) const;
    bool operator!=(const Member& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const Member& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const Member& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const Member& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::map< ::Ice::Int, ::com::xiaonei::wap::mtalk::muc::Member> MemberMap;
void __writeMemberMap(::IceInternal::BasicStream*, const MemberMap&);
void __readMemberMap(::IceInternal::BasicStream*, MemberMap&);

typedef ::std::map< ::Ice::Long, ::com::xiaonei::wap::mtalk::muc::Member> MemberGidMap;
void __writeMemberGidMap(::IceInternal::BasicStream*, const MemberGidMap&);
void __readMemberGidMap(::IceInternal::BasicStream*, MemberGidMap&);

struct Room
{
    ::Ice::Long id;
    ::Ice::Long creater;
    ::std::string name;
    ::Ice::Long createTime;
    ::com::xiaonei::wap::mtalk::muc::MemberIdList memberIds;
    ::Ice::Long updateTime;
    ::Ice::Int version;
    bool autoCreate;
    ::com::xiaonei::wap::mtalk::muc::MemberGidList memberGids;
    bool sixinMark;

    bool operator==(const Room&) const;
    bool operator<(const Room&) const;
    bool operator!=(const Room& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const Room& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const Room& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const Room& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::com::xiaonei::wap::mtalk::muc::Room> RoomList;
void __writeRoomList(::IceInternal::BasicStream*, const ::com::xiaonei::wap::mtalk::muc::Room*, const ::com::xiaonei::wap::mtalk::muc::Room*);
void __readRoomList(::IceInternal::BasicStream*, RoomList&);

struct RetRoom
{
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus status;
    ::com::xiaonei::wap::mtalk::muc::Room roomInfo;

    bool operator==(const RetRoom&) const;
    bool operator<(const RetRoom&) const;
    bool operator!=(const RetRoom& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const RetRoom& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const RetRoom& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const RetRoom& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct RetRoomList
{
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus status;
    ::com::xiaonei::wap::mtalk::muc::RoomList roomListInfo;

    bool operator==(const RetRoomList&) const;
    bool operator<(const RetRoomList&) const;
    bool operator!=(const RetRoomList& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const RetRoomList& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const RetRoomList& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const RetRoomList& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

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

namespace mtalk
{

namespace muc
{

class RoomService : virtual public ::IceProxy::Ice::Object
{
public:

    ::com::xiaonei::wap::mtalk::muc::RetRoom createRoom(::Ice::Int creater, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, const ::std::string& roomName)
    {
        return createRoom(creater, members, roomName, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RetRoom createRoom(::Ice::Int creater, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, const ::std::string& roomName, const ::Ice::Context& __ctx)
    {
        return createRoom(creater, members, roomName, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RetRoom createRoom(::Ice::Int, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RetRoom getRoom(::Ice::Long roomId)
    {
        return getRoom(roomId, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RetRoom getRoom(::Ice::Long roomId, const ::Ice::Context& __ctx)
    {
        return getRoom(roomId, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RetRoom getRoom(::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RetRoom changeRoomSubject(::Ice::Int invokerId, ::Ice::Long roomId, const ::std::string& roomSubject)
    {
        return changeRoomSubject(invokerId, roomId, roomSubject, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RetRoom changeRoomSubject(::Ice::Int invokerId, ::Ice::Long roomId, const ::std::string& roomSubject, const ::Ice::Context& __ctx)
    {
        return changeRoomSubject(invokerId, roomId, roomSubject, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RetRoom changeRoomSubject(::Ice::Int, ::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RetRoomList getUserRoomList(::Ice::Int userId, bool withMembers)
    {
        return getUserRoomList(userId, withMembers, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RetRoomList getUserRoomList(::Ice::Int userId, bool withMembers, const ::Ice::Context& __ctx)
    {
        return getUserRoomList(userId, withMembers, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RetRoomList getUserRoomList(::Ice::Int, bool, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RetRoomList getSavedUserRoomList(::Ice::Int userId, bool withMembers)
    {
        return getSavedUserRoomList(userId, withMembers, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RetRoomList getSavedUserRoomList(::Ice::Int userId, bool withMembers, const ::Ice::Context& __ctx)
    {
        return getSavedUserRoomList(userId, withMembers, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RetRoomList getSavedUserRoomList(::Ice::Int, bool, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus saveRoomToContact(::Ice::Int userId, ::Ice::Long roomId)
    {
        return saveRoomToContact(userId, roomId, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus saveRoomToContact(::Ice::Int userId, ::Ice::Long roomId, const ::Ice::Context& __ctx)
    {
        return saveRoomToContact(userId, roomId, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus saveRoomToContact(::Ice::Int, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus deleteRoomFromContact(::Ice::Int userId, ::Ice::Long roomId)
    {
        return deleteRoomFromContact(userId, roomId, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus deleteRoomFromContact(::Ice::Int userId, ::Ice::Long roomId, const ::Ice::Context& __ctx)
    {
        return deleteRoomFromContact(userId, roomId, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus deleteRoomFromContact(::Ice::Int, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RetRoom addUserToRoom(::Ice::Int userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, ::com::xiaonei::wap::mtalk::muc::MemberIdList& realAddMembers)
    {
        return addUserToRoom(userId, roomId, members, realAddMembers, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RetRoom addUserToRoom(::Ice::Int userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, ::com::xiaonei::wap::mtalk::muc::MemberIdList& realAddMembers, const ::Ice::Context& __ctx)
    {
        return addUserToRoom(userId, roomId, members, realAddMembers, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RetRoom addUserToRoom(::Ice::Int, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RetRoom removeUserFromRoom(::Ice::Int userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, ::com::xiaonei::wap::mtalk::muc::MemberIdList& realRemoveMembers)
    {
        return removeUserFromRoom(userId, roomId, members, realRemoveMembers, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RetRoom removeUserFromRoom(::Ice::Int userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, ::com::xiaonei::wap::mtalk::muc::MemberIdList& realRemoveMembers, const ::Ice::Context& __ctx)
    {
        return removeUserFromRoom(userId, roomId, members, realRemoveMembers, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RetRoom removeUserFromRoom(::Ice::Int, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RetRoom exitRoom(::Ice::Int userId, ::Ice::Long roomId)
    {
        return exitRoom(userId, roomId, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RetRoom exitRoom(::Ice::Int userId, ::Ice::Long roomId, const ::Ice::Context& __ctx)
    {
        return exitRoom(userId, roomId, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RetRoom exitRoom(::Ice::Int, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::MemberMap getMemberDetail(::Ice::Int invokerId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members)
    {
        return getMemberDetail(invokerId, members, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::MemberMap getMemberDetail(::Ice::Int invokerId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, const ::Ice::Context& __ctx)
    {
        return getMemberDetail(invokerId, members, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::MemberMap getMemberDetail(::Ice::Int, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RetRoom createRoomNew(::Ice::Long creater, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, const ::std::string& roomName)
    {
        return createRoomNew(creater, members, roomName, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RetRoom createRoomNew(::Ice::Long creater, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, const ::std::string& roomName, const ::Ice::Context& __ctx)
    {
        return createRoomNew(creater, members, roomName, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RetRoom createRoomNew(::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RetRoom getRoomNew(::Ice::Long roomId)
    {
        return getRoomNew(roomId, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RetRoom getRoomNew(::Ice::Long roomId, const ::Ice::Context& __ctx)
    {
        return getRoomNew(roomId, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RetRoom getRoomNew(::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RetRoom changeRoomSubjectNew(::Ice::Long invokerId, ::Ice::Long roomId, const ::std::string& roomSubject)
    {
        return changeRoomSubjectNew(invokerId, roomId, roomSubject, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RetRoom changeRoomSubjectNew(::Ice::Long invokerId, ::Ice::Long roomId, const ::std::string& roomSubject, const ::Ice::Context& __ctx)
    {
        return changeRoomSubjectNew(invokerId, roomId, roomSubject, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RetRoom changeRoomSubjectNew(::Ice::Long, ::Ice::Long, const ::std::string&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RetRoomList getUserRoomListNew(::Ice::Long userId, bool withMembers)
    {
        return getUserRoomListNew(userId, withMembers, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RetRoomList getUserRoomListNew(::Ice::Long userId, bool withMembers, const ::Ice::Context& __ctx)
    {
        return getUserRoomListNew(userId, withMembers, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RetRoomList getUserRoomListNew(::Ice::Long, bool, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RetRoomList getSavedUserRoomListNew(::Ice::Long userId, bool withMembers)
    {
        return getSavedUserRoomListNew(userId, withMembers, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RetRoomList getSavedUserRoomListNew(::Ice::Long userId, bool withMembers, const ::Ice::Context& __ctx)
    {
        return getSavedUserRoomListNew(userId, withMembers, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RetRoomList getSavedUserRoomListNew(::Ice::Long, bool, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus saveRoomToContactNew(::Ice::Long userId, ::Ice::Long roomId)
    {
        return saveRoomToContactNew(userId, roomId, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus saveRoomToContactNew(::Ice::Long userId, ::Ice::Long roomId, const ::Ice::Context& __ctx)
    {
        return saveRoomToContactNew(userId, roomId, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus saveRoomToContactNew(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus deleteRoomFromContactNew(::Ice::Long userId, ::Ice::Long roomId)
    {
        return deleteRoomFromContactNew(userId, roomId, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus deleteRoomFromContactNew(::Ice::Long userId, ::Ice::Long roomId, const ::Ice::Context& __ctx)
    {
        return deleteRoomFromContactNew(userId, roomId, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus deleteRoomFromContactNew(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RetRoom addUserToRoomNew(::Ice::Long userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, ::com::xiaonei::wap::mtalk::muc::MemberGidList& realAddMembers)
    {
        return addUserToRoomNew(userId, roomId, members, realAddMembers, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RetRoom addUserToRoomNew(::Ice::Long userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, ::com::xiaonei::wap::mtalk::muc::MemberGidList& realAddMembers, const ::Ice::Context& __ctx)
    {
        return addUserToRoomNew(userId, roomId, members, realAddMembers, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RetRoom addUserToRoomNew(::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RetRoom removeUserFromRoomNew(::Ice::Long userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, ::com::xiaonei::wap::mtalk::muc::MemberGidList& realRemoveMembers)
    {
        return removeUserFromRoomNew(userId, roomId, members, realRemoveMembers, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RetRoom removeUserFromRoomNew(::Ice::Long userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, ::com::xiaonei::wap::mtalk::muc::MemberGidList& realRemoveMembers, const ::Ice::Context& __ctx)
    {
        return removeUserFromRoomNew(userId, roomId, members, realRemoveMembers, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RetRoom removeUserFromRoomNew(::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::RetRoom exitRoomNew(::Ice::Long userId, ::Ice::Long roomId)
    {
        return exitRoomNew(userId, roomId, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::RetRoom exitRoomNew(::Ice::Long userId, ::Ice::Long roomId, const ::Ice::Context& __ctx)
    {
        return exitRoomNew(userId, roomId, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::RetRoom exitRoomNew(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:

    ::com::xiaonei::wap::mtalk::muc::MemberGidMap getMemberDetailNew(::Ice::Long invokerId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members)
    {
        return getMemberDetailNew(invokerId, members, 0);
    }
    ::com::xiaonei::wap::mtalk::muc::MemberGidMap getMemberDetailNew(::Ice::Long invokerId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, const ::Ice::Context& __ctx)
    {
        return getMemberDetailNew(invokerId, members, &__ctx);
    }
    
private:

    ::com::xiaonei::wap::mtalk::muc::MemberGidMap getMemberDetailNew(::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::Ice::Context*);
    
public:

    ::Ice::Long getMemberInRoomTime(::Ice::Long roomId, ::Ice::Long userId)
    {
        return getMemberInRoomTime(roomId, userId, 0);
    }
    ::Ice::Long getMemberInRoomTime(::Ice::Long roomId, ::Ice::Long userId, const ::Ice::Context& __ctx)
    {
        return getMemberInRoomTime(roomId, userId, &__ctx);
    }
    
private:

    ::Ice::Long getMemberInRoomTime(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<RoomService> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<RoomService> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<RoomService*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<RoomService*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace mtalk
{

namespace muc
{

class RoomService : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom createRoom(::Ice::Int, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom getRoom(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom changeRoomSubject(::Ice::Int, ::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoomList getUserRoomList(::Ice::Int, bool, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoomList getSavedUserRoomList(::Ice::Int, bool, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus saveRoomToContact(::Ice::Int, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus deleteRoomFromContact(::Ice::Int, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom addUserToRoom(::Ice::Int, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom removeUserFromRoom(::Ice::Int, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom exitRoom(::Ice::Int, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::MemberMap getMemberDetail(::Ice::Int, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom createRoomNew(::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom getRoomNew(::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom changeRoomSubjectNew(::Ice::Long, ::Ice::Long, const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoomList getUserRoomListNew(::Ice::Long, bool, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoomList getSavedUserRoomListNew(::Ice::Long, bool, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus saveRoomToContactNew(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus deleteRoomFromContactNew(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom addUserToRoomNew(::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom removeUserFromRoomNew(::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom exitRoomNew(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;

    virtual ::com::xiaonei::wap::mtalk::muc::MemberGidMap getMemberDetailNew(::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::Ice::Context*) = 0;

    virtual ::Ice::Long getMemberInRoomTime(::Ice::Long, ::Ice::Long, const ::Ice::Context*) = 0;
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

namespace mtalk
{

namespace muc
{

class RoomService : virtual public ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService,
                    virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom createRoom(::Ice::Int, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom getRoom(::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom changeRoomSubject(::Ice::Int, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoomList getUserRoomList(::Ice::Int, bool, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoomList getSavedUserRoomList(::Ice::Int, bool, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus saveRoomToContact(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus deleteRoomFromContact(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom addUserToRoom(::Ice::Int, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom removeUserFromRoom(::Ice::Int, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom exitRoom(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::MemberMap getMemberDetail(::Ice::Int, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom createRoomNew(::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom getRoomNew(::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom changeRoomSubjectNew(::Ice::Long, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoomList getUserRoomListNew(::Ice::Long, bool, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoomList getSavedUserRoomListNew(::Ice::Long, bool, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus saveRoomToContactNew(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus deleteRoomFromContactNew(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom addUserToRoomNew(::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom removeUserFromRoomNew(::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom exitRoomNew(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::MemberGidMap getMemberDetailNew(::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::Ice::Context*);

    virtual ::Ice::Long getMemberInRoomTime(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
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

namespace mtalk
{

namespace muc
{

class RoomService : virtual public ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService,
                    virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom createRoom(::Ice::Int, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom getRoom(::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom changeRoomSubject(::Ice::Int, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoomList getUserRoomList(::Ice::Int, bool, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoomList getSavedUserRoomList(::Ice::Int, bool, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus saveRoomToContact(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus deleteRoomFromContact(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom addUserToRoom(::Ice::Int, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom removeUserFromRoom(::Ice::Int, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom exitRoom(::Ice::Int, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::MemberMap getMemberDetail(::Ice::Int, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom createRoomNew(::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom getRoomNew(::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom changeRoomSubjectNew(::Ice::Long, ::Ice::Long, const ::std::string&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoomList getUserRoomListNew(::Ice::Long, bool, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoomList getSavedUserRoomListNew(::Ice::Long, bool, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus saveRoomToContactNew(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus deleteRoomFromContactNew(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom addUserToRoomNew(::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom removeUserFromRoomNew(::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom exitRoomNew(::Ice::Long, ::Ice::Long, const ::Ice::Context*);

    virtual ::com::xiaonei::wap::mtalk::muc::MemberGidMap getMemberDetailNew(::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::Ice::Context*);

    virtual ::Ice::Long getMemberInRoomTime(::Ice::Long, ::Ice::Long, const ::Ice::Context*);
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

namespace mtalk
{

namespace muc
{

class RoomService : virtual public ::Ice::Object
{
public:

    typedef RoomServicePrx ProxyType;
    typedef RoomServicePtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom createRoom(::Ice::Int, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createRoom(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom getRoom(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRoom(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom changeRoomSubject(::Ice::Int, ::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___changeRoomSubject(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoomList getUserRoomList(::Ice::Int, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUserRoomList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoomList getSavedUserRoomList(::Ice::Int, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSavedUserRoomList(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus saveRoomToContact(::Ice::Int, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveRoomToContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus deleteRoomFromContact(::Ice::Int, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteRoomFromContact(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom addUserToRoom(::Ice::Int, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addUserToRoom(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom removeUserFromRoom(::Ice::Int, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeUserFromRoom(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom exitRoom(::Ice::Int, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___exitRoom(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::MemberMap getMemberDetail(::Ice::Int, const ::com::xiaonei::wap::mtalk::muc::MemberIdList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMemberDetail(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom createRoomNew(::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___createRoomNew(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom getRoomNew(::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getRoomNew(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom changeRoomSubjectNew(::Ice::Long, ::Ice::Long, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___changeRoomSubjectNew(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoomList getUserRoomListNew(::Ice::Long, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getUserRoomListNew(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoomList getSavedUserRoomListNew(::Ice::Long, bool, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getSavedUserRoomListNew(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus saveRoomToContactNew(::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___saveRoomToContactNew(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus deleteRoomFromContactNew(::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___deleteRoomFromContactNew(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom addUserToRoomNew(::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___addUserToRoomNew(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom removeUserFromRoomNew(::Ice::Long, ::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___removeUserFromRoomNew(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::RetRoom exitRoomNew(::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___exitRoomNew(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::com::xiaonei::wap::mtalk::muc::MemberGidMap getMemberDetailNew(::Ice::Long, const ::com::xiaonei::wap::mtalk::muc::MemberGidList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMemberDetailNew(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Long getMemberInRoomTime(::Ice::Long, ::Ice::Long, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getMemberInRoomTime(::IceInternal::Incoming&, const ::Ice::Current&);

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
