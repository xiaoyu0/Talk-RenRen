// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `bindThirdPartyService.ice'

#include <bindThirdPartyService.h>
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

static const ::std::string __com__renren__sixin__account__BindThirdPartyService__bindRenRenAccount_name = "bindRenRenAccount";

static const ::std::string __com__renren__sixin__account__BindThirdPartyService__bindThirdPartyAccount_name = "bindThirdPartyAccount";

static const ::std::string __com__renren__sixin__account__BindThirdPartyService__unBindOutAccount_name = "unBindOutAccount";

static const ::std::string __com__renren__sixin__account__BindThirdPartyService__getSixinAccount_name = "getSixinAccount";

static const ::std::string __com__renren__sixin__account__BindThirdPartyService__getBoundAccountId_name = "getBoundAccountId";

static const ::std::string __com__renren__sixin__account__BindThirdPartyService__getSixinAccounts_name = "getSixinAccounts";

static const ::std::string __com__renren__sixin__account__BindThirdPartyService__getSixinIds_name = "getSixinIds";

static const ::std::string __com__renren__sixin__account__BindThirdPartyService__getSixinId_name = "getSixinId";

static const ::std::string __com__renren__sixin__account__BindThirdPartyService__getBoundAccountIds_name = "getBoundAccountIds";

static const ::std::string __com__renren__sixin__account__BindThirdPartyService__getBoundInfos_name = "getBoundInfos";

static const ::std::string __com__renren__sixin__account__BindThirdPartyService__getThirdPartyFriendCount_name = "getThirdPartyFriendCount";

static const ::std::string __com__renren__sixin__account__BindThirdPartyService__getThirdPartyFriendList_name = "getThirdPartyFriendList";

static const ::std::string __com__renren__sixin__account__BindThirdPartyService__getThirdPartyFriendDetail_name = "getThirdPartyFriendDetail";

static const ::std::string __com__renren__sixin__account__BindThirdPartyService__getThirdPartyFriendBySixinId_name = "getThirdPartyFriendBySixinId";

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::ThirdPartyProfile* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::ThirdPartyProfile* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::ThirdPartyResult* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::ThirdPartyResult* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::ThirdPartyContactsResult* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::ThirdPartyContactsResult* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::SixinIdsResult* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::SixinIdsResult* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::SixinAccount* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::SixinAccount* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::SixinAccountResult* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::SixinAccountResult* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::BundAccountIdsResult* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::BundAccountIdsResult* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::SixinAccountsResult* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::SixinAccountsResult* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::BoundInfosResult* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::BoundInfosResult* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::BindThirdPartyService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::BindThirdPartyService* p) { return p; }

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::ThirdPartyProfilePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::ThirdPartyProfile;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::ThirdPartyResultPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::ThirdPartyResult;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::ThirdPartyContactsResultPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::ThirdPartyContactsResult;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::SixinIdsResultPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::SixinIdsResult;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::SixinAccountPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::SixinAccount;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::SixinAccountResultPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::SixinAccountResult;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::BundAccountIdsResultPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::BundAccountIdsResult;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::SixinAccountsResultPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::SixinAccountsResult;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::BoundInfosResultPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::BoundInfosResult;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::BindThirdPartyServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::BindThirdPartyService;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__writeThirdPartyList(::IceInternal::BasicStream* __os, const ::com::renren::sixin::account::ThirdPartyProfilePtr* begin, const ::com::renren::sixin::account::ThirdPartyProfilePtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
com::renren::sixin::account::__readThirdPartyList(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::ThirdPartyList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::com::renren::sixin::account::__patch__ThirdPartyProfilePtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
com::renren::sixin::account::__writeStr2LongMap(::IceInternal::BasicStream* __os, const ::com::renren::sixin::account::Str2LongMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::renren::sixin::account::Str2LongMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
com::renren::sixin::account::__readStr2LongMap(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::Str2LongMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::Ice::Long> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::com::renren::sixin::account::Str2LongMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
com::renren::sixin::account::__writeLong2StrMap(::IceInternal::BasicStream* __os, const ::com::renren::sixin::account::Long2StrMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::renren::sixin::account::Long2StrMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
com::renren::sixin::account::__readLong2StrMap(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::Long2StrMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Long, ::std::string> pair;
        __is->read(const_cast< ::Ice::Long&>(pair.first));
        ::com::renren::sixin::account::Long2StrMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
com::renren::sixin::account::__writeStr2AccMap(::IceInternal::BasicStream* __os, const ::com::renren::sixin::account::Str2AccMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::com::renren::sixin::account::Str2AccMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(p->second.get())));
    }
}

void
com::renren::sixin::account::__readStr2AccMap(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::Str2AccMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::com::renren::sixin::account::SixinAccountPtr> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::com::renren::sixin::account::Str2AccMap::iterator __i = v.insert(v.end(), pair);
        __is->read(::com::renren::sixin::account::__patch__SixinAccountPtr, &__i->second);
    }
}

const ::std::string&
IceProxy::com::renren::sixin::account::ThirdPartyProfile::ice_staticId()
{
    return ::com::renren::sixin::account::ThirdPartyProfile::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::ThirdPartyProfile::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::ThirdPartyProfile);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::ThirdPartyProfile::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::ThirdPartyProfile);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::ThirdPartyProfile::__newInstance() const
{
    return new ThirdPartyProfile;
}

const ::std::string&
IceProxy::com::renren::sixin::account::ThirdPartyResult::ice_staticId()
{
    return ::com::renren::sixin::account::ThirdPartyResult::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::ThirdPartyResult::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::ThirdPartyResult);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::ThirdPartyResult::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::ThirdPartyResult);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::ThirdPartyResult::__newInstance() const
{
    return new ThirdPartyResult;
}

const ::std::string&
IceProxy::com::renren::sixin::account::ThirdPartyContactsResult::ice_staticId()
{
    return ::com::renren::sixin::account::ThirdPartyContactsResult::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::ThirdPartyContactsResult::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::ThirdPartyContactsResult);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::ThirdPartyContactsResult::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::ThirdPartyContactsResult);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::ThirdPartyContactsResult::__newInstance() const
{
    return new ThirdPartyContactsResult;
}

const ::std::string&
IceProxy::com::renren::sixin::account::SixinIdsResult::ice_staticId()
{
    return ::com::renren::sixin::account::SixinIdsResult::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::SixinIdsResult::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::SixinIdsResult);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::SixinIdsResult::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::SixinIdsResult);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::SixinIdsResult::__newInstance() const
{
    return new SixinIdsResult;
}

const ::std::string&
IceProxy::com::renren::sixin::account::SixinAccount::ice_staticId()
{
    return ::com::renren::sixin::account::SixinAccount::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::SixinAccount::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::SixinAccount);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::SixinAccount::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::SixinAccount);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::SixinAccount::__newInstance() const
{
    return new SixinAccount;
}

const ::std::string&
IceProxy::com::renren::sixin::account::SixinAccountResult::ice_staticId()
{
    return ::com::renren::sixin::account::SixinAccountResult::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::SixinAccountResult::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::SixinAccountResult);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::SixinAccountResult::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::SixinAccountResult);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::SixinAccountResult::__newInstance() const
{
    return new SixinAccountResult;
}

const ::std::string&
IceProxy::com::renren::sixin::account::BundAccountIdsResult::ice_staticId()
{
    return ::com::renren::sixin::account::BundAccountIdsResult::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::BundAccountIdsResult::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::BundAccountIdsResult);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::BundAccountIdsResult::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::BundAccountIdsResult);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::BundAccountIdsResult::__newInstance() const
{
    return new BundAccountIdsResult;
}

const ::std::string&
IceProxy::com::renren::sixin::account::SixinAccountsResult::ice_staticId()
{
    return ::com::renren::sixin::account::SixinAccountsResult::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::SixinAccountsResult::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::SixinAccountsResult);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::SixinAccountsResult::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::SixinAccountsResult);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::SixinAccountsResult::__newInstance() const
{
    return new SixinAccountsResult;
}

const ::std::string&
IceProxy::com::renren::sixin::account::BoundInfosResult::ice_staticId()
{
    return ::com::renren::sixin::account::BoundInfosResult::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::BoundInfosResult::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::BoundInfosResult);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::BoundInfosResult::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::BoundInfosResult);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::BoundInfosResult::__newInstance() const
{
    return new BoundInfosResult;
}

::com::renren::sixin::account::BoundInfoResultPtr
IceProxy::com::renren::sixin::account::BindThirdPartyService::bindRenRenAccount(::Ice::Long userId, const ::std::string& newOutAccount, const ::std::string& password, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__BindThirdPartyService__bindRenRenAccount_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::BindThirdPartyService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::BindThirdPartyService*>(__delBase.get());
            return __del->bindRenRenAccount(userId, newOutAccount, password, __ctx);
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

::com::renren::sixin::account::BoundInfoResultPtr
IceProxy::com::renren::sixin::account::BindThirdPartyService::bindThirdPartyAccount(::Ice::Long userId, const ::com::renren::sixin::account::TokenInfoPtr& token, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__BindThirdPartyService__bindThirdPartyAccount_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::BindThirdPartyService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::BindThirdPartyService*>(__delBase.get());
            return __del->bindThirdPartyAccount(userId, token, accountType, __ctx);
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
IceProxy::com::renren::sixin::account::BindThirdPartyService::unBindOutAccount(::Ice::Long userId, const ::std::string& newOutAccount, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__BindThirdPartyService__unBindOutAccount_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::BindThirdPartyService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::BindThirdPartyService*>(__delBase.get());
            return __del->unBindOutAccount(userId, newOutAccount, accountType, __ctx);
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

::com::renren::sixin::account::SixinAccountResultPtr
IceProxy::com::renren::sixin::account::BindThirdPartyService::getSixinAccount(const ::std::string& boundAccountId, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__BindThirdPartyService__getSixinAccount_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::BindThirdPartyService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::BindThirdPartyService*>(__delBase.get());
            return __del->getSixinAccount(boundAccountId, accountType, __ctx);
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

::com::renren::sixin::account::StringResultPtr
IceProxy::com::renren::sixin::account::BindThirdPartyService::getBoundAccountId(::Ice::Long sixinId, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__BindThirdPartyService__getBoundAccountId_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::BindThirdPartyService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::BindThirdPartyService*>(__delBase.get());
            return __del->getBoundAccountId(sixinId, accountType, __ctx);
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

::com::renren::sixin::account::SixinAccountsResultPtr
IceProxy::com::renren::sixin::account::BindThirdPartyService::getSixinAccounts(const ::com::renren::sixin::account::StrList& boundAccountIds, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__BindThirdPartyService__getSixinAccounts_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::BindThirdPartyService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::BindThirdPartyService*>(__delBase.get());
            return __del->getSixinAccounts(boundAccountIds, accountType, __ctx);
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

::com::renren::sixin::account::SixinIdsResultPtr
IceProxy::com::renren::sixin::account::BindThirdPartyService::getSixinIds(const ::com::renren::sixin::account::StrList& boundAccountIds, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__BindThirdPartyService__getSixinIds_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::BindThirdPartyService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::BindThirdPartyService*>(__delBase.get());
            return __del->getSixinIds(boundAccountIds, accountType, __ctx);
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

::com::renren::sixin::account::LongResultPtr
IceProxy::com::renren::sixin::account::BindThirdPartyService::getSixinId(const ::std::string& boundAccountId, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__BindThirdPartyService__getSixinId_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::BindThirdPartyService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::BindThirdPartyService*>(__delBase.get());
            return __del->getSixinId(boundAccountId, accountType, __ctx);
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

::com::renren::sixin::account::BundAccountIdsResultPtr
IceProxy::com::renren::sixin::account::BindThirdPartyService::getBoundAccountIds(const ::com::renren::sixin::account::LongList& sixinIds, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__BindThirdPartyService__getBoundAccountIds_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::BindThirdPartyService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::BindThirdPartyService*>(__delBase.get());
            return __del->getBoundAccountIds(sixinIds, accountType, __ctx);
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

::com::renren::sixin::account::BoundInfosResultPtr
IceProxy::com::renren::sixin::account::BindThirdPartyService::getBoundInfos(::Ice::Long userId, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__BindThirdPartyService__getBoundInfos_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::BindThirdPartyService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::BindThirdPartyService*>(__delBase.get());
            return __del->getBoundInfos(userId, __ctx);
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
IceProxy::com::renren::sixin::account::BindThirdPartyService::getThirdPartyFriendCount(::Ice::Long sixinID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__BindThirdPartyService__getThirdPartyFriendCount_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::BindThirdPartyService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::BindThirdPartyService*>(__delBase.get());
            return __del->getThirdPartyFriendCount(sixinID, accountType, __ctx);
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

::com::renren::sixin::account::ThirdPartyContactsResultPtr
IceProxy::com::renren::sixin::account::BindThirdPartyService::getThirdPartyFriendList(::Ice::Long sixinID, ::com::renren::sixin::account::BindAccountEnum accountType, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__BindThirdPartyService__getThirdPartyFriendList_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::BindThirdPartyService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::BindThirdPartyService*>(__delBase.get());
            return __del->getThirdPartyFriendList(sixinID, accountType, begin, num, __ctx);
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

::com::renren::sixin::account::ThirdPartyResultPtr
IceProxy::com::renren::sixin::account::BindThirdPartyService::getThirdPartyFriendDetail(::Ice::Long sixinID, const ::std::string& thirdPartyID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__BindThirdPartyService__getThirdPartyFriendDetail_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::BindThirdPartyService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::BindThirdPartyService*>(__delBase.get());
            return __del->getThirdPartyFriendDetail(sixinID, thirdPartyID, accountType, __ctx);
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

::com::renren::sixin::account::ThirdPartyResultPtr
IceProxy::com::renren::sixin::account::BindThirdPartyService::getThirdPartyFriendBySixinId(::Ice::Long sixinID, ::Ice::Long thirdPartySixinID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__BindThirdPartyService__getThirdPartyFriendBySixinId_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::BindThirdPartyService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::BindThirdPartyService*>(__delBase.get());
            return __del->getThirdPartyFriendBySixinId(sixinID, thirdPartySixinID, accountType, __ctx);
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
IceProxy::com::renren::sixin::account::BindThirdPartyService::ice_staticId()
{
    return ::com::renren::sixin::account::BindThirdPartyService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::BindThirdPartyService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::BindThirdPartyService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::BindThirdPartyService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::BindThirdPartyService);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::BindThirdPartyService::__newInstance() const
{
    return new BindThirdPartyService;
}

::com::renren::sixin::account::BoundInfoResultPtr
IceDelegateM::com::renren::sixin::account::BindThirdPartyService::bindRenRenAccount(::Ice::Long userId, const ::std::string& newOutAccount, const ::std::string& password, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__BindThirdPartyService__bindRenRenAccount_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(newOutAccount);
        __os->write(password);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::BoundInfoResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__BoundInfoResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::BoundInfoResultPtr
IceDelegateM::com::renren::sixin::account::BindThirdPartyService::bindThirdPartyAccount(::Ice::Long userId, const ::com::renren::sixin::account::TokenInfoPtr& token, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__BindThirdPartyService__bindThirdPartyAccount_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(token.get())));
        ::com::renren::sixin::account::__write(__os, accountType);
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::BoundInfoResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__BoundInfoResultPtr, &__ret);
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
IceDelegateM::com::renren::sixin::account::BindThirdPartyService::unBindOutAccount(::Ice::Long userId, const ::std::string& newOutAccount, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__BindThirdPartyService__unBindOutAccount_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(newOutAccount);
        ::com::renren::sixin::account::__write(__os, accountType);
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

::com::renren::sixin::account::SixinAccountResultPtr
IceDelegateM::com::renren::sixin::account::BindThirdPartyService::getSixinAccount(const ::std::string& boundAccountId, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__BindThirdPartyService__getSixinAccount_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(boundAccountId);
        ::com::renren::sixin::account::__write(__os, accountType);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::SixinAccountResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__SixinAccountResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::StringResultPtr
IceDelegateM::com::renren::sixin::account::BindThirdPartyService::getBoundAccountId(::Ice::Long sixinId, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__BindThirdPartyService__getBoundAccountId_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sixinId);
        ::com::renren::sixin::account::__write(__os, accountType);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::StringResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__StringResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::SixinAccountsResultPtr
IceDelegateM::com::renren::sixin::account::BindThirdPartyService::getSixinAccounts(const ::com::renren::sixin::account::StrList& boundAccountIds, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__BindThirdPartyService__getSixinAccounts_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(boundAccountIds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&boundAccountIds[0], &boundAccountIds[0] + boundAccountIds.size());
        }
        ::com::renren::sixin::account::__write(__os, accountType);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::SixinAccountsResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__SixinAccountsResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::SixinIdsResultPtr
IceDelegateM::com::renren::sixin::account::BindThirdPartyService::getSixinIds(const ::com::renren::sixin::account::StrList& boundAccountIds, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__BindThirdPartyService__getSixinIds_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(boundAccountIds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&boundAccountIds[0], &boundAccountIds[0] + boundAccountIds.size());
        }
        ::com::renren::sixin::account::__write(__os, accountType);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::SixinIdsResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__SixinIdsResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::LongResultPtr
IceDelegateM::com::renren::sixin::account::BindThirdPartyService::getSixinId(const ::std::string& boundAccountId, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__BindThirdPartyService__getSixinId_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(boundAccountId);
        ::com::renren::sixin::account::__write(__os, accountType);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::LongResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__LongResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::BundAccountIdsResultPtr
IceDelegateM::com::renren::sixin::account::BindThirdPartyService::getBoundAccountIds(const ::com::renren::sixin::account::LongList& sixinIds, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__BindThirdPartyService__getBoundAccountIds_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(sixinIds.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&sixinIds[0], &sixinIds[0] + sixinIds.size());
        }
        ::com::renren::sixin::account::__write(__os, accountType);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::BundAccountIdsResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__BundAccountIdsResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::BoundInfosResultPtr
IceDelegateM::com::renren::sixin::account::BindThirdPartyService::getBoundInfos(::Ice::Long userId, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__BindThirdPartyService__getBoundInfos_name, ::Ice::Normal, __context);
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
    ::com::renren::sixin::account::BoundInfosResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__BoundInfosResultPtr, &__ret);
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
IceDelegateM::com::renren::sixin::account::BindThirdPartyService::getThirdPartyFriendCount(::Ice::Long sixinID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__BindThirdPartyService__getThirdPartyFriendCount_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sixinID);
        ::com::renren::sixin::account::__write(__os, accountType);
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

::com::renren::sixin::account::ThirdPartyContactsResultPtr
IceDelegateM::com::renren::sixin::account::BindThirdPartyService::getThirdPartyFriendList(::Ice::Long sixinID, ::com::renren::sixin::account::BindAccountEnum accountType, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__BindThirdPartyService__getThirdPartyFriendList_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sixinID);
        ::com::renren::sixin::account::__write(__os, accountType);
        __os->write(begin);
        __os->write(num);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::ThirdPartyContactsResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__ThirdPartyContactsResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::ThirdPartyResultPtr
IceDelegateM::com::renren::sixin::account::BindThirdPartyService::getThirdPartyFriendDetail(::Ice::Long sixinID, const ::std::string& thirdPartyID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__BindThirdPartyService__getThirdPartyFriendDetail_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sixinID);
        __os->write(thirdPartyID);
        ::com::renren::sixin::account::__write(__os, accountType);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::ThirdPartyResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__ThirdPartyResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::ThirdPartyResultPtr
IceDelegateM::com::renren::sixin::account::BindThirdPartyService::getThirdPartyFriendBySixinId(::Ice::Long sixinID, ::Ice::Long thirdPartySixinID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__BindThirdPartyService__getThirdPartyFriendBySixinId_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(sixinID);
        __os->write(thirdPartySixinID);
        ::com::renren::sixin::account::__write(__os, accountType);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::ThirdPartyResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__ThirdPartyResultPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::com::renren::sixin::account::BoundInfoResultPtr
IceDelegateD::com::renren::sixin::account::BindThirdPartyService::bindRenRenAccount(::Ice::Long userId, const ::std::string& newOutAccount, const ::std::string& password, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BoundInfoResultPtr& __result, ::Ice::Long userId, const ::std::string& newOutAccount, const ::std::string& password, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_newOutAccount(newOutAccount),
            _m_password(password)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::BindThirdPartyService* servant = dynamic_cast< ::com::renren::sixin::account::BindThirdPartyService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->bindRenRenAccount(_m_userId, _m_newOutAccount, _m_password, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BoundInfoResultPtr& _result;
        ::Ice::Long _m_userId;
        const ::std::string& _m_newOutAccount;
        const ::std::string& _m_password;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__BindThirdPartyService__bindRenRenAccount_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BoundInfoResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, newOutAccount, password, __current);
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

::com::renren::sixin::account::BoundInfoResultPtr
IceDelegateD::com::renren::sixin::account::BindThirdPartyService::bindThirdPartyAccount(::Ice::Long userId, const ::com::renren::sixin::account::TokenInfoPtr& token, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BoundInfoResultPtr& __result, ::Ice::Long userId, const ::com::renren::sixin::account::TokenInfoPtr& token, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_token(token),
            _m_accountType(accountType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::BindThirdPartyService* servant = dynamic_cast< ::com::renren::sixin::account::BindThirdPartyService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->bindThirdPartyAccount(_m_userId, _m_token, _m_accountType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BoundInfoResultPtr& _result;
        ::Ice::Long _m_userId;
        const ::com::renren::sixin::account::TokenInfoPtr& _m_token;
        ::com::renren::sixin::account::BindAccountEnum _m_accountType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__BindThirdPartyService__bindThirdPartyAccount_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BoundInfoResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, token, accountType, __current);
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
IceDelegateD::com::renren::sixin::account::BindThirdPartyService::unBindOutAccount(::Ice::Long userId, const ::std::string& newOutAccount, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BaseResultPtr& __result, ::Ice::Long userId, const ::std::string& newOutAccount, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_newOutAccount(newOutAccount),
            _m_accountType(accountType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::BindThirdPartyService* servant = dynamic_cast< ::com::renren::sixin::account::BindThirdPartyService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->unBindOutAccount(_m_userId, _m_newOutAccount, _m_accountType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BaseResultPtr& _result;
        ::Ice::Long _m_userId;
        const ::std::string& _m_newOutAccount;
        ::com::renren::sixin::account::BindAccountEnum _m_accountType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__BindThirdPartyService__unBindOutAccount_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BaseResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, newOutAccount, accountType, __current);
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

::com::renren::sixin::account::SixinAccountResultPtr
IceDelegateD::com::renren::sixin::account::BindThirdPartyService::getSixinAccount(const ::std::string& boundAccountId, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::SixinAccountResultPtr& __result, const ::std::string& boundAccountId, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_boundAccountId(boundAccountId),
            _m_accountType(accountType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::BindThirdPartyService* servant = dynamic_cast< ::com::renren::sixin::account::BindThirdPartyService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getSixinAccount(_m_boundAccountId, _m_accountType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::SixinAccountResultPtr& _result;
        const ::std::string& _m_boundAccountId;
        ::com::renren::sixin::account::BindAccountEnum _m_accountType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__BindThirdPartyService__getSixinAccount_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::SixinAccountResultPtr __result;
    try
    {
        _DirectI __direct(__result, boundAccountId, accountType, __current);
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

::com::renren::sixin::account::StringResultPtr
IceDelegateD::com::renren::sixin::account::BindThirdPartyService::getBoundAccountId(::Ice::Long sixinId, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::StringResultPtr& __result, ::Ice::Long sixinId, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_sixinId(sixinId),
            _m_accountType(accountType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::BindThirdPartyService* servant = dynamic_cast< ::com::renren::sixin::account::BindThirdPartyService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getBoundAccountId(_m_sixinId, _m_accountType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::StringResultPtr& _result;
        ::Ice::Long _m_sixinId;
        ::com::renren::sixin::account::BindAccountEnum _m_accountType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__BindThirdPartyService__getBoundAccountId_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::StringResultPtr __result;
    try
    {
        _DirectI __direct(__result, sixinId, accountType, __current);
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

::com::renren::sixin::account::SixinAccountsResultPtr
IceDelegateD::com::renren::sixin::account::BindThirdPartyService::getSixinAccounts(const ::com::renren::sixin::account::StrList& boundAccountIds, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::SixinAccountsResultPtr& __result, const ::com::renren::sixin::account::StrList& boundAccountIds, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_boundAccountIds(boundAccountIds),
            _m_accountType(accountType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::BindThirdPartyService* servant = dynamic_cast< ::com::renren::sixin::account::BindThirdPartyService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getSixinAccounts(_m_boundAccountIds, _m_accountType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::SixinAccountsResultPtr& _result;
        const ::com::renren::sixin::account::StrList& _m_boundAccountIds;
        ::com::renren::sixin::account::BindAccountEnum _m_accountType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__BindThirdPartyService__getSixinAccounts_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::SixinAccountsResultPtr __result;
    try
    {
        _DirectI __direct(__result, boundAccountIds, accountType, __current);
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

::com::renren::sixin::account::SixinIdsResultPtr
IceDelegateD::com::renren::sixin::account::BindThirdPartyService::getSixinIds(const ::com::renren::sixin::account::StrList& boundAccountIds, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::SixinIdsResultPtr& __result, const ::com::renren::sixin::account::StrList& boundAccountIds, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_boundAccountIds(boundAccountIds),
            _m_accountType(accountType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::BindThirdPartyService* servant = dynamic_cast< ::com::renren::sixin::account::BindThirdPartyService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getSixinIds(_m_boundAccountIds, _m_accountType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::SixinIdsResultPtr& _result;
        const ::com::renren::sixin::account::StrList& _m_boundAccountIds;
        ::com::renren::sixin::account::BindAccountEnum _m_accountType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__BindThirdPartyService__getSixinIds_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::SixinIdsResultPtr __result;
    try
    {
        _DirectI __direct(__result, boundAccountIds, accountType, __current);
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

::com::renren::sixin::account::LongResultPtr
IceDelegateD::com::renren::sixin::account::BindThirdPartyService::getSixinId(const ::std::string& boundAccountId, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::LongResultPtr& __result, const ::std::string& boundAccountId, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_boundAccountId(boundAccountId),
            _m_accountType(accountType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::BindThirdPartyService* servant = dynamic_cast< ::com::renren::sixin::account::BindThirdPartyService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getSixinId(_m_boundAccountId, _m_accountType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::LongResultPtr& _result;
        const ::std::string& _m_boundAccountId;
        ::com::renren::sixin::account::BindAccountEnum _m_accountType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__BindThirdPartyService__getSixinId_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::LongResultPtr __result;
    try
    {
        _DirectI __direct(__result, boundAccountId, accountType, __current);
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

::com::renren::sixin::account::BundAccountIdsResultPtr
IceDelegateD::com::renren::sixin::account::BindThirdPartyService::getBoundAccountIds(const ::com::renren::sixin::account::LongList& sixinIds, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BundAccountIdsResultPtr& __result, const ::com::renren::sixin::account::LongList& sixinIds, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_sixinIds(sixinIds),
            _m_accountType(accountType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::BindThirdPartyService* servant = dynamic_cast< ::com::renren::sixin::account::BindThirdPartyService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getBoundAccountIds(_m_sixinIds, _m_accountType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BundAccountIdsResultPtr& _result;
        const ::com::renren::sixin::account::LongList& _m_sixinIds;
        ::com::renren::sixin::account::BindAccountEnum _m_accountType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__BindThirdPartyService__getBoundAccountIds_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BundAccountIdsResultPtr __result;
    try
    {
        _DirectI __direct(__result, sixinIds, accountType, __current);
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

::com::renren::sixin::account::BoundInfosResultPtr
IceDelegateD::com::renren::sixin::account::BindThirdPartyService::getBoundInfos(::Ice::Long userId, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BoundInfosResultPtr& __result, ::Ice::Long userId, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::BindThirdPartyService* servant = dynamic_cast< ::com::renren::sixin::account::BindThirdPartyService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getBoundInfos(_m_userId, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BoundInfosResultPtr& _result;
        ::Ice::Long _m_userId;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__BindThirdPartyService__getBoundInfos_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BoundInfosResultPtr __result;
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
IceDelegateD::com::renren::sixin::account::BindThirdPartyService::getThirdPartyFriendCount(::Ice::Long sixinID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::IntResultPtr& __result, ::Ice::Long sixinID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_sixinID(sixinID),
            _m_accountType(accountType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::BindThirdPartyService* servant = dynamic_cast< ::com::renren::sixin::account::BindThirdPartyService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getThirdPartyFriendCount(_m_sixinID, _m_accountType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::IntResultPtr& _result;
        ::Ice::Long _m_sixinID;
        ::com::renren::sixin::account::BindAccountEnum _m_accountType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__BindThirdPartyService__getThirdPartyFriendCount_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::IntResultPtr __result;
    try
    {
        _DirectI __direct(__result, sixinID, accountType, __current);
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

::com::renren::sixin::account::ThirdPartyContactsResultPtr
IceDelegateD::com::renren::sixin::account::BindThirdPartyService::getThirdPartyFriendList(::Ice::Long sixinID, ::com::renren::sixin::account::BindAccountEnum accountType, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::ThirdPartyContactsResultPtr& __result, ::Ice::Long sixinID, ::com::renren::sixin::account::BindAccountEnum accountType, ::Ice::Int begin, ::Ice::Int num, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_sixinID(sixinID),
            _m_accountType(accountType),
            _m_begin(begin),
            _m_num(num)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::BindThirdPartyService* servant = dynamic_cast< ::com::renren::sixin::account::BindThirdPartyService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getThirdPartyFriendList(_m_sixinID, _m_accountType, _m_begin, _m_num, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::ThirdPartyContactsResultPtr& _result;
        ::Ice::Long _m_sixinID;
        ::com::renren::sixin::account::BindAccountEnum _m_accountType;
        ::Ice::Int _m_begin;
        ::Ice::Int _m_num;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__BindThirdPartyService__getThirdPartyFriendList_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::ThirdPartyContactsResultPtr __result;
    try
    {
        _DirectI __direct(__result, sixinID, accountType, begin, num, __current);
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

::com::renren::sixin::account::ThirdPartyResultPtr
IceDelegateD::com::renren::sixin::account::BindThirdPartyService::getThirdPartyFriendDetail(::Ice::Long sixinID, const ::std::string& thirdPartyID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::ThirdPartyResultPtr& __result, ::Ice::Long sixinID, const ::std::string& thirdPartyID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_sixinID(sixinID),
            _m_thirdPartyID(thirdPartyID),
            _m_accountType(accountType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::BindThirdPartyService* servant = dynamic_cast< ::com::renren::sixin::account::BindThirdPartyService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getThirdPartyFriendDetail(_m_sixinID, _m_thirdPartyID, _m_accountType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::ThirdPartyResultPtr& _result;
        ::Ice::Long _m_sixinID;
        const ::std::string& _m_thirdPartyID;
        ::com::renren::sixin::account::BindAccountEnum _m_accountType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__BindThirdPartyService__getThirdPartyFriendDetail_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::ThirdPartyResultPtr __result;
    try
    {
        _DirectI __direct(__result, sixinID, thirdPartyID, accountType, __current);
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

::com::renren::sixin::account::ThirdPartyResultPtr
IceDelegateD::com::renren::sixin::account::BindThirdPartyService::getThirdPartyFriendBySixinId(::Ice::Long sixinID, ::Ice::Long thirdPartySixinID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::ThirdPartyResultPtr& __result, ::Ice::Long sixinID, ::Ice::Long thirdPartySixinID, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_sixinID(sixinID),
            _m_thirdPartySixinID(thirdPartySixinID),
            _m_accountType(accountType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::BindThirdPartyService* servant = dynamic_cast< ::com::renren::sixin::account::BindThirdPartyService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getThirdPartyFriendBySixinId(_m_sixinID, _m_thirdPartySixinID, _m_accountType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::ThirdPartyResultPtr& _result;
        ::Ice::Long _m_sixinID;
        ::Ice::Long _m_thirdPartySixinID;
        ::com::renren::sixin::account::BindAccountEnum _m_accountType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__BindThirdPartyService__getThirdPartyFriendBySixinId_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::ThirdPartyResultPtr __result;
    try
    {
        _DirectI __direct(__result, sixinID, thirdPartySixinID, accountType, __current);
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

com::renren::sixin::account::ThirdPartyProfile::ThirdPartyProfile(const ::com::renren::sixin::account::HeadUrlInfoPtr& __ice_headUrl, const ::std::string& __ice_defHeadUrl, const ::std::string& __ice_name, const ::std::string& __ice_firstName, const ::std::string& __ice_lastName, const ::std::string& __ice_school, const ::std::string& __ice_company, ::Ice::Int __ice_sex, ::Ice::Int __ice_brithdayYear, ::Ice::Int __ice_brithdayMonth, ::Ice::Int __ice_brithdayDay, ::Ice::Int __ice_extFlag, ::Ice::Long __ice_sixinId, bool __ice_focus, const ::std::string& __ice_thirdPartyID, const ::std::string& __ice_homePage) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseProfile(__ice_headUrl, __ice_defHeadUrl, __ice_name, __ice_firstName, __ice_lastName, __ice_school, __ice_company, __ice_sex, __ice_brithdayYear, __ice_brithdayMonth, __ice_brithdayDay, __ice_extFlag)
#else
    ::com::renren::sixin::account::BaseProfile(__ice_headUrl, __ice_defHeadUrl, __ice_name, __ice_firstName, __ice_lastName, __ice_school, __ice_company, __ice_sex, __ice_brithdayYear, __ice_brithdayMonth, __ice_brithdayDay, __ice_extFlag)
#endif
,
    sixinId(__ice_sixinId),
    focus(__ice_focus),
    thirdPartyID(__ice_thirdPartyID),
    homePage(__ice_homePage)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::ThirdPartyProfile::ice_clone() const
{
    ::com::renren::sixin::account::ThirdPartyProfilePtr __p = new ::com::renren::sixin::account::ThirdPartyProfile(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__ThirdPartyProfile_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseProfile",
    "::com::renren::sixin::account::ThirdPartyProfile"
};

bool
com::renren::sixin::account::ThirdPartyProfile::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__ThirdPartyProfile_ids, __com__renren__sixin__account__ThirdPartyProfile_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::ThirdPartyProfile::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__ThirdPartyProfile_ids[0], &__com__renren__sixin__account__ThirdPartyProfile_ids[3]);
}

const ::std::string&
com::renren::sixin::account::ThirdPartyProfile::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__ThirdPartyProfile_ids[2];
}

const ::std::string&
com::renren::sixin::account::ThirdPartyProfile::ice_staticId()
{
    return __com__renren__sixin__account__ThirdPartyProfile_ids[2];
}

void
com::renren::sixin::account::ThirdPartyProfile::__gcReachable(::IceInternal::GCCountMap& _c) const
{
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseProfile::__gcReachable(_c);
#else
    ::com::renren::sixin::account::BaseProfile::__gcReachable(_c);
#endif
}

void
com::renren::sixin::account::ThirdPartyProfile::__gcClear()
{
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseProfile::__gcClear();
#else
    ::com::renren::sixin::account::BaseProfile::__gcClear();
#endif
}

void
com::renren::sixin::account::ThirdPartyProfile::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(sixinId);
    __os->write(focus);
    __os->write(thirdPartyID);
    __os->write(homePage);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseProfile::__write(__os);
#else
    ::com::renren::sixin::account::BaseProfile::__write(__os);
#endif
}

void
com::renren::sixin::account::ThirdPartyProfile::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(sixinId);
    __is->read(focus);
    __is->read(thirdPartyID);
    __is->read(homePage);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseProfile::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseProfile::__read(__is, true);
#endif
}

void
com::renren::sixin::account::ThirdPartyProfile::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::ThirdPartyProfile was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::ThirdPartyProfile::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::ThirdPartyProfile was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__ThirdPartyProfile : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::ThirdPartyProfile::ice_staticId());
        return new ::com::renren::sixin::account::ThirdPartyProfile;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__ThirdPartyProfile_Ptr = new __F__com__renren__sixin__account__ThirdPartyProfile;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::ThirdPartyProfile::ice_factory()
{
    return __F__com__renren__sixin__account__ThirdPartyProfile_Ptr;
}

class __F__com__renren__sixin__account__ThirdPartyProfile__Init
{
public:

    __F__com__renren__sixin__account__ThirdPartyProfile__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::ThirdPartyProfile::ice_staticId(), ::com::renren::sixin::account::ThirdPartyProfile::ice_factory());
    }

    ~__F__com__renren__sixin__account__ThirdPartyProfile__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::ThirdPartyProfile::ice_staticId());
    }
};

static __F__com__renren__sixin__account__ThirdPartyProfile__Init __F__com__renren__sixin__account__ThirdPartyProfile__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__ThirdPartyProfile__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__ThirdPartyProfilePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::ThirdPartyProfilePtr* p = static_cast< ::com::renren::sixin::account::ThirdPartyProfilePtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::ThirdPartyProfilePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::ThirdPartyProfile::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::ThirdPartyProfile& l, const ::com::renren::sixin::account::ThirdPartyProfile& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::ThirdPartyProfile& l, const ::com::renren::sixin::account::ThirdPartyProfile& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::renren::sixin::account::ThirdPartyResult::ThirdPartyResult(bool __ice_success, ::com::renren::sixin::account::AccountErrorCodeEnum __ice_errorCode, const ::std::string& __ice_errorMessage, const ::com::renren::sixin::account::ThirdPartyProfilePtr& __ice_thirdProfile) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#else
    ::com::renren::sixin::account::BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#endif
,
    thirdProfile(__ice_thirdProfile)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::ThirdPartyResult::ice_clone() const
{
    ::com::renren::sixin::account::ThirdPartyResultPtr __p = new ::com::renren::sixin::account::ThirdPartyResult(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__ThirdPartyResult_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseResult",
    "::com::renren::sixin::account::ThirdPartyResult"
};

bool
com::renren::sixin::account::ThirdPartyResult::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__ThirdPartyResult_ids, __com__renren__sixin__account__ThirdPartyResult_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::ThirdPartyResult::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__ThirdPartyResult_ids[0], &__com__renren__sixin__account__ThirdPartyResult_ids[3]);
}

const ::std::string&
com::renren::sixin::account::ThirdPartyResult::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__ThirdPartyResult_ids[2];
}

const ::std::string&
com::renren::sixin::account::ThirdPartyResult::ice_staticId()
{
    return __com__renren__sixin__account__ThirdPartyResult_ids[2];
}

void
com::renren::sixin::account::ThirdPartyResult::__incRef()
{
    __gcIncRef();
}

void
com::renren::sixin::account::ThirdPartyResult::__decRef()
{
    __gcDecRef();
}

void
com::renren::sixin::account::ThirdPartyResult::__addObject(::IceInternal::GCCountMap& _c)
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
com::renren::sixin::account::ThirdPartyResult::__usesClasses()
{
    return true;
}

void
com::renren::sixin::account::ThirdPartyResult::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(thirdProfile)
    {
        ::IceInternal::upCast(thirdProfile.get())->__addObject(_c);
    }
}

void
com::renren::sixin::account::ThirdPartyResult::__gcClear()
{
    if(thirdProfile)
    {
        if(::IceInternal::upCast(thirdProfile.get())->__usesClasses())
        {
            ::IceInternal::upCast(thirdProfile.get())->__decRefUnsafe();
            thirdProfile.__clearHandleUnsafe();
        }
        else
        {
            thirdProfile = 0;
        }
    }
}

void
com::renren::sixin::account::ThirdPartyResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(thirdProfile.get())));
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__write(__os);
#else
    ::com::renren::sixin::account::BaseResult::__write(__os);
#endif
}

void
com::renren::sixin::account::ThirdPartyResult::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::com::renren::sixin::account::__patch__ThirdPartyProfilePtr, &thirdProfile);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseResult::__read(__is, true);
#endif
}

void
com::renren::sixin::account::ThirdPartyResult::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::ThirdPartyResult was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::ThirdPartyResult::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::ThirdPartyResult was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__ThirdPartyResult : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::ThirdPartyResult::ice_staticId());
        return new ::com::renren::sixin::account::ThirdPartyResult;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__ThirdPartyResult_Ptr = new __F__com__renren__sixin__account__ThirdPartyResult;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::ThirdPartyResult::ice_factory()
{
    return __F__com__renren__sixin__account__ThirdPartyResult_Ptr;
}

class __F__com__renren__sixin__account__ThirdPartyResult__Init
{
public:

    __F__com__renren__sixin__account__ThirdPartyResult__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::ThirdPartyResult::ice_staticId(), ::com::renren::sixin::account::ThirdPartyResult::ice_factory());
    }

    ~__F__com__renren__sixin__account__ThirdPartyResult__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::ThirdPartyResult::ice_staticId());
    }
};

static __F__com__renren__sixin__account__ThirdPartyResult__Init __F__com__renren__sixin__account__ThirdPartyResult__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__ThirdPartyResult__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__ThirdPartyResultPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::ThirdPartyResultPtr* p = static_cast< ::com::renren::sixin::account::ThirdPartyResultPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::ThirdPartyResultPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::ThirdPartyResult::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::ThirdPartyResult& l, const ::com::renren::sixin::account::ThirdPartyResult& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::ThirdPartyResult& l, const ::com::renren::sixin::account::ThirdPartyResult& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::renren::sixin::account::ThirdPartyContactsResult::ThirdPartyContactsResult(bool __ice_success, ::com::renren::sixin::account::AccountErrorCodeEnum __ice_errorCode, const ::std::string& __ice_errorMessage, const ::com::renren::sixin::account::ThirdPartyList& __ice_thirdPartyContact) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#else
    ::com::renren::sixin::account::BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#endif
,
    thirdPartyContact(__ice_thirdPartyContact)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::ThirdPartyContactsResult::ice_clone() const
{
    ::com::renren::sixin::account::ThirdPartyContactsResultPtr __p = new ::com::renren::sixin::account::ThirdPartyContactsResult(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__ThirdPartyContactsResult_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseResult",
    "::com::renren::sixin::account::ThirdPartyContactsResult"
};

bool
com::renren::sixin::account::ThirdPartyContactsResult::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__ThirdPartyContactsResult_ids, __com__renren__sixin__account__ThirdPartyContactsResult_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::ThirdPartyContactsResult::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__ThirdPartyContactsResult_ids[0], &__com__renren__sixin__account__ThirdPartyContactsResult_ids[3]);
}

const ::std::string&
com::renren::sixin::account::ThirdPartyContactsResult::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__ThirdPartyContactsResult_ids[2];
}

const ::std::string&
com::renren::sixin::account::ThirdPartyContactsResult::ice_staticId()
{
    return __com__renren__sixin__account__ThirdPartyContactsResult_ids[2];
}

void
com::renren::sixin::account::ThirdPartyContactsResult::__incRef()
{
    __gcIncRef();
}

void
com::renren::sixin::account::ThirdPartyContactsResult::__decRef()
{
    __gcDecRef();
}

void
com::renren::sixin::account::ThirdPartyContactsResult::__addObject(::IceInternal::GCCountMap& _c)
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
com::renren::sixin::account::ThirdPartyContactsResult::__usesClasses()
{
    return true;
}

void
com::renren::sixin::account::ThirdPartyContactsResult::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    {
        for(::com::renren::sixin::account::ThirdPartyList::const_iterator _i0 = thirdPartyContact.begin(); _i0 != thirdPartyContact.end(); ++_i0)
        {
            if((*_i0))
            {
                ::IceInternal::upCast((*_i0).get())->__addObject(_c);
            }
        }
    }
}

void
com::renren::sixin::account::ThirdPartyContactsResult::__gcClear()
{
    {
        for(::com::renren::sixin::account::ThirdPartyList::iterator _i0 = thirdPartyContact.begin(); _i0 != thirdPartyContact.end(); ++_i0)
        {
            if((*_i0))
            {
                if(::IceInternal::upCast((*_i0).get())->__usesClasses())
                {
                    ::IceInternal::upCast((*_i0).get())->__decRefUnsafe();
                    (*_i0).__clearHandleUnsafe();
                }
                else
                {
                    (*_i0) = 0;
                }
            }
        }
    }
}

void
com::renren::sixin::account::ThirdPartyContactsResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    if(thirdPartyContact.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::com::renren::sixin::account::__writeThirdPartyList(__os, &thirdPartyContact[0], &thirdPartyContact[0] + thirdPartyContact.size());
    }
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__write(__os);
#else
    ::com::renren::sixin::account::BaseResult::__write(__os);
#endif
}

void
com::renren::sixin::account::ThirdPartyContactsResult::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    ::com::renren::sixin::account::__readThirdPartyList(__is, thirdPartyContact);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseResult::__read(__is, true);
#endif
}

void
com::renren::sixin::account::ThirdPartyContactsResult::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::ThirdPartyContactsResult was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::ThirdPartyContactsResult::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::ThirdPartyContactsResult was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__ThirdPartyContactsResult : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::ThirdPartyContactsResult::ice_staticId());
        return new ::com::renren::sixin::account::ThirdPartyContactsResult;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__ThirdPartyContactsResult_Ptr = new __F__com__renren__sixin__account__ThirdPartyContactsResult;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::ThirdPartyContactsResult::ice_factory()
{
    return __F__com__renren__sixin__account__ThirdPartyContactsResult_Ptr;
}

class __F__com__renren__sixin__account__ThirdPartyContactsResult__Init
{
public:

    __F__com__renren__sixin__account__ThirdPartyContactsResult__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::ThirdPartyContactsResult::ice_staticId(), ::com::renren::sixin::account::ThirdPartyContactsResult::ice_factory());
    }

    ~__F__com__renren__sixin__account__ThirdPartyContactsResult__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::ThirdPartyContactsResult::ice_staticId());
    }
};

static __F__com__renren__sixin__account__ThirdPartyContactsResult__Init __F__com__renren__sixin__account__ThirdPartyContactsResult__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__ThirdPartyContactsResult__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__ThirdPartyContactsResultPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::ThirdPartyContactsResultPtr* p = static_cast< ::com::renren::sixin::account::ThirdPartyContactsResultPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::ThirdPartyContactsResultPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::ThirdPartyContactsResult::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::ThirdPartyContactsResult& l, const ::com::renren::sixin::account::ThirdPartyContactsResult& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::ThirdPartyContactsResult& l, const ::com::renren::sixin::account::ThirdPartyContactsResult& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::renren::sixin::account::SixinIdsResult::SixinIdsResult(bool __ice_success, ::com::renren::sixin::account::AccountErrorCodeEnum __ice_errorCode, const ::std::string& __ice_errorMessage, const ::com::renren::sixin::account::Str2LongMap& __ice_sixinIds) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#else
    ::com::renren::sixin::account::BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#endif
,
    sixinIds(__ice_sixinIds)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::SixinIdsResult::ice_clone() const
{
    ::com::renren::sixin::account::SixinIdsResultPtr __p = new ::com::renren::sixin::account::SixinIdsResult(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__SixinIdsResult_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseResult",
    "::com::renren::sixin::account::SixinIdsResult"
};

bool
com::renren::sixin::account::SixinIdsResult::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__SixinIdsResult_ids, __com__renren__sixin__account__SixinIdsResult_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::SixinIdsResult::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__SixinIdsResult_ids[0], &__com__renren__sixin__account__SixinIdsResult_ids[3]);
}

const ::std::string&
com::renren::sixin::account::SixinIdsResult::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__SixinIdsResult_ids[2];
}

const ::std::string&
com::renren::sixin::account::SixinIdsResult::ice_staticId()
{
    return __com__renren__sixin__account__SixinIdsResult_ids[2];
}

void
com::renren::sixin::account::SixinIdsResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    ::com::renren::sixin::account::__writeStr2LongMap(__os, sixinIds);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__write(__os);
#else
    ::com::renren::sixin::account::BaseResult::__write(__os);
#endif
}

void
com::renren::sixin::account::SixinIdsResult::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    ::com::renren::sixin::account::__readStr2LongMap(__is, sixinIds);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseResult::__read(__is, true);
#endif
}

void
com::renren::sixin::account::SixinIdsResult::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::SixinIdsResult was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::SixinIdsResult::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::SixinIdsResult was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__SixinIdsResult : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::SixinIdsResult::ice_staticId());
        return new ::com::renren::sixin::account::SixinIdsResult;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__SixinIdsResult_Ptr = new __F__com__renren__sixin__account__SixinIdsResult;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::SixinIdsResult::ice_factory()
{
    return __F__com__renren__sixin__account__SixinIdsResult_Ptr;
}

class __F__com__renren__sixin__account__SixinIdsResult__Init
{
public:

    __F__com__renren__sixin__account__SixinIdsResult__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::SixinIdsResult::ice_staticId(), ::com::renren::sixin::account::SixinIdsResult::ice_factory());
    }

    ~__F__com__renren__sixin__account__SixinIdsResult__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::SixinIdsResult::ice_staticId());
    }
};

static __F__com__renren__sixin__account__SixinIdsResult__Init __F__com__renren__sixin__account__SixinIdsResult__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__SixinIdsResult__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__SixinIdsResultPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::SixinIdsResultPtr* p = static_cast< ::com::renren::sixin::account::SixinIdsResultPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::SixinIdsResultPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::SixinIdsResult::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::SixinIdsResult& l, const ::com::renren::sixin::account::SixinIdsResult& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::SixinIdsResult& l, const ::com::renren::sixin::account::SixinIdsResult& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::renren::sixin::account::SixinAccount::SixinAccount(::Ice::Long __ice_id, ::Ice::Int __ice_status) :
    id(__ice_id),
    status(__ice_status)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::SixinAccount::ice_clone() const
{
    ::com::renren::sixin::account::SixinAccountPtr __p = new ::com::renren::sixin::account::SixinAccount(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__SixinAccount_ids[2] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::SixinAccount"
};

bool
com::renren::sixin::account::SixinAccount::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__SixinAccount_ids, __com__renren__sixin__account__SixinAccount_ids + 2, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::SixinAccount::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__SixinAccount_ids[0], &__com__renren__sixin__account__SixinAccount_ids[2]);
}

const ::std::string&
com::renren::sixin::account::SixinAccount::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__SixinAccount_ids[1];
}

const ::std::string&
com::renren::sixin::account::SixinAccount::ice_staticId()
{
    return __com__renren__sixin__account__SixinAccount_ids[1];
}

void
com::renren::sixin::account::SixinAccount::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(id);
    __os->write(status);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
com::renren::sixin::account::SixinAccount::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(id);
    __is->read(status);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
com::renren::sixin::account::SixinAccount::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::SixinAccount was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::SixinAccount::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::SixinAccount was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__SixinAccount : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::SixinAccount::ice_staticId());
        return new ::com::renren::sixin::account::SixinAccount;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__SixinAccount_Ptr = new __F__com__renren__sixin__account__SixinAccount;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::SixinAccount::ice_factory()
{
    return __F__com__renren__sixin__account__SixinAccount_Ptr;
}

class __F__com__renren__sixin__account__SixinAccount__Init
{
public:

    __F__com__renren__sixin__account__SixinAccount__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::SixinAccount::ice_staticId(), ::com::renren::sixin::account::SixinAccount::ice_factory());
    }

    ~__F__com__renren__sixin__account__SixinAccount__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::SixinAccount::ice_staticId());
    }
};

static __F__com__renren__sixin__account__SixinAccount__Init __F__com__renren__sixin__account__SixinAccount__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__SixinAccount__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__SixinAccountPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::SixinAccountPtr* p = static_cast< ::com::renren::sixin::account::SixinAccountPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::SixinAccountPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::SixinAccount::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::SixinAccount& l, const ::com::renren::sixin::account::SixinAccount& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::SixinAccount& l, const ::com::renren::sixin::account::SixinAccount& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::renren::sixin::account::SixinAccountResult::SixinAccountResult(bool __ice_success, ::com::renren::sixin::account::AccountErrorCodeEnum __ice_errorCode, const ::std::string& __ice_errorMessage, const ::com::renren::sixin::account::SixinAccountPtr& __ice_account) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#else
    ::com::renren::sixin::account::BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#endif
,
    account(__ice_account)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::SixinAccountResult::ice_clone() const
{
    ::com::renren::sixin::account::SixinAccountResultPtr __p = new ::com::renren::sixin::account::SixinAccountResult(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__SixinAccountResult_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseResult",
    "::com::renren::sixin::account::SixinAccountResult"
};

bool
com::renren::sixin::account::SixinAccountResult::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__SixinAccountResult_ids, __com__renren__sixin__account__SixinAccountResult_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::SixinAccountResult::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__SixinAccountResult_ids[0], &__com__renren__sixin__account__SixinAccountResult_ids[3]);
}

const ::std::string&
com::renren::sixin::account::SixinAccountResult::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__SixinAccountResult_ids[2];
}

const ::std::string&
com::renren::sixin::account::SixinAccountResult::ice_staticId()
{
    return __com__renren__sixin__account__SixinAccountResult_ids[2];
}

void
com::renren::sixin::account::SixinAccountResult::__incRef()
{
    __gcIncRef();
}

void
com::renren::sixin::account::SixinAccountResult::__decRef()
{
    __gcDecRef();
}

void
com::renren::sixin::account::SixinAccountResult::__addObject(::IceInternal::GCCountMap& _c)
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
com::renren::sixin::account::SixinAccountResult::__usesClasses()
{
    return true;
}

void
com::renren::sixin::account::SixinAccountResult::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(account)
    {
        ::IceInternal::upCast(account.get())->__addObject(_c);
    }
}

void
com::renren::sixin::account::SixinAccountResult::__gcClear()
{
    if(account)
    {
        if(::IceInternal::upCast(account.get())->__usesClasses())
        {
            ::IceInternal::upCast(account.get())->__decRefUnsafe();
            account.__clearHandleUnsafe();
        }
        else
        {
            account = 0;
        }
    }
}

void
com::renren::sixin::account::SixinAccountResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(account.get())));
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__write(__os);
#else
    ::com::renren::sixin::account::BaseResult::__write(__os);
#endif
}

void
com::renren::sixin::account::SixinAccountResult::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(::com::renren::sixin::account::__patch__SixinAccountPtr, &account);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseResult::__read(__is, true);
#endif
}

void
com::renren::sixin::account::SixinAccountResult::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::SixinAccountResult was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::SixinAccountResult::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::SixinAccountResult was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__SixinAccountResult : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::SixinAccountResult::ice_staticId());
        return new ::com::renren::sixin::account::SixinAccountResult;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__SixinAccountResult_Ptr = new __F__com__renren__sixin__account__SixinAccountResult;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::SixinAccountResult::ice_factory()
{
    return __F__com__renren__sixin__account__SixinAccountResult_Ptr;
}

class __F__com__renren__sixin__account__SixinAccountResult__Init
{
public:

    __F__com__renren__sixin__account__SixinAccountResult__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::SixinAccountResult::ice_staticId(), ::com::renren::sixin::account::SixinAccountResult::ice_factory());
    }

    ~__F__com__renren__sixin__account__SixinAccountResult__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::SixinAccountResult::ice_staticId());
    }
};

static __F__com__renren__sixin__account__SixinAccountResult__Init __F__com__renren__sixin__account__SixinAccountResult__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__SixinAccountResult__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__SixinAccountResultPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::SixinAccountResultPtr* p = static_cast< ::com::renren::sixin::account::SixinAccountResultPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::SixinAccountResultPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::SixinAccountResult::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::SixinAccountResult& l, const ::com::renren::sixin::account::SixinAccountResult& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::SixinAccountResult& l, const ::com::renren::sixin::account::SixinAccountResult& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::renren::sixin::account::BundAccountIdsResult::BundAccountIdsResult(bool __ice_success, ::com::renren::sixin::account::AccountErrorCodeEnum __ice_errorCode, const ::std::string& __ice_errorMessage, const ::com::renren::sixin::account::Long2StrMap& __ice_bundAccountIds) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#else
    ::com::renren::sixin::account::BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#endif
,
    bundAccountIds(__ice_bundAccountIds)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::BundAccountIdsResult::ice_clone() const
{
    ::com::renren::sixin::account::BundAccountIdsResultPtr __p = new ::com::renren::sixin::account::BundAccountIdsResult(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__BundAccountIdsResult_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseResult",
    "::com::renren::sixin::account::BundAccountIdsResult"
};

bool
com::renren::sixin::account::BundAccountIdsResult::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__BundAccountIdsResult_ids, __com__renren__sixin__account__BundAccountIdsResult_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::BundAccountIdsResult::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__BundAccountIdsResult_ids[0], &__com__renren__sixin__account__BundAccountIdsResult_ids[3]);
}

const ::std::string&
com::renren::sixin::account::BundAccountIdsResult::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__BundAccountIdsResult_ids[2];
}

const ::std::string&
com::renren::sixin::account::BundAccountIdsResult::ice_staticId()
{
    return __com__renren__sixin__account__BundAccountIdsResult_ids[2];
}

void
com::renren::sixin::account::BundAccountIdsResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    ::com::renren::sixin::account::__writeLong2StrMap(__os, bundAccountIds);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__write(__os);
#else
    ::com::renren::sixin::account::BaseResult::__write(__os);
#endif
}

void
com::renren::sixin::account::BundAccountIdsResult::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    ::com::renren::sixin::account::__readLong2StrMap(__is, bundAccountIds);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseResult::__read(__is, true);
#endif
}

void
com::renren::sixin::account::BundAccountIdsResult::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::BundAccountIdsResult was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::BundAccountIdsResult::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::BundAccountIdsResult was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__BundAccountIdsResult : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::BundAccountIdsResult::ice_staticId());
        return new ::com::renren::sixin::account::BundAccountIdsResult;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__BundAccountIdsResult_Ptr = new __F__com__renren__sixin__account__BundAccountIdsResult;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::BundAccountIdsResult::ice_factory()
{
    return __F__com__renren__sixin__account__BundAccountIdsResult_Ptr;
}

class __F__com__renren__sixin__account__BundAccountIdsResult__Init
{
public:

    __F__com__renren__sixin__account__BundAccountIdsResult__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::BundAccountIdsResult::ice_staticId(), ::com::renren::sixin::account::BundAccountIdsResult::ice_factory());
    }

    ~__F__com__renren__sixin__account__BundAccountIdsResult__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::BundAccountIdsResult::ice_staticId());
    }
};

static __F__com__renren__sixin__account__BundAccountIdsResult__Init __F__com__renren__sixin__account__BundAccountIdsResult__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__BundAccountIdsResult__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__BundAccountIdsResultPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::BundAccountIdsResultPtr* p = static_cast< ::com::renren::sixin::account::BundAccountIdsResultPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::BundAccountIdsResultPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::BundAccountIdsResult::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::BundAccountIdsResult& l, const ::com::renren::sixin::account::BundAccountIdsResult& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::BundAccountIdsResult& l, const ::com::renren::sixin::account::BundAccountIdsResult& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::renren::sixin::account::SixinAccountsResult::SixinAccountsResult(bool __ice_success, ::com::renren::sixin::account::AccountErrorCodeEnum __ice_errorCode, const ::std::string& __ice_errorMessage, const ::com::renren::sixin::account::Str2AccMap& __ice_sixinAccounts) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#else
    ::com::renren::sixin::account::BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#endif
,
    sixinAccounts(__ice_sixinAccounts)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::SixinAccountsResult::ice_clone() const
{
    ::com::renren::sixin::account::SixinAccountsResultPtr __p = new ::com::renren::sixin::account::SixinAccountsResult(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__SixinAccountsResult_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseResult",
    "::com::renren::sixin::account::SixinAccountsResult"
};

bool
com::renren::sixin::account::SixinAccountsResult::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__SixinAccountsResult_ids, __com__renren__sixin__account__SixinAccountsResult_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::SixinAccountsResult::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__SixinAccountsResult_ids[0], &__com__renren__sixin__account__SixinAccountsResult_ids[3]);
}

const ::std::string&
com::renren::sixin::account::SixinAccountsResult::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__SixinAccountsResult_ids[2];
}

const ::std::string&
com::renren::sixin::account::SixinAccountsResult::ice_staticId()
{
    return __com__renren__sixin__account__SixinAccountsResult_ids[2];
}

void
com::renren::sixin::account::SixinAccountsResult::__incRef()
{
    __gcIncRef();
}

void
com::renren::sixin::account::SixinAccountsResult::__decRef()
{
    __gcDecRef();
}

void
com::renren::sixin::account::SixinAccountsResult::__addObject(::IceInternal::GCCountMap& _c)
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
com::renren::sixin::account::SixinAccountsResult::__usesClasses()
{
    return true;
}

void
com::renren::sixin::account::SixinAccountsResult::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    {
        for(::com::renren::sixin::account::Str2AccMap::const_iterator _i0 = sixinAccounts.begin(); _i0 != sixinAccounts.end(); ++_i0)
        {
            if((*_i0).second)
            {
                ::IceInternal::upCast((*_i0).second.get())->__addObject(_c);
            }
        }
    }
}

void
com::renren::sixin::account::SixinAccountsResult::__gcClear()
{
    {
        for(::com::renren::sixin::account::Str2AccMap::iterator _i0 = sixinAccounts.begin(); _i0 != sixinAccounts.end(); ++_i0)
        {
            if((*_i0).second)
            {
                if(::IceInternal::upCast((*_i0).second.get())->__usesClasses())
                {
                    ::IceInternal::upCast((*_i0).second.get())->__decRefUnsafe();
                    (*_i0).second.__clearHandleUnsafe();
                }
                else
                {
                    (*_i0).second = 0;
                }
            }
        }
    }
}

void
com::renren::sixin::account::SixinAccountsResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    ::com::renren::sixin::account::__writeStr2AccMap(__os, sixinAccounts);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__write(__os);
#else
    ::com::renren::sixin::account::BaseResult::__write(__os);
#endif
}

void
com::renren::sixin::account::SixinAccountsResult::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    ::com::renren::sixin::account::__readStr2AccMap(__is, sixinAccounts);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseResult::__read(__is, true);
#endif
}

void
com::renren::sixin::account::SixinAccountsResult::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::SixinAccountsResult was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::SixinAccountsResult::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::SixinAccountsResult was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__SixinAccountsResult : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::SixinAccountsResult::ice_staticId());
        return new ::com::renren::sixin::account::SixinAccountsResult;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__SixinAccountsResult_Ptr = new __F__com__renren__sixin__account__SixinAccountsResult;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::SixinAccountsResult::ice_factory()
{
    return __F__com__renren__sixin__account__SixinAccountsResult_Ptr;
}

class __F__com__renren__sixin__account__SixinAccountsResult__Init
{
public:

    __F__com__renren__sixin__account__SixinAccountsResult__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::SixinAccountsResult::ice_staticId(), ::com::renren::sixin::account::SixinAccountsResult::ice_factory());
    }

    ~__F__com__renren__sixin__account__SixinAccountsResult__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::SixinAccountsResult::ice_staticId());
    }
};

static __F__com__renren__sixin__account__SixinAccountsResult__Init __F__com__renren__sixin__account__SixinAccountsResult__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__SixinAccountsResult__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__SixinAccountsResultPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::SixinAccountsResultPtr* p = static_cast< ::com::renren::sixin::account::SixinAccountsResultPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::SixinAccountsResultPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::SixinAccountsResult::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::SixinAccountsResult& l, const ::com::renren::sixin::account::SixinAccountsResult& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::SixinAccountsResult& l, const ::com::renren::sixin::account::SixinAccountsResult& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::renren::sixin::account::BoundInfosResult::BoundInfosResult(bool __ice_success, ::com::renren::sixin::account::AccountErrorCodeEnum __ice_errorCode, const ::std::string& __ice_errorMessage, const ::com::renren::sixin::account::BoundInfoList& __ice_boundInfos) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#else
    ::com::renren::sixin::account::BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#endif
,
    boundInfos(__ice_boundInfos)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::BoundInfosResult::ice_clone() const
{
    ::com::renren::sixin::account::BoundInfosResultPtr __p = new ::com::renren::sixin::account::BoundInfosResult(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__BoundInfosResult_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseResult",
    "::com::renren::sixin::account::BoundInfosResult"
};

bool
com::renren::sixin::account::BoundInfosResult::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__BoundInfosResult_ids, __com__renren__sixin__account__BoundInfosResult_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::BoundInfosResult::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__BoundInfosResult_ids[0], &__com__renren__sixin__account__BoundInfosResult_ids[3]);
}

const ::std::string&
com::renren::sixin::account::BoundInfosResult::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__BoundInfosResult_ids[2];
}

const ::std::string&
com::renren::sixin::account::BoundInfosResult::ice_staticId()
{
    return __com__renren__sixin__account__BoundInfosResult_ids[2];
}

void
com::renren::sixin::account::BoundInfosResult::__incRef()
{
    __gcIncRef();
}

void
com::renren::sixin::account::BoundInfosResult::__decRef()
{
    __gcDecRef();
}

void
com::renren::sixin::account::BoundInfosResult::__addObject(::IceInternal::GCCountMap& _c)
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
com::renren::sixin::account::BoundInfosResult::__usesClasses()
{
    return true;
}

void
com::renren::sixin::account::BoundInfosResult::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    {
        for(::com::renren::sixin::account::BoundInfoList::const_iterator _i0 = boundInfos.begin(); _i0 != boundInfos.end(); ++_i0)
        {
            if((*_i0))
            {
                ::IceInternal::upCast((*_i0).get())->__addObject(_c);
            }
        }
    }
}

void
com::renren::sixin::account::BoundInfosResult::__gcClear()
{
    {
        for(::com::renren::sixin::account::BoundInfoList::iterator _i0 = boundInfos.begin(); _i0 != boundInfos.end(); ++_i0)
        {
            if((*_i0))
            {
                if(::IceInternal::upCast((*_i0).get())->__usesClasses())
                {
                    ::IceInternal::upCast((*_i0).get())->__decRefUnsafe();
                    (*_i0).__clearHandleUnsafe();
                }
                else
                {
                    (*_i0) = 0;
                }
            }
        }
    }
}

void
com::renren::sixin::account::BoundInfosResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    if(boundInfos.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::com::renren::sixin::account::__writeBoundInfoList(__os, &boundInfos[0], &boundInfos[0] + boundInfos.size());
    }
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__write(__os);
#else
    ::com::renren::sixin::account::BaseResult::__write(__os);
#endif
}

void
com::renren::sixin::account::BoundInfosResult::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    ::com::renren::sixin::account::__readBoundInfoList(__is, boundInfos);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseResult::__read(__is, true);
#endif
}

void
com::renren::sixin::account::BoundInfosResult::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::BoundInfosResult was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::BoundInfosResult::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::BoundInfosResult was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__BoundInfosResult : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::BoundInfosResult::ice_staticId());
        return new ::com::renren::sixin::account::BoundInfosResult;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__BoundInfosResult_Ptr = new __F__com__renren__sixin__account__BoundInfosResult;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::BoundInfosResult::ice_factory()
{
    return __F__com__renren__sixin__account__BoundInfosResult_Ptr;
}

class __F__com__renren__sixin__account__BoundInfosResult__Init
{
public:

    __F__com__renren__sixin__account__BoundInfosResult__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::BoundInfosResult::ice_staticId(), ::com::renren::sixin::account::BoundInfosResult::ice_factory());
    }

    ~__F__com__renren__sixin__account__BoundInfosResult__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::BoundInfosResult::ice_staticId());
    }
};

static __F__com__renren__sixin__account__BoundInfosResult__Init __F__com__renren__sixin__account__BoundInfosResult__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__BoundInfosResult__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__BoundInfosResultPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::BoundInfosResultPtr* p = static_cast< ::com::renren::sixin::account::BoundInfosResultPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::BoundInfosResultPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::BoundInfosResult::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::BoundInfosResult& l, const ::com::renren::sixin::account::BoundInfosResult& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::BoundInfosResult& l, const ::com::renren::sixin::account::BoundInfosResult& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
com::renren::sixin::account::BindThirdPartyService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__renren__sixin__account__BindThirdPartyService_ids[2] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BindThirdPartyService"
};

bool
com::renren::sixin::account::BindThirdPartyService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__BindThirdPartyService_ids, __com__renren__sixin__account__BindThirdPartyService_ids + 2, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::BindThirdPartyService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__BindThirdPartyService_ids[0], &__com__renren__sixin__account__BindThirdPartyService_ids[2]);
}

const ::std::string&
com::renren::sixin::account::BindThirdPartyService::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__BindThirdPartyService_ids[1];
}

const ::std::string&
com::renren::sixin::account::BindThirdPartyService::ice_staticId()
{
    return __com__renren__sixin__account__BindThirdPartyService_ids[1];
}

::Ice::DispatchStatus
com::renren::sixin::account::BindThirdPartyService::___bindRenRenAccount(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::std::string newOutAccount;
    ::std::string password;
    __is->read(userId);
    __is->read(newOutAccount);
    __is->read(password);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BoundInfoResultPtr __ret = bindRenRenAccount(userId, newOutAccount, password, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::BindThirdPartyService::___bindThirdPartyAccount(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::com::renren::sixin::account::TokenInfoPtr token;
    ::com::renren::sixin::account::BindAccountEnum accountType;
    __is->read(userId);
    __is->read(::com::renren::sixin::account::__patch__TokenInfoPtr, &token);
    ::com::renren::sixin::account::__read(__is, accountType);
    __is->readPendingObjects();
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BoundInfoResultPtr __ret = bindThirdPartyAccount(userId, token, accountType, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::BindThirdPartyService::___unBindOutAccount(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::std::string newOutAccount;
    ::com::renren::sixin::account::BindAccountEnum accountType;
    __is->read(userId);
    __is->read(newOutAccount);
    ::com::renren::sixin::account::__read(__is, accountType);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BaseResultPtr __ret = unBindOutAccount(userId, newOutAccount, accountType, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::BindThirdPartyService::___getSixinAccount(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string boundAccountId;
    ::com::renren::sixin::account::BindAccountEnum accountType;
    __is->read(boundAccountId);
    ::com::renren::sixin::account::__read(__is, accountType);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::SixinAccountResultPtr __ret = getSixinAccount(boundAccountId, accountType, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::BindThirdPartyService::___getBoundAccountId(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long sixinId;
    ::com::renren::sixin::account::BindAccountEnum accountType;
    __is->read(sixinId);
    ::com::renren::sixin::account::__read(__is, accountType);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::StringResultPtr __ret = getBoundAccountId(sixinId, accountType, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::BindThirdPartyService::___getSixinAccounts(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::renren::sixin::account::StrList boundAccountIds;
    ::com::renren::sixin::account::BindAccountEnum accountType;
    __is->read(boundAccountIds);
    ::com::renren::sixin::account::__read(__is, accountType);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::SixinAccountsResultPtr __ret = getSixinAccounts(boundAccountIds, accountType, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::BindThirdPartyService::___getSixinIds(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::renren::sixin::account::StrList boundAccountIds;
    ::com::renren::sixin::account::BindAccountEnum accountType;
    __is->read(boundAccountIds);
    ::com::renren::sixin::account::__read(__is, accountType);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::SixinIdsResultPtr __ret = getSixinIds(boundAccountIds, accountType, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::BindThirdPartyService::___getSixinId(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string boundAccountId;
    ::com::renren::sixin::account::BindAccountEnum accountType;
    __is->read(boundAccountId);
    ::com::renren::sixin::account::__read(__is, accountType);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::LongResultPtr __ret = getSixinId(boundAccountId, accountType, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::BindThirdPartyService::___getBoundAccountIds(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::renren::sixin::account::LongList sixinIds;
    ::com::renren::sixin::account::BindAccountEnum accountType;
    __is->read(sixinIds);
    ::com::renren::sixin::account::__read(__is, accountType);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BundAccountIdsResultPtr __ret = getBoundAccountIds(sixinIds, accountType, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::BindThirdPartyService::___getBoundInfos(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    __is->read(userId);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BoundInfosResultPtr __ret = getBoundInfos(userId, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::BindThirdPartyService::___getThirdPartyFriendCount(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long sixinID;
    ::com::renren::sixin::account::BindAccountEnum accountType;
    __is->read(sixinID);
    ::com::renren::sixin::account::__read(__is, accountType);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::IntResultPtr __ret = getThirdPartyFriendCount(sixinID, accountType, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::BindThirdPartyService::___getThirdPartyFriendList(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long sixinID;
    ::com::renren::sixin::account::BindAccountEnum accountType;
    ::Ice::Int begin;
    ::Ice::Int num;
    __is->read(sixinID);
    ::com::renren::sixin::account::__read(__is, accountType);
    __is->read(begin);
    __is->read(num);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::ThirdPartyContactsResultPtr __ret = getThirdPartyFriendList(sixinID, accountType, begin, num, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::BindThirdPartyService::___getThirdPartyFriendDetail(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long sixinID;
    ::std::string thirdPartyID;
    ::com::renren::sixin::account::BindAccountEnum accountType;
    __is->read(sixinID);
    __is->read(thirdPartyID);
    ::com::renren::sixin::account::__read(__is, accountType);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::ThirdPartyResultPtr __ret = getThirdPartyFriendDetail(sixinID, thirdPartyID, accountType, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::BindThirdPartyService::___getThirdPartyFriendBySixinId(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long sixinID;
    ::Ice::Long thirdPartySixinID;
    ::com::renren::sixin::account::BindAccountEnum accountType;
    __is->read(sixinID);
    __is->read(thirdPartySixinID);
    ::com::renren::sixin::account::__read(__is, accountType);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::ThirdPartyResultPtr __ret = getThirdPartyFriendBySixinId(sixinID, thirdPartySixinID, accountType, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

static ::std::string __com__renren__sixin__account__BindThirdPartyService_all[] =
{
    "bindRenRenAccount",
    "bindThirdPartyAccount",
    "getBoundAccountId",
    "getBoundAccountIds",
    "getBoundInfos",
    "getSixinAccount",
    "getSixinAccounts",
    "getSixinId",
    "getSixinIds",
    "getThirdPartyFriendBySixinId",
    "getThirdPartyFriendCount",
    "getThirdPartyFriendDetail",
    "getThirdPartyFriendList",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "unBindOutAccount"
};

::Ice::DispatchStatus
com::renren::sixin::account::BindThirdPartyService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__renren__sixin__account__BindThirdPartyService_all, __com__renren__sixin__account__BindThirdPartyService_all + 18, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__renren__sixin__account__BindThirdPartyService_all)
    {
        case 0:
        {
            return ___bindRenRenAccount(in, current);
        }
        case 1:
        {
            return ___bindThirdPartyAccount(in, current);
        }
        case 2:
        {
            return ___getBoundAccountId(in, current);
        }
        case 3:
        {
            return ___getBoundAccountIds(in, current);
        }
        case 4:
        {
            return ___getBoundInfos(in, current);
        }
        case 5:
        {
            return ___getSixinAccount(in, current);
        }
        case 6:
        {
            return ___getSixinAccounts(in, current);
        }
        case 7:
        {
            return ___getSixinId(in, current);
        }
        case 8:
        {
            return ___getSixinIds(in, current);
        }
        case 9:
        {
            return ___getThirdPartyFriendBySixinId(in, current);
        }
        case 10:
        {
            return ___getThirdPartyFriendCount(in, current);
        }
        case 11:
        {
            return ___getThirdPartyFriendDetail(in, current);
        }
        case 12:
        {
            return ___getThirdPartyFriendList(in, current);
        }
        case 13:
        {
            return ___ice_id(in, current);
        }
        case 14:
        {
            return ___ice_ids(in, current);
        }
        case 15:
        {
            return ___ice_isA(in, current);
        }
        case 16:
        {
            return ___ice_ping(in, current);
        }
        case 17:
        {
            return ___unBindOutAccount(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::renren::sixin::account::BindThirdPartyService::__write(::IceInternal::BasicStream* __os) const
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
com::renren::sixin::account::BindThirdPartyService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::renren::sixin::account::BindThirdPartyService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::BindThirdPartyService was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::BindThirdPartyService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::BindThirdPartyService was not generated with stream support";
    throw ex;
}

void 
com::renren::sixin::account::__patch__BindThirdPartyServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::BindThirdPartyServicePtr* p = static_cast< ::com::renren::sixin::account::BindThirdPartyServicePtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::BindThirdPartyServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::BindThirdPartyService::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::BindThirdPartyService& l, const ::com::renren::sixin::account::BindThirdPartyService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::BindThirdPartyService& l, const ::com::renren::sixin::account::BindThirdPartyService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
