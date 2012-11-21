// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Util.ice'

#ifndef __src_ice_src__Util_h__
#define __src_ice_src__Util_h__

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

namespace MyUtil
{

class GlobalId;

}

}

namespace MyUtil
{

class GlobalId;
bool operator==(const GlobalId&, const GlobalId&);
bool operator<(const GlobalId&, const GlobalId&);

}

namespace IceInternal
{

::Ice::Object* upCast(::MyUtil::GlobalId*);
::IceProxy::Ice::Object* upCast(::IceProxy::MyUtil::GlobalId*);

}

namespace MyUtil
{

typedef ::IceInternal::Handle< ::MyUtil::GlobalId> GlobalIdPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::MyUtil::GlobalId> GlobalIdPrx;

void __read(::IceInternal::BasicStream*, GlobalIdPrx&);
void __patch__GlobalIdPtr(void*, ::Ice::ObjectPtr&);

}

namespace MyUtil
{

class MceException : public ::Ice::UserException
{
public:

    MceException() {}
    explicit MceException(const ::std::string&);
    virtual ~MceException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string message;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

static MceException __MceException_init;

class NoSuchObjectException : public ::MyUtil::MceException
{
public:

    NoSuchObjectException() {}
    explicit NoSuchObjectException(const ::std::string&);
    virtual ~NoSuchObjectException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class NoSuchPropertyException : public ::MyUtil::MceException
{
public:

    NoSuchPropertyException() {}
    explicit NoSuchPropertyException(const ::std::string&);
    virtual ~NoSuchPropertyException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

typedef ::std::vector< ::Ice::Byte> ByteSeq;

typedef ::std::vector< ::Ice::Int> IntSeq;

typedef ::std::vector< ::Ice::Int> IntList;

typedef ::std::vector< ::MyUtil::IntSeq> IntSeqSeq;
void __writeIntSeqSeq(::IceInternal::BasicStream*, const ::MyUtil::IntSeq*, const ::MyUtil::IntSeq*);
void __readIntSeqSeq(::IceInternal::BasicStream*, IntSeqSeq&);

typedef ::std::vector< ::Ice::Int> IntArray;

typedef ::std::vector< ::Ice::Long> LongSeq;

typedef ::std::vector< ::Ice::Long> LongArray;

typedef ::std::vector< ::std::string> StrSeq;

typedef ::std::vector< ::std::string> StringArray;

typedef ::std::vector< ::std::string> StrList;

typedef ::std::map< ::Ice::Int, ::Ice::Int> Int2IntMap;
void __writeInt2IntMap(::IceInternal::BasicStream*, const Int2IntMap&);
void __readInt2IntMap(::IceInternal::BasicStream*, Int2IntMap&);

typedef ::std::map< ::Ice::Int, ::std::string> Int2StrMap;
void __writeInt2StrMap(::IceInternal::BasicStream*, const Int2StrMap&);
void __readInt2StrMap(::IceInternal::BasicStream*, Int2StrMap&);

typedef ::std::map< ::Ice::Long, ::Ice::Int> Long2IntMap;
void __writeLong2IntMap(::IceInternal::BasicStream*, const Long2IntMap&);
void __readLong2IntMap(::IceInternal::BasicStream*, Long2IntMap&);

typedef ::std::map< ::Ice::Long, ::Ice::Long> Long2LongMap;
void __writeLong2LongMap(::IceInternal::BasicStream*, const Long2LongMap&);
void __readLong2LongMap(::IceInternal::BasicStream*, Long2LongMap&);

typedef ::std::map< ::std::string, ::Ice::Int> Str2IntMap;
void __writeStr2IntMap(::IceInternal::BasicStream*, const Str2IntMap&);
void __readStr2IntMap(::IceInternal::BasicStream*, Str2IntMap&);

typedef ::std::map< ::std::string, ::Ice::Long> Str2LongMap;
void __writeStr2LongMap(::IceInternal::BasicStream*, const Str2LongMap&);
void __readStr2LongMap(::IceInternal::BasicStream*, Str2LongMap&);

typedef ::std::map< ::std::string, ::std::string> Str2StrMap;
void __writeStr2StrMap(::IceInternal::BasicStream*, const Str2StrMap&);
void __readStr2StrMap(::IceInternal::BasicStream*, Str2StrMap&);

typedef ::std::map< ::std::string, ::std::string> PropertyMap;
void __writePropertyMap(::IceInternal::BasicStream*, const PropertyMap&);
void __readPropertyMap(::IceInternal::BasicStream*, PropertyMap&);

typedef ::std::vector< ::MyUtil::Str2StrMap> Str2StrMapSeq;
void __writeStr2StrMapSeq(::IceInternal::BasicStream*, const ::MyUtil::Str2StrMap*, const ::MyUtil::Str2StrMap*);
void __readStr2StrMapSeq(::IceInternal::BasicStream*, Str2StrMapSeq&);

typedef ::std::vector< ::MyUtil::Int2IntMap> Int2IntMapSeq;
void __writeInt2IntMapSeq(::IceInternal::BasicStream*, const ::MyUtil::Int2IntMap*, const ::MyUtil::Int2IntMap*);
void __readInt2IntMapSeq(::IceInternal::BasicStream*, Int2IntMapSeq&);

typedef ::std::map< ::Ice::Int, ::MyUtil::IntSeq> Int2IntSeqMap;
void __writeInt2IntSeqMap(::IceInternal::BasicStream*, const Int2IntSeqMap&);
void __readInt2IntSeqMap(::IceInternal::BasicStream*, Int2IntSeqMap&);

typedef ::std::map< ::std::string, ::MyUtil::IntSeq> Str2IntSeqMap;
void __writeStr2IntSeqMap(::IceInternal::BasicStream*, const Str2IntSeqMap&);
void __readStr2IntSeqMap(::IceInternal::BasicStream*, Str2IntSeqMap&);

typedef ::std::vector< ::MyUtil::GlobalIdPtr> GlobalIdSeq;
void __writeGlobalIdSeq(::IceInternal::BasicStream*, const ::MyUtil::GlobalIdPtr*, const ::MyUtil::GlobalIdPtr*);
void __readGlobalIdSeq(::IceInternal::BasicStream*, GlobalIdSeq&);

}

namespace IceProxy
{

namespace MyUtil
{

class GlobalId : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<GlobalId> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<GlobalId> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<GlobalId*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<GlobalId*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
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

namespace IceDelegate
{

namespace MyUtil
{

class GlobalId : virtual public ::IceDelegate::Ice::Object
{
public:
};

}

}

namespace IceDelegateM
{

namespace MyUtil
{

class GlobalId : virtual public ::IceDelegate::MyUtil::GlobalId,
                 virtual public ::IceDelegateM::Ice::Object
{
public:
};

}

}

namespace IceDelegateD
{

namespace MyUtil
{

class GlobalId : virtual public ::IceDelegate::MyUtil::GlobalId,
                 virtual public ::IceDelegateD::Ice::Object
{
public:
};

}

}

namespace MyUtil
{

class GlobalId : virtual public ::Ice::Object
{
public:

    typedef GlobalIdPrx ProxyType;
    typedef GlobalIdPtr PointerType;
    
    GlobalId() {}
    GlobalId(::Ice::Int, ::Ice::Long);
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

    virtual ~GlobalId() {}

    friend class GlobalId__staticInit;

public:

    ::Ice::Int type;

    ::Ice::Long id;
};

class GlobalId__staticInit
{
public:

    ::MyUtil::GlobalId _init;
};

static GlobalId__staticInit _GlobalId_init;

}

#endif
