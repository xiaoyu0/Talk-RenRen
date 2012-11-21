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

#include <TalkCommon.h>
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

::Ice::Object* IceInternal::upCast(::com::xiaonei::talk::common::Passport* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::talk::common::Passport* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::xiaonei::talk::common::Jid* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::talk::common::Jid* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::xiaonei::talk::common::SysJid* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::talk::common::SysJid* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::xiaonei::talk::common::Avatar* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::talk::common::Avatar* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::xiaonei::talk::common::OnlineInfo* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::talk::common::OnlineInfo* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::xiaonei::talk::common::Message* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::talk::common::Message* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::xiaonei::talk::common::RoomId* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::talk::common::RoomId* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::xiaonei::talk::common::RoomJid* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::talk::common::RoomJid* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::xiaonei::talk::common::RoomMember* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::talk::common::RoomMember* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::xiaonei::talk::common::Occupant* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::talk::common::Occupant* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::xiaonei::talk::common::RoomType* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::talk::common::RoomType* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::xiaonei::talk::common::Room* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::talk::common::Room* p) { return p; }

void
com::xiaonei::talk::common::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::PassportPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::talk::common::Passport;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::talk::common::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::JidPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::talk::common::Jid;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::talk::common::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::SysJidPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::talk::common::SysJid;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::talk::common::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::AvatarPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::talk::common::Avatar;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::talk::common::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::OnlineInfoPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::talk::common::OnlineInfo;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::talk::common::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::MessagePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::talk::common::Message;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::talk::common::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::RoomIdPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::talk::common::RoomId;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::talk::common::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::RoomJidPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::talk::common::RoomJid;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::talk::common::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::RoomMemberPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::talk::common::RoomMember;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::talk::common::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::OccupantPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::talk::common::Occupant;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::talk::common::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::RoomTypePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::talk::common::RoomType;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::talk::common::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::RoomPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::talk::common::Room;
        v->__copyFrom(proxy);
    }
}

void
com::xiaonei::talk::common::__writeJidSeq(::IceInternal::BasicStream* __os, const ::com::xiaonei::talk::common::JidPtr* begin, const ::com::xiaonei::talk::common::JidPtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
com::xiaonei::talk::common::__readJidSeq(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::JidSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::com::xiaonei::talk::common::__patch__JidPtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
com::xiaonei::talk::common::__writeJidMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::talk::common::JidMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::talk::common::JidMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p->second.get())));
    }
}

void
com::xiaonei::talk::common::__readJidMap(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::JidMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Int, ::com::xiaonei::talk::common::JidPtr> pair;
        __is->read(const_cast< ::Ice::Int&>(pair.first));
        ::com::xiaonei::talk::common::JidMap::iterator __i = v.insert(v.end(), pair);
        __is->read(::com::xiaonei::talk::common::__patch__JidPtr, &__i->second);
    }
}

void
com::xiaonei::talk::common::__writeJidSeqMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::talk::common::JidSeqMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::talk::common::JidSeqMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        if(p->second.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::com::xiaonei::talk::common::__writeJidSeq(__os, &p->second[0], &p->second[0] + p->second.size());
        }
    }
}

void
com::xiaonei::talk::common::__readJidSeqMap(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::JidSeqMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Int, ::com::xiaonei::talk::common::JidSeq> pair;
        __is->read(const_cast< ::Ice::Int&>(pair.first));
        ::com::xiaonei::talk::common::JidSeqMap::iterator __i = v.insert(v.end(), pair);
        ::com::xiaonei::talk::common::__readJidSeq(__is, __i->second);
    }
}

void
com::xiaonei::talk::common::__write(::IceInternal::BasicStream* __os, ::com::xiaonei::talk::common::OnlineStat v)
{
    __os->write(static_cast< ::Ice::Byte>(v), 6);
}

void
com::xiaonei::talk::common::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::OnlineStat& v)
{
    ::Ice::Byte val;
    __is->read(val, 6);
    v = static_cast< ::com::xiaonei::talk::common::OnlineStat>(val);
}

void
com::xiaonei::talk::common::__writeAvatarSeq(::IceInternal::BasicStream* __os, const ::com::xiaonei::talk::common::AvatarPtr* begin, const ::com::xiaonei::talk::common::AvatarPtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
com::xiaonei::talk::common::__readAvatarSeq(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::AvatarSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::com::xiaonei::talk::common::__patch__AvatarPtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
com::xiaonei::talk::common::__writeAvatarMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::talk::common::AvatarMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::talk::common::AvatarMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        if(p->second.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::com::xiaonei::talk::common::__writeAvatarSeq(__os, &p->second[0], &p->second[0] + p->second.size());
        }
    }
}

void
com::xiaonei::talk::common::__readAvatarMap(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::AvatarMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Int, ::com::xiaonei::talk::common::AvatarSeq> pair;
        __is->read(const_cast< ::Ice::Int&>(pair.first));
        ::com::xiaonei::talk::common::AvatarMap::iterator __i = v.insert(v.end(), pair);
        ::com::xiaonei::talk::common::__readAvatarSeq(__is, __i->second);
    }
}

void
com::xiaonei::talk::common::__writeOnlineInfoSeq(::IceInternal::BasicStream* __os, const ::com::xiaonei::talk::common::OnlineInfoPtr* begin, const ::com::xiaonei::talk::common::OnlineInfoPtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
com::xiaonei::talk::common::__readOnlineInfoSeq(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::OnlineInfoSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::com::xiaonei::talk::common::__patch__OnlineInfoPtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
com::xiaonei::talk::common::__writeOnlineInfoMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::talk::common::OnlineInfoMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::talk::common::OnlineInfoMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        if(p->second.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::com::xiaonei::talk::common::__writeOnlineInfoSeq(__os, &p->second[0], &p->second[0] + p->second.size());
        }
    }
}

void
com::xiaonei::talk::common::__readOnlineInfoMap(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::OnlineInfoMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Int, ::com::xiaonei::talk::common::OnlineInfoSeq> pair;
        __is->read(const_cast< ::Ice::Int&>(pair.first));
        ::com::xiaonei::talk::common::OnlineInfoMap::iterator __i = v.insert(v.end(), pair);
        ::com::xiaonei::talk::common::__readOnlineInfoSeq(__is, __i->second);
    }
}

void
com::xiaonei::talk::common::__writeMessageSeq(::IceInternal::BasicStream* __os, const ::com::xiaonei::talk::common::MessagePtr* begin, const ::com::xiaonei::talk::common::MessagePtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
com::xiaonei::talk::common::__readMessageSeq(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::MessageSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::com::xiaonei::talk::common::__patch__MessagePtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
com::xiaonei::talk::common::__writeMessageMap(::IceInternal::BasicStream* __os, const ::com::xiaonei::talk::common::MessageMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::xiaonei::talk::common::MessageMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p->second.get())));
    }
}

void
com::xiaonei::talk::common::__readMessageMap(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::MessageMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Long, ::com::xiaonei::talk::common::MessagePtr> pair;
        __is->read(const_cast< ::Ice::Long&>(pair.first));
        ::com::xiaonei::talk::common::MessageMap::iterator __i = v.insert(v.end(), pair);
        __is->read(::com::xiaonei::talk::common::__patch__MessagePtr, &__i->second);
    }
}

void
com::xiaonei::talk::common::__writeRoomIdSeq(::IceInternal::BasicStream* __os, const ::com::xiaonei::talk::common::RoomIdPtr* begin, const ::com::xiaonei::talk::common::RoomIdPtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
com::xiaonei::talk::common::__readRoomIdSeq(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::RoomIdSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::com::xiaonei::talk::common::__patch__RoomIdPtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
com::xiaonei::talk::common::__write(::IceInternal::BasicStream* __os, ::com::xiaonei::talk::common::Affiliation v)
{
    __os->write(static_cast< ::Ice::Byte>(v), 5);
}

void
com::xiaonei::talk::common::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::Affiliation& v)
{
    ::Ice::Byte val;
    __is->read(val, 5);
    v = static_cast< ::com::xiaonei::talk::common::Affiliation>(val);
}

void
com::xiaonei::talk::common::__write(::IceInternal::BasicStream* __os, ::com::xiaonei::talk::common::RoomRole v)
{
    __os->write(static_cast< ::Ice::Byte>(v), 4);
}

void
com::xiaonei::talk::common::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::RoomRole& v)
{
    ::Ice::Byte val;
    __is->read(val, 4);
    v = static_cast< ::com::xiaonei::talk::common::RoomRole>(val);
}

void
com::xiaonei::talk::common::__writeRoomMemberSeq(::IceInternal::BasicStream* __os, const ::com::xiaonei::talk::common::RoomMemberPtr* begin, const ::com::xiaonei::talk::common::RoomMemberPtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
com::xiaonei::talk::common::__readRoomMemberSeq(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::RoomMemberSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::com::xiaonei::talk::common::__patch__RoomMemberPtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
com::xiaonei::talk::common::__writeOccupantSeq(::IceInternal::BasicStream* __os, const ::com::xiaonei::talk::common::OccupantPtr* begin, const ::com::xiaonei::talk::common::OccupantPtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
com::xiaonei::talk::common::__readOccupantSeq(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::OccupantSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::com::xiaonei::talk::common::__patch__OccupantPtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
com::xiaonei::talk::common::__writeRoomSeq(::IceInternal::BasicStream* __os, const ::com::xiaonei::talk::common::RoomPtr* begin, const ::com::xiaonei::talk::common::RoomPtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
com::xiaonei::talk::common::__readRoomSeq(::IceInternal::BasicStream* __is, ::com::xiaonei::talk::common::RoomSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::com::xiaonei::talk::common::__patch__RoomPtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

const ::std::string&
IceProxy::com::xiaonei::talk::common::Passport::ice_staticId()
{
    return ::com::xiaonei::talk::common::Passport::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::talk::common::Passport::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::talk::common::Passport);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::talk::common::Passport::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::talk::common::Passport);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::talk::common::Passport::__newInstance() const
{
    return new Passport;
}

const ::std::string&
IceProxy::com::xiaonei::talk::common::Jid::ice_staticId()
{
    return ::com::xiaonei::talk::common::Jid::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::talk::common::Jid::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::talk::common::Jid);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::talk::common::Jid::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::talk::common::Jid);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::talk::common::Jid::__newInstance() const
{
    return new Jid;
}

const ::std::string&
IceProxy::com::xiaonei::talk::common::SysJid::ice_staticId()
{
    return ::com::xiaonei::talk::common::SysJid::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::talk::common::SysJid::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::talk::common::SysJid);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::talk::common::SysJid::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::talk::common::SysJid);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::talk::common::SysJid::__newInstance() const
{
    return new SysJid;
}

const ::std::string&
IceProxy::com::xiaonei::talk::common::Avatar::ice_staticId()
{
    return ::com::xiaonei::talk::common::Avatar::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::talk::common::Avatar::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::talk::common::Avatar);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::talk::common::Avatar::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::talk::common::Avatar);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::talk::common::Avatar::__newInstance() const
{
    return new Avatar;
}

const ::std::string&
IceProxy::com::xiaonei::talk::common::OnlineInfo::ice_staticId()
{
    return ::com::xiaonei::talk::common::OnlineInfo::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::talk::common::OnlineInfo::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::talk::common::OnlineInfo);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::talk::common::OnlineInfo::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::talk::common::OnlineInfo);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::talk::common::OnlineInfo::__newInstance() const
{
    return new OnlineInfo;
}

const ::std::string&
IceProxy::com::xiaonei::talk::common::Message::ice_staticId()
{
    return ::com::xiaonei::talk::common::Message::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::talk::common::Message::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::talk::common::Message);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::talk::common::Message::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::talk::common::Message);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::talk::common::Message::__newInstance() const
{
    return new Message;
}

const ::std::string&
IceProxy::com::xiaonei::talk::common::RoomId::ice_staticId()
{
    return ::com::xiaonei::talk::common::RoomId::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::talk::common::RoomId::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::talk::common::RoomId);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::talk::common::RoomId::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::talk::common::RoomId);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::talk::common::RoomId::__newInstance() const
{
    return new RoomId;
}

const ::std::string&
IceProxy::com::xiaonei::talk::common::RoomJid::ice_staticId()
{
    return ::com::xiaonei::talk::common::RoomJid::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::talk::common::RoomJid::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::talk::common::RoomJid);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::talk::common::RoomJid::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::talk::common::RoomJid);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::talk::common::RoomJid::__newInstance() const
{
    return new RoomJid;
}

const ::std::string&
IceProxy::com::xiaonei::talk::common::RoomMember::ice_staticId()
{
    return ::com::xiaonei::talk::common::RoomMember::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::talk::common::RoomMember::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::talk::common::RoomMember);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::talk::common::RoomMember::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::talk::common::RoomMember);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::talk::common::RoomMember::__newInstance() const
{
    return new RoomMember;
}

const ::std::string&
IceProxy::com::xiaonei::talk::common::Occupant::ice_staticId()
{
    return ::com::xiaonei::talk::common::Occupant::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::talk::common::Occupant::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::talk::common::Occupant);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::talk::common::Occupant::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::talk::common::Occupant);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::talk::common::Occupant::__newInstance() const
{
    return new Occupant;
}

const ::std::string&
IceProxy::com::xiaonei::talk::common::RoomType::ice_staticId()
{
    return ::com::xiaonei::talk::common::RoomType::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::talk::common::RoomType::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::talk::common::RoomType);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::talk::common::RoomType::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::talk::common::RoomType);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::talk::common::RoomType::__newInstance() const
{
    return new RoomType;
}

const ::std::string&
IceProxy::com::xiaonei::talk::common::Room::ice_staticId()
{
    return ::com::xiaonei::talk::common::Room::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::talk::common::Room::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::talk::common::Room);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::talk::common::Room::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::talk::common::Room);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::talk::common::Room::__newInstance() const
{
    return new Room;
}

com::xiaonei::talk::common::Passport::Passport(::Ice::Int __ice_userId, ::Ice::Int __ice_result) :
    userId(__ice_userId),
    result(__ice_result)
{
}

::Ice::ObjectPtr
com::xiaonei::talk::common::Passport::ice_clone() const
{
    ::com::xiaonei::talk::common::PassportPtr __p = new ::com::xiaonei::talk::common::Passport(*this);
    return __p;
}

static const ::std::string __com__xiaonei__talk__common__Passport_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::talk::common::Passport"
};

bool
com::xiaonei::talk::common::Passport::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__talk__common__Passport_ids, __com__xiaonei__talk__common__Passport_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::talk::common::Passport::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__talk__common__Passport_ids[0], &__com__xiaonei__talk__common__Passport_ids[2]);
}

const ::std::string&
com::xiaonei::talk::common::Passport::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__talk__common__Passport_ids[1];
}

const ::std::string&
com::xiaonei::talk::common::Passport::ice_staticId()
{
    return __com__xiaonei__talk__common__Passport_ids[1];
}

void
com::xiaonei::talk::common::Passport::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(userId);
    __os->write(result);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
com::xiaonei::talk::common::Passport::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(userId);
    __is->read(result);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
com::xiaonei::talk::common::Passport::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::Passport was not generated with stream support";
    throw ex;
}

void
com::xiaonei::talk::common::Passport::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::Passport was not generated with stream support";
    throw ex;
}

class __F__com__xiaonei__talk__common__Passport : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::xiaonei::talk::common::Passport::ice_staticId());
        return new ::com::xiaonei::talk::common::Passport;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__xiaonei__talk__common__Passport_Ptr = new __F__com__xiaonei__talk__common__Passport;

const ::Ice::ObjectFactoryPtr&
com::xiaonei::talk::common::Passport::ice_factory()
{
    return __F__com__xiaonei__talk__common__Passport_Ptr;
}

class __F__com__xiaonei__talk__common__Passport__Init
{
public:

    __F__com__xiaonei__talk__common__Passport__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::xiaonei::talk::common::Passport::ice_staticId(), ::com::xiaonei::talk::common::Passport::ice_factory());
    }

    ~__F__com__xiaonei__talk__common__Passport__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::xiaonei::talk::common::Passport::ice_staticId());
    }
};

static __F__com__xiaonei__talk__common__Passport__Init __F__com__xiaonei__talk__common__Passport__i;

#ifdef __APPLE__
extern "C" { void __F__com__xiaonei__talk__common__Passport__initializer() {} }
#endif

void 
com::xiaonei::talk::common::__patch__PassportPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::talk::common::PassportPtr* p = static_cast< ::com::xiaonei::talk::common::PassportPtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::talk::common::PassportPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::talk::common::Passport::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::talk::common::operator==(const ::com::xiaonei::talk::common::Passport& l, const ::com::xiaonei::talk::common::Passport& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::talk::common::operator<(const ::com::xiaonei::talk::common::Passport& l, const ::com::xiaonei::talk::common::Passport& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::xiaonei::talk::common::Jid::Jid(::Ice::Int __ice_userId, const ::std::string& __ice_endpoint, ::Ice::Long __ice_index) :
    userId(__ice_userId),
    endpoint(__ice_endpoint),
    index(__ice_index)
{
}

::Ice::ObjectPtr
com::xiaonei::talk::common::Jid::ice_clone() const
{
    ::com::xiaonei::talk::common::JidPtr __p = new ::com::xiaonei::talk::common::Jid(*this);
    return __p;
}

static const ::std::string __com__xiaonei__talk__common__Jid_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::talk::common::Jid"
};

bool
com::xiaonei::talk::common::Jid::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__talk__common__Jid_ids, __com__xiaonei__talk__common__Jid_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::talk::common::Jid::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__talk__common__Jid_ids[0], &__com__xiaonei__talk__common__Jid_ids[2]);
}

const ::std::string&
com::xiaonei::talk::common::Jid::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__talk__common__Jid_ids[1];
}

const ::std::string&
com::xiaonei::talk::common::Jid::ice_staticId()
{
    return __com__xiaonei__talk__common__Jid_ids[1];
}

void
com::xiaonei::talk::common::Jid::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(userId);
    __os->write(endpoint);
    __os->write(index);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
com::xiaonei::talk::common::Jid::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(userId);
    __is->read(endpoint);
    __is->read(index);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
com::xiaonei::talk::common::Jid::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::Jid was not generated with stream support";
    throw ex;
}

void
com::xiaonei::talk::common::Jid::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::Jid was not generated with stream support";
    throw ex;
}

class __F__com__xiaonei__talk__common__Jid : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::xiaonei::talk::common::Jid::ice_staticId());
        return new ::com::xiaonei::talk::common::Jid;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__xiaonei__talk__common__Jid_Ptr = new __F__com__xiaonei__talk__common__Jid;

const ::Ice::ObjectFactoryPtr&
com::xiaonei::talk::common::Jid::ice_factory()
{
    return __F__com__xiaonei__talk__common__Jid_Ptr;
}

class __F__com__xiaonei__talk__common__Jid__Init
{
public:

    __F__com__xiaonei__talk__common__Jid__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::xiaonei::talk::common::Jid::ice_staticId(), ::com::xiaonei::talk::common::Jid::ice_factory());
    }

    ~__F__com__xiaonei__talk__common__Jid__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::xiaonei::talk::common::Jid::ice_staticId());
    }
};

static __F__com__xiaonei__talk__common__Jid__Init __F__com__xiaonei__talk__common__Jid__i;

#ifdef __APPLE__
extern "C" { void __F__com__xiaonei__talk__common__Jid__initializer() {} }
#endif

void 
com::xiaonei::talk::common::__patch__JidPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::talk::common::JidPtr* p = static_cast< ::com::xiaonei::talk::common::JidPtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::talk::common::JidPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::talk::common::Jid::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::talk::common::operator==(const ::com::xiaonei::talk::common::Jid& l, const ::com::xiaonei::talk::common::Jid& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::talk::common::operator<(const ::com::xiaonei::talk::common::Jid& l, const ::com::xiaonei::talk::common::Jid& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::xiaonei::talk::common::SysJid::SysJid(const ::std::string& __ice_node, const ::std::string& __ice_category) :
    node(__ice_node),
    category(__ice_category)
{
}

::Ice::ObjectPtr
com::xiaonei::talk::common::SysJid::ice_clone() const
{
    ::com::xiaonei::talk::common::SysJidPtr __p = new ::com::xiaonei::talk::common::SysJid(*this);
    return __p;
}

static const ::std::string __com__xiaonei__talk__common__SysJid_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::talk::common::SysJid"
};

bool
com::xiaonei::talk::common::SysJid::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__talk__common__SysJid_ids, __com__xiaonei__talk__common__SysJid_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::talk::common::SysJid::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__talk__common__SysJid_ids[0], &__com__xiaonei__talk__common__SysJid_ids[2]);
}

const ::std::string&
com::xiaonei::talk::common::SysJid::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__talk__common__SysJid_ids[1];
}

const ::std::string&
com::xiaonei::talk::common::SysJid::ice_staticId()
{
    return __com__xiaonei__talk__common__SysJid_ids[1];
}

void
com::xiaonei::talk::common::SysJid::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(node);
    __os->write(category);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
com::xiaonei::talk::common::SysJid::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(node);
    __is->read(category);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
com::xiaonei::talk::common::SysJid::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::SysJid was not generated with stream support";
    throw ex;
}

void
com::xiaonei::talk::common::SysJid::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::SysJid was not generated with stream support";
    throw ex;
}

class __F__com__xiaonei__talk__common__SysJid : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::xiaonei::talk::common::SysJid::ice_staticId());
        return new ::com::xiaonei::talk::common::SysJid;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__xiaonei__talk__common__SysJid_Ptr = new __F__com__xiaonei__talk__common__SysJid;

const ::Ice::ObjectFactoryPtr&
com::xiaonei::talk::common::SysJid::ice_factory()
{
    return __F__com__xiaonei__talk__common__SysJid_Ptr;
}

class __F__com__xiaonei__talk__common__SysJid__Init
{
public:

    __F__com__xiaonei__talk__common__SysJid__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::xiaonei::talk::common::SysJid::ice_staticId(), ::com::xiaonei::talk::common::SysJid::ice_factory());
    }

    ~__F__com__xiaonei__talk__common__SysJid__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::xiaonei::talk::common::SysJid::ice_staticId());
    }
};

static __F__com__xiaonei__talk__common__SysJid__Init __F__com__xiaonei__talk__common__SysJid__i;

#ifdef __APPLE__
extern "C" { void __F__com__xiaonei__talk__common__SysJid__initializer() {} }
#endif

void 
com::xiaonei::talk::common::__patch__SysJidPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::talk::common::SysJidPtr* p = static_cast< ::com::xiaonei::talk::common::SysJidPtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::talk::common::SysJidPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::talk::common::SysJid::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::talk::common::operator==(const ::com::xiaonei::talk::common::SysJid& l, const ::com::xiaonei::talk::common::SysJid& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::talk::common::operator<(const ::com::xiaonei::talk::common::SysJid& l, const ::com::xiaonei::talk::common::SysJid& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::xiaonei::talk::common::Avatar::Avatar(const ::com::xiaonei::talk::common::JidPtr& __ice_jid, ::com::xiaonei::talk::common::OnlineStat __ice_stat, const ::std::string& __ice_ver, const ::std::string& __ice_ext, ::Ice::Int __ice_stamp) :
    jid(__ice_jid),
    stat(__ice_stat),
    ver(__ice_ver),
    ext(__ice_ext),
    stamp(__ice_stamp)
{
}

::Ice::ObjectPtr
com::xiaonei::talk::common::Avatar::ice_clone() const
{
    ::com::xiaonei::talk::common::AvatarPtr __p = new ::com::xiaonei::talk::common::Avatar(*this);
    return __p;
}

static const ::std::string __com__xiaonei__talk__common__Avatar_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::talk::common::Avatar"
};

bool
com::xiaonei::talk::common::Avatar::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__talk__common__Avatar_ids, __com__xiaonei__talk__common__Avatar_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::talk::common::Avatar::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__talk__common__Avatar_ids[0], &__com__xiaonei__talk__common__Avatar_ids[2]);
}

const ::std::string&
com::xiaonei::talk::common::Avatar::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__talk__common__Avatar_ids[1];
}

const ::std::string&
com::xiaonei::talk::common::Avatar::ice_staticId()
{
    return __com__xiaonei__talk__common__Avatar_ids[1];
}

void
com::xiaonei::talk::common::Avatar::__incRef()
{
    __gcIncRef();
}

void
com::xiaonei::talk::common::Avatar::__decRef()
{
    __gcDecRef();
}

void
com::xiaonei::talk::common::Avatar::__addObject(::IceInternal::GCCountMap& _c)
{
    ::IceInternal::GCCountMap::iterator pos = _c.find(this);
    if(pos == _c.end())
    {
        _c[this] = 1;
    }
    else
    {
        ++pos->second;
    }
}

bool
com::xiaonei::talk::common::Avatar::__usesClasses()
{
    return true;
}

void
com::xiaonei::talk::common::Avatar::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(jid)
    {
        ::IceInternal::upCast(jid.get())->__addObject(_c);
    }
}

void
com::xiaonei::talk::common::Avatar::__gcClear()
{
    if(jid)
    {
        if(::IceInternal::upCast(jid.get())->__usesClasses())
        {
            ::IceInternal::upCast(jid.get())->__decRefUnsafe();
            jid.__clearHandleUnsafe();
        }
        else
        {
            jid = 0;
        }
    }
}

void
com::xiaonei::talk::common::Avatar::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(jid.get())));
    ::com::xiaonei::talk::common::__write(__os, stat);
    __os->write(ver);
    __os->write(ext);
    __os->write(stamp);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
com::xiaonei::talk::common::Avatar::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::com::xiaonei::talk::common::__patch__JidPtr, &jid);
    ::com::xiaonei::talk::common::__read(__is, stat);
    __is->read(ver);
    __is->read(ext);
    __is->read(stamp);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
com::xiaonei::talk::common::Avatar::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::Avatar was not generated with stream support";
    throw ex;
}

void
com::xiaonei::talk::common::Avatar::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::Avatar was not generated with stream support";
    throw ex;
}

class __F__com__xiaonei__talk__common__Avatar : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::xiaonei::talk::common::Avatar::ice_staticId());
        return new ::com::xiaonei::talk::common::Avatar;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__xiaonei__talk__common__Avatar_Ptr = new __F__com__xiaonei__talk__common__Avatar;

const ::Ice::ObjectFactoryPtr&
com::xiaonei::talk::common::Avatar::ice_factory()
{
    return __F__com__xiaonei__talk__common__Avatar_Ptr;
}

class __F__com__xiaonei__talk__common__Avatar__Init
{
public:

    __F__com__xiaonei__talk__common__Avatar__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::xiaonei::talk::common::Avatar::ice_staticId(), ::com::xiaonei::talk::common::Avatar::ice_factory());
    }

    ~__F__com__xiaonei__talk__common__Avatar__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::xiaonei::talk::common::Avatar::ice_staticId());
    }
};

static __F__com__xiaonei__talk__common__Avatar__Init __F__com__xiaonei__talk__common__Avatar__i;

#ifdef __APPLE__
extern "C" { void __F__com__xiaonei__talk__common__Avatar__initializer() {} }
#endif

void 
com::xiaonei::talk::common::__patch__AvatarPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::talk::common::AvatarPtr* p = static_cast< ::com::xiaonei::talk::common::AvatarPtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::talk::common::AvatarPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::talk::common::Avatar::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::talk::common::operator==(const ::com::xiaonei::talk::common::Avatar& l, const ::com::xiaonei::talk::common::Avatar& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::talk::common::operator<(const ::com::xiaonei::talk::common::Avatar& l, const ::com::xiaonei::talk::common::Avatar& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::xiaonei::talk::common::OnlineInfo::OnlineInfo(::Ice::Int __ice_userId, const ::std::string& __ice_endpoint, ::Ice::Long __ice_index, const ::std::string& __ice_show, const ::std::string& __ice_ver, const ::std::string& __ice_ext, ::Ice::Int __ice_stamp) :
    userId(__ice_userId),
    endpoint(__ice_endpoint),
    index(__ice_index),
    show(__ice_show),
    ver(__ice_ver),
    ext(__ice_ext),
    stamp(__ice_stamp)
{
}

::Ice::ObjectPtr
com::xiaonei::talk::common::OnlineInfo::ice_clone() const
{
    ::com::xiaonei::talk::common::OnlineInfoPtr __p = new ::com::xiaonei::talk::common::OnlineInfo(*this);
    return __p;
}

static const ::std::string __com__xiaonei__talk__common__OnlineInfo_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::talk::common::OnlineInfo"
};

bool
com::xiaonei::talk::common::OnlineInfo::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__talk__common__OnlineInfo_ids, __com__xiaonei__talk__common__OnlineInfo_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::talk::common::OnlineInfo::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__talk__common__OnlineInfo_ids[0], &__com__xiaonei__talk__common__OnlineInfo_ids[2]);
}

const ::std::string&
com::xiaonei::talk::common::OnlineInfo::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__talk__common__OnlineInfo_ids[1];
}

const ::std::string&
com::xiaonei::talk::common::OnlineInfo::ice_staticId()
{
    return __com__xiaonei__talk__common__OnlineInfo_ids[1];
}

void
com::xiaonei::talk::common::OnlineInfo::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(userId);
    __os->write(endpoint);
    __os->write(index);
    __os->write(show);
    __os->write(ver);
    __os->write(ext);
    __os->write(stamp);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
com::xiaonei::talk::common::OnlineInfo::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(userId);
    __is->read(endpoint);
    __is->read(index);
    __is->read(show);
    __is->read(ver);
    __is->read(ext);
    __is->read(stamp);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
com::xiaonei::talk::common::OnlineInfo::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::OnlineInfo was not generated with stream support";
    throw ex;
}

void
com::xiaonei::talk::common::OnlineInfo::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::OnlineInfo was not generated with stream support";
    throw ex;
}

class __F__com__xiaonei__talk__common__OnlineInfo : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::xiaonei::talk::common::OnlineInfo::ice_staticId());
        return new ::com::xiaonei::talk::common::OnlineInfo;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__xiaonei__talk__common__OnlineInfo_Ptr = new __F__com__xiaonei__talk__common__OnlineInfo;

const ::Ice::ObjectFactoryPtr&
com::xiaonei::talk::common::OnlineInfo::ice_factory()
{
    return __F__com__xiaonei__talk__common__OnlineInfo_Ptr;
}

class __F__com__xiaonei__talk__common__OnlineInfo__Init
{
public:

    __F__com__xiaonei__talk__common__OnlineInfo__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::xiaonei::talk::common::OnlineInfo::ice_staticId(), ::com::xiaonei::talk::common::OnlineInfo::ice_factory());
    }

    ~__F__com__xiaonei__talk__common__OnlineInfo__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::xiaonei::talk::common::OnlineInfo::ice_staticId());
    }
};

static __F__com__xiaonei__talk__common__OnlineInfo__Init __F__com__xiaonei__talk__common__OnlineInfo__i;

#ifdef __APPLE__
extern "C" { void __F__com__xiaonei__talk__common__OnlineInfo__initializer() {} }
#endif

void 
com::xiaonei::talk::common::__patch__OnlineInfoPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::talk::common::OnlineInfoPtr* p = static_cast< ::com::xiaonei::talk::common::OnlineInfoPtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::talk::common::OnlineInfoPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::talk::common::OnlineInfo::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::talk::common::operator==(const ::com::xiaonei::talk::common::OnlineInfo& l, const ::com::xiaonei::talk::common::OnlineInfo& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::talk::common::operator<(const ::com::xiaonei::talk::common::OnlineInfo& l, const ::com::xiaonei::talk::common::OnlineInfo& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::xiaonei::talk::common::Message::Message(const ::com::xiaonei::talk::common::JidPtr& __ice_from, const ::com::xiaonei::talk::common::JidPtr& __ice_to, const ::std::string& __ice_msg, ::Ice::Int __ice_type, ::Ice::Long __ice_msgKey) :
    from(__ice_from),
    to(__ice_to),
    msg(__ice_msg),
    type(__ice_type),
    msgKey(__ice_msgKey)
{
}

::Ice::ObjectPtr
com::xiaonei::talk::common::Message::ice_clone() const
{
    ::com::xiaonei::talk::common::MessagePtr __p = new ::com::xiaonei::talk::common::Message(*this);
    return __p;
}

static const ::std::string __com__xiaonei__talk__common__Message_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::talk::common::Message"
};

bool
com::xiaonei::talk::common::Message::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__talk__common__Message_ids, __com__xiaonei__talk__common__Message_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::talk::common::Message::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__talk__common__Message_ids[0], &__com__xiaonei__talk__common__Message_ids[2]);
}

const ::std::string&
com::xiaonei::talk::common::Message::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__talk__common__Message_ids[1];
}

const ::std::string&
com::xiaonei::talk::common::Message::ice_staticId()
{
    return __com__xiaonei__talk__common__Message_ids[1];
}

void
com::xiaonei::talk::common::Message::__incRef()
{
    __gcIncRef();
}

void
com::xiaonei::talk::common::Message::__decRef()
{
    __gcDecRef();
}

void
com::xiaonei::talk::common::Message::__addObject(::IceInternal::GCCountMap& _c)
{
    ::IceInternal::GCCountMap::iterator pos = _c.find(this);
    if(pos == _c.end())
    {
        _c[this] = 1;
    }
    else
    {
        ++pos->second;
    }
}

bool
com::xiaonei::talk::common::Message::__usesClasses()
{
    return true;
}

void
com::xiaonei::talk::common::Message::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(from)
    {
        ::IceInternal::upCast(from.get())->__addObject(_c);
    }
    if(to)
    {
        ::IceInternal::upCast(to.get())->__addObject(_c);
    }
}

void
com::xiaonei::talk::common::Message::__gcClear()
{
    if(from)
    {
        if(::IceInternal::upCast(from.get())->__usesClasses())
        {
            ::IceInternal::upCast(from.get())->__decRefUnsafe();
            from.__clearHandleUnsafe();
        }
        else
        {
            from = 0;
        }
    }
    if(to)
    {
        if(::IceInternal::upCast(to.get())->__usesClasses())
        {
            ::IceInternal::upCast(to.get())->__decRefUnsafe();
            to.__clearHandleUnsafe();
        }
        else
        {
            to = 0;
        }
    }
}

void
com::xiaonei::talk::common::Message::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(from.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(to.get())));
    __os->write(msg);
    __os->write(type);
    __os->write(msgKey);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
com::xiaonei::talk::common::Message::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::com::xiaonei::talk::common::__patch__JidPtr, &from);
    __is->read(::com::xiaonei::talk::common::__patch__JidPtr, &to);
    __is->read(msg);
    __is->read(type);
    __is->read(msgKey);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
com::xiaonei::talk::common::Message::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::Message was not generated with stream support";
    throw ex;
}

void
com::xiaonei::talk::common::Message::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::Message was not generated with stream support";
    throw ex;
}

class __F__com__xiaonei__talk__common__Message : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::xiaonei::talk::common::Message::ice_staticId());
        return new ::com::xiaonei::talk::common::Message;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__xiaonei__talk__common__Message_Ptr = new __F__com__xiaonei__talk__common__Message;

const ::Ice::ObjectFactoryPtr&
com::xiaonei::talk::common::Message::ice_factory()
{
    return __F__com__xiaonei__talk__common__Message_Ptr;
}

class __F__com__xiaonei__talk__common__Message__Init
{
public:

    __F__com__xiaonei__talk__common__Message__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::xiaonei::talk::common::Message::ice_staticId(), ::com::xiaonei::talk::common::Message::ice_factory());
    }

    ~__F__com__xiaonei__talk__common__Message__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::xiaonei::talk::common::Message::ice_staticId());
    }
};

static __F__com__xiaonei__talk__common__Message__Init __F__com__xiaonei__talk__common__Message__i;

#ifdef __APPLE__
extern "C" { void __F__com__xiaonei__talk__common__Message__initializer() {} }
#endif

void 
com::xiaonei::talk::common::__patch__MessagePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::talk::common::MessagePtr* p = static_cast< ::com::xiaonei::talk::common::MessagePtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::talk::common::MessagePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::talk::common::Message::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::talk::common::operator==(const ::com::xiaonei::talk::common::Message& l, const ::com::xiaonei::talk::common::Message& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::talk::common::operator<(const ::com::xiaonei::talk::common::Message& l, const ::com::xiaonei::talk::common::Message& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::xiaonei::talk::common::RoomId::RoomId(const ::std::string& __ice_name, const ::std::string& __ice_domain) :
    name(__ice_name),
    domain(__ice_domain)
{
}

::Ice::ObjectPtr
com::xiaonei::talk::common::RoomId::ice_clone() const
{
    ::com::xiaonei::talk::common::RoomIdPtr __p = new ::com::xiaonei::talk::common::RoomId(*this);
    return __p;
}

static const ::std::string __com__xiaonei__talk__common__RoomId_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::talk::common::RoomId"
};

bool
com::xiaonei::talk::common::RoomId::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__talk__common__RoomId_ids, __com__xiaonei__talk__common__RoomId_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::talk::common::RoomId::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__talk__common__RoomId_ids[0], &__com__xiaonei__talk__common__RoomId_ids[2]);
}

const ::std::string&
com::xiaonei::talk::common::RoomId::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__talk__common__RoomId_ids[1];
}

const ::std::string&
com::xiaonei::talk::common::RoomId::ice_staticId()
{
    return __com__xiaonei__talk__common__RoomId_ids[1];
}

void
com::xiaonei::talk::common::RoomId::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(name);
    __os->write(domain);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
com::xiaonei::talk::common::RoomId::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(name);
    __is->read(domain);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
com::xiaonei::talk::common::RoomId::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::RoomId was not generated with stream support";
    throw ex;
}

void
com::xiaonei::talk::common::RoomId::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::RoomId was not generated with stream support";
    throw ex;
}

class __F__com__xiaonei__talk__common__RoomId : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::xiaonei::talk::common::RoomId::ice_staticId());
        return new ::com::xiaonei::talk::common::RoomId;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__xiaonei__talk__common__RoomId_Ptr = new __F__com__xiaonei__talk__common__RoomId;

const ::Ice::ObjectFactoryPtr&
com::xiaonei::talk::common::RoomId::ice_factory()
{
    return __F__com__xiaonei__talk__common__RoomId_Ptr;
}

class __F__com__xiaonei__talk__common__RoomId__Init
{
public:

    __F__com__xiaonei__talk__common__RoomId__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::xiaonei::talk::common::RoomId::ice_staticId(), ::com::xiaonei::talk::common::RoomId::ice_factory());
    }

    ~__F__com__xiaonei__talk__common__RoomId__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::xiaonei::talk::common::RoomId::ice_staticId());
    }
};

static __F__com__xiaonei__talk__common__RoomId__Init __F__com__xiaonei__talk__common__RoomId__i;

#ifdef __APPLE__
extern "C" { void __F__com__xiaonei__talk__common__RoomId__initializer() {} }
#endif

void 
com::xiaonei::talk::common::__patch__RoomIdPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::talk::common::RoomIdPtr* p = static_cast< ::com::xiaonei::talk::common::RoomIdPtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::talk::common::RoomIdPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::talk::common::RoomId::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::talk::common::operator==(const ::com::xiaonei::talk::common::RoomId& l, const ::com::xiaonei::talk::common::RoomId& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::talk::common::operator<(const ::com::xiaonei::talk::common::RoomId& l, const ::com::xiaonei::talk::common::RoomId& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::xiaonei::talk::common::RoomJid::RoomJid(const ::com::xiaonei::talk::common::RoomIdPtr& __ice_rid, const ::std::string& __ice_nick) :
    rid(__ice_rid),
    nick(__ice_nick)
{
}

::Ice::ObjectPtr
com::xiaonei::talk::common::RoomJid::ice_clone() const
{
    ::com::xiaonei::talk::common::RoomJidPtr __p = new ::com::xiaonei::talk::common::RoomJid(*this);
    return __p;
}

static const ::std::string __com__xiaonei__talk__common__RoomJid_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::talk::common::RoomJid"
};

bool
com::xiaonei::talk::common::RoomJid::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__talk__common__RoomJid_ids, __com__xiaonei__talk__common__RoomJid_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::talk::common::RoomJid::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__talk__common__RoomJid_ids[0], &__com__xiaonei__talk__common__RoomJid_ids[2]);
}

const ::std::string&
com::xiaonei::talk::common::RoomJid::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__talk__common__RoomJid_ids[1];
}

const ::std::string&
com::xiaonei::talk::common::RoomJid::ice_staticId()
{
    return __com__xiaonei__talk__common__RoomJid_ids[1];
}

void
com::xiaonei::talk::common::RoomJid::__incRef()
{
    __gcIncRef();
}

void
com::xiaonei::talk::common::RoomJid::__decRef()
{
    __gcDecRef();
}

void
com::xiaonei::talk::common::RoomJid::__addObject(::IceInternal::GCCountMap& _c)
{
    ::IceInternal::GCCountMap::iterator pos = _c.find(this);
    if(pos == _c.end())
    {
        _c[this] = 1;
    }
    else
    {
        ++pos->second;
    }
}

bool
com::xiaonei::talk::common::RoomJid::__usesClasses()
{
    return true;
}

void
com::xiaonei::talk::common::RoomJid::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(rid)
    {
        ::IceInternal::upCast(rid.get())->__addObject(_c);
    }
}

void
com::xiaonei::talk::common::RoomJid::__gcClear()
{
    if(rid)
    {
        if(::IceInternal::upCast(rid.get())->__usesClasses())
        {
            ::IceInternal::upCast(rid.get())->__decRefUnsafe();
            rid.__clearHandleUnsafe();
        }
        else
        {
            rid = 0;
        }
    }
}

void
com::xiaonei::talk::common::RoomJid::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(rid.get())));
    __os->write(nick);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
com::xiaonei::talk::common::RoomJid::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::com::xiaonei::talk::common::__patch__RoomIdPtr, &rid);
    __is->read(nick);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
com::xiaonei::talk::common::RoomJid::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::RoomJid was not generated with stream support";
    throw ex;
}

void
com::xiaonei::talk::common::RoomJid::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::RoomJid was not generated with stream support";
    throw ex;
}

class __F__com__xiaonei__talk__common__RoomJid : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::xiaonei::talk::common::RoomJid::ice_staticId());
        return new ::com::xiaonei::talk::common::RoomJid;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__xiaonei__talk__common__RoomJid_Ptr = new __F__com__xiaonei__talk__common__RoomJid;

const ::Ice::ObjectFactoryPtr&
com::xiaonei::talk::common::RoomJid::ice_factory()
{
    return __F__com__xiaonei__talk__common__RoomJid_Ptr;
}

class __F__com__xiaonei__talk__common__RoomJid__Init
{
public:

    __F__com__xiaonei__talk__common__RoomJid__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::xiaonei::talk::common::RoomJid::ice_staticId(), ::com::xiaonei::talk::common::RoomJid::ice_factory());
    }

    ~__F__com__xiaonei__talk__common__RoomJid__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::xiaonei::talk::common::RoomJid::ice_staticId());
    }
};

static __F__com__xiaonei__talk__common__RoomJid__Init __F__com__xiaonei__talk__common__RoomJid__i;

#ifdef __APPLE__
extern "C" { void __F__com__xiaonei__talk__common__RoomJid__initializer() {} }
#endif

void 
com::xiaonei::talk::common::__patch__RoomJidPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::talk::common::RoomJidPtr* p = static_cast< ::com::xiaonei::talk::common::RoomJidPtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::talk::common::RoomJidPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::talk::common::RoomJid::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::talk::common::operator==(const ::com::xiaonei::talk::common::RoomJid& l, const ::com::xiaonei::talk::common::RoomJid& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::talk::common::operator<(const ::com::xiaonei::talk::common::RoomJid& l, const ::com::xiaonei::talk::common::RoomJid& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::xiaonei::talk::common::RoomMember::RoomMember(const ::com::xiaonei::talk::common::RoomIdPtr& __ice_rid, ::Ice::Int __ice_userId, ::com::xiaonei::talk::common::Affiliation __ice_aType) :
    rid(__ice_rid),
    userId(__ice_userId),
    aType(__ice_aType)
{
}

::Ice::ObjectPtr
com::xiaonei::talk::common::RoomMember::ice_clone() const
{
    ::com::xiaonei::talk::common::RoomMemberPtr __p = new ::com::xiaonei::talk::common::RoomMember(*this);
    return __p;
}

static const ::std::string __com__xiaonei__talk__common__RoomMember_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::talk::common::RoomMember"
};

bool
com::xiaonei::talk::common::RoomMember::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__talk__common__RoomMember_ids, __com__xiaonei__talk__common__RoomMember_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::talk::common::RoomMember::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__talk__common__RoomMember_ids[0], &__com__xiaonei__talk__common__RoomMember_ids[2]);
}

const ::std::string&
com::xiaonei::talk::common::RoomMember::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__talk__common__RoomMember_ids[1];
}

const ::std::string&
com::xiaonei::talk::common::RoomMember::ice_staticId()
{
    return __com__xiaonei__talk__common__RoomMember_ids[1];
}

void
com::xiaonei::talk::common::RoomMember::__incRef()
{
    __gcIncRef();
}

void
com::xiaonei::talk::common::RoomMember::__decRef()
{
    __gcDecRef();
}

void
com::xiaonei::talk::common::RoomMember::__addObject(::IceInternal::GCCountMap& _c)
{
    ::IceInternal::GCCountMap::iterator pos = _c.find(this);
    if(pos == _c.end())
    {
        _c[this] = 1;
    }
    else
    {
        ++pos->second;
    }
}

bool
com::xiaonei::talk::common::RoomMember::__usesClasses()
{
    return true;
}

void
com::xiaonei::talk::common::RoomMember::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(rid)
    {
        ::IceInternal::upCast(rid.get())->__addObject(_c);
    }
}

void
com::xiaonei::talk::common::RoomMember::__gcClear()
{
    if(rid)
    {
        if(::IceInternal::upCast(rid.get())->__usesClasses())
        {
            ::IceInternal::upCast(rid.get())->__decRefUnsafe();
            rid.__clearHandleUnsafe();
        }
        else
        {
            rid = 0;
        }
    }
}

void
com::xiaonei::talk::common::RoomMember::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(rid.get())));
    __os->write(userId);
    ::com::xiaonei::talk::common::__write(__os, aType);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
com::xiaonei::talk::common::RoomMember::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::com::xiaonei::talk::common::__patch__RoomIdPtr, &rid);
    __is->read(userId);
    ::com::xiaonei::talk::common::__read(__is, aType);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
com::xiaonei::talk::common::RoomMember::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::RoomMember was not generated with stream support";
    throw ex;
}

void
com::xiaonei::talk::common::RoomMember::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::RoomMember was not generated with stream support";
    throw ex;
}

class __F__com__xiaonei__talk__common__RoomMember : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::xiaonei::talk::common::RoomMember::ice_staticId());
        return new ::com::xiaonei::talk::common::RoomMember;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__xiaonei__talk__common__RoomMember_Ptr = new __F__com__xiaonei__talk__common__RoomMember;

const ::Ice::ObjectFactoryPtr&
com::xiaonei::talk::common::RoomMember::ice_factory()
{
    return __F__com__xiaonei__talk__common__RoomMember_Ptr;
}

class __F__com__xiaonei__talk__common__RoomMember__Init
{
public:

    __F__com__xiaonei__talk__common__RoomMember__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::xiaonei::talk::common::RoomMember::ice_staticId(), ::com::xiaonei::talk::common::RoomMember::ice_factory());
    }

    ~__F__com__xiaonei__talk__common__RoomMember__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::xiaonei::talk::common::RoomMember::ice_staticId());
    }
};

static __F__com__xiaonei__talk__common__RoomMember__Init __F__com__xiaonei__talk__common__RoomMember__i;

#ifdef __APPLE__
extern "C" { void __F__com__xiaonei__talk__common__RoomMember__initializer() {} }
#endif

void 
com::xiaonei::talk::common::__patch__RoomMemberPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::talk::common::RoomMemberPtr* p = static_cast< ::com::xiaonei::talk::common::RoomMemberPtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::talk::common::RoomMemberPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::talk::common::RoomMember::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::talk::common::operator==(const ::com::xiaonei::talk::common::RoomMember& l, const ::com::xiaonei::talk::common::RoomMember& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::talk::common::operator<(const ::com::xiaonei::talk::common::RoomMember& l, const ::com::xiaonei::talk::common::RoomMember& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::xiaonei::talk::common::Occupant::Occupant(const ::com::xiaonei::talk::common::RoomJidPtr& __ice_rJid, const ::com::xiaonei::talk::common::JidPtr& __ice_fJid, ::com::xiaonei::talk::common::Affiliation __ice_aType, ::com::xiaonei::talk::common::RoomRole __ice_role) :
    rJid(__ice_rJid),
    fJid(__ice_fJid),
    aType(__ice_aType),
    role(__ice_role)
{
}

::Ice::ObjectPtr
com::xiaonei::talk::common::Occupant::ice_clone() const
{
    ::com::xiaonei::talk::common::OccupantPtr __p = new ::com::xiaonei::talk::common::Occupant(*this);
    return __p;
}

static const ::std::string __com__xiaonei__talk__common__Occupant_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::talk::common::Occupant"
};

bool
com::xiaonei::talk::common::Occupant::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__talk__common__Occupant_ids, __com__xiaonei__talk__common__Occupant_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::talk::common::Occupant::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__talk__common__Occupant_ids[0], &__com__xiaonei__talk__common__Occupant_ids[2]);
}

const ::std::string&
com::xiaonei::talk::common::Occupant::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__talk__common__Occupant_ids[1];
}

const ::std::string&
com::xiaonei::talk::common::Occupant::ice_staticId()
{
    return __com__xiaonei__talk__common__Occupant_ids[1];
}

void
com::xiaonei::talk::common::Occupant::__incRef()
{
    __gcIncRef();
}

void
com::xiaonei::talk::common::Occupant::__decRef()
{
    __gcDecRef();
}

void
com::xiaonei::talk::common::Occupant::__addObject(::IceInternal::GCCountMap& _c)
{
    ::IceInternal::GCCountMap::iterator pos = _c.find(this);
    if(pos == _c.end())
    {
        _c[this] = 1;
    }
    else
    {
        ++pos->second;
    }
}

bool
com::xiaonei::talk::common::Occupant::__usesClasses()
{
    return true;
}

void
com::xiaonei::talk::common::Occupant::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(rJid)
    {
        ::IceInternal::upCast(rJid.get())->__addObject(_c);
    }
    if(fJid)
    {
        ::IceInternal::upCast(fJid.get())->__addObject(_c);
    }
}

void
com::xiaonei::talk::common::Occupant::__gcClear()
{
    if(rJid)
    {
        if(::IceInternal::upCast(rJid.get())->__usesClasses())
        {
            ::IceInternal::upCast(rJid.get())->__decRefUnsafe();
            rJid.__clearHandleUnsafe();
        }
        else
        {
            rJid = 0;
        }
    }
    if(fJid)
    {
        if(::IceInternal::upCast(fJid.get())->__usesClasses())
        {
            ::IceInternal::upCast(fJid.get())->__decRefUnsafe();
            fJid.__clearHandleUnsafe();
        }
        else
        {
            fJid = 0;
        }
    }
}

void
com::xiaonei::talk::common::Occupant::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(rJid.get())));
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(fJid.get())));
    ::com::xiaonei::talk::common::__write(__os, aType);
    ::com::xiaonei::talk::common::__write(__os, role);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
com::xiaonei::talk::common::Occupant::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::com::xiaonei::talk::common::__patch__RoomJidPtr, &rJid);
    __is->read(::com::xiaonei::talk::common::__patch__JidPtr, &fJid);
    ::com::xiaonei::talk::common::__read(__is, aType);
    ::com::xiaonei::talk::common::__read(__is, role);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
com::xiaonei::talk::common::Occupant::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::Occupant was not generated with stream support";
    throw ex;
}

void
com::xiaonei::talk::common::Occupant::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::Occupant was not generated with stream support";
    throw ex;
}

class __F__com__xiaonei__talk__common__Occupant : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::xiaonei::talk::common::Occupant::ice_staticId());
        return new ::com::xiaonei::talk::common::Occupant;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__xiaonei__talk__common__Occupant_Ptr = new __F__com__xiaonei__talk__common__Occupant;

const ::Ice::ObjectFactoryPtr&
com::xiaonei::talk::common::Occupant::ice_factory()
{
    return __F__com__xiaonei__talk__common__Occupant_Ptr;
}

class __F__com__xiaonei__talk__common__Occupant__Init
{
public:

    __F__com__xiaonei__talk__common__Occupant__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::xiaonei::talk::common::Occupant::ice_staticId(), ::com::xiaonei::talk::common::Occupant::ice_factory());
    }

    ~__F__com__xiaonei__talk__common__Occupant__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::xiaonei::talk::common::Occupant::ice_staticId());
    }
};

static __F__com__xiaonei__talk__common__Occupant__Init __F__com__xiaonei__talk__common__Occupant__i;

#ifdef __APPLE__
extern "C" { void __F__com__xiaonei__talk__common__Occupant__initializer() {} }
#endif

void 
com::xiaonei::talk::common::__patch__OccupantPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::talk::common::OccupantPtr* p = static_cast< ::com::xiaonei::talk::common::OccupantPtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::talk::common::OccupantPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::talk::common::Occupant::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::talk::common::operator==(const ::com::xiaonei::talk::common::Occupant& l, const ::com::xiaonei::talk::common::Occupant& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::talk::common::operator<(const ::com::xiaonei::talk::common::Occupant& l, const ::com::xiaonei::talk::common::Occupant& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::xiaonei::talk::common::RoomType::RoomType(bool __ice_hidden, bool __ice_memberOnly, bool __ice_moderated, ::Ice::Int __ice_anonymousType, bool __ice_secured, bool __ice_persistent) :
    hidden(__ice_hidden),
    memberOnly(__ice_memberOnly),
    moderated(__ice_moderated),
    anonymousType(__ice_anonymousType),
    secured(__ice_secured),
    persistent(__ice_persistent)
{
}

::Ice::ObjectPtr
com::xiaonei::talk::common::RoomType::ice_clone() const
{
    ::com::xiaonei::talk::common::RoomTypePtr __p = new ::com::xiaonei::talk::common::RoomType(*this);
    return __p;
}

static const ::std::string __com__xiaonei__talk__common__RoomType_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::talk::common::RoomType"
};

bool
com::xiaonei::talk::common::RoomType::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__talk__common__RoomType_ids, __com__xiaonei__talk__common__RoomType_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::talk::common::RoomType::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__talk__common__RoomType_ids[0], &__com__xiaonei__talk__common__RoomType_ids[2]);
}

const ::std::string&
com::xiaonei::talk::common::RoomType::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__talk__common__RoomType_ids[1];
}

const ::std::string&
com::xiaonei::talk::common::RoomType::ice_staticId()
{
    return __com__xiaonei__talk__common__RoomType_ids[1];
}

void
com::xiaonei::talk::common::RoomType::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(hidden);
    __os->write(memberOnly);
    __os->write(moderated);
    __os->write(anonymousType);
    __os->write(secured);
    __os->write(persistent);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
com::xiaonei::talk::common::RoomType::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(hidden);
    __is->read(memberOnly);
    __is->read(moderated);
    __is->read(anonymousType);
    __is->read(secured);
    __is->read(persistent);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
com::xiaonei::talk::common::RoomType::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::RoomType was not generated with stream support";
    throw ex;
}

void
com::xiaonei::talk::common::RoomType::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::RoomType was not generated with stream support";
    throw ex;
}

class __F__com__xiaonei__talk__common__RoomType : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::xiaonei::talk::common::RoomType::ice_staticId());
        return new ::com::xiaonei::talk::common::RoomType;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__xiaonei__talk__common__RoomType_Ptr = new __F__com__xiaonei__talk__common__RoomType;

const ::Ice::ObjectFactoryPtr&
com::xiaonei::talk::common::RoomType::ice_factory()
{
    return __F__com__xiaonei__talk__common__RoomType_Ptr;
}

class __F__com__xiaonei__talk__common__RoomType__Init
{
public:

    __F__com__xiaonei__talk__common__RoomType__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::xiaonei::talk::common::RoomType::ice_staticId(), ::com::xiaonei::talk::common::RoomType::ice_factory());
    }

    ~__F__com__xiaonei__talk__common__RoomType__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::xiaonei::talk::common::RoomType::ice_staticId());
    }
};

static __F__com__xiaonei__talk__common__RoomType__Init __F__com__xiaonei__talk__common__RoomType__i;

#ifdef __APPLE__
extern "C" { void __F__com__xiaonei__talk__common__RoomType__initializer() {} }
#endif

void 
com::xiaonei::talk::common::__patch__RoomTypePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::talk::common::RoomTypePtr* p = static_cast< ::com::xiaonei::talk::common::RoomTypePtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::talk::common::RoomTypePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::talk::common::RoomType::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::talk::common::operator==(const ::com::xiaonei::talk::common::RoomType& l, const ::com::xiaonei::talk::common::RoomType& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::talk::common::operator<(const ::com::xiaonei::talk::common::RoomType& l, const ::com::xiaonei::talk::common::RoomType& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::xiaonei::talk::common::Room::Room(const ::std::string& __ice_title, const ::std::string& __ice_descr, const ::com::xiaonei::talk::common::RoomTypePtr& __ice_type, const ::std::string& __ice_password, ::Ice::Int __ice_maxOccupantsCount, bool __ice_allowUserToInvite) :
    title(__ice_title),
    descr(__ice_descr),
    type(__ice_type),
    password(__ice_password),
    maxOccupantsCount(__ice_maxOccupantsCount),
    allowUserToInvite(__ice_allowUserToInvite)
{
}

::Ice::ObjectPtr
com::xiaonei::talk::common::Room::ice_clone() const
{
    ::com::xiaonei::talk::common::RoomPtr __p = new ::com::xiaonei::talk::common::Room(*this);
    return __p;
}

static const ::std::string __com__xiaonei__talk__common__Room_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::talk::common::Room"
};

bool
com::xiaonei::talk::common::Room::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__talk__common__Room_ids, __com__xiaonei__talk__common__Room_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::talk::common::Room::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__talk__common__Room_ids[0], &__com__xiaonei__talk__common__Room_ids[2]);
}

const ::std::string&
com::xiaonei::talk::common::Room::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__talk__common__Room_ids[1];
}

const ::std::string&
com::xiaonei::talk::common::Room::ice_staticId()
{
    return __com__xiaonei__talk__common__Room_ids[1];
}

void
com::xiaonei::talk::common::Room::__incRef()
{
    __gcIncRef();
}

void
com::xiaonei::talk::common::Room::__decRef()
{
    __gcDecRef();
}

void
com::xiaonei::talk::common::Room::__addObject(::IceInternal::GCCountMap& _c)
{
    ::IceInternal::GCCountMap::iterator pos = _c.find(this);
    if(pos == _c.end())
    {
        _c[this] = 1;
    }
    else
    {
        ++pos->second;
    }
}

bool
com::xiaonei::talk::common::Room::__usesClasses()
{
    return true;
}

void
com::xiaonei::talk::common::Room::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(type)
    {
        ::IceInternal::upCast(type.get())->__addObject(_c);
    }
}

void
com::xiaonei::talk::common::Room::__gcClear()
{
    if(type)
    {
        if(::IceInternal::upCast(type.get())->__usesClasses())
        {
            ::IceInternal::upCast(type.get())->__decRefUnsafe();
            type.__clearHandleUnsafe();
        }
        else
        {
            type = 0;
        }
    }
}

void
com::xiaonei::talk::common::Room::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(title);
    __os->write(descr);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(type.get())));
    __os->write(password);
    __os->write(maxOccupantsCount);
    __os->write(allowUserToInvite);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
com::xiaonei::talk::common::Room::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(title);
    __is->read(descr);
    __is->read(::com::xiaonei::talk::common::__patch__RoomTypePtr, &type);
    __is->read(password);
    __is->read(maxOccupantsCount);
    __is->read(allowUserToInvite);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
com::xiaonei::talk::common::Room::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::Room was not generated with stream support";
    throw ex;
}

void
com::xiaonei::talk::common::Room::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::talk::common::Room was not generated with stream support";
    throw ex;
}

class __F__com__xiaonei__talk__common__Room : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::xiaonei::talk::common::Room::ice_staticId());
        return new ::com::xiaonei::talk::common::Room;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__xiaonei__talk__common__Room_Ptr = new __F__com__xiaonei__talk__common__Room;

const ::Ice::ObjectFactoryPtr&
com::xiaonei::talk::common::Room::ice_factory()
{
    return __F__com__xiaonei__talk__common__Room_Ptr;
}

class __F__com__xiaonei__talk__common__Room__Init
{
public:

    __F__com__xiaonei__talk__common__Room__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::xiaonei::talk::common::Room::ice_staticId(), ::com::xiaonei::talk::common::Room::ice_factory());
    }

    ~__F__com__xiaonei__talk__common__Room__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::xiaonei::talk::common::Room::ice_staticId());
    }
};

static __F__com__xiaonei__talk__common__Room__Init __F__com__xiaonei__talk__common__Room__i;

#ifdef __APPLE__
extern "C" { void __F__com__xiaonei__talk__common__Room__initializer() {} }
#endif

void 
com::xiaonei::talk::common::__patch__RoomPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::talk::common::RoomPtr* p = static_cast< ::com::xiaonei::talk::common::RoomPtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::talk::common::RoomPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::talk::common::Room::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::talk::common::operator==(const ::com::xiaonei::talk::common::Room& l, const ::com::xiaonei::talk::common::Room& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::talk::common::operator<(const ::com::xiaonei::talk::common::Room& l, const ::com::xiaonei::talk::common::Room& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
