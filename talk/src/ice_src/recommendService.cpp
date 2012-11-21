// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `recommendService.ice'

#include <recommendService.h>
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

static const ::std::string __com__renren__sixin__account__RecommendService__getRecomMsgs_name = "getRecomMsgs";

static const ::std::string __com__renren__sixin__account__RecommendService__recommendRelationShips_name = "recommendRelationShips";

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::RelationShip* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::RelationShip* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::Message* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::Message* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::RecomMsgsResult* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::RecomMsgsResult* p) { return p; }

::Ice::Object* IceInternal::upCast(::com::renren::sixin::account::RecommendService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::renren::sixin::account::RecommendService* p) { return p; }

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::RelationShipPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::RelationShip;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::MessagePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::Message;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::RecomMsgsResultPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::RecomMsgsResult;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::RecommendServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::renren::sixin::account::RecommendService;
        v->__copyFrom(proxy);
    }
}

void
com::renren::sixin::account::__write(::IceInternal::BasicStream* __os, ::com::renren::sixin::account::RelationTypeEnum v)
{
    __os->write(static_cast< ::Ice::Byte>(v), 3);
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::RelationTypeEnum& v)
{
    ::Ice::Byte val;
    __is->read(val, 3);
    v = static_cast< ::com::renren::sixin::account::RelationTypeEnum>(val);
}

void
com::renren::sixin::account::__writeRelationShipList(::IceInternal::BasicStream* __os, const ::com::renren::sixin::account::RelationShipPtr* begin, const ::com::renren::sixin::account::RelationShipPtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
com::renren::sixin::account::__readRelationShipList(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::RelationShipList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::com::renren::sixin::account::__patch__RelationShipPtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
com::renren::sixin::account::__writeRecomMsgList(::IceInternal::BasicStream* __os, const ::com::renren::sixin::account::MessagePtr* begin, const ::com::renren::sixin::account::MessagePtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
com::renren::sixin::account::__readRecomMsgList(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::RecomMsgList& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::com::renren::sixin::account::__patch__MessagePtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

const ::std::string&
IceProxy::com::renren::sixin::account::RelationShip::ice_staticId()
{
    return ::com::renren::sixin::account::RelationShip::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::RelationShip::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::RelationShip);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::RelationShip::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::RelationShip);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::RelationShip::__newInstance() const
{
    return new RelationShip;
}

const ::std::string&
IceProxy::com::renren::sixin::account::Message::ice_staticId()
{
    return ::com::renren::sixin::account::Message::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::Message::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::Message);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::Message::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::Message);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::Message::__newInstance() const
{
    return new Message;
}

const ::std::string&
IceProxy::com::renren::sixin::account::RecomMsgsResult::ice_staticId()
{
    return ::com::renren::sixin::account::RecomMsgsResult::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::RecomMsgsResult::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::RecomMsgsResult);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::RecomMsgsResult::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::RecomMsgsResult);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::RecomMsgsResult::__newInstance() const
{
    return new RecomMsgsResult;
}

::com::renren::sixin::account::RecomMsgsResultPtr
IceProxy::com::renren::sixin::account::RecommendService::getRecomMsgs(::Ice::Long userId, bool isDone, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RecommendService__getRecomMsgs_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RecommendService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RecommendService*>(__delBase.get());
            return __del->getRecomMsgs(userId, isDone, __ctx);
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
IceProxy::com::renren::sixin::account::RecommendService::recommendRelationShips(const ::com::renren::sixin::account::RelationShipList& relationShip, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __ctx)
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
            __checkTwowayOnly(__com__renren__sixin__account__RecommendService__recommendRelationShips_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::com::renren::sixin::account::RecommendService* __del = dynamic_cast< ::IceDelegate::com::renren::sixin::account::RecommendService*>(__delBase.get());
            return __del->recommendRelationShips(relationShip, accountType, __ctx);
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
IceProxy::com::renren::sixin::account::RecommendService::ice_staticId()
{
    return ::com::renren::sixin::account::RecommendService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::renren::sixin::account::RecommendService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::renren::sixin::account::RecommendService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::renren::sixin::account::RecommendService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::renren::sixin::account::RecommendService);
}

::IceProxy::Ice::Object*
IceProxy::com::renren::sixin::account::RecommendService::__newInstance() const
{
    return new RecommendService;
}

::com::renren::sixin::account::RecomMsgsResultPtr
IceDelegateM::com::renren::sixin::account::RecommendService::getRecomMsgs(::Ice::Long userId, bool isDone, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RecommendService__getRecomMsgs_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(isDone);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::com::renren::sixin::account::RecomMsgsResultPtr __ret;
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
        __is->read(::com::renren::sixin::account::__patch__RecomMsgsResultPtr, &__ret);
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
IceDelegateM::com::renren::sixin::account::RecommendService::recommendRelationShips(const ::com::renren::sixin::account::RelationShipList& relationShip, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__renren__sixin__account__RecommendService__recommendRelationShips_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        if(relationShip.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            ::com::renren::sixin::account::__writeRelationShipList(__os, &relationShip[0], &relationShip[0] + relationShip.size());
        }
        ::com::renren::sixin::account::__write(__os, accountType);
        __os->writePendingObjects();
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

::com::renren::sixin::account::RecomMsgsResultPtr
IceDelegateD::com::renren::sixin::account::RecommendService::getRecomMsgs(::Ice::Long userId, bool isDone, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::RecomMsgsResultPtr& __result, ::Ice::Long userId, bool isDone, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_userId(userId),
            _m_isDone(isDone)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RecommendService* servant = dynamic_cast< ::com::renren::sixin::account::RecommendService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getRecomMsgs(_m_userId, _m_isDone, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::RecomMsgsResultPtr& _result;
        ::Ice::Long _m_userId;
        bool _m_isDone;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RecommendService__getRecomMsgs_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::RecomMsgsResultPtr __result;
    try
    {
        _DirectI __direct(__result, userId, isDone, __current);
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
IceDelegateD::com::renren::sixin::account::RecommendService::recommendRelationShips(const ::com::renren::sixin::account::RelationShipList& relationShip, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::com::renren::sixin::account::BaseResultPtr& __result, const ::com::renren::sixin::account::RelationShipList& relationShip, ::com::renren::sixin::account::BindAccountEnum accountType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_relationShip(relationShip),
            _m_accountType(accountType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::renren::sixin::account::RecommendService* servant = dynamic_cast< ::com::renren::sixin::account::RecommendService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->recommendRelationShips(_m_relationShip, _m_accountType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::com::renren::sixin::account::BaseResultPtr& _result;
        const ::com::renren::sixin::account::RelationShipList& _m_relationShip;
        ::com::renren::sixin::account::BindAccountEnum _m_accountType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__renren__sixin__account__RecommendService__recommendRelationShips_name, ::Ice::Normal, __context);
    ::com::renren::sixin::account::BaseResultPtr __result;
    try
    {
        _DirectI __direct(__result, relationShip, accountType, __current);
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

com::renren::sixin::account::RelationShip::RelationShip(::Ice::Long __ice_activeId, ::Ice::Long __ice_associatId, ::com::renren::sixin::account::RelationTypeEnum __ice_type) :
    activeId(__ice_activeId),
    associatId(__ice_associatId),
    type(__ice_type)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::RelationShip::ice_clone() const
{
    ::com::renren::sixin::account::RelationShipPtr __p = new ::com::renren::sixin::account::RelationShip(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__RelationShip_ids[2] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::RelationShip"
};

bool
com::renren::sixin::account::RelationShip::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__RelationShip_ids, __com__renren__sixin__account__RelationShip_ids + 2, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::RelationShip::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__RelationShip_ids[0], &__com__renren__sixin__account__RelationShip_ids[2]);
}

const ::std::string&
com::renren::sixin::account::RelationShip::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__RelationShip_ids[1];
}

const ::std::string&
com::renren::sixin::account::RelationShip::ice_staticId()
{
    return __com__renren__sixin__account__RelationShip_ids[1];
}

void
com::renren::sixin::account::RelationShip::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(activeId);
    __os->write(associatId);
    ::com::renren::sixin::account::__write(__os, type);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
com::renren::sixin::account::RelationShip::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(activeId);
    __is->read(associatId);
    ::com::renren::sixin::account::__read(__is, type);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
com::renren::sixin::account::RelationShip::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::RelationShip was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::RelationShip::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::RelationShip was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__RelationShip : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::RelationShip::ice_staticId());
        return new ::com::renren::sixin::account::RelationShip;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__RelationShip_Ptr = new __F__com__renren__sixin__account__RelationShip;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::RelationShip::ice_factory()
{
    return __F__com__renren__sixin__account__RelationShip_Ptr;
}

class __F__com__renren__sixin__account__RelationShip__Init
{
public:

    __F__com__renren__sixin__account__RelationShip__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::RelationShip::ice_staticId(), ::com::renren::sixin::account::RelationShip::ice_factory());
    }

    ~__F__com__renren__sixin__account__RelationShip__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::RelationShip::ice_staticId());
    }
};

static __F__com__renren__sixin__account__RelationShip__Init __F__com__renren__sixin__account__RelationShip__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__RelationShip__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__RelationShipPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::RelationShipPtr* p = static_cast< ::com::renren::sixin::account::RelationShipPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::RelationShipPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::RelationShip::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::RelationShip& l, const ::com::renren::sixin::account::RelationShip& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::RelationShip& l, const ::com::renren::sixin::account::RelationShip& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::renren::sixin::account::Message::Message(::Ice::Long __ice_toId, ::Ice::Long __ice_gId, ::Ice::Int __ice_fromType, const ::std::string& __ice_fromText, const ::std::string& __ice_headUrl, const ::std::string& __ice_name, ::Ice::Int __ice_type, const ::std::string& __ice_text) :
    toId(__ice_toId),
    gId(__ice_gId),
    fromType(__ice_fromType),
    fromText(__ice_fromText),
    headUrl(__ice_headUrl),
    name(__ice_name),
    type(__ice_type),
    text(__ice_text)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::Message::ice_clone() const
{
    ::com::renren::sixin::account::MessagePtr __p = new ::com::renren::sixin::account::Message(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__Message_ids[2] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::Message"
};

bool
com::renren::sixin::account::Message::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__Message_ids, __com__renren__sixin__account__Message_ids + 2, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::Message::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__Message_ids[0], &__com__renren__sixin__account__Message_ids[2]);
}

const ::std::string&
com::renren::sixin::account::Message::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__Message_ids[1];
}

const ::std::string&
com::renren::sixin::account::Message::ice_staticId()
{
    return __com__renren__sixin__account__Message_ids[1];
}

void
com::renren::sixin::account::Message::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(toId);
    __os->write(gId);
    __os->write(fromType);
    __os->write(fromText);
    __os->write(headUrl);
    __os->write(name);
    __os->write(type);
    __os->write(text);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
com::renren::sixin::account::Message::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(toId);
    __is->read(gId);
    __is->read(fromType);
    __is->read(fromText);
    __is->read(headUrl);
    __is->read(name);
    __is->read(type);
    __is->read(text);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
com::renren::sixin::account::Message::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::Message was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::Message::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::Message was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__Message : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::Message::ice_staticId());
        return new ::com::renren::sixin::account::Message;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__Message_Ptr = new __F__com__renren__sixin__account__Message;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::Message::ice_factory()
{
    return __F__com__renren__sixin__account__Message_Ptr;
}

class __F__com__renren__sixin__account__Message__Init
{
public:

    __F__com__renren__sixin__account__Message__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::Message::ice_staticId(), ::com::renren::sixin::account::Message::ice_factory());
    }

    ~__F__com__renren__sixin__account__Message__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::Message::ice_staticId());
    }
};

static __F__com__renren__sixin__account__Message__Init __F__com__renren__sixin__account__Message__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__Message__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__MessagePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::MessagePtr* p = static_cast< ::com::renren::sixin::account::MessagePtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::MessagePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::Message::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::Message& l, const ::com::renren::sixin::account::Message& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::Message& l, const ::com::renren::sixin::account::Message& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

com::renren::sixin::account::RecomMsgsResult::RecomMsgsResult(bool __ice_success, ::com::renren::sixin::account::AccountErrorCodeEnum __ice_errorCode, const ::std::string& __ice_errorMessage, const ::com::renren::sixin::account::RecomMsgList& __ice_msgList) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#else
    ::com::renren::sixin::account::BaseResult(__ice_success, __ice_errorCode, __ice_errorMessage)
#endif
,
    msgList(__ice_msgList)
{
}

::Ice::ObjectPtr
com::renren::sixin::account::RecomMsgsResult::ice_clone() const
{
    ::com::renren::sixin::account::RecomMsgsResultPtr __p = new ::com::renren::sixin::account::RecomMsgsResult(*this);
    return __p;
}

static const ::std::string __com__renren__sixin__account__RecomMsgsResult_ids[3] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::BaseResult",
    "::com::renren::sixin::account::RecomMsgsResult"
};

bool
com::renren::sixin::account::RecomMsgsResult::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__RecomMsgsResult_ids, __com__renren__sixin__account__RecomMsgsResult_ids + 3, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::RecomMsgsResult::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__RecomMsgsResult_ids[0], &__com__renren__sixin__account__RecomMsgsResult_ids[3]);
}

const ::std::string&
com::renren::sixin::account::RecomMsgsResult::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__RecomMsgsResult_ids[2];
}

const ::std::string&
com::renren::sixin::account::RecomMsgsResult::ice_staticId()
{
    return __com__renren__sixin__account__RecomMsgsResult_ids[2];
}

void
com::renren::sixin::account::RecomMsgsResult::__incRef()
{
    __gcIncRef();
}

void
com::renren::sixin::account::RecomMsgsResult::__decRef()
{
    __gcDecRef();
}

void
com::renren::sixin::account::RecomMsgsResult::__addObject(::IceInternal::GCCountMap& _c)
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
com::renren::sixin::account::RecomMsgsResult::__usesClasses()
{
    return true;
}

void
com::renren::sixin::account::RecomMsgsResult::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    {
        for(::com::renren::sixin::account::RecomMsgList::const_iterator _i0 = msgList.begin(); _i0 != msgList.end(); ++_i0)
        {
            if((*_i0))
            {
                ::IceInternal::upCast((*_i0).get())->__addObject(_c);
            }
        }
    }
}

void
com::renren::sixin::account::RecomMsgsResult::__gcClear()
{
    {
        for(::com::renren::sixin::account::RecomMsgList::iterator _i0 = msgList.begin(); _i0 != msgList.end(); ++_i0)
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
com::renren::sixin::account::RecomMsgsResult::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    if(msgList.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::com::renren::sixin::account::__writeRecomMsgList(__os, &msgList[0], &msgList[0] + msgList.size());
    }
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__write(__os);
#else
    ::com::renren::sixin::account::BaseResult::__write(__os);
#endif
}

void
com::renren::sixin::account::RecomMsgsResult::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    ::com::renren::sixin::account::__readRecomMsgList(__is, msgList);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    BaseResult::__read(__is, true);
#else
    ::com::renren::sixin::account::BaseResult::__read(__is, true);
#endif
}

void
com::renren::sixin::account::RecomMsgsResult::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::RecomMsgsResult was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::RecomMsgsResult::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::RecomMsgsResult was not generated with stream support";
    throw ex;
}

class __F__com__renren__sixin__account__RecomMsgsResult : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::com::renren::sixin::account::RecomMsgsResult::ice_staticId());
        return new ::com::renren::sixin::account::RecomMsgsResult;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__com__renren__sixin__account__RecomMsgsResult_Ptr = new __F__com__renren__sixin__account__RecomMsgsResult;

const ::Ice::ObjectFactoryPtr&
com::renren::sixin::account::RecomMsgsResult::ice_factory()
{
    return __F__com__renren__sixin__account__RecomMsgsResult_Ptr;
}

class __F__com__renren__sixin__account__RecomMsgsResult__Init
{
public:

    __F__com__renren__sixin__account__RecomMsgsResult__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::com::renren::sixin::account::RecomMsgsResult::ice_staticId(), ::com::renren::sixin::account::RecomMsgsResult::ice_factory());
    }

    ~__F__com__renren__sixin__account__RecomMsgsResult__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::com::renren::sixin::account::RecomMsgsResult::ice_staticId());
    }
};

static __F__com__renren__sixin__account__RecomMsgsResult__Init __F__com__renren__sixin__account__RecomMsgsResult__i;

#ifdef __APPLE__
extern "C" { void __F__com__renren__sixin__account__RecomMsgsResult__initializer() {} }
#endif

void 
com::renren::sixin::account::__patch__RecomMsgsResultPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::RecomMsgsResultPtr* p = static_cast< ::com::renren::sixin::account::RecomMsgsResultPtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::RecomMsgsResultPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::RecomMsgsResult::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::RecomMsgsResult& l, const ::com::renren::sixin::account::RecomMsgsResult& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::RecomMsgsResult& l, const ::com::renren::sixin::account::RecomMsgsResult& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
com::renren::sixin::account::RecommendService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__renren__sixin__account__RecommendService_ids[2] =
{
    "::Ice::Object",
    "::com::renren::sixin::account::RecommendService"
};

bool
com::renren::sixin::account::RecommendService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__renren__sixin__account__RecommendService_ids, __com__renren__sixin__account__RecommendService_ids + 2, _s);
}

::std::vector< ::std::string>
com::renren::sixin::account::RecommendService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__renren__sixin__account__RecommendService_ids[0], &__com__renren__sixin__account__RecommendService_ids[2]);
}

const ::std::string&
com::renren::sixin::account::RecommendService::ice_id(const ::Ice::Current&) const
{
    return __com__renren__sixin__account__RecommendService_ids[1];
}

const ::std::string&
com::renren::sixin::account::RecommendService::ice_staticId()
{
    return __com__renren__sixin__account__RecommendService_ids[1];
}

::Ice::DispatchStatus
com::renren::sixin::account::RecommendService::___getRecomMsgs(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    bool isDone;
    __is->read(userId);
    __is->read(isDone);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::RecomMsgsResultPtr __ret = getRecomMsgs(userId, isDone, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::renren::sixin::account::RecommendService::___recommendRelationShips(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::com::renren::sixin::account::RelationShipList relationShip;
    ::com::renren::sixin::account::BindAccountEnum accountType;
    ::com::renren::sixin::account::__readRelationShipList(__is, relationShip);
    ::com::renren::sixin::account::__read(__is, accountType);
    __is->readPendingObjects();
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::com::renren::sixin::account::BaseResultPtr __ret = recommendRelationShips(relationShip, accountType, __current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

static ::std::string __com__renren__sixin__account__RecommendService_all[] =
{
    "getRecomMsgs",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "recommendRelationShips"
};

::Ice::DispatchStatus
com::renren::sixin::account::RecommendService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__renren__sixin__account__RecommendService_all, __com__renren__sixin__account__RecommendService_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__renren__sixin__account__RecommendService_all)
    {
        case 0:
        {
            return ___getRecomMsgs(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
        case 5:
        {
            return ___recommendRelationShips(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::renren::sixin::account::RecommendService::__write(::IceInternal::BasicStream* __os) const
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
com::renren::sixin::account::RecommendService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::renren::sixin::account::RecommendService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::RecommendService was not generated with stream support";
    throw ex;
}

void
com::renren::sixin::account::RecommendService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::renren::sixin::account::RecommendService was not generated with stream support";
    throw ex;
}

void 
com::renren::sixin::account::__patch__RecommendServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::renren::sixin::account::RecommendServicePtr* p = static_cast< ::com::renren::sixin::account::RecommendServicePtr*>(__addr);
    assert(p);
    *p = ::com::renren::sixin::account::RecommendServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::renren::sixin::account::RecommendService::ice_staticId(), v->ice_id());
    }
}

bool
com::renren::sixin::account::operator==(const ::com::renren::sixin::account::RecommendService& l, const ::com::renren::sixin::account::RecommendService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::renren::sixin::account::operator<(const ::com::renren::sixin::account::RecommendService& l, const ::com::renren::sixin::account::RecommendService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
