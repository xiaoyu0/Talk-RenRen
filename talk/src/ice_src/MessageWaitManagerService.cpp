// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `MessageWaitManagerService.ice'

#include <MessageWaitManagerService.h>
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

static const ::std::string __com__xiaonei__wap__talk__MessageWaitManagerService__addMessage_name = "addMessage";

static const ::std::string __com__xiaonei__wap__talk__MessageWaitManagerService__addVoiceMessage_name = "addVoiceMessage";

static const ::std::string __com__xiaonei__wap__talk__MessageWaitManagerService__delMessage_name = "delMessage";

static const ::std::string __com__xiaonei__wap__talk__MessageWaitManagerService__delVoiceMessage_name = "delVoiceMessage";

static const ::std::string __com__xiaonei__wap__talk__MessageWaitManagerService__immediatelySend2Offline_name = "immediatelySend2Offline";

static const ::std::string __com__xiaonei__wap__talk__MessageWaitManagerService__delMessageWithId_name = "delMessageWithId";

::Ice::Object* IceInternal::upCast(::com::xiaonei::wap::talk::MessageWaitManagerService* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::com::xiaonei::wap::talk::MessageWaitManagerService* p) { return p; }

void
com::xiaonei::wap::talk::__read(::IceInternal::BasicStream* __is, ::com::xiaonei::wap::talk::MessageWaitManagerServicePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::com::xiaonei::wap::talk::MessageWaitManagerService;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::com::xiaonei::wap::talk::MessageWaitManagerService::addMessage(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Long msgKey, const ::std::string& msg, ::Ice::Int msgType, ::Ice::Int supportToClientType, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::MessageWaitManagerService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::MessageWaitManagerService*>(__delBase.get());
            __del->addMessage(fromId, toId, msgKey, msg, msgType, supportToClientType, __ctx);
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
IceProxy::com::xiaonei::wap::talk::MessageWaitManagerService::addVoiceMessage(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int supportToClientType, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::MessageWaitManagerService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::MessageWaitManagerService*>(__delBase.get());
            __del->addVoiceMessage(fromId, toId, msg, supportToClientType, __ctx);
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
IceProxy::com::xiaonei::wap::talk::MessageWaitManagerService::delMessage(::Ice::Long msgKey, ::Ice::Int clientType, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::MessageWaitManagerService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::MessageWaitManagerService*>(__delBase.get());
            __del->delMessage(msgKey, clientType, __ctx);
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
IceProxy::com::xiaonei::wap::talk::MessageWaitManagerService::delVoiceMessage(const ::std::string& msg, ::Ice::Int clientType, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::MessageWaitManagerService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::MessageWaitManagerService*>(__delBase.get());
            __del->delVoiceMessage(msg, clientType, __ctx);
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
IceProxy::com::xiaonei::wap::talk::MessageWaitManagerService::immediatelySend2Offline(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Long msgKey, const ::std::string& msg, ::Ice::Int msgType, ::Ice::Int supportToClientType, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::MessageWaitManagerService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::MessageWaitManagerService*>(__delBase.get());
            __del->immediatelySend2Offline(fromId, toId, msgKey, msg, msgType, supportToClientType, __ctx);
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
IceProxy::com::xiaonei::wap::talk::MessageWaitManagerService::delMessageWithId(::Ice::Long userId, ::Ice::Long msgKey, ::Ice::Int clientType, const ::Ice::Context* __ctx)
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
            ::IceDelegate::com::xiaonei::wap::talk::MessageWaitManagerService* __del = dynamic_cast< ::IceDelegate::com::xiaonei::wap::talk::MessageWaitManagerService*>(__delBase.get());
            __del->delMessageWithId(userId, msgKey, clientType, __ctx);
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

const ::std::string&
IceProxy::com::xiaonei::wap::talk::MessageWaitManagerService::ice_staticId()
{
    return ::com::xiaonei::wap::talk::MessageWaitManagerService::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::com::xiaonei::wap::talk::MessageWaitManagerService::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::com::xiaonei::wap::talk::MessageWaitManagerService);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::com::xiaonei::wap::talk::MessageWaitManagerService::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::com::xiaonei::wap::talk::MessageWaitManagerService);
}

::IceProxy::Ice::Object*
IceProxy::com::xiaonei::wap::talk::MessageWaitManagerService::__newInstance() const
{
    return new MessageWaitManagerService;
}

void
IceDelegateM::com::xiaonei::wap::talk::MessageWaitManagerService::addMessage(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Long msgKey, const ::std::string& msg, ::Ice::Int msgType, ::Ice::Int supportToClientType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__MessageWaitManagerService__addMessage_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromId);
        __os->write(toId);
        __os->write(msgKey);
        __os->write(msg);
        __os->write(msgType);
        __os->write(supportToClientType);
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
IceDelegateM::com::xiaonei::wap::talk::MessageWaitManagerService::addVoiceMessage(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int supportToClientType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__MessageWaitManagerService__addVoiceMessage_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromId);
        __os->write(toId);
        __os->write(msg);
        __os->write(supportToClientType);
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
IceDelegateM::com::xiaonei::wap::talk::MessageWaitManagerService::delMessage(::Ice::Long msgKey, ::Ice::Int clientType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__MessageWaitManagerService__delMessage_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(msgKey);
        __os->write(clientType);
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
IceDelegateM::com::xiaonei::wap::talk::MessageWaitManagerService::delVoiceMessage(const ::std::string& msg, ::Ice::Int clientType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__MessageWaitManagerService__delVoiceMessage_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(msg);
        __os->write(clientType);
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
IceDelegateM::com::xiaonei::wap::talk::MessageWaitManagerService::immediatelySend2Offline(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Long msgKey, const ::std::string& msg, ::Ice::Int msgType, ::Ice::Int supportToClientType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__MessageWaitManagerService__immediatelySend2Offline_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(fromId);
        __os->write(toId);
        __os->write(msgKey);
        __os->write(msg);
        __os->write(msgType);
        __os->write(supportToClientType);
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
IceDelegateM::com::xiaonei::wap::talk::MessageWaitManagerService::delMessageWithId(::Ice::Long userId, ::Ice::Long msgKey, ::Ice::Int clientType, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __com__xiaonei__wap__talk__MessageWaitManagerService__delMessageWithId_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(userId);
        __os->write(msgKey);
        __os->write(clientType);
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
IceDelegateD::com::xiaonei::wap::talk::MessageWaitManagerService::addMessage(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Long msgKey, const ::std::string& msg, ::Ice::Int msgType, ::Ice::Int supportToClientType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Long msgKey, const ::std::string& msg, ::Ice::Int msgType, ::Ice::Int supportToClientType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_fromId(fromId),
            _m_toId(toId),
            _m_msgKey(msgKey),
            _m_msg(msg),
            _m_msgType(msgType),
            _m_supportToClientType(supportToClientType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::MessageWaitManagerService* servant = dynamic_cast< ::com::xiaonei::wap::talk::MessageWaitManagerService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->addMessage(_m_fromId, _m_toId, _m_msgKey, _m_msg, _m_msgType, _m_supportToClientType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_fromId;
        ::Ice::Long _m_toId;
        ::Ice::Long _m_msgKey;
        const ::std::string& _m_msg;
        ::Ice::Int _m_msgType;
        ::Ice::Int _m_supportToClientType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__MessageWaitManagerService__addMessage_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(fromId, toId, msgKey, msg, msgType, supportToClientType, __current);
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
IceDelegateD::com::xiaonei::wap::talk::MessageWaitManagerService::addVoiceMessage(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int supportToClientType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long fromId, ::Ice::Long toId, const ::std::string& msg, ::Ice::Int supportToClientType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_fromId(fromId),
            _m_toId(toId),
            _m_msg(msg),
            _m_supportToClientType(supportToClientType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::MessageWaitManagerService* servant = dynamic_cast< ::com::xiaonei::wap::talk::MessageWaitManagerService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->addVoiceMessage(_m_fromId, _m_toId, _m_msg, _m_supportToClientType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_fromId;
        ::Ice::Long _m_toId;
        const ::std::string& _m_msg;
        ::Ice::Int _m_supportToClientType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__MessageWaitManagerService__addVoiceMessage_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(fromId, toId, msg, supportToClientType, __current);
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
IceDelegateD::com::xiaonei::wap::talk::MessageWaitManagerService::delMessage(::Ice::Long msgKey, ::Ice::Int clientType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long msgKey, ::Ice::Int clientType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_msgKey(msgKey),
            _m_clientType(clientType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::MessageWaitManagerService* servant = dynamic_cast< ::com::xiaonei::wap::talk::MessageWaitManagerService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->delMessage(_m_msgKey, _m_clientType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_msgKey;
        ::Ice::Int _m_clientType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__MessageWaitManagerService__delMessage_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(msgKey, clientType, __current);
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
IceDelegateD::com::xiaonei::wap::talk::MessageWaitManagerService::delVoiceMessage(const ::std::string& msg, ::Ice::Int clientType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& msg, ::Ice::Int clientType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_msg(msg),
            _m_clientType(clientType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::MessageWaitManagerService* servant = dynamic_cast< ::com::xiaonei::wap::talk::MessageWaitManagerService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->delVoiceMessage(_m_msg, _m_clientType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_msg;
        ::Ice::Int _m_clientType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__MessageWaitManagerService__delVoiceMessage_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(msg, clientType, __current);
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
IceDelegateD::com::xiaonei::wap::talk::MessageWaitManagerService::immediatelySend2Offline(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Long msgKey, const ::std::string& msg, ::Ice::Int msgType, ::Ice::Int supportToClientType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long fromId, ::Ice::Long toId, ::Ice::Long msgKey, const ::std::string& msg, ::Ice::Int msgType, ::Ice::Int supportToClientType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_fromId(fromId),
            _m_toId(toId),
            _m_msgKey(msgKey),
            _m_msg(msg),
            _m_msgType(msgType),
            _m_supportToClientType(supportToClientType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::MessageWaitManagerService* servant = dynamic_cast< ::com::xiaonei::wap::talk::MessageWaitManagerService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->immediatelySend2Offline(_m_fromId, _m_toId, _m_msgKey, _m_msg, _m_msgType, _m_supportToClientType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_fromId;
        ::Ice::Long _m_toId;
        ::Ice::Long _m_msgKey;
        const ::std::string& _m_msg;
        ::Ice::Int _m_msgType;
        ::Ice::Int _m_supportToClientType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__MessageWaitManagerService__immediatelySend2Offline_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(fromId, toId, msgKey, msg, msgType, supportToClientType, __current);
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
IceDelegateD::com::xiaonei::wap::talk::MessageWaitManagerService::delMessageWithId(::Ice::Long userId, ::Ice::Long msgKey, ::Ice::Int clientType, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Long userId, ::Ice::Long msgKey, ::Ice::Int clientType, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_userId(userId),
            _m_msgKey(msgKey),
            _m_clientType(clientType)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::com::xiaonei::wap::talk::MessageWaitManagerService* servant = dynamic_cast< ::com::xiaonei::wap::talk::MessageWaitManagerService*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->delMessageWithId(_m_userId, _m_msgKey, _m_clientType, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Long _m_userId;
        ::Ice::Long _m_msgKey;
        ::Ice::Int _m_clientType;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __com__xiaonei__wap__talk__MessageWaitManagerService__delMessageWithId_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(userId, msgKey, clientType, __current);
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

::Ice::ObjectPtr
com::xiaonei::wap::talk::MessageWaitManagerService::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __com__xiaonei__wap__talk__MessageWaitManagerService_ids[2] =
{
    "::Ice::Object",
    "::com::xiaonei::wap::talk::MessageWaitManagerService"
};

bool
com::xiaonei::wap::talk::MessageWaitManagerService::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__com__xiaonei__wap__talk__MessageWaitManagerService_ids, __com__xiaonei__wap__talk__MessageWaitManagerService_ids + 2, _s);
}

::std::vector< ::std::string>
com::xiaonei::wap::talk::MessageWaitManagerService::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__com__xiaonei__wap__talk__MessageWaitManagerService_ids[0], &__com__xiaonei__wap__talk__MessageWaitManagerService_ids[2]);
}

const ::std::string&
com::xiaonei::wap::talk::MessageWaitManagerService::ice_id(const ::Ice::Current&) const
{
    return __com__xiaonei__wap__talk__MessageWaitManagerService_ids[1];
}

const ::std::string&
com::xiaonei::wap::talk::MessageWaitManagerService::ice_staticId()
{
    return __com__xiaonei__wap__talk__MessageWaitManagerService_ids[1];
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::MessageWaitManagerService::___addMessage(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long fromId;
    ::Ice::Long toId;
    ::Ice::Long msgKey;
    ::std::string msg;
    ::Ice::Int msgType;
    ::Ice::Int supportToClientType;
    __is->read(fromId);
    __is->read(toId);
    __is->read(msgKey);
    __is->read(msg);
    __is->read(msgType);
    __is->read(supportToClientType);
    __is->endReadEncaps();
    addMessage(fromId, toId, msgKey, msg, msgType, supportToClientType, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::MessageWaitManagerService::___addVoiceMessage(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long fromId;
    ::Ice::Long toId;
    ::std::string msg;
    ::Ice::Int supportToClientType;
    __is->read(fromId);
    __is->read(toId);
    __is->read(msg);
    __is->read(supportToClientType);
    __is->endReadEncaps();
    addVoiceMessage(fromId, toId, msg, supportToClientType, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::MessageWaitManagerService::___delMessage(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long msgKey;
    ::Ice::Int clientType;
    __is->read(msgKey);
    __is->read(clientType);
    __is->endReadEncaps();
    delMessage(msgKey, clientType, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::MessageWaitManagerService::___delVoiceMessage(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string msg;
    ::Ice::Int clientType;
    __is->read(msg);
    __is->read(clientType);
    __is->endReadEncaps();
    delVoiceMessage(msg, clientType, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::MessageWaitManagerService::___immediatelySend2Offline(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long fromId;
    ::Ice::Long toId;
    ::Ice::Long msgKey;
    ::std::string msg;
    ::Ice::Int msgType;
    ::Ice::Int supportToClientType;
    __is->read(fromId);
    __is->read(toId);
    __is->read(msgKey);
    __is->read(msg);
    __is->read(msgType);
    __is->read(supportToClientType);
    __is->endReadEncaps();
    immediatelySend2Offline(fromId, toId, msgKey, msg, msgType, supportToClientType, __current);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
com::xiaonei::wap::talk::MessageWaitManagerService::___delMessageWithId(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Long userId;
    ::Ice::Long msgKey;
    ::Ice::Int clientType;
    __is->read(userId);
    __is->read(msgKey);
    __is->read(clientType);
    __is->endReadEncaps();
    delMessageWithId(userId, msgKey, clientType, __current);
    return ::Ice::DispatchOK;
}

static ::std::string __com__xiaonei__wap__talk__MessageWaitManagerService_all[] =
{
    "addMessage",
    "addVoiceMessage",
    "delMessage",
    "delMessageWithId",
    "delVoiceMessage",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "immediatelySend2Offline"
};

::Ice::DispatchStatus
com::xiaonei::wap::talk::MessageWaitManagerService::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__com__xiaonei__wap__talk__MessageWaitManagerService_all, __com__xiaonei__wap__talk__MessageWaitManagerService_all + 10, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __com__xiaonei__wap__talk__MessageWaitManagerService_all)
    {
        case 0:
        {
            return ___addMessage(in, current);
        }
        case 1:
        {
            return ___addVoiceMessage(in, current);
        }
        case 2:
        {
            return ___delMessage(in, current);
        }
        case 3:
        {
            return ___delMessageWithId(in, current);
        }
        case 4:
        {
            return ___delVoiceMessage(in, current);
        }
        case 5:
        {
            return ___ice_id(in, current);
        }
        case 6:
        {
            return ___ice_ids(in, current);
        }
        case 7:
        {
            return ___ice_isA(in, current);
        }
        case 8:
        {
            return ___ice_ping(in, current);
        }
        case 9:
        {
            return ___immediatelySend2Offline(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
com::xiaonei::wap::talk::MessageWaitManagerService::__write(::IceInternal::BasicStream* __os) const
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
com::xiaonei::wap::talk::MessageWaitManagerService::__read(::IceInternal::BasicStream* __is, bool __rid)
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
com::xiaonei::wap::talk::MessageWaitManagerService::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::talk::MessageWaitManagerService was not generated with stream support";
    throw ex;
}

void
com::xiaonei::wap::talk::MessageWaitManagerService::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type com::xiaonei::wap::talk::MessageWaitManagerService was not generated with stream support";
    throw ex;
}

void 
com::xiaonei::wap::talk::__patch__MessageWaitManagerServicePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::com::xiaonei::wap::talk::MessageWaitManagerServicePtr* p = static_cast< ::com::xiaonei::wap::talk::MessageWaitManagerServicePtr*>(__addr);
    assert(p);
    *p = ::com::xiaonei::wap::talk::MessageWaitManagerServicePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::com::xiaonei::wap::talk::MessageWaitManagerService::ice_staticId(), v->ice_id());
    }
}

bool
com::xiaonei::wap::talk::operator==(const ::com::xiaonei::wap::talk::MessageWaitManagerService& l, const ::com::xiaonei::wap::talk::MessageWaitManagerService& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
com::xiaonei::wap::talk::operator<(const ::com::xiaonei::wap::talk::MessageWaitManagerService& l, const ::com::xiaonei::wap::talk::MessageWaitManagerService& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
