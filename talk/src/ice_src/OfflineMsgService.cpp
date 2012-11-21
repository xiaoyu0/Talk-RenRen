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

#include <OfflineMsgService.h>
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

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService__saveOfflineMessage_name = "saveOfflineMessage";

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService__getUnreadMsgsByType_name = "getUnreadMsgsByType";

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService__countByType_name = "countByType";

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService__saveGroupOfflineMessage_name = "saveGroupOfflineMessage";

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService__getUnreadGroupMsgListByType_name = "getUnreadGroupMsgListByType";

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService__saveOfflineMessageV1_name = "saveOfflineMessageV1";

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService__saveGroupOfflineMessageV1_name = "saveGroupOfflineMessageV1";

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService__notifyPushOfflineMessageV1_name = "notifyPushOfflineMessageV1";

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService__notifyPushOfflineMessageV2_name = "notifyPushOfflineMessageV2";

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService__saveSystemOfflineMessageV1_name = "saveSystemOfflineMessageV1";

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService__deleteOfflineMessage_name = "deleteOfflineMessage";

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService__addOfflineMessage_name = "addOfflineMessage";

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService__getUnreadOfflineMsgList_name = "getUnreadOfflineMsgList";

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService__count_name = "count";

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService__updateOfflineMessage_name = "updateOfflineMessage";

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService__getUnreadTimeoutOfflineMsgList_name = "getUnreadTimeoutOfflineMsgList";

::Ice::Object* IceInternal::upCast(::com::xiaonei::wap::talk::offline::OfflineMsgService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService* p) { return p; }

void
com::xiaonei::wap::talk::offline::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::talk::offline::OfflineMsgServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService;
        v->__copyFrom(proxy);
    }
}

bool
com::xiaonei::wap::talk::offline::OfflineMessage::operator==(const OfflineMessage& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(id != __rhs.id)
    {
        return false;
    }
    if(newsId != __rhs.newsId)
    {
        return false;
    }
    if(fromId != __rhs.fromId)
    {
        return false;
    }
    if(toId != __rhs.toId)
    {
        return false;
    }
    if(status != __rhs.status)
    {
        return false;
    }
    if(message != __rhs.message)
    {
        return false;
    }
    if(chatType != __rhs.chatType)
    {
        return false;
    }
    if(createTime != __rhs.createTime)
    {
        return false;
    }
    if(readTime != __rhs.readTime)
    {
        return false;
    }
    return true;
}

bool
com::xiaonei::wap::talk::offline::OfflineMessage::operator<(const OfflineMessage& __rhs) const
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
    if(newsId < __rhs.newsId)
    {
        return true;
    }
    else if(__rhs.newsId < newsId)
    {
        return false;
    }
    if(fromId < __rhs.fromId)
    {
        return true;
    }
    else if(__rhs.fromId < fromId)
    {
        return false;
    }
    if(toId < __rhs.toId)
    {
        return true;
    }
    else if(__rhs.toId < toId)
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
    if(message < __rhs.message)
    {
        return true;
    }
    else if(__rhs.message < message)
    {
        return false;
    }
    if(chatType < __rhs.chatType)
    {
        return true;
    }
    else if(__rhs.chatType < chatType)
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
    if(readTime < __rhs.readTime)
    {
        return true;
    }
    else if(__rhs.readTime < readTime)
    {
        return false;
    }
    return false;
}

void
com::xiaonei::wap::talk::offline::OfflineMessage::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(id);
    __os->write(newsId);
    __os->write(fromId);
    __os->write(toId);
    __os->write(status);
    __os->write(message);
    __os->write(chatType);
    __os->write(createTime);
    __os->write(readTime);
}

void
com::xiaonei::wap::talk::offline::OfflineMessage::__read(::IceInternal::BasicStream* __is)
{
    __is->read(id);
    __is->read(newsId);
    __is->read(fromId);
    __is->read(toId);
    __is->read(status);
    __is->read(message);
    __is->read(chatType);
    __is->read(createTime);
    __is->read(readTime);
}

void
com::xiaonei::wap::talk::offline::__writeOfflineMsgList(::IceInternal::BasicStream* __os, const ::com::xiaonei::wap::talk::offline::OfflineMessage* begin, const ::com::xiaonei::wap::talk::offline::OfflineMessage* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
com::xiaonei::wap::talk::offline::__readOfflineMsgList(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::talk::offline::OfflineMsgList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 37);
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
com::xiaonei::wap::talk::offline::GroupOfflineMessage::operator==(const GroupOfflineMessage& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(id != __rhs.id)
    {
        return false;
    }
    if(newsId != __rhs.newsId)
    {
        return false;
    }
    if(groupId != __rhs.groupId)
    {
        return false;
    }
    if(fromId != __rhs.fromId)
    {
        return false;
    }
    if(toId != __rhs.toId)
    {
        return false;
    }
    if(status != __rhs.status)
    {
        return false;
    }
    if(message != __rhs.message)
    {
        return false;
    }
    if(chatType != __rhs.chatType)
    {
        return false;
    }
    if(createTime != __rhs.createTime)
    {
        return false;
    }
    if(readTime != __rhs.readTime)
    {
        return false;
    }
    return true;
}

bool
com::xiaonei::wap::talk::offline::GroupOfflineMessage::operator<(const GroupOfflineMessage& __rhs) const
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
    if(newsId < __rhs.newsId)
    {
        return true;
    }
    else if(__rhs.newsId < newsId)
    {
        return false;
    }
    if(groupId < __rhs.groupId)
    {
        return true;
    }
    else if(__rhs.groupId < groupId)
    {
        return false;
    }
    if(fromId < __rhs.fromId)
    {
        return true;
    }
    else if(__rhs.fromId < fromId)
    {
        return false;
    }
    if(toId < __rhs.toId)
    {
        return true;
    }
    else if(__rhs.toId < toId)
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
    if(message < __rhs.message)
    {
        return true;
    }
    else if(__rhs.message < message)
    {
        return false;
    }
    if(chatType < __rhs.chatType)
    {
        return true;
    }
    else if(__rhs.chatType < chatType)
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
    if(readTime < __rhs.readTime)
    {
        return true;
    }
    else if(__rhs.readTime < readTime)
    {
        return false;
    }
    return false;
}

void
com::xiaonei::wap::talk::offline::GroupOfflineMessage::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(id);
    __os->write(newsId);
    __os->write(groupId);
    __os->write(fromId);
    __os->write(toId);
    __os->write(status);
    __os->write(message);
    __os->write(chatType);
    __os->write(createTime);
    __os->write(readTime);
}

void
com::xiaonei::wap::talk::offline::GroupOfflineMessage::__read(::IceInternal::BasicStream* __is)
{
    __is->read(id);
    __is->read(newsId);
    __is->read(groupId);
    __is->read(fromId);
    __is->read(toId);
    __is->read(status);
    __is->read(message);
    __is->read(chatType);
    __is->read(createTime);
    __is->read(readTime);
}

void
com::xiaonei::wap::talk::offline::__writeGroupOfflineMsgList(::IceInternal::BasicStream* __os, const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage* begin, const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
com::xiaonei::wap::talk::offline::__readGroupOfflineMsgList(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::talk::offline::GroupOfflineMsgList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 45);
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
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::saveOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__offline__OfflineMsgService__saveOfflineMessage_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService*>(__delBase.get());
            return __del->saveOfflineMessage(offlineMsg, __ctx);
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

::com::xiaonei::wap::talk::offline::OfflineMsgList
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::getUnreadMsgsByType(::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__offline__OfflineMsgService__getUnreadMsgsByType_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService*>(__delBase.get());
            return __del->getUnreadMsgsByType(uid, bitChatType, status, limit, __ctx);
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

::Ice::Int
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::countByType(::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__offline__OfflineMsgService__countByType_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService*>(__delBase.get());
            return __del->countByType(uid, bitChatType, status, __ctx);
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

bool
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::saveGroupOfflineMessage(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage& groupOfflineMsg, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__offline__OfflineMsgService__saveGroupOfflineMessage_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService*>(__delBase.get());
            return __del->saveGroupOfflineMessage(groupOfflineMsg, __ctx);
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

::com::xiaonei::wap::talk::offline::GroupOfflineMsgList
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::getUnreadGroupMsgListByType(::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__offline__OfflineMsgService__getUnreadGroupMsgListByType_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService*>(__delBase.get());
            return __del->getUnreadGroupMsgListByType(uid, bitChatType, status, limit, __ctx);
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

void
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::saveOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Context* __ctx)
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
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService*>(__delBase.get());
            __del->saveOfflineMessageV1(offlineMsg, __ctx);
            return;
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

void
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::saveGroupOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage& groupOfflineMsg, const ::Ice::Context* __ctx)
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
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService*>(__delBase.get());
            __del->saveGroupOfflineMessageV1(groupOfflineMsg, __ctx);
            return;
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

void
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::notifyPushOfflineMessageV1(const ::std::string& sessionId, ::Ice::Long uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Context* __ctx)
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
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService*>(__delBase.get());
            __del->notifyPushOfflineMessageV1(sessionId, uid, bitChatType, status, limit, __ctx);
            return;
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

void
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::notifyPushOfflineMessageV2(const ::std::string& sessionId, ::Ice::Long uid, const ::com::xiaonei::wap::talk::offline::ChatType& chatTypeList, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Context* __ctx)
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
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService*>(__delBase.get());
            __del->notifyPushOfflineMessageV2(sessionId, uid, chatTypeList, status, limit, __ctx);
            return;
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

void
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::saveSystemOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Context* __ctx)
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
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService*>(__delBase.get());
            __del->saveSystemOfflineMessageV1(offlineMsg, __ctx);
            return;
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

void
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::deleteOfflineMessage(::Ice::Long msgKey, ::Ice::Long userid, ::Ice::Int msgType, const ::Ice::Context* __ctx)
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
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService*>(__delBase.get());
            __del->deleteOfflineMessage(msgKey, userid, msgType, __ctx);
            return;
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

bool
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::addOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__offline__OfflineMsgService__addOfflineMessage_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService*>(__delBase.get());
            return __del->addOfflineMessage(offlineMsg, __ctx);
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

::com::xiaonei::wap::talk::offline::OfflineMsgList
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::getUnreadOfflineMsgList(::Ice::Int uid, ::Ice::Int limit, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__offline__OfflineMsgService__getUnreadOfflineMsgList_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService*>(__delBase.get());
            return __del->getUnreadOfflineMsgList(uid, limit, __ctx);
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

::Ice::Int
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::count(::Ice::Int uid, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__offline__OfflineMsgService__count_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService*>(__delBase.get());
            return __del->count(uid, __ctx);
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

bool
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::updateOfflineMessage(::Ice::Int uid, ::Ice::Int id, ::Ice::Int status, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__offline__OfflineMsgService__updateOfflineMessage_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService*>(__delBase.get());
            return __del->updateOfflineMessage(uid, id, status, __ctx);
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

::com::xiaonei::wap::talk::offline::OfflineMsgList
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::getUnreadTimeoutOfflineMsgList(::Ice::Int uid, ::Ice::Int timeout, ::Ice::Int limit, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__xiaonei__wap__talk__offline__OfflineMsgService__getUnreadTimeoutOfflineMsgList_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::offline::OfflineMsgService*>(__delBase.get());
            return __del->getUnreadTimeoutOfflineMsgList(uid, timeout, limit, __ctx);
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
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::ice_staticId()
{
    return ::com::xiaonei::wap::talk::offline::OfflineMsgService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::wap::talk::offline::OfflineMsgService::__newInstance() const
{
    return new OfflineMsgService;
}

bool
IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService::saveOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__offline__OfflineMsgService__saveOfflineMessage_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        offlineMsg.__write(__os);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    bool __ret;
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

::com::xiaonei::wap::talk::offline::OfflineMsgList
IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService::getUnreadMsgsByType(::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__offline__OfflineMsgService__getUnreadMsgsByType_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(bitChatType);
        __os->write(status);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::talk::offline::OfflineMsgList __ret;
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
        ::com::xiaonei::wap::talk::offline::__readOfflineMsgList(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService::countByType(::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__offline__OfflineMsgService__countByType_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(bitChatType);
        __os->write(status);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Ice::Int __ret;
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

bool
IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService::saveGroupOfflineMessage(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage& groupOfflineMsg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__offline__OfflineMsgService__saveGroupOfflineMessage_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        groupOfflineMsg.__write(__os);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    bool __ret;
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

::com::xiaonei::wap::talk::offline::GroupOfflineMsgList
IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService::getUnreadGroupMsgListByType(::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__offline__OfflineMsgService__getUnreadGroupMsgListByType_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(bitChatType);
        __os->write(status);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::talk::offline::GroupOfflineMsgList __ret;
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
        ::com::xiaonei::wap::talk::offline::__readGroupOfflineMsgList(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService::saveOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__offline__OfflineMsgService__saveOfflineMessageV1_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        offlineMsg.__write(__os);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
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
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService::saveGroupOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage& groupOfflineMsg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__offline__OfflineMsgService__saveGroupOfflineMessageV1_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        groupOfflineMsg.__write(__os);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
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
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService::notifyPushOfflineMessageV1(const ::std::string& sessionId, ::Ice::Long uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__offline__OfflineMsgService__notifyPushOfflineMessageV1_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sessionId);
        __os->write(uid);
        __os->write(bitChatType);
        __os->write(status);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
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
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService::notifyPushOfflineMessageV2(const ::std::string& sessionId, ::Ice::Long uid, const ::com::xiaonei::wap::talk::offline::ChatType& chatTypeList, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__offline__OfflineMsgService__notifyPushOfflineMessageV2_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sessionId);
        __os->write(uid);
        if(chatTypeList.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&chatTypeList[0], &chatTypeList[0] + chatTypeList.size());
        }
        __os->write(status);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
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
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService::saveSystemOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__offline__OfflineMsgService__saveSystemOfflineMessageV1_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        offlineMsg.__write(__os);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
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
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService::deleteOfflineMessage(::Ice::Long msgKey, ::Ice::Long userid, ::Ice::Int msgType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__offline__OfflineMsgService__deleteOfflineMessage_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(msgKey);
        __os->write(userid);
        __os->write(msgType);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(!__og.is()->b.empty())
    {
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
            __og.is()->skipEmptyEncaps();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

bool
IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService::addOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__offline__OfflineMsgService__addOfflineMessage_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        offlineMsg.__write(__os);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    bool __ret;
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

::com::xiaonei::wap::talk::offline::OfflineMsgList
IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService::getUnreadOfflineMsgList(::Ice::Int uid, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__offline__OfflineMsgService__getUnreadOfflineMsgList_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::talk::offline::OfflineMsgList __ret;
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
        ::com::xiaonei::wap::talk::offline::__readOfflineMsgList(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService::count(::Ice::Int uid, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__offline__OfflineMsgService__count_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Ice::Int __ret;
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

bool
IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService::updateOfflineMessage(::Ice::Int uid, ::Ice::Int id, ::Ice::Int status, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__offline__OfflineMsgService__updateOfflineMessage_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(id);
        __os->write(status);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    bool __ret;
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

::com::xiaonei::wap::talk::offline::OfflineMsgList
IceDelegateM::com::xiaonei::wap::talk::offline::OfflineMsgService::getUnreadTimeoutOfflineMsgList(::Ice::Int uid, ::Ice::Int timeout, ::Ice::Int limit, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__offline__OfflineMsgService__getUnreadTimeoutOfflineMsgList_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(uid);
        __os->write(timeout);
        __os->write(limit);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::xiaonei::wap::talk::offline::OfflineMsgList __ret;
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
        ::com::xiaonei::wap::talk::offline::__readOfflineMsgList(__is, __ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

bool
IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService::saveOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(bool& __result, const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_offlineMsg(offlineMsg)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::offline::OfflineMsgService* servant = dynamic_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->saveOfflineMessage(_m_offlineMsg, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        bool& _result;
        const ::com::xiaonei::wap::talk::offline::OfflineMessage& _m_offlineMsg;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__offline__OfflineMsgService__saveOfflineMessage_name, ::Ice::Normal, __context);
    bool __result;
    try
    {
        _DirectI __direct(__result, offlineMsg, __current);
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

::com::xiaonei::wap::talk::offline::OfflineMsgList
IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService::getUnreadMsgsByType(::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::talk::offline::OfflineMsgList& __result, ::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_bitChatType(bitChatType),
            _m_status(status),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::offline::OfflineMsgService* servant = dynamic_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getUnreadMsgsByType(_m_uid, _m_bitChatType, _m_status, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::talk::offline::OfflineMsgList& _result;
        ::Ice::Int _m_uid;
        ::Ice::Int _m_bitChatType;
        ::Ice::Int _m_status;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__offline__OfflineMsgService__getUnreadMsgsByType_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::talk::offline::OfflineMsgList __result;
    try
    {
        _DirectI __direct(__result, uid, bitChatType, status, limit, __current);
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

::Ice::Int
IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService::countByType(::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int& __result, ::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_bitChatType(bitChatType),
            _m_status(status)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::offline::OfflineMsgService* servant = dynamic_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->countByType(_m_uid, _m_bitChatType, _m_status, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
        ::Ice::Int _m_uid;
        ::Ice::Int _m_bitChatType;
        ::Ice::Int _m_status;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__offline__OfflineMsgService__countByType_name, ::Ice::Normal, __context);
    ::Ice::Int __result;
    try
    {
        _DirectI __direct(__result, uid, bitChatType, status, __current);
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

bool
IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService::saveGroupOfflineMessage(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage& groupOfflineMsg, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(bool& __result, const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage& groupOfflineMsg, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_groupOfflineMsg(groupOfflineMsg)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::offline::OfflineMsgService* servant = dynamic_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->saveGroupOfflineMessage(_m_groupOfflineMsg, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        bool& _result;
        const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage& _m_groupOfflineMsg;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__offline__OfflineMsgService__saveGroupOfflineMessage_name, ::Ice::Normal, __context);
    bool __result;
    try
    {
        _DirectI __direct(__result, groupOfflineMsg, __current);
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

::com::xiaonei::wap::talk::offline::GroupOfflineMsgList
IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService::getUnreadGroupMsgListByType(::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::talk::offline::GroupOfflineMsgList& __result, ::Ice::Int uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_bitChatType(bitChatType),
            _m_status(status),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::offline::OfflineMsgService* servant = dynamic_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getUnreadGroupMsgListByType(_m_uid, _m_bitChatType, _m_status, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::talk::offline::GroupOfflineMsgList& _result;
        ::Ice::Int _m_uid;
        ::Ice::Int _m_bitChatType;
        ::Ice::Int _m_status;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__offline__OfflineMsgService__getUnreadGroupMsgListByType_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::talk::offline::GroupOfflineMsgList __result;
    try
    {
        _DirectI __direct(__result, uid, bitChatType, status, limit, __current);
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

void
IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService::saveOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_offlineMsg(offlineMsg)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::offline::OfflineMsgService* servant = dynamic_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->saveOfflineMessageV1(_m_offlineMsg, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::com::xiaonei::wap::talk::offline::OfflineMessage& _m_offlineMsg;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__offline__OfflineMsgService__saveOfflineMessageV1_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(offlineMsg, __current);
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
}

void
IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService::saveGroupOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage& groupOfflineMsg, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage& groupOfflineMsg, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_groupOfflineMsg(groupOfflineMsg)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::offline::OfflineMsgService* servant = dynamic_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->saveGroupOfflineMessageV1(_m_groupOfflineMsg, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::com::xiaonei::wap::talk::offline::GroupOfflineMessage& _m_groupOfflineMsg;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__offline__OfflineMsgService__saveGroupOfflineMessageV1_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(groupOfflineMsg, __current);
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
}

void
IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService::notifyPushOfflineMessageV1(const ::std::string& sessionId, ::Ice::Long uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& sessionId, ::Ice::Long uid, ::Ice::Int bitChatType, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_sessionId(sessionId),
            _m_uid(uid),
            _m_bitChatType(bitChatType),
            _m_status(status),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::offline::OfflineMsgService* servant = dynamic_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->notifyPushOfflineMessageV1(_m_sessionId, _m_uid, _m_bitChatType, _m_status, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_sessionId;
        ::Ice::Long _m_uid;
        ::Ice::Int _m_bitChatType;
        ::Ice::Int _m_status;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__offline__OfflineMsgService__notifyPushOfflineMessageV1_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(sessionId, uid, bitChatType, status, limit, __current);
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
}

void
IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService::notifyPushOfflineMessageV2(const ::std::string& sessionId, ::Ice::Long uid, const ::com::xiaonei::wap::talk::offline::ChatType& chatTypeList, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& sessionId, ::Ice::Long uid, const ::com::xiaonei::wap::talk::offline::ChatType& chatTypeList, ::Ice::Int status, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_sessionId(sessionId),
            _m_uid(uid),
            _m_chatTypeList(chatTypeList),
            _m_status(status),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::offline::OfflineMsgService* servant = dynamic_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->notifyPushOfflineMessageV2(_m_sessionId, _m_uid, _m_chatTypeList, _m_status, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_sessionId;
        ::Ice::Long _m_uid;
        const ::com::xiaonei::wap::talk::offline::ChatType& _m_chatTypeList;
        ::Ice::Int _m_status;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__offline__OfflineMsgService__notifyPushOfflineMessageV2_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(sessionId, uid, chatTypeList, status, limit, __current);
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
}

void
IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService::saveSystemOfflineMessageV1(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_offlineMsg(offlineMsg)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::offline::OfflineMsgService* servant = dynamic_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->saveSystemOfflineMessageV1(_m_offlineMsg, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::com::xiaonei::wap::talk::offline::OfflineMessage& _m_offlineMsg;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__offline__OfflineMsgService__saveSystemOfflineMessageV1_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(offlineMsg, __current);
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
}

void
IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService::deleteOfflineMessage(::Ice::Long msgKey, ::Ice::Long userid, ::Ice::Int msgType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long msgKey, ::Ice::Long userid, ::Ice::Int msgType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_msgKey(msgKey),
            _m_userid(userid),
            _m_msgType(msgType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::offline::OfflineMsgService* servant = dynamic_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->deleteOfflineMessage(_m_msgKey, _m_userid, _m_msgType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_msgKey;
        ::Ice::Long _m_userid;
        ::Ice::Int _m_msgType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__offline__OfflineMsgService__deleteOfflineMessage_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(msgKey, userid, msgType, __current);
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
}

bool
IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService::addOfflineMessage(const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(bool& __result, const ::com::xiaonei::wap::talk::offline::OfflineMessage& offlineMsg, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_offlineMsg(offlineMsg)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::offline::OfflineMsgService* servant = dynamic_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->addOfflineMessage(_m_offlineMsg, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        bool& _result;
        const ::com::xiaonei::wap::talk::offline::OfflineMessage& _m_offlineMsg;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__offline__OfflineMsgService__addOfflineMessage_name, ::Ice::Normal, __context);
    bool __result;
    try
    {
        _DirectI __direct(__result, offlineMsg, __current);
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

::com::xiaonei::wap::talk::offline::OfflineMsgList
IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService::getUnreadOfflineMsgList(::Ice::Int uid, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::talk::offline::OfflineMsgList& __result, ::Ice::Int uid, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::offline::OfflineMsgService* servant = dynamic_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getUnreadOfflineMsgList(_m_uid, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::talk::offline::OfflineMsgList& _result;
        ::Ice::Int _m_uid;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__offline__OfflineMsgService__getUnreadOfflineMsgList_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::talk::offline::OfflineMsgList __result;
    try
    {
        _DirectI __direct(__result, uid, limit, __current);
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

::Ice::Int
IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService::count(::Ice::Int uid, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int& __result, ::Ice::Int uid, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::offline::OfflineMsgService* servant = dynamic_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->count(_m_uid, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
        ::Ice::Int _m_uid;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__offline__OfflineMsgService__count_name, ::Ice::Normal, __context);
    ::Ice::Int __result;
    try
    {
        _DirectI __direct(__result, uid, __current);
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

bool
IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService::updateOfflineMessage(::Ice::Int uid, ::Ice::Int id, ::Ice::Int status, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(bool& __result, ::Ice::Int uid, ::Ice::Int id, ::Ice::Int status, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_id(id),
            _m_status(status)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::offline::OfflineMsgService* servant = dynamic_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->updateOfflineMessage(_m_uid, _m_id, _m_status, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        bool& _result;
        ::Ice::Int _m_uid;
        ::Ice::Int _m_id;
        ::Ice::Int _m_status;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__offline__OfflineMsgService__updateOfflineMessage_name, ::Ice::Normal, __context);
    bool __result;
    try
    {
        _DirectI __direct(__result, uid, id, status, __current);
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

::com::xiaonei::wap::talk::offline::OfflineMsgList
IceDelegateD::com::xiaonei::wap::talk::offline::OfflineMsgService::getUnreadTimeoutOfflineMsgList(::Ice::Int uid, ::Ice::Int timeout, ::Ice::Int limit, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::xiaonei::wap::talk::offline::OfflineMsgList& __result, ::Ice::Int uid, ::Ice::Int timeout, ::Ice::Int limit, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_uid(uid),
            _m_timeout(timeout),
            _m_limit(limit)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::offline::OfflineMsgService* servant = dynamic_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getUnreadTimeoutOfflineMsgList(_m_uid, _m_timeout, _m_limit, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::xiaonei::wap::talk::offline::OfflineMsgList& _result;
        ::Ice::Int _m_uid;
        ::Ice::Int _m_timeout;
        ::Ice::Int _m_limit;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__offline__OfflineMsgService__getUnreadTimeoutOfflineMsgList_name, ::Ice::Normal, __context);
    ::com::xiaonei::wap::talk::offline::OfflineMsgList __result;
    try
    {
        _DirectI __direct(__result, uid, timeout, limit, __current);
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
com::xiaonei::wap::talk::offline::OfflineMsgService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::wap::talk::offline::OfflineMsgService"
};

bool
com::xiaonei::wap::talk::offline::OfflineMsgService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__wap__talk__offline__OfflineMsgService_ids, __com__xiaonei__wap__talk__offline__OfflineMsgService_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::wap::talk::offline::OfflineMsgService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__wap__talk__offline__OfflineMsgService_ids[0], &__com__xiaonei__wap__talk__offline__OfflineMsgService_ids[2]);
}

const ::std::string&
com::xiaonei::wap::talk::offline::OfflineMsgService::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__wap__talk__offline__OfflineMsgService_ids[1];
}

const ::std::string&
com::xiaonei::wap::talk::offline::OfflineMsgService::ice_staticId()
{
    return __com__xiaonei__wap__talk__offline__OfflineMsgService_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::___saveOfflineMessage(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::talk::offline::OfflineMessage offlineMsg;
    offlineMsg.__read(__is);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = saveOfflineMessage(offlineMsg, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::___getUnreadMsgsByType(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Int bitChatType;
    ::Ice::Int status;
    ::Ice::Int limit;
    __is->read(uid);
    __is->read(bitChatType);
    __is->read(status);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::talk::offline::OfflineMsgList __ret = getUnreadMsgsByType(uid, bitChatType, status, limit, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::com::xiaonei::wap::talk::offline::__writeOfflineMsgList(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::___countByType(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Int bitChatType;
    ::Ice::Int status;
    __is->read(uid);
    __is->read(bitChatType);
    __is->read(status);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = countByType(uid, bitChatType, status, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::___saveGroupOfflineMessage(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::talk::offline::GroupOfflineMessage groupOfflineMsg;
    groupOfflineMsg.__read(__is);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = saveGroupOfflineMessage(groupOfflineMsg, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::___getUnreadGroupMsgListByType(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Int bitChatType;
    ::Ice::Int status;
    ::Ice::Int limit;
    __is->read(uid);
    __is->read(bitChatType);
    __is->read(status);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::talk::offline::GroupOfflineMsgList __ret = getUnreadGroupMsgListByType(uid, bitChatType, status, limit, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::com::xiaonei::wap::talk::offline::__writeGroupOfflineMsgList(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::___saveOfflineMessageV1(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::talk::offline::OfflineMessage offlineMsg;
    offlineMsg.__read(__is);
    __is->endReadEncaps();
    saveOfflineMessageV1(offlineMsg, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::___saveGroupOfflineMessageV1(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::talk::offline::GroupOfflineMessage groupOfflineMsg;
    groupOfflineMsg.__read(__is);
    __is->endReadEncaps();
    saveGroupOfflineMessageV1(groupOfflineMsg, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::___notifyPushOfflineMessageV1(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string sessionId;
    ::Ice::Long uid;
    ::Ice::Int bitChatType;
    ::Ice::Int status;
    ::Ice::Int limit;
    __is->read(sessionId);
    __is->read(uid);
    __is->read(bitChatType);
    __is->read(status);
    __is->read(limit);
    __is->endReadEncaps();
    notifyPushOfflineMessageV1(sessionId, uid, bitChatType, status, limit, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::___notifyPushOfflineMessageV2(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string sessionId;
    ::Ice::Long uid;
    ::com::xiaonei::wap::talk::offline::ChatType chatTypeList;
    ::Ice::Int status;
    ::Ice::Int limit;
    __is->read(sessionId);
    __is->read(uid);
    __is->read(chatTypeList);
    __is->read(status);
    __is->read(limit);
    __is->endReadEncaps();
    notifyPushOfflineMessageV2(sessionId, uid, chatTypeList, status, limit, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::___saveSystemOfflineMessageV1(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::talk::offline::OfflineMessage offlineMsg;
    offlineMsg.__read(__is);
    __is->endReadEncaps();
    saveSystemOfflineMessageV1(offlineMsg, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::___deleteOfflineMessage(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long msgKey;
    ::Ice::Long userid;
    ::Ice::Int msgType;
    __is->read(msgKey);
    __is->read(userid);
    __is->read(msgType);
    __is->endReadEncaps();
    deleteOfflineMessage(msgKey, userid, msgType, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::___addOfflineMessage(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::xiaonei::wap::talk::offline::OfflineMessage offlineMsg;
    offlineMsg.__read(__is);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = addOfflineMessage(offlineMsg, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::___getUnreadOfflineMsgList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Int limit;
    __is->read(uid);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::talk::offline::OfflineMsgList __ret = getUnreadOfflineMsgList(uid, limit, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::com::xiaonei::wap::talk::offline::__writeOfflineMsgList(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::___count(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    __is->read(uid);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = count(uid, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::___updateOfflineMessage(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Int id;
    ::Ice::Int status;
    __is->read(uid);
    __is->read(id);
    __is->read(status);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    bool __ret = updateOfflineMessage(uid, id, status, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::___getUnreadTimeoutOfflineMsgList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int uid;
    ::Ice::Int timeout;
    ::Ice::Int limit;
    __is->read(uid);
    __is->read(timeout);
    __is->read(limit);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::xiaonei::wap::talk::offline::OfflineMsgList __ret = getUnreadTimeoutOfflineMsgList(uid, timeout, limit, __current);
    if(__ret.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::com::xiaonei::wap::talk::offline::__writeOfflineMsgList(__os, &__ret[0], &__ret[0] + __ret.size());
    }
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__wap__talk__offline__OfflineMsgService_all[] =
{
    "addOfflineMessage",
    "count",
    "countByType",
    "deleteOfflineMessage",
    "getUnreadGroupMsgListByType",
    "getUnreadMsgsByType",
    "getUnreadOfflineMsgList",
    "getUnreadTimeoutOfflineMsgList",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "notifyPushOfflineMessageV1",
    "notifyPushOfflineMessageV2",
    "saveGroupOfflineMessage",
    "saveGroupOfflineMessageV1",
    "saveOfflineMessage",
    "saveOfflineMessageV1",
    "saveSystemOfflineMessageV1",
    "updateOfflineMessage"
};

::Ice::DispatchStatus
com::xiaonei::wap::talk::offline::OfflineMsgService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__wap__talk__offline__OfflineMsgService_all, __com__xiaonei__wap__talk__offline__OfflineMsgService_all + 20, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__wap__talk__offline__OfflineMsgService_all)
    {
        case 0:
        {
            return ___addOfflineMessage(in, current);
        }
        case 1:
        {
            return ___count(in, current);
        }
        case 2:
        {
            return ___countByType(in, current);
        }
        case 3:
        {
            return ___deleteOfflineMessage(in, current);
        }
        case 4:
        {
            return ___getUnreadGroupMsgListByType(in, current);
        }
        case 5:
        {
            return ___getUnreadMsgsByType(in, current);
        }
        case 6:
        {
            return ___getUnreadOfflineMsgList(in, current);
        }
        case 7:
        {
            return ___getUnreadTimeoutOfflineMsgList(in, current);
        }
        case 8:
        {
            return ___ice_id(in, current);
        }
        case 9:
        {
            return ___ice_ids(in, current);
        }
        case 10:
        {
            return ___ice_isA(in, current);
        }
        case 11:
        {
            return ___ice_ping(in, current);
        }
        case 12:
        {
            return ___notifyPushOfflineMessageV1(in, current);
        }
        case 13:
        {
            return ___notifyPushOfflineMessageV2(in, current);
        }
        case 14:
        {
            return ___saveGroupOfflineMessage(in, current);
        }
        case 15:
        {
            return ___saveGroupOfflineMessageV1(in, current);
        }
        case 16:
        {
            return ___saveOfflineMessage(in, current);
        }
        case 17:
        {
            return ___saveOfflineMessageV1(in, current);
        }
        case 18:
        {
            return ___saveSystemOfflineMessageV1(in, current);
        }
        case 19:
        {
            return ___updateOfflineMessage(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::wap::talk::offline::OfflineMsgService::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::wap::talk::offline::OfflineMsgService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::wap::talk::offline::OfflineMsgService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::talk::offline::OfflineMsgService was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::talk::offline::OfflineMsgService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::talk::offline::OfflineMsgService was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::wap::talk::offline::__patch__OfflineMsgServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::wap::talk::offline::OfflineMsgServicePtr* p = static_cast< ::com::xiaonei::wap::talk::offline::OfflineMsgServicePtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::wap::talk::offline::OfflineMsgServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::wap::talk::offline::OfflineMsgService::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::wap::talk::offline::operator==(const ::com::xiaonei::wap::talk::offline::OfflineMsgService& l, const ::com::xiaonei::wap::talk::offline::OfflineMsgService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::wap::talk::offline::operator<(const ::com::xiaonei::wap::talk::offline::OfflineMsgService& l, const ::com::xiaonei::wap::talk::offline::OfflineMsgService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
