// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `relationService.ice'

#include <relationService.h>
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

static const ::std::string __com__renren__sixin__account__RelationService__addContact_name = "addContact";

static const ::std::string __com__renren__sixin__account__RelationService__addContactWithValidateMsg_name = "addContactWithValidateMsg";

static const ::std::string __com__renren__sixin__account__RelationService__deleteContact_name = "deleteContact";

static const ::std::string __com__renren__sixin__account__RelationService__blockContact_name = "blockContact";

static const ::std::string __com__renren__sixin__account__RelationService__unblockContact_name = "unblockContact";

static const ::std::string __com__renren__sixin__account__RelationService__deleteBlockedContact_name = "deleteBlockedContact";

static const ::std::string __com__renren__sixin__account__RelationService__getContactsCount_name = "getContactsCount";

static const ::std::string __com__renren__sixin__account__RelationService__getContacts_name = "getContacts";

static const ::std::string __com__renren__sixin__account__RelationService__getContactIds_name = "getContactIds";

static const ::std::string __com__renren__sixin__account__RelationService__getBlackListCount_name = "getBlackListCount";

static const ::std::string __com__renren__sixin__account__RelationService__getBlackLists_name = "getBlackLists";

static const ::std::string __com__renren__sixin__account__RelationService__getRelationIds_name = "getRelationIds";

static const ::std::string __com__renren__sixin__account__RelationService__getRelationsCount_name = "getRelationsCount";

static const ::std::string __com__renren__sixin__account__RelationService__getRelations_name = "getRelations";

static const ::std::string __com__renren__sixin__account__RelationService__getRelation_name = "getRelation";

static const ::std::string __com__renren__sixin__account__RelationService__isBlocked_name = "isBlocked";

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::ContactResult* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::ContactResult* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::ContactIdsResult* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::ContactIdsResult* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::RelationService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::RelationService* p) { return p; }

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::ContactResultPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::ContactResult;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::ContactIdsResultPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::ContactIdsResult;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::RelationServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::RelationService;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__write(::IceInternal::BasicStream* __os, ::com::renren::sixin::account::RelationEnum v)
{
    __os->write(static_cast< ::Ice::Byte>(v), 3);
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::RelationEnum& v)
{
    ::Ice::Byte val;
    __is->read(val, 3);
    v = static_cast< ::com::renren::sixin::account::RelationEnum>(val);
}

const ::std::string&
IceProxy::com::renren::sixin::account::ContactResult::ice_staticId()
{
    return ::com::renren::sixin::account::ContactResult::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::ContactResult::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::ContactResult);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::ContactResult::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::ContactResult);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::ContactResult::__newInstance() const
{
    return new ContactResult;
}

const ::std::string&
IceProxy::com::renren::sixin::account::ContactIdsResult::ice_staticId()
{
    return ::com::renren::sixin::account::ContactIdsResult::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::ContactIdsResult::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::ContactIdsResult);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::ContactIdsResult::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::ContactIdsResult);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::ContactIdsResult::__newInstance() const
{
    return new ContactIdsResult;
}

::com::renren::sixin::account::BaseResultPtr
IceProxy::com::renren::sixin::account::RelationService::addContact(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RelationService__addContact_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RelationService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RelationService*>(__delBase.get());
            return __del->addContact(hostId, associateId, __ctx);
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

::com::renren::sixin::account::BaseResultPtr
IceProxy::com::renren::sixin::account::RelationService::addContactWithValidateMsg(::Ice::Long hostId, ::Ice::Long associateId, ::Ice::Int sceneType, const ::std::string& message, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RelationService__addContactWithValidateMsg_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RelationService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RelationService*>(__delBase.get());
            return __del->addContactWithValidateMsg(hostId, associateId, sceneType, message, __ctx);
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

::com::renren::sixin::account::BaseResultPtr
IceProxy::com::renren::sixin::account::RelationService::deleteContact(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RelationService__deleteContact_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RelationService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RelationService*>(__delBase.get());
            return __del->deleteContact(hostId, associateId, __ctx);
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

::com::renren::sixin::account::BaseResultPtr
IceProxy::com::renren::sixin::account::RelationService::blockContact(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RelationService__blockContact_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RelationService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RelationService*>(__delBase.get());
            return __del->blockContact(hostId, associateId, __ctx);
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

::com::renren::sixin::account::BaseResultPtr
IceProxy::com::renren::sixin::account::RelationService::unblockContact(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RelationService__unblockContact_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RelationService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RelationService*>(__delBase.get());
            return __del->unblockContact(hostId, associateId, __ctx);
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

::com::renren::sixin::account::BaseResultPtr
IceProxy::com::renren::sixin::account::RelationService::deleteBlockedContact(::Ice::Long userId, ::Ice::Long contactId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RelationService__deleteBlockedContact_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RelationService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RelationService*>(__delBase.get());
            return __del->deleteBlockedContact(userId, contactId, __ctx);
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

::com::renren::sixin::account::IntResultPtr
IceProxy::com::renren::sixin::account::RelationService::getContactsCount(::Ice::Long userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RelationService__getContactsCount_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RelationService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RelationService*>(__delBase.get());
            return __del->getContactsCount(userId, __ctx);
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

::com::renren::sixin::account::ContactsResultPtr
IceProxy::com::renren::sixin::account::RelationService::getContacts(::Ice::Long userId, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RelationService__getContacts_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RelationService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RelationService*>(__delBase.get());
            return __del->getContacts(userId, begin, num, __ctx);
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

::com::renren::sixin::account::ContactIdsResultPtr
IceProxy::com::renren::sixin::account::RelationService::getContactIds(::Ice::Long userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RelationService__getContactIds_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RelationService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RelationService*>(__delBase.get());
            return __del->getContactIds(userId, __ctx);
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

::com::renren::sixin::account::IntResultPtr
IceProxy::com::renren::sixin::account::RelationService::getBlackListCount(::Ice::Long userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RelationService__getBlackListCount_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RelationService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RelationService*>(__delBase.get());
            return __del->getBlackListCount(userId, __ctx);
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

::com::renren::sixin::account::ContactsResultPtr
IceProxy::com::renren::sixin::account::RelationService::getBlackLists(::Ice::Long userId, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RelationService__getBlackLists_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RelationService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RelationService*>(__delBase.get());
            return __del->getBlackLists(userId, begin, num, __ctx);
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

::com::renren::sixin::account::ContactIdsResultPtr
IceProxy::com::renren::sixin::account::RelationService::getRelationIds(::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RelationService__getRelationIds_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RelationService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RelationService*>(__delBase.get());
            return __del->getRelationIds(userId, type, __ctx);
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

::com::renren::sixin::account::IntResultPtr
IceProxy::com::renren::sixin::account::RelationService::getRelationsCount(::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RelationService__getRelationsCount_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RelationService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RelationService*>(__delBase.get());
            return __del->getRelationsCount(userId, type, __ctx);
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

::com::renren::sixin::account::ContactsResultPtr
IceProxy::com::renren::sixin::account::RelationService::getRelations(::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RelationService__getRelations_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RelationService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RelationService*>(__delBase.get());
            return __del->getRelations(userId, type, begin, num, __ctx);
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

::com::renren::sixin::account::ContactResultPtr
IceProxy::com::renren::sixin::account::RelationService::getRelation(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RelationService__getRelation_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RelationService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RelationService*>(__delBase.get());
            return __del->getRelation(hostId, associateId, __ctx);
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

::com::renren::sixin::account::BoolResultPtr
IceProxy::com::renren::sixin::account::RelationService::isBlocked(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RelationService__isBlocked_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RelationService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RelationService*>(__delBase.get());
            return __del->isBlocked(hostId, associateId, __ctx);
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
IceProxy::com::renren::sixin::account::RelationService::ice_staticId()
{
    return ::com::renren::sixin::account::RelationService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::RelationService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::RelationService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::RelationService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::RelationService);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::RelationService::__newInstance() const
{
    return new RelationService;
}

::com::renren::sixin::account::BaseResultPtr
IceDelegateM::com::renren::sixin::account::RelationService::addContact(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RelationService__addContact_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(hostId);
        __os->write(associateId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::BaseResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__BaseResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::BaseResultPtr
IceDelegateM::com::renren::sixin::account::RelationService::addContactWithValidateMsg(::Ice::Long hostId, ::Ice::Long associateId, ::Ice::Int sceneType, const ::std::string& message, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RelationService__addContactWithValidateMsg_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(hostId);
        __os->write(associateId);
        __os->write(sceneType);
        __os->write(message);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::BaseResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__BaseResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::BaseResultPtr
IceDelegateM::com::renren::sixin::account::RelationService::deleteContact(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RelationService__deleteContact_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(hostId);
        __os->write(associateId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::BaseResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__BaseResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::BaseResultPtr
IceDelegateM::com::renren::sixin::account::RelationService::blockContact(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RelationService__blockContact_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(hostId);
        __os->write(associateId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::BaseResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__BaseResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::BaseResultPtr
IceDelegateM::com::renren::sixin::account::RelationService::unblockContact(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RelationService__unblockContact_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(hostId);
        __os->write(associateId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::BaseResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__BaseResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::BaseResultPtr
IceDelegateM::com::renren::sixin::account::RelationService::deleteBlockedContact(::Ice::Long userId, ::Ice::Long contactId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RelationService__deleteBlockedContact_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(contactId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::BaseResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__BaseResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::IntResultPtr
IceDelegateM::com::renren::sixin::account::RelationService::getContactsCount(::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RelationService__getContactsCount_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::IntResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__IntResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::ContactsResultPtr
IceDelegateM::com::renren::sixin::account::RelationService::getContacts(::Ice::Long userId, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RelationService__getContacts_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(begin);
        __os->write(num);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::ContactsResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__ContactsResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::ContactIdsResultPtr
IceDelegateM::com::renren::sixin::account::RelationService::getContactIds(::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RelationService__getContactIds_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::ContactIdsResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__ContactIdsResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::IntResultPtr
IceDelegateM::com::renren::sixin::account::RelationService::getBlackListCount(::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RelationService__getBlackListCount_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::IntResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__IntResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::ContactsResultPtr
IceDelegateM::com::renren::sixin::account::RelationService::getBlackLists(::Ice::Long userId, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RelationService__getBlackLists_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(begin);
        __os->write(num);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::ContactsResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__ContactsResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::ContactIdsResultPtr
IceDelegateM::com::renren::sixin::account::RelationService::getRelationIds(::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RelationService__getRelationIds_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        ::com::renren::sixin::account::__write(__os, type);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::ContactIdsResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__ContactIdsResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::IntResultPtr
IceDelegateM::com::renren::sixin::account::RelationService::getRelationsCount(::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RelationService__getRelationsCount_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        ::com::renren::sixin::account::__write(__os, type);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::IntResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__IntResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::ContactsResultPtr
IceDelegateM::com::renren::sixin::account::RelationService::getRelations(::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RelationService__getRelations_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        ::com::renren::sixin::account::__write(__os, type);
        __os->write(begin);
        __os->write(num);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::ContactsResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__ContactsResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::ContactResultPtr
IceDelegateM::com::renren::sixin::account::RelationService::getRelation(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RelationService__getRelation_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(hostId);
        __os->write(associateId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::ContactResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__ContactResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::BoolResultPtr
IceDelegateM::com::renren::sixin::account::RelationService::isBlocked(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RelationService__isBlocked_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(hostId);
        __os->write(associateId);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::BoolResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__BoolResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::BaseResultPtr
IceDelegateD::com::renren::sixin::account::RelationService::addContact(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BaseResultPtr& __result, ::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_hostId(hostId),
            _m_associateId(associateId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RelationService* servant = dynamic_cast< ::com::renren::sixin::account::RelationService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->addContact(_m_hostId, _m_associateId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BaseResultPtr& _result;
        ::Ice::Long _m_hostId;
        ::Ice::Long _m_associateId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RelationService__addContact_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BaseResultPtr __result;
    try
    {
        _DirectI __direct(__result, hostId, associateId, __current);
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

::com::renren::sixin::account::BaseResultPtr
IceDelegateD::com::renren::sixin::account::RelationService::addContactWithValidateMsg(::Ice::Long hostId, ::Ice::Long associateId, ::Ice::Int sceneType, const ::std::string& message, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BaseResultPtr& __result, ::Ice::Long hostId, ::Ice::Long associateId, ::Ice::Int sceneType, const ::std::string& message, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_hostId(hostId),
            _m_associateId(associateId),
            _m_sceneType(sceneType),
            _m_message(message)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RelationService* servant = dynamic_cast< ::com::renren::sixin::account::RelationService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->addContactWithValidateMsg(_m_hostId, _m_associateId, _m_sceneType, _m_message, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BaseResultPtr& _result;
        ::Ice::Long _m_hostId;
        ::Ice::Long _m_associateId;
        ::Ice::Int _m_sceneType;
        const ::std::string& _m_message;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RelationService__addContactWithValidateMsg_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BaseResultPtr __result;
    try
    {
        _DirectI __direct(__result, hostId, associateId, sceneType, message, __current);
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

::com::renren::sixin::account::BaseResultPtr
IceDelegateD::com::renren::sixin::account::RelationService::deleteContact(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BaseResultPtr& __result, ::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_hostId(hostId),
            _m_associateId(associateId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RelationService* servant = dynamic_cast< ::com::renren::sixin::account::RelationService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->deleteContact(_m_hostId, _m_associateId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BaseResultPtr& _result;
        ::Ice::Long _m_hostId;
        ::Ice::Long _m_associateId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RelationService__deleteContact_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BaseResultPtr __result;
    try
    {
        _DirectI __direct(__result, hostId, associateId, __current);
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

::com::renren::sixin::account::BaseResultPtr
IceDelegateD::com::renren::sixin::account::RelationService::blockContact(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BaseResultPtr& __result, ::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_hostId(hostId),
            _m_associateId(associateId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RelationService* servant = dynamic_cast< ::com::renren::sixin::account::RelationService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->blockContact(_m_hostId, _m_associateId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BaseResultPtr& _result;
        ::Ice::Long _m_hostId;
        ::Ice::Long _m_associateId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RelationService__blockContact_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BaseResultPtr __result;
    try
    {
        _DirectI __direct(__result, hostId, associateId, __current);
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

::com::renren::sixin::account::BaseResultPtr
IceDelegateD::com::renren::sixin::account::RelationService::unblockContact(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BaseResultPtr& __result, ::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_hostId(hostId),
            _m_associateId(associateId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RelationService* servant = dynamic_cast< ::com::renren::sixin::account::RelationService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->unblockContact(_m_hostId, _m_associateId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BaseResultPtr& _result;
        ::Ice::Long _m_hostId;
        ::Ice::Long _m_associateId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RelationService__unblockContact_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BaseResultPtr __result;
    try
    {
        _DirectI __direct(__result, hostId, associateId, __current);
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

::com::renren::sixin::account::BaseResultPtr
IceDelegateD::com::renren::sixin::account::RelationService::deleteBlockedContact(::Ice::Long userId, ::Ice::Long contactId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BaseResultPtr& __result, ::Ice::Long userId, ::Ice::Long contactId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_contactId(contactId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RelationService* servant = dynamic_cast< ::com::renren::sixin::account::RelationService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->deleteBlockedContact(_m_userId, _m_contactId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BaseResultPtr& _result;
        ::Ice::Long _m_userId;
        ::Ice::Long _m_contactId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RelationService__deleteBlockedContact_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BaseResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, contactId, __current);
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

::com::renren::sixin::account::IntResultPtr
IceDelegateD::com::renren::sixin::account::RelationService::getContactsCount(::Ice::Long userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::IntResultPtr& __result, ::Ice::Long userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RelationService* servant = dynamic_cast< ::com::renren::sixin::account::RelationService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getContactsCount(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::IntResultPtr& _result;
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RelationService__getContactsCount_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::IntResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, __current);
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

::com::renren::sixin::account::ContactsResultPtr
IceDelegateD::com::renren::sixin::account::RelationService::getContacts(::Ice::Long userId, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::ContactsResultPtr& __result, ::Ice::Long userId, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_begin(begin),
            _m_num(num)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RelationService* servant = dynamic_cast< ::com::renren::sixin::account::RelationService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getContacts(_m_userId, _m_begin, _m_num, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::ContactsResultPtr& _result;
        ::Ice::Long _m_userId;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_num;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RelationService__getContacts_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::ContactsResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, begin, num, __current);
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

::com::renren::sixin::account::ContactIdsResultPtr
IceDelegateD::com::renren::sixin::account::RelationService::getContactIds(::Ice::Long userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::ContactIdsResultPtr& __result, ::Ice::Long userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RelationService* servant = dynamic_cast< ::com::renren::sixin::account::RelationService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getContactIds(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::ContactIdsResultPtr& _result;
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RelationService__getContactIds_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::ContactIdsResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, __current);
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

::com::renren::sixin::account::IntResultPtr
IceDelegateD::com::renren::sixin::account::RelationService::getBlackListCount(::Ice::Long userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::IntResultPtr& __result, ::Ice::Long userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RelationService* servant = dynamic_cast< ::com::renren::sixin::account::RelationService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getBlackListCount(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::IntResultPtr& _result;
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RelationService__getBlackListCount_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::IntResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, __current);
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

::com::renren::sixin::account::ContactsResultPtr
IceDelegateD::com::renren::sixin::account::RelationService::getBlackLists(::Ice::Long userId, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::ContactsResultPtr& __result, ::Ice::Long userId, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_begin(begin),
            _m_num(num)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RelationService* servant = dynamic_cast< ::com::renren::sixin::account::RelationService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getBlackLists(_m_userId, _m_begin, _m_num, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::ContactsResultPtr& _result;
        ::Ice::Long _m_userId;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_num;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RelationService__getBlackLists_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::ContactsResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, begin, num, __current);
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

::com::renren::sixin::account::ContactIdsResultPtr
IceDelegateD::com::renren::sixin::account::RelationService::getRelationIds(::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::ContactIdsResultPtr& __result, ::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_type(type)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RelationService* servant = dynamic_cast< ::com::renren::sixin::account::RelationService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getRelationIds(_m_userId, _m_type, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::ContactIdsResultPtr& _result;
        ::Ice::Long _m_userId;
        ::com::renren::sixin::account::RelationEnum _m_type;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RelationService__getRelationIds_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::ContactIdsResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, type, __current);
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

::com::renren::sixin::account::IntResultPtr
IceDelegateD::com::renren::sixin::account::RelationService::getRelationsCount(::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::IntResultPtr& __result, ::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_type(type)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RelationService* servant = dynamic_cast< ::com::renren::sixin::account::RelationService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getRelationsCount(_m_userId, _m_type, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::IntResultPtr& _result;
        ::Ice::Long _m_userId;
        ::com::renren::sixin::account::RelationEnum _m_type;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RelationService__getRelationsCount_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::IntResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, type, __current);
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

::com::renren::sixin::account::ContactsResultPtr
IceDelegateD::com::renren::sixin::account::RelationService::getRelations(::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::ContactsResultPtr& __result, ::Ice::Long userId, ::com::renren::sixin::account::RelationEnum type, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_type(type),
            _m_begin(begin),
            _m_num(num)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RelationService* servant = dynamic_cast< ::com::renren::sixin::account::RelationService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getRelations(_m_userId, _m_type, _m_begin, _m_num, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::ContactsResultPtr& _result;
        ::Ice::Long _m_userId;
        ::com::renren::sixin::account::RelationEnum _m_type;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_num;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RelationService__getRelations_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::ContactsResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, type, begin, num, __current);
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

::com::renren::sixin::account::ContactResultPtr
IceDelegateD::com::renren::sixin::account::RelationService::getRelation(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::ContactResultPtr& __result, ::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_hostId(hostId),
            _m_associateId(associateId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RelationService* servant = dynamic_cast< ::com::renren::sixin::account::RelationService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getRelation(_m_hostId, _m_associateId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::ContactResultPtr& _result;
        ::Ice::Long _m_hostId;
        ::Ice::Long _m_associateId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RelationService__getRelation_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::ContactResultPtr __result;
    try
    {
        _DirectI __direct(__result, hostId, associateId, __current);
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

::com::renren::sixin::account::BoolResultPtr
IceDelegateD::com::renren::sixin::account::RelationService::isBlocked(::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BoolResultPtr& __result, ::Ice::Long hostId, ::Ice::Long associateId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_hostId(hostId),
            _m_associateId(associateId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RelationService* servant = dynamic_cast< ::com::renren::sixin::account::RelationService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->isBlocked(_m_hostId, _m_associateId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BoolResultPtr& _result;
        ::Ice::Long _m_hostId;
        ::Ice::Long _m_associateId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RelationService__isBlocked_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BoolResultPtr __result;
    try
    {
        _DirectI __direct(__result, hostId, associateId, __current);
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

com::renren::sixin::account::ContactResult::ContactResult(bool __ice_success, ::com::renren::sixin::account::AccountErrorCodeEnum __ice_errorCode, const ::std::string& __ice_errorMessage, const ::com::renren::sixin::account::ContactInfoPtr& __ice_contact) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#else
    ::com::renren::sixin::account::BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#endif
,
    contact(__ice_contact)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::ContactResult::ice_clone() const
{
    ::com::renren::sixin::account::ContactResultPtr __p = new ::com::renren::sixin::account::ContactResult(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__ContactResult_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseResult",
    "::com::renren::sixin::account::ContactResult"
};

bool
com::renren::sixin::account::ContactResult::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__ContactResult_ids, __com__renren__sixin__account__ContactResult_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::ContactResult::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__ContactResult_ids[0], &__com__renren__sixin__account__ContactResult_ids[3]);
}

const ::std::string&
com::renren::sixin::account::ContactResult::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__ContactResult_ids[2];
}

const ::std::string&
com::renren::sixin::account::ContactResult::ice_staticId()
{
    return __com__renren__sixin__account__ContactResult_ids[2];
}

void
com::renren::sixin::account::ContactResult::__incRef()
{
    __gcIncRef();
}

void
com::renren::sixin::account::ContactResult::__decRef()
{
    __gcDecRef();
}

void
com::renren::sixin::account::ContactResult::__addObject(::IceInternal::GCCountMap& _c)
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
com::renren::sixin::account::ContactResult::__usesClasses()
{
    return true;
}

void
com::renren::sixin::account::ContactResult::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(contact)
    {
        ::IceInternal::upCast(contact.get())->__addObject(_c);
    }
}

void
com::renren::sixin::account::ContactResult::__gcClear()
{
    if(contact)
    {
        if(::IceInternal::upCast(contact.get())->__usesClasses())
        {
            ::IceInternal::upCast(contact.get())->__decRefUnsafe();
            contact.__clearHandleUnsafe();
        }
        else
        {
            contact = 0;
        }
    }
}

void
com::renren::sixin::account::ContactResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(contact.get())));
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__write(__os);
#else
    ::com::renren::sixin::account::BaseResult::__write(__os);
#endif
}

void
com::renren::sixin::account::ContactResult::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::com::renren::sixin::account::__patch__ContactInfoPtr, &contact);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseResult::__read(__is, true);
#endif
}

void
com::renren::sixin::account::ContactResult::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::ContactResult was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::ContactResult::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::ContactResult was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__ContactResult : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::ContactResult::ice_staticId());
        return new ::com::renren::sixin::account::ContactResult;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__ContactResult_Ptr = new __F__com__renren__sixin__account__ContactResult;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::ContactResult::ice_factory()
{
    return __F__com__renren__sixin__account__ContactResult_Ptr;
}

class __F__com__renren__sixin__account__ContactResult__Init
{
public:

    __F__com__renren__sixin__account__ContactResult__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::ContactResult::ice_staticId(), ::com::renren::sixin::account::ContactResult::ice_factory());
    }

    ~__F__com__renren__sixin__account__ContactResult__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::ContactResult::ice_staticId());
    }
};

static __F__com__renren__sixin__account__ContactResult__Init __F__com__renren__sixin__account__ContactResult__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__ContactResult__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__ContactResultPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::ContactResultPtr* p = static_cast< ::com::renren::sixin::account::ContactResultPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::ContactResultPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::ContactResult::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::ContactResult& l, const ::com::renren::sixin::account::ContactResult& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::ContactResult& l, const ::com::renren::sixin::account::ContactResult& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::renren::sixin::account::ContactIdsResult::ContactIdsResult(bool __ice_success, ::com::renren::sixin::account::AccountErrorCodeEnum __ice_errorCode, const ::std::string& __ice_errorMessage, const ::com::renren::sixin::account::LongList& __ice_contactIds) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#else
    ::com::renren::sixin::account::BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#endif
,
    contactIds(__ice_contactIds)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::ContactIdsResult::ice_clone() const
{
    ::com::renren::sixin::account::ContactIdsResultPtr __p = new ::com::renren::sixin::account::ContactIdsResult(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__ContactIdsResult_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseResult",
    "::com::renren::sixin::account::ContactIdsResult"
};

bool
com::renren::sixin::account::ContactIdsResult::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__ContactIdsResult_ids, __com__renren__sixin__account__ContactIdsResult_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::ContactIdsResult::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__ContactIdsResult_ids[0], &__com__renren__sixin__account__ContactIdsResult_ids[3]);
}

const ::std::string&
com::renren::sixin::account::ContactIdsResult::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__ContactIdsResult_ids[2];
}

const ::std::string&
com::renren::sixin::account::ContactIdsResult::ice_staticId()
{
    return __com__renren__sixin__account__ContactIdsResult_ids[2];
}

void
com::renren::sixin::account::ContactIdsResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    if(contactIds.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        __os->write(&contactIds[0], &contactIds[0] + contactIds.size());
    }
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__write(__os);
#else
    ::com::renren::sixin::account::BaseResult::__write(__os);
#endif
}

void
com::renren::sixin::account::ContactIdsResult::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(contactIds);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseResult::__read(__is, true);
#endif
}

void
com::renren::sixin::account::ContactIdsResult::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::ContactIdsResult was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::ContactIdsResult::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::ContactIdsResult was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__ContactIdsResult : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::ContactIdsResult::ice_staticId());
        return new ::com::renren::sixin::account::ContactIdsResult;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__ContactIdsResult_Ptr = new __F__com__renren__sixin__account__ContactIdsResult;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::ContactIdsResult::ice_factory()
{
    return __F__com__renren__sixin__account__ContactIdsResult_Ptr;
}

class __F__com__renren__sixin__account__ContactIdsResult__Init
{
public:

    __F__com__renren__sixin__account__ContactIdsResult__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::ContactIdsResult::ice_staticId(), ::com::renren::sixin::account::ContactIdsResult::ice_factory());
    }

    ~__F__com__renren__sixin__account__ContactIdsResult__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::ContactIdsResult::ice_staticId());
    }
};

static __F__com__renren__sixin__account__ContactIdsResult__Init __F__com__renren__sixin__account__ContactIdsResult__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__ContactIdsResult__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__ContactIdsResultPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::ContactIdsResultPtr* p = static_cast< ::com::renren::sixin::account::ContactIdsResultPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::ContactIdsResultPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::ContactIdsResult::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::ContactIdsResult& l, const ::com::renren::sixin::account::ContactIdsResult& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::ContactIdsResult& l, const ::com::renren::sixin::account::ContactIdsResult& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
com::renren::sixin::account::RelationService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__renren__sixin__account__RelationService_ids[2] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::RelationService"
};

bool
com::renren::sixin::account::RelationService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__RelationService_ids, __com__renren__sixin__account__RelationService_ids + 2, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::RelationService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__RelationService_ids[0], &__com__renren__sixin__account__RelationService_ids[2]);
}

const ::std::string&
com::renren::sixin::account::RelationService::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__RelationService_ids[1];
}

const ::std::string&
com::renren::sixin::account::RelationService::ice_staticId()
{
    return __com__renren__sixin__account__RelationService_ids[1];
}

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::___addContact(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long hostId;
    ::Ice::Long associateId;
    __is->read(hostId);
    __is->read(associateId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BaseResultPtr __ret = addContact(hostId, associateId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::___addContactWithValidateMsg(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long hostId;
    ::Ice::Long associateId;
    ::Ice::Int sceneType;
    ::std::string message;
    __is->read(hostId);
    __is->read(associateId);
    __is->read(sceneType);
    __is->read(message);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BaseResultPtr __ret = addContactWithValidateMsg(hostId, associateId, sceneType, message, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::___deleteContact(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long hostId;
    ::Ice::Long associateId;
    __is->read(hostId);
    __is->read(associateId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BaseResultPtr __ret = deleteContact(hostId, associateId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::___blockContact(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long hostId;
    ::Ice::Long associateId;
    __is->read(hostId);
    __is->read(associateId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BaseResultPtr __ret = blockContact(hostId, associateId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::___unblockContact(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long hostId;
    ::Ice::Long associateId;
    __is->read(hostId);
    __is->read(associateId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BaseResultPtr __ret = unblockContact(hostId, associateId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::___deleteBlockedContact(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Long contactId;
    __is->read(userId);
    __is->read(contactId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BaseResultPtr __ret = deleteBlockedContact(userId, contactId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::___getContactsCount(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::IntResultPtr __ret = getContactsCount(userId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::___getContacts(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Int begin;
    ::Ice::Int num;
    __is->read(userId);
    __is->read(begin);
    __is->read(num);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::ContactsResultPtr __ret = getContacts(userId, begin, num, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::___getContactIds(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::ContactIdsResultPtr __ret = getContactIds(userId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::___getBlackListCount(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::IntResultPtr __ret = getBlackListCount(userId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::___getBlackLists(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Int begin;
    ::Ice::Int num;
    __is->read(userId);
    __is->read(begin);
    __is->read(num);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::ContactsResultPtr __ret = getBlackLists(userId, begin, num, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::___getRelationIds(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::com::renren::sixin::account::RelationEnum type;
    __is->read(userId);
    ::com::renren::sixin::account::__read(__is, type);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::ContactIdsResultPtr __ret = getRelationIds(userId, type, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::___getRelationsCount(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::com::renren::sixin::account::RelationEnum type;
    __is->read(userId);
    ::com::renren::sixin::account::__read(__is, type);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::IntResultPtr __ret = getRelationsCount(userId, type, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::___getRelations(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::com::renren::sixin::account::RelationEnum type;
    ::Ice::Int begin;
    ::Ice::Int num;
    __is->read(userId);
    ::com::renren::sixin::account::__read(__is, type);
    __is->read(begin);
    __is->read(num);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::ContactsResultPtr __ret = getRelations(userId, type, begin, num, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::___getRelation(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long hostId;
    ::Ice::Long associateId;
    __is->read(hostId);
    __is->read(associateId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::ContactResultPtr __ret = getRelation(hostId, associateId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::___isBlocked(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long hostId;
    ::Ice::Long associateId;
    __is->read(hostId);
    __is->read(associateId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BoolResultPtr __ret = isBlocked(hostId, associateId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

static ::std::string __com__renren__sixin__account__RelationService_all[] =
{
    "addContact",
    "addContactWithValidateMsg",
    "blockContact",
    "deleteBlockedContact",
    "deleteContact",
    "getBlackListCount",
    "getBlackLists",
    "getContactIds",
    "getContacts",
    "getContactsCount",
    "getRelation",
    "getRelationIds",
    "getRelations",
    "getRelationsCount",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "isBlocked",
    "unblockContact"
};

::Ice::DispatchStatus
com::renren::sixin::account::RelationService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__renren__sixin__account__RelationService_all, __com__renren__sixin__account__RelationService_all + 20, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__renren__sixin__account__RelationService_all)
    {
        case 0:
        {
            return ___addContact(in, current);
        }
        case 1:
        {
            return ___addContactWithValidateMsg(in, current);
        }
        case 2:
        {
            return ___blockContact(in, current);
        }
        case 3:
        {
            return ___deleteBlockedContact(in, current);
        }
        case 4:
        {
            return ___deleteContact(in, current);
        }
        case 5:
        {
            return ___getBlackListCount(in, current);
        }
        case 6:
        {
            return ___getBlackLists(in, current);
        }
        case 7:
        {
            return ___getContactIds(in, current);
        }
        case 8:
        {
            return ___getContacts(in, current);
        }
        case 9:
        {
            return ___getContactsCount(in, current);
        }
        case 10:
        {
            return ___getRelation(in, current);
        }
        case 11:
        {
            return ___getRelationIds(in, current);
        }
        case 12:
        {
            return ___getRelations(in, current);
        }
        case 13:
        {
            return ___getRelationsCount(in, current);
        }
        case 14:
        {
            return ___ice_id(in, current);
        }
        case 15:
        {
            return ___ice_ids(in, current);
        }
        case 16:
        {
            return ___ice_isA(in, current);
        }
        case 17:
        {
            return ___ice_ping(in, current);
        }
        case 18:
        {
            return ___isBlocked(in, current);
        }
        case 19:
        {
            return ___unblockContact(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::renren::sixin::account::RelationService::__write(::IceInternal::BasicStream* __os) const
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
com::renren::sixin::account::RelationService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::renren::sixin::account::RelationService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::RelationService was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::RelationService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::RelationService was not generated with stream support";
    throw ex;
}

void 
com::renren::sixin::account::__patch__RelationServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::RelationServicePtr* p = static_cast< ::com::renren::sixin::account::RelationServicePtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::RelationServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::RelationService::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::RelationService& l, const ::com::renren::sixin::account::RelationService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::RelationService& l, const ::com::renren::sixin::account::RelationService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
