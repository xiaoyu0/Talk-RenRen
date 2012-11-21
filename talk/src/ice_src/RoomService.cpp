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

#include <RoomService.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <IceUtil/Iterator.h>
#include <IceUtil/ScopedArray.h>

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

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__createRoom_name = "createRoom";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__getRoom_name = "getRoom";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__changeRoomSubject_name = "changeRoomSubject";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__getUserRoomList_name = "getUserRoomList";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__getSavedUserRoomList_name = "getSavedUserRoomList";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__saveRoomToContact_name = "saveRoomToContact";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__deleteRoomFromContact_name = "deleteRoomFromContact";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__addUserToRoom_name = "addUserToRoom";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__removeUserFromRoom_name = "removeUserFromRoom";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__exitRoom_name = "exitRoom";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__getMemberDetail_name = "getMemberDetail";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__createRoomNew_name = "createRoomNew";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__getRoomNew_name = "getRoomNew";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__changeRoomSubjectNew_name = "changeRoomSubjectNew";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__getUserRoomListNew_name = "getUserRoomListNew";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__getSavedUserRoomListNew_name = "getSavedUserRoomListNew";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__saveRoomToContactNew_name = "saveRoomToContactNew";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__deleteRoomFromContactNew_name = "deleteRoomFromContactNew";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__addUserToRoomNew_name = "addUserToRoomNew";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__removeUserFromRoomNew_name = "removeUserFromRoomNew";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__exitRoomNew_name = "exitRoomNew";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__getMemberDetailNew_name = "getMemberDetailNew";

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService__getMemberInRoomTime_name = "getMemberInRoomTime";

::Ice::Object* IceInternal::upCast(::com::xiaonei::wap::mtalk::muc::RoomService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::wap::mtalk::muc::RoomService* p) { return p; }

void
com::xiaonei::wap::mtalk::muc::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::mtalk::muc::RoomServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::wap::mtalk::muc::RoomService;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::wap::mtalk::muc::__write(::IceInternal::BasicStream* __os, ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus v)
{
    __os->write(static_cast< ::Ice::Byte>(v), 13);
}

void
com::xiaonei::wap::mtalk::muc::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus& v)
{
    ::Ice::Byte val;
    __is->read(val, 13);
    v = static_cast< ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus>(val);
}

bool
com::xiaonei::wap::mtalk::muc::Member::operator==(const Member& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(id != __rhs.id)
    {
        return false;
    }
    if(isFriend != __rhs.isFriend)
    {
        return false;
    }
    if(name != __rhs.name)
    {
        return false;
    }
    if(tinyUrl != __rhs.tinyUrl)
    {
        return false;
    }
    if(headUrl != __rhs.headUrl)
    {
        return false;
    }
    if(mainUrl != __rhs.mainUrl)
    {
        return false;
    }
    if(largeUrl != __rhs.largeUrl)
    {
        return false;
    }
    if(sixinMark != __rhs.sixinMark)
    {
        return false;
    }
    if(extFlag != __rhs.extFlag)
    {
        return false;
    }
    return true;
}

bool
com::xiaonei::wap::mtalk::muc::Member::operator<(const Member& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(id < __rhs.id)
    {
        return true;
    }
    else if(__rhs.id < id)
    {
        return false;
    }
    if(isFriend < __rhs.isFriend)
    {
        return true;
    }
    else if(__rhs.isFriend < isFriend)
    {
        return false;
    }
    if(name < __rhs.name)
    {
        return true;
    }
    else if(__rhs.name < name)
    {
        return false;
    }
    if(tinyUrl < __rhs.tinyUrl)
    {
        return true;
    }
    else if(__rhs.tinyUrl < tinyUrl)
    {
        return false;
    }
    if(headUrl < __rhs.headUrl)
    {
        return true;
    }
    else if(__rhs.headUrl < headUrl)
    {
        return false;
    }
    if(mainUrl < __rhs.mainUrl)
    {
        return true;
    }
    else if(__rhs.mainUrl < mainUrl)
    {
        return false;
    }
    if(largeUrl < __rhs.largeUrl)
    {
        return true;
    }
    else if(__rhs.largeUrl < largeUrl)
    {
        return false;
    }
    if(sixinMark < __rhs.sixinMark)
    {
        return true;
    }
    else if(__rhs.sixinMark < sixinMark)
    {
        return false;
    }
    if(extFlag < __rhs.extFlag)
    {
        return true;
    }
    else if(__rhs.extFlag < extFlag)
    {
        return false;
    }
    return false;
}

void
com::xiaonei::wap::mtalk::muc::Member::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(id);
    __os->write(isFriend);
    __os->write(name);
    __os->write(tinyUrl);
    __os->write(headUrl);
    __os->write(mainUrl);
    __os->write(largeUrl);
    __os->write(sixinMark);
    __os->write(extFlag);
}

void
com::xiaonei::wap::mtalk::muc::Member::__read(::IceInternal::BasicStream* __is)
{
    __is->read(id);
    __is->read(isFriend);
    __is->read(name);
    __is->read(tinyUrl);
    __is->read(headUrl);
    __is->read(mainUrl);
    __is->read(largeUrl);
    __is->read(sixinMark);
    __is->read(extFlag);
}

void
com::xiaonei::wap::mtalk::muc::__writeMemberMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::wap::mtalk::muc::MemberMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::wap::mtalk::muc::MemberMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        p->second.__write(__os);
    }
}

void
com::xiaonei::wap::mtalk::muc::__readMemberMap(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::mtalk::muc::MemberMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Int, ::com::xiaonei::wap::mtalk::muc::Member> pair;
        __is->read(const_cast< ::Ice::Int&>(pair.first));
        ::com::xiaonei::wap::mtalk::muc::MemberMap::iterator __i = v.insert(v.end(), pair);
        __i->second.__read(__is);
    }
}

void
com::xiaonei::wap::mtalk::muc::__writeMemberGidMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::wap::mtalk::muc::MemberGidMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::wap::mtalk::muc::MemberGidMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        p->second.__write(__os);
    }
}

void
com::xiaonei::wap::mtalk::muc::__readMemberGidMap(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::mtalk::muc::MemberGidMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Long, ::com::xiaonei::wap::mtalk::muc::Member> pair;
        __is->read(const_cast< ::Ice::Long&>(pair.first));
        ::com::xiaonei::wap::mtalk::muc::MemberGidMap::iterator __i = v.insert(v.end(), pair);
        __i->second.__read(__is);
    }
}

bool
com::xiaonei::wap::mtalk::muc::Room::operator==(const Room& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(id != __rhs.id)
    {
        return false;
    }
    if(creater != __rhs.creater)
    {
        return false;
    }
    if(name != __rhs.name)
    {
        return false;
    }
    if(createTime != __rhs.createTime)
    {
        return false;
    }
    if(memberIds != __rhs.memberIds)
    {
        return false;
    }
    if(updateTime != __rhs.updateTime)
    {
        return false;
    }
    if(version != __rhs.version)
    {
        return false;
    }
    if(autoCreate != __rhs.autoCreate)
    {
        return false;
    }
    if(memberGids != __rhs.memberGids)
    {
        return false;
    }
    if(sixinMark != __rhs.sixinMark)
    {
        return false;
    }
    return true;
}

bool
com::xiaonei::wap::mtalk::muc::Room::operator<(const Room& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(id < __rhs.id)
    {
        return true;
    }
    else if(__rhs.id < id)
    {
        return false;
    }
    if(creater < __rhs.creater)
    {
        return true;
    }
    else if(__rhs.creater < creater)
    {
        return false;
    }
    if(name < __rhs.name)
    {
        return true;
    }
    else if(__rhs.name < name)
    {
        return false;
    }
    if(createTime < __rhs.createTime)
    {
        return true;
    }
    else if(__rhs.createTime < createTime)
    {
        return false;
    }
    if(memberIds < __rhs.memberIds)
    {
        return true;
    }
    else if(__rhs.memberIds < memberIds)
    {
        return false;
    }
    if(updateTime < __rhs.updateTime)
    {
        return true;
    }
    else if(__rhs.updateTime < updateTime)
    {
        return false;
    }
    if(version < __rhs.version)
    {
        return true;
    }
    else if(__rhs.version < version)
    {
        return false;
    }
    if(autoCreate < __rhs.autoCreate)
    {
        return true;
    }
    else if(__rhs.autoCreate < autoCreate)
    {
        return false;
    }
    if(memberGids < __rhs.memberGids)
    {
        return true;
    }
    else if(__rhs.memberGids < memberGids)
    {
        return false;
    }
    if(sixinMark < __rhs.sixinMark)
    {
        return true;
    }
    else if(__rhs.sixinMark < sixinMark)
    {
        return false;
    }
    return false;
}

void
com::xiaonei::wap::mtalk::muc::Room::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(id);
    __os->write(creater);
    __os->write(name);
    __os->write(createTime);
    if(memberIds.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&memberIds[0], &memberIds[0] + memberIds.size());
    }
    __os->write(updateTime);
    __os->write(version);
    __os->write(autoCreate);
    if(memberGids.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&memberGids[0], &memberGids[0] + memberGids.size());
    }
    __os->write(sixinMark);
}

void
com::xiaonei::wap::mtalk::muc::Room::__read(::IceInternal::BasicStream* __is)
{
    __is->read(id);
    __is->read(creater);
    __is->read(name);
    __is->read(createTime);
    __is->read(memberIds);
    __is->read(updateTime);
    __is->read(version);
    __is->read(autoCreate);
    __is->read(memberGids);
    __is->read(sixinMark);
}

void
com::xiaonei::wap::mtalk::muc::__writeRoomList(::IceInternal::BasicStream* __os, const ::com::xiaonei::wap::mtalk::muc::Room* begin, const ::com::xiaonei::wap::mtalk::muc::Room* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
com::xiaonei::wap::mtalk::muc::__readRoomList(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::mtalk::muc::RoomList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 41);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

bool
com::xiaonei::wap::mtalk::muc::RetRoom::operator==(const RetRoom& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return false;
    }
    if(roomInfo != __rhs.roomInfo)
    {
        return false;
    }
    return true;
}

bool
com::xiaonei::wap::mtalk::muc::RetRoom::operator<(const RetRoom& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(status < __rhs.status)
    {
        return true;
    }
    else if(__rhs.status < status)
    {
        return false;
    }
    if(roomInfo < __rhs.roomInfo)
    {
        return true;
    }
    else if(__rhs.roomInfo < roomInfo)
    {
        return false;
    }
    return false;
}

void
com::xiaonei::wap::mtalk::muc::RetRoom::__write(::IceInternal::BasicStream* __os) const
{
    ::com::xiaonei::wap::mtalk::muc::__write(__os, status);
    roomInfo.__write(__os);
}

void
com::xiaonei::wap::mtalk::muc::RetRoom::__read(::IceInternal::BasicStream* __is)
{
    ::com::xiaonei::wap::mtalk::muc::__read(__is, status);
    roomInfo.__read(__is);
}

bool
com::xiaonei::wap::mtalk::muc::RetRoomList::operator==(const RetRoomList& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(status != __rhs.status)
    {
        return false;
    }
    if(roomListInfo != __rhs.roomListInfo)
    {
        return false;
    }
    return true;
}

bool
com::xiaonei::wap::mtalk::muc::RetRoomList::operator<(const RetRoomList& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(status < __rhs.status)
    {
        return true;
    }
    else if(__rhs.status < status)
    {
        return false;
    }
    if(roomListInfo < __rhs.roomListInfo)
    {
        return true;
    }
    else if(__rhs.roomListInfo < roomListInfo)
    {
        return false;
    }
    return false;
}

void
com::xiaonei::wap::mtalk::muc::RetRoomList::__write(::IceInternal::BasicStream* __os) const
{
    ::com::xiaonei::wap::mtalk::muc::__write(__os, status);
    if(roomListInfo.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::com::xiaonei::wap::mtalk::muc::__writeRoomList(__os, &roomListInfo[0], &roomListInfo[0] + roomListInfo.size());
    }
}

void
com::xiaonei::wap::mtalk::muc::RetRoomList::__read(::IceInternal::BasicStream* __is)
{
    ::com::xiaonei::wap::mtalk::muc::__read(__is, status);
    ::com::xiaonei::wap::mtalk::muc::__readRoomList(__is, roomListInfo);
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::createRoom(::Ice::Int creater, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, const ::std::string& roomName, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__createRoom_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->createRoom(creater, members, roomName, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::getRoom(::Ice::Long roomId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__getRoom_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->getRoom(roomId, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::changeRoomSubject(::Ice::Int invokerId, ::Ice::Long roomId, const ::std::string& roomSubject, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__changeRoomSubject_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->changeRoomSubject(invokerId, roomId, roomSubject, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoomList
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::getUserRoomList(::Ice::Int userId, bool withMembers, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__getUserRoomList_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->getUserRoomList(userId, withMembers, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoomList
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::getSavedUserRoomList(::Ice::Int userId, bool withMembers, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__getSavedUserRoomList_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->getSavedUserRoomList(userId, withMembers, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::saveRoomToContact(::Ice::Int userId, ::Ice::Long roomId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__saveRoomToContact_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->saveRoomToContact(userId, roomId, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::deleteRoomFromContact(::Ice::Int userId, ::Ice::Long roomId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__deleteRoomFromContact_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->deleteRoomFromContact(userId, roomId, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::addUserToRoom(::Ice::Int userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, ::com::xiaonei::wap::mtalk::muc::MemberIdList& realAddMembers, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__addUserToRoom_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->addUserToRoom(userId, roomId, members, realAddMembers, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::removeUserFromRoom(::Ice::Int userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, ::com::xiaonei::wap::mtalk::muc::MemberIdList& realRemoveMembers, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__removeUserFromRoom_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->removeUserFromRoom(userId, roomId, members, realRemoveMembers, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::exitRoom(::Ice::Int userId, ::Ice::Long roomId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__exitRoom_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->exitRoom(userId, roomId, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::MemberMap
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::getMemberDetail(::Ice::Int invokerId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__getMemberDetail_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->getMemberDetail(invokerId, members, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::createRoomNew(::Ice::Long creater, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, const ::std::string& roomName, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__createRoomNew_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->createRoomNew(creater, members, roomName, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::getRoomNew(::Ice::Long roomId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__getRoomNew_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->getRoomNew(roomId, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::changeRoomSubjectNew(::Ice::Long invokerId, ::Ice::Long roomId, const ::std::string& roomSubject, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__changeRoomSubjectNew_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->changeRoomSubjectNew(invokerId, roomId, roomSubject, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoomList
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::getUserRoomListNew(::Ice::Long userId, bool withMembers, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__getUserRoomListNew_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->getUserRoomListNew(userId, withMembers, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoomList
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::getSavedUserRoomListNew(::Ice::Long userId, bool withMembers, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__getSavedUserRoomListNew_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->getSavedUserRoomListNew(userId, withMembers, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::saveRoomToContactNew(::Ice::Long userId, ::Ice::Long roomId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__saveRoomToContactNew_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->saveRoomToContactNew(userId, roomId, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::deleteRoomFromContactNew(::Ice::Long userId, ::Ice::Long roomId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__deleteRoomFromContactNew_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->deleteRoomFromContactNew(userId, roomId, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::addUserToRoomNew(::Ice::Long userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, ::com::xiaonei::wap::mtalk::muc::MemberGidList& realAddMembers, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__addUserToRoomNew_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->addUserToRoomNew(userId, roomId, members, realAddMembers, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::removeUserFromRoomNew(::Ice::Long userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, ::com::xiaonei::wap::mtalk::muc::MemberGidList& realRemoveMembers, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__removeUserFromRoomNew_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->removeUserFromRoomNew(userId, roomId, members, realRemoveMembers, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::exitRoomNew(::Ice::Long userId, ::Ice::Long roomId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__exitRoomNew_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->exitRoomNew(userId, roomId, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::com::xiaonei::wap::mtalk::muc::MemberGidMap
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::getMemberDetailNew(::Ice::Long invokerId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__getMemberDetailNew_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->getMemberDetailNew(invokerId, members, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::Ice::Long
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::getMemberInRoomTime(::Ice::Long roomId, ::Ice::Long userId, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__com__xiaonei__wap__mtalk__muc__RoomService__getMemberInRoomTime_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::mtalk::muc::RoomService*>(__delBase.get());
            return __del->getMemberInRoomTime(roomId, userId, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::ice_staticId()
{
    return ::com::xiaonei::wap::mtalk::muc::RoomService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::wap::mtalk::muc::RoomService::__newInstance() const
{
    return new RoomService;
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::createRoom(::Ice::Int creater, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, const ::std::string& roomName, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__createRoom_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(creater);
        if(members.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&members[0], &members[0] + members.size());
        }
        __os->write(roomName);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::getRoom(::Ice::Long roomId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__getRoom_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(roomId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::changeRoomSubject(::Ice::Int invokerId, ::Ice::Long roomId, const ::std::string& roomSubject, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__changeRoomSubject_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(invokerId);
        __os->write(roomId);
        __os->write(roomSubject);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoomList
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::getUserRoomList(::Ice::Int userId, bool withMembers, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__getUserRoomList_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(withMembers);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RetRoomList __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoomList
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::getSavedUserRoomList(::Ice::Int userId, bool withMembers, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__getSavedUserRoomList_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(withMembers);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RetRoomList __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::saveRoomToContact(::Ice::Int userId, ::Ice::Long roomId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__saveRoomToContact_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(roomId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::com::xiaonei::wap::mtalk::muc::__read(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::deleteRoomFromContact(::Ice::Int userId, ::Ice::Long roomId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__deleteRoomFromContact_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(roomId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::com::xiaonei::wap::mtalk::muc::__read(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::addUserToRoom(::Ice::Int userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, ::com::xiaonei::wap::mtalk::muc::MemberIdList& realAddMembers, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__addUserToRoom_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(roomId);
        if(members.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&members[0], &members[0] + members.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(realAddMembers);
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::removeUserFromRoom(::Ice::Int userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, ::com::xiaonei::wap::mtalk::muc::MemberIdList& realRemoveMembers, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__removeUserFromRoom_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(roomId);
        if(members.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&members[0], &members[0] + members.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(realRemoveMembers);
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::exitRoom(::Ice::Int userId, ::Ice::Long roomId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__exitRoom_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(roomId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::MemberMap
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::getMemberDetail(::Ice::Int invokerId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__getMemberDetail_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(invokerId);
        if(members.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&members[0], &members[0] + members.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::MemberMap __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::com::xiaonei::wap::mtalk::muc::__readMemberMap(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::createRoomNew(::Ice::Long creater, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, const ::std::string& roomName, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__createRoomNew_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(creater);
        if(members.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&members[0], &members[0] + members.size());
        }
        __os->write(roomName);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::getRoomNew(::Ice::Long roomId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__getRoomNew_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(roomId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::changeRoomSubjectNew(::Ice::Long invokerId, ::Ice::Long roomId, const ::std::string& roomSubject, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__changeRoomSubjectNew_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(invokerId);
        __os->write(roomId);
        __os->write(roomSubject);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoomList
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::getUserRoomListNew(::Ice::Long userId, bool withMembers, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__getUserRoomListNew_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(withMembers);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RetRoomList __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoomList
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::getSavedUserRoomListNew(::Ice::Long userId, bool withMembers, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__getSavedUserRoomListNew_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(withMembers);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RetRoomList __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::saveRoomToContactNew(::Ice::Long userId, ::Ice::Long roomId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__saveRoomToContactNew_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(roomId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::com::xiaonei::wap::mtalk::muc::__read(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::deleteRoomFromContactNew(::Ice::Long userId, ::Ice::Long roomId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__deleteRoomFromContactNew_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(roomId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::com::xiaonei::wap::mtalk::muc::__read(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::addUserToRoomNew(::Ice::Long userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, ::com::xiaonei::wap::mtalk::muc::MemberGidList& realAddMembers, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__addUserToRoomNew_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(roomId);
        if(members.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&members[0], &members[0] + members.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(realAddMembers);
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::removeUserFromRoomNew(::Ice::Long userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, ::com::xiaonei::wap::mtalk::muc::MemberGidList& realRemoveMembers, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__removeUserFromRoomNew_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(roomId);
        if(members.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&members[0], &members[0] + members.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(realRemoveMembers);
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::exitRoomNew(::Ice::Long userId, ::Ice::Long roomId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__exitRoomNew_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(roomId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __ret.__read(__is);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::MemberGidMap
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::getMemberDetailNew(::Ice::Long invokerId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__getMemberDetailNew_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(invokerId);
        if(members.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&members[0], &members[0] + members.size());
        }
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::mtalk::muc::MemberGidMap __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        ::com::xiaonei::wap::mtalk::muc::__readMemberGidMap(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Long
IceDelegateM::com::xiaonei::wap::mtalk::muc::RoomService::getMemberInRoomTime(::Ice::Long roomId, ::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__mtalk__muc__RoomService__getMemberInRoomTime_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(roomId);
        __os->write(userId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Ice::Long __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::createRoom(::Ice::Int creater, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, const ::std::string& roomName, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RetRoom& __result, ::Ice::Int creater, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, const ::std::string& roomName, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_creater(creater),
            _m_members(members),
            _m_roomName(roomName)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->createRoom(_m_creater, _m_members, _m_roomName, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RetRoom& _result;
        ::Ice::Int _m_creater;
        const ::com::xiaonei::wap::mtalk::muc::MemberIdList& _m_members;
        const ::std::string& _m_roomName;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__createRoom_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RetRoom __result;
    try
    {
        _DirectI __direct(__result, creater, members, roomName, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::getRoom(::Ice::Long roomId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RetRoom& __result, ::Ice::Long roomId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_roomId(roomId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getRoom(_m_roomId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RetRoom& _result;
        ::Ice::Long _m_roomId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__getRoom_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RetRoom __result;
    try
    {
        _DirectI __direct(__result, roomId, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::changeRoomSubject(::Ice::Int invokerId, ::Ice::Long roomId, const ::std::string& roomSubject, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RetRoom& __result, ::Ice::Int invokerId, ::Ice::Long roomId, const ::std::string& roomSubject, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_invokerId(invokerId),
            _m_roomId(roomId),
            _m_roomSubject(roomSubject)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->changeRoomSubject(_m_invokerId, _m_roomId, _m_roomSubject, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RetRoom& _result;
        ::Ice::Int _m_invokerId;
        ::Ice::Long _m_roomId;
        const ::std::string& _m_roomSubject;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__changeRoomSubject_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RetRoom __result;
    try
    {
        _DirectI __direct(__result, invokerId, roomId, roomSubject, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RetRoomList
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::getUserRoomList(::Ice::Int userId, bool withMembers, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RetRoomList& __result, ::Ice::Int userId, bool withMembers, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_withMembers(withMembers)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getUserRoomList(_m_userId, _m_withMembers, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RetRoomList& _result;
        ::Ice::Int _m_userId;
        bool _m_withMembers;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__getUserRoomList_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RetRoomList __result;
    try
    {
        _DirectI __direct(__result, userId, withMembers, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RetRoomList
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::getSavedUserRoomList(::Ice::Int userId, bool withMembers, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RetRoomList& __result, ::Ice::Int userId, bool withMembers, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_withMembers(withMembers)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getSavedUserRoomList(_m_userId, _m_withMembers, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RetRoomList& _result;
        ::Ice::Int _m_userId;
        bool _m_withMembers;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__getSavedUserRoomList_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RetRoomList __result;
    try
    {
        _DirectI __direct(__result, userId, withMembers, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::saveRoomToContact(::Ice::Int userId, ::Ice::Long roomId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus& __result, ::Ice::Int userId, ::Ice::Long roomId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_roomId(roomId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->saveRoomToContact(_m_userId, _m_roomId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus& _result;
        ::Ice::Int _m_userId;
        ::Ice::Long _m_roomId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__saveRoomToContact_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus __result;
    try
    {
        _DirectI __direct(__result, userId, roomId, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::deleteRoomFromContact(::Ice::Int userId, ::Ice::Long roomId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus& __result, ::Ice::Int userId, ::Ice::Long roomId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_roomId(roomId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->deleteRoomFromContact(_m_userId, _m_roomId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus& _result;
        ::Ice::Int _m_userId;
        ::Ice::Long _m_roomId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__deleteRoomFromContact_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus __result;
    try
    {
        _DirectI __direct(__result, userId, roomId, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::addUserToRoom(::Ice::Int userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, ::com::xiaonei::wap::mtalk::muc::MemberIdList& realAddMembers, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RetRoom& __result, ::Ice::Int userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, ::com::xiaonei::wap::mtalk::muc::MemberIdList& realAddMembers, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_roomId(roomId),
            _m_members(members),
            _m_realAddMembers(realAddMembers)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->addUserToRoom(_m_userId, _m_roomId, _m_members, _m_realAddMembers, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RetRoom& _result;
        ::Ice::Int _m_userId;
        ::Ice::Long _m_roomId;
        const ::com::xiaonei::wap::mtalk::muc::MemberIdList& _m_members;
        ::com::xiaonei::wap::mtalk::muc::MemberIdList& _m_realAddMembers;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__addUserToRoom_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RetRoom __result;
    try
    {
        _DirectI __direct(__result, userId, roomId, members, realAddMembers, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::removeUserFromRoom(::Ice::Int userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, ::com::xiaonei::wap::mtalk::muc::MemberIdList& realRemoveMembers, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RetRoom& __result, ::Ice::Int userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, ::com::xiaonei::wap::mtalk::muc::MemberIdList& realRemoveMembers, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_roomId(roomId),
            _m_members(members),
            _m_realRemoveMembers(realRemoveMembers)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->removeUserFromRoom(_m_userId, _m_roomId, _m_members, _m_realRemoveMembers, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RetRoom& _result;
        ::Ice::Int _m_userId;
        ::Ice::Long _m_roomId;
        const ::com::xiaonei::wap::mtalk::muc::MemberIdList& _m_members;
        ::com::xiaonei::wap::mtalk::muc::MemberIdList& _m_realRemoveMembers;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__removeUserFromRoom_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RetRoom __result;
    try
    {
        _DirectI __direct(__result, userId, roomId, members, realRemoveMembers, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::exitRoom(::Ice::Int userId, ::Ice::Long roomId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RetRoom& __result, ::Ice::Int userId, ::Ice::Long roomId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_roomId(roomId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->exitRoom(_m_userId, _m_roomId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RetRoom& _result;
        ::Ice::Int _m_userId;
        ::Ice::Long _m_roomId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__exitRoom_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RetRoom __result;
    try
    {
        _DirectI __direct(__result, userId, roomId, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::MemberMap
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::getMemberDetail(::Ice::Int invokerId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::MemberMap& __result, ::Ice::Int invokerId, const ::com::xiaonei::wap::mtalk::muc::MemberIdList& members, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_invokerId(invokerId),
            _m_members(members)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getMemberDetail(_m_invokerId, _m_members, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::MemberMap& _result;
        ::Ice::Int _m_invokerId;
        const ::com::xiaonei::wap::mtalk::muc::MemberIdList& _m_members;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__getMemberDetail_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::MemberMap __result;
    try
    {
        _DirectI __direct(__result, invokerId, members, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::createRoomNew(::Ice::Long creater, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, const ::std::string& roomName, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RetRoom& __result, ::Ice::Long creater, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, const ::std::string& roomName, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_creater(creater),
            _m_members(members),
            _m_roomName(roomName)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->createRoomNew(_m_creater, _m_members, _m_roomName, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RetRoom& _result;
        ::Ice::Long _m_creater;
        const ::com::xiaonei::wap::mtalk::muc::MemberGidList& _m_members;
        const ::std::string& _m_roomName;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__createRoomNew_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RetRoom __result;
    try
    {
        _DirectI __direct(__result, creater, members, roomName, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::getRoomNew(::Ice::Long roomId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RetRoom& __result, ::Ice::Long roomId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_roomId(roomId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getRoomNew(_m_roomId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RetRoom& _result;
        ::Ice::Long _m_roomId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__getRoomNew_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RetRoom __result;
    try
    {
        _DirectI __direct(__result, roomId, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::changeRoomSubjectNew(::Ice::Long invokerId, ::Ice::Long roomId, const ::std::string& roomSubject, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RetRoom& __result, ::Ice::Long invokerId, ::Ice::Long roomId, const ::std::string& roomSubject, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_invokerId(invokerId),
            _m_roomId(roomId),
            _m_roomSubject(roomSubject)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->changeRoomSubjectNew(_m_invokerId, _m_roomId, _m_roomSubject, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RetRoom& _result;
        ::Ice::Long _m_invokerId;
        ::Ice::Long _m_roomId;
        const ::std::string& _m_roomSubject;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__changeRoomSubjectNew_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RetRoom __result;
    try
    {
        _DirectI __direct(__result, invokerId, roomId, roomSubject, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RetRoomList
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::getUserRoomListNew(::Ice::Long userId, bool withMembers, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RetRoomList& __result, ::Ice::Long userId, bool withMembers, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_withMembers(withMembers)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getUserRoomListNew(_m_userId, _m_withMembers, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RetRoomList& _result;
        ::Ice::Long _m_userId;
        bool _m_withMembers;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__getUserRoomListNew_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RetRoomList __result;
    try
    {
        _DirectI __direct(__result, userId, withMembers, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RetRoomList
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::getSavedUserRoomListNew(::Ice::Long userId, bool withMembers, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RetRoomList& __result, ::Ice::Long userId, bool withMembers, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_withMembers(withMembers)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getSavedUserRoomListNew(_m_userId, _m_withMembers, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RetRoomList& _result;
        ::Ice::Long _m_userId;
        bool _m_withMembers;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__getSavedUserRoomListNew_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RetRoomList __result;
    try
    {
        _DirectI __direct(__result, userId, withMembers, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::saveRoomToContactNew(::Ice::Long userId, ::Ice::Long roomId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus& __result, ::Ice::Long userId, ::Ice::Long roomId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_roomId(roomId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->saveRoomToContactNew(_m_userId, _m_roomId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus& _result;
        ::Ice::Long _m_userId;
        ::Ice::Long _m_roomId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__saveRoomToContactNew_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus __result;
    try
    {
        _DirectI __direct(__result, userId, roomId, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::deleteRoomFromContactNew(::Ice::Long userId, ::Ice::Long roomId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus& __result, ::Ice::Long userId, ::Ice::Long roomId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_roomId(roomId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->deleteRoomFromContactNew(_m_userId, _m_roomId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus& _result;
        ::Ice::Long _m_userId;
        ::Ice::Long _m_roomId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__deleteRoomFromContactNew_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus __result;
    try
    {
        _DirectI __direct(__result, userId, roomId, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::addUserToRoomNew(::Ice::Long userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, ::com::xiaonei::wap::mtalk::muc::MemberGidList& realAddMembers, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RetRoom& __result, ::Ice::Long userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, ::com::xiaonei::wap::mtalk::muc::MemberGidList& realAddMembers, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_roomId(roomId),
            _m_members(members),
            _m_realAddMembers(realAddMembers)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->addUserToRoomNew(_m_userId, _m_roomId, _m_members, _m_realAddMembers, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RetRoom& _result;
        ::Ice::Long _m_userId;
        ::Ice::Long _m_roomId;
        const ::com::xiaonei::wap::mtalk::muc::MemberGidList& _m_members;
        ::com::xiaonei::wap::mtalk::muc::MemberGidList& _m_realAddMembers;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__addUserToRoomNew_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RetRoom __result;
    try
    {
        _DirectI __direct(__result, userId, roomId, members, realAddMembers, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::removeUserFromRoomNew(::Ice::Long userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, ::com::xiaonei::wap::mtalk::muc::MemberGidList& realRemoveMembers, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RetRoom& __result, ::Ice::Long userId, ::Ice::Long roomId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, ::com::xiaonei::wap::mtalk::muc::MemberGidList& realRemoveMembers, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_roomId(roomId),
            _m_members(members),
            _m_realRemoveMembers(realRemoveMembers)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->removeUserFromRoomNew(_m_userId, _m_roomId, _m_members, _m_realRemoveMembers, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RetRoom& _result;
        ::Ice::Long _m_userId;
        ::Ice::Long _m_roomId;
        const ::com::xiaonei::wap::mtalk::muc::MemberGidList& _m_members;
        ::com::xiaonei::wap::mtalk::muc::MemberGidList& _m_realRemoveMembers;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__removeUserFromRoomNew_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RetRoom __result;
    try
    {
        _DirectI __direct(__result, userId, roomId, members, realRemoveMembers, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::RetRoom
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::exitRoomNew(::Ice::Long userId, ::Ice::Long roomId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::RetRoom& __result, ::Ice::Long userId, ::Ice::Long roomId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_roomId(roomId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->exitRoomNew(_m_userId, _m_roomId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::RetRoom& _result;
        ::Ice::Long _m_userId;
        ::Ice::Long _m_roomId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__exitRoomNew_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::RetRoom __result;
    try
    {
        _DirectI __direct(__result, userId, roomId, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::com::xiaonei::wap::mtalk::muc::MemberGidMap
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::getMemberDetailNew(::Ice::Long invokerId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::mtalk::muc::MemberGidMap& __result, ::Ice::Long invokerId, const ::com::xiaonei::wap::mtalk::muc::MemberGidList& members, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_invokerId(invokerId),
            _m_members(members)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getMemberDetailNew(_m_invokerId, _m_members, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::mtalk::muc::MemberGidMap& _result;
        ::Ice::Long _m_invokerId;
        const ::com::xiaonei::wap::mtalk::muc::MemberGidList& _m_members;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__getMemberDetailNew_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::mtalk::muc::MemberGidMap __result;
    try
    {
        _DirectI __direct(__result, invokerId, members, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::Ice::Long
IceDelegateD::com::xiaonei::wap::mtalk::muc::RoomService::getMemberInRoomTime(::Ice::Long roomId, ::Ice::Long userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long& __result, ::Ice::Long roomId, ::Ice::Long userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_roomId(roomId),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::mtalk::muc::RoomService* servant = dynamic_cast< ::com::xiaonei::wap::mtalk::muc::RoomService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getMemberInRoomTime(_m_roomId, _m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long& _result;
        ::Ice::Long _m_roomId;
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__mtalk__muc__RoomService__getMemberInRoomTime_name, ::Ice::Normal, __context);
    ::Ice::Long __result;
    try
    {
        _DirectI __direct(__result, roomId, userId, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::Ice::ObjectPtr
com::xiaonei::wap::mtalk::muc::RoomService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__wap__mtalk__muc__RoomService_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::wap::mtalk::muc::RoomService"
};

bool
com::xiaonei::wap::mtalk::muc::RoomService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__wap__mtalk__muc__RoomService_ids, __com__xiaonei__wap__mtalk__muc__RoomService_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::wap::mtalk::muc::RoomService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__wap__mtalk__muc__RoomService_ids[0], &__com__xiaonei__wap__mtalk__muc__RoomService_ids[2]);
}

const ::std::string&
com::xiaonei::wap::mtalk::muc::RoomService::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__wap__mtalk__muc__RoomService_ids[1];
}

const ::std::string&
com::xiaonei::wap::mtalk::muc::RoomService::ice_staticId()
{
    return __com__xiaonei__wap__mtalk__muc__RoomService_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___createRoom(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int creater;
    ::com::xiaonei::wap::mtalk::muc::MemberIdList members;
    ::std::string roomName;
    __is->read(creater);
    __is->read(members);
    __is->read(roomName);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret = createRoom(creater, members, roomName, __current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___getRoom(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long roomId;
    __is->read(roomId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret = getRoom(roomId, __current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___changeRoomSubject(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int invokerId;
    ::Ice::Long roomId;
    ::std::string roomSubject;
    __is->read(invokerId);
    __is->read(roomId);
    __is->read(roomSubject);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret = changeRoomSubject(invokerId, roomId, roomSubject, __current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___getUserRoomList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userId;
    bool withMembers;
    __is->read(userId);
    __is->read(withMembers);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::RetRoomList __ret = getUserRoomList(userId, withMembers, __current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___getSavedUserRoomList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userId;
    bool withMembers;
    __is->read(userId);
    __is->read(withMembers);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::RetRoomList __ret = getSavedUserRoomList(userId, withMembers, __current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___saveRoomToContact(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userId;
    ::Ice::Long roomId;
    __is->read(userId);
    __is->read(roomId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus __ret = saveRoomToContact(userId, roomId, __current);
    ::com::xiaonei::wap::mtalk::muc::__write(__os, __ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___deleteRoomFromContact(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userId;
    ::Ice::Long roomId;
    __is->read(userId);
    __is->read(roomId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus __ret = deleteRoomFromContact(userId, roomId, __current);
    ::com::xiaonei::wap::mtalk::muc::__write(__os, __ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___addUserToRoom(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userId;
    ::Ice::Long roomId;
    ::com::xiaonei::wap::mtalk::muc::MemberIdList members;
    __is->read(userId);
    __is->read(roomId);
    __is->read(members);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::MemberIdList realAddMembers;
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret = addUserToRoom(userId, roomId, members, realAddMembers, __current);
    if(realAddMembers.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&realAddMembers[0], &realAddMembers[0] + realAddMembers.size());
    }
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___removeUserFromRoom(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userId;
    ::Ice::Long roomId;
    ::com::xiaonei::wap::mtalk::muc::MemberIdList members;
    __is->read(userId);
    __is->read(roomId);
    __is->read(members);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::MemberIdList realRemoveMembers;
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret = removeUserFromRoom(userId, roomId, members, realRemoveMembers, __current);
    if(realRemoveMembers.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&realRemoveMembers[0], &realRemoveMembers[0] + realRemoveMembers.size());
    }
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___exitRoom(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int userId;
    ::Ice::Long roomId;
    __is->read(userId);
    __is->read(roomId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret = exitRoom(userId, roomId, __current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___getMemberDetail(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int invokerId;
    ::com::xiaonei::wap::mtalk::muc::MemberIdList members;
    __is->read(invokerId);
    __is->read(members);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::MemberMap __ret = getMemberDetail(invokerId, members, __current);
    ::com::xiaonei::wap::mtalk::muc::__writeMemberMap(__os, __ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___createRoomNew(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long creater;
    ::com::xiaonei::wap::mtalk::muc::MemberGidList members;
    ::std::string roomName;
    __is->read(creater);
    __is->read(members);
    __is->read(roomName);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret = createRoomNew(creater, members, roomName, __current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___getRoomNew(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long roomId;
    __is->read(roomId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret = getRoomNew(roomId, __current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___changeRoomSubjectNew(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long invokerId;
    ::Ice::Long roomId;
    ::std::string roomSubject;
    __is->read(invokerId);
    __is->read(roomId);
    __is->read(roomSubject);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret = changeRoomSubjectNew(invokerId, roomId, roomSubject, __current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___getUserRoomListNew(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    bool withMembers;
    __is->read(userId);
    __is->read(withMembers);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::RetRoomList __ret = getUserRoomListNew(userId, withMembers, __current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___getSavedUserRoomListNew(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    bool withMembers;
    __is->read(userId);
    __is->read(withMembers);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::RetRoomList __ret = getSavedUserRoomListNew(userId, withMembers, __current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___saveRoomToContactNew(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Long roomId;
    __is->read(userId);
    __is->read(roomId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus __ret = saveRoomToContactNew(userId, roomId, __current);
    ::com::xiaonei::wap::mtalk::muc::__write(__os, __ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___deleteRoomFromContactNew(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Long roomId;
    __is->read(userId);
    __is->read(roomId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::RoomOperateErrorStatus __ret = deleteRoomFromContactNew(userId, roomId, __current);
    ::com::xiaonei::wap::mtalk::muc::__write(__os, __ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___addUserToRoomNew(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Long roomId;
    ::com::xiaonei::wap::mtalk::muc::MemberGidList members;
    __is->read(userId);
    __is->read(roomId);
    __is->read(members);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::MemberGidList realAddMembers;
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret = addUserToRoomNew(userId, roomId, members, realAddMembers, __current);
    if(realAddMembers.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&realAddMembers[0], &realAddMembers[0] + realAddMembers.size());
    }
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___removeUserFromRoomNew(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Long roomId;
    ::com::xiaonei::wap::mtalk::muc::MemberGidList members;
    __is->read(userId);
    __is->read(roomId);
    __is->read(members);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::MemberGidList realRemoveMembers;
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret = removeUserFromRoomNew(userId, roomId, members, realRemoveMembers, __current);
    if(realRemoveMembers.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&realRemoveMembers[0], &realRemoveMembers[0] + realRemoveMembers.size());
    }
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___exitRoomNew(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Long roomId;
    __is->read(userId);
    __is->read(roomId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::RetRoom __ret = exitRoomNew(userId, roomId, __current);
    __ret.__write(__os);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___getMemberDetailNew(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long invokerId;
    ::com::xiaonei::wap::mtalk::muc::MemberGidList members;
    __is->read(invokerId);
    __is->read(members);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::mtalk::muc::MemberGidMap __ret = getMemberDetailNew(invokerId, members, __current);
    ::com::xiaonei::wap::mtalk::muc::__writeMemberGidMap(__os, __ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::___getMemberInRoomTime(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long roomId;
    ::Ice::Long userId;
    __is->read(roomId);
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Long __ret = getMemberInRoomTime(roomId, userId, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__wap__mtalk__muc__RoomService_all[] =
{
    "addUserToRoom",
    "addUserToRoomNew",
    "changeRoomSubject",
    "changeRoomSubjectNew",
    "createRoom",
    "createRoomNew",
    "deleteRoomFromContact",
    "deleteRoomFromContactNew",
    "exitRoom",
    "exitRoomNew",
    "getMemberDetail",
    "getMemberDetailNew",
    "getMemberInRoomTime",
    "getRoom",
    "getRoomNew",
    "getSavedUserRoomList",
    "getSavedUserRoomListNew",
    "getUserRoomList",
    "getUserRoomListNew",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "removeUserFromRoom",
    "removeUserFromRoomNew",
    "saveRoomToContact",
    "saveRoomToContactNew"
};

::Ice::DispatchStatus
com::xiaonei::wap::mtalk::muc::RoomService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__wap__mtalk__muc__RoomService_all, __com__xiaonei__wap__mtalk__muc__RoomService_all + 27, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__wap__mtalk__muc__RoomService_all)
    {
        case 0:
        {
            return ___addUserToRoom(in, current);
        }
        case 1:
        {
            return ___addUserToRoomNew(in, current);
        }
        case 2:
        {
            return ___changeRoomSubject(in, current);
        }
        case 3:
        {
            return ___changeRoomSubjectNew(in, current);
        }
        case 4:
        {
            return ___createRoom(in, current);
        }
        case 5:
        {
            return ___createRoomNew(in, current);
        }
        case 6:
        {
            return ___deleteRoomFromContact(in, current);
        }
        case 7:
        {
            return ___deleteRoomFromContactNew(in, current);
        }
        case 8:
        {
            return ___exitRoom(in, current);
        }
        case 9:
        {
            return ___exitRoomNew(in, current);
        }
        case 10:
        {
            return ___getMemberDetail(in, current);
        }
        case 11:
        {
            return ___getMemberDetailNew(in, current);
        }
        case 12:
        {
            return ___getMemberInRoomTime(in, current);
        }
        case 13:
        {
            return ___getRoom(in, current);
        }
        case 14:
        {
            return ___getRoomNew(in, current);
        }
        case 15:
        {
            return ___getSavedUserRoomList(in, current);
        }
        case 16:
        {
            return ___getSavedUserRoomListNew(in, current);
        }
        case 17:
        {
            return ___getUserRoomList(in, current);
        }
        case 18:
        {
            return ___getUserRoomListNew(in, current);
        }
        case 19:
        {
            return ___ice_id(in, current);
        }
        case 20:
        {
            return ___ice_ids(in, current);
        }
        case 21:
        {
            return ___ice_isA(in, current);
        }
        case 22:
        {
            return ___ice_ping(in, current);
        }
        case 23:
        {
            return ___removeUserFromRoom(in, current);
        }
        case 24:
        {
            return ___removeUserFromRoomNew(in, current);
        }
        case 25:
        {
            return ___saveRoomToContact(in, current);
        }
        case 26:
        {
            return ___saveRoomToContactNew(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::wap::mtalk::muc::RoomService::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
com::xiaonei::wap::mtalk::muc::RoomService::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
com::xiaonei::wap::mtalk::muc::RoomService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::mtalk::muc::RoomService was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::mtalk::muc::RoomService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::mtalk::muc::RoomService was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::wap::mtalk::muc::__patch__RoomServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::wap::mtalk::muc::RoomServicePtr* p = static_cast< ::com::xiaonei::wap::mtalk::muc::RoomServicePtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::wap::mtalk::muc::RoomServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::wap::mtalk::muc::RoomService::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::wap::mtalk::muc::operator==(const ::com::xiaonei::wap::mtalk::muc::RoomService& l, const ::com::xiaonei::wap::mtalk::muc::RoomService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::wap::mtalk::muc::operator<(const ::com::xiaonei::wap::mtalk::muc::RoomService& l, const ::com::xiaonei::wap::mtalk::muc::RoomService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
