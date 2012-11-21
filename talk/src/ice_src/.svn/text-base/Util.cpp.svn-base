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

#include <Util.h>
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

::Ice::Object* IceInternal::upCast(::MyUtil::GlobalId* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::MyUtil::GlobalId* p) { return p; }

void
MyUtil::__read(::IceInternal::BasicStream* __is, ::MyUtil::GlobalIdPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::MyUtil::GlobalId;
        v->__copyFrom(proxy);
    }
}

MyUtil::MceException::MceException(const ::std::string& __ice_message) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    UserException(),
#else
    ::Ice::UserException(),
#endif
    message(__ice_message)
{
}

MyUtil::MceException::~MceException() throw()
{
}

static const char* __MyUtil__MceException_name = "MyUtil::MceException";

::std::string
MyUtil::MceException::ice_name() const
{
    return __MyUtil__MceException_name;
}

::Ice::Exception*
MyUtil::MceException::ice_clone() const
{
    return new MceException(*this);
}

void
MyUtil::MceException::ice_throw() const
{
    throw *this;
}

void
MyUtil::MceException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::MyUtil::MceException"), false);
    __os->startWriteSlice();
    __os->write(message);
    __os->endWriteSlice();
}

void
MyUtil::MceException::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(message);
    __is->endReadSlice();
}

void
MyUtil::MceException::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "exception MyUtil::MceException was not generated with stream support";
    throw ex;
}

void
MyUtil::MceException::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "exception MyUtil::MceException was not generated with stream support";
    throw ex;
}

struct __F__MyUtil__MceException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::MyUtil::MceException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__MyUtil__MceException__Ptr = new __F__MyUtil__MceException;

const ::IceInternal::UserExceptionFactoryPtr&
MyUtil::MceException::ice_factory()
{
    return __F__MyUtil__MceException__Ptr;
}

class __F__MyUtil__MceException__Init
{
public:

    __F__MyUtil__MceException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::MyUtil::MceException", ::MyUtil::MceException::ice_factory());
    }

    ~__F__MyUtil__MceException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::MyUtil::MceException");
    }
};

static __F__MyUtil__MceException__Init __F__MyUtil__MceException__i;

#ifdef __APPLE__
extern "C" { void __F__MyUtil__MceException__initializer() {} }
#endif

MyUtil::NoSuchObjectException::NoSuchObjectException(const ::std::string& __ice_message) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    MceException(__ice_message)
#else
    ::MyUtil::MceException(__ice_message)
#endif
{
}

MyUtil::NoSuchObjectException::~NoSuchObjectException() throw()
{
}

static const char* __MyUtil__NoSuchObjectException_name = "MyUtil::NoSuchObjectException";

::std::string
MyUtil::NoSuchObjectException::ice_name() const
{
    return __MyUtil__NoSuchObjectException_name;
}

::Ice::Exception*
MyUtil::NoSuchObjectException::ice_clone() const
{
    return new NoSuchObjectException(*this);
}

void
MyUtil::NoSuchObjectException::ice_throw() const
{
    throw *this;
}

void
MyUtil::NoSuchObjectException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::MyUtil::NoSuchObjectException"), false);
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    MceException::__write(__os);
#else
    ::MyUtil::MceException::__write(__os);
#endif
}

void
MyUtil::NoSuchObjectException::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    MceException::__read(__is, true);
#else
    ::MyUtil::MceException::__read(__is, true);
#endif
}

void
MyUtil::NoSuchObjectException::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "exception MyUtil::NoSuchObjectException was not generated with stream support";
    throw ex;
}

void
MyUtil::NoSuchObjectException::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "exception MyUtil::NoSuchObjectException was not generated with stream support";
    throw ex;
}

struct __F__MyUtil__NoSuchObjectException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::MyUtil::NoSuchObjectException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__MyUtil__NoSuchObjectException__Ptr = new __F__MyUtil__NoSuchObjectException;

const ::IceInternal::UserExceptionFactoryPtr&
MyUtil::NoSuchObjectException::ice_factory()
{
    return __F__MyUtil__NoSuchObjectException__Ptr;
}

class __F__MyUtil__NoSuchObjectException__Init
{
public:

    __F__MyUtil__NoSuchObjectException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::MyUtil::NoSuchObjectException", ::MyUtil::NoSuchObjectException::ice_factory());
    }

    ~__F__MyUtil__NoSuchObjectException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::MyUtil::NoSuchObjectException");
    }
};

static __F__MyUtil__NoSuchObjectException__Init __F__MyUtil__NoSuchObjectException__i;

#ifdef __APPLE__
extern "C" { void __F__MyUtil__NoSuchObjectException__initializer() {} }
#endif

MyUtil::NoSuchPropertyException::NoSuchPropertyException(const ::std::string& __ice_message) :
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    MceException(__ice_message)
#else
    ::MyUtil::MceException(__ice_message)
#endif
{
}

MyUtil::NoSuchPropertyException::~NoSuchPropertyException() throw()
{
}

static const char* __MyUtil__NoSuchPropertyException_name = "MyUtil::NoSuchPropertyException";

::std::string
MyUtil::NoSuchPropertyException::ice_name() const
{
    return __MyUtil__NoSuchPropertyException_name;
}

::Ice::Exception*
MyUtil::NoSuchPropertyException::ice_clone() const
{
    return new NoSuchPropertyException(*this);
}

void
MyUtil::NoSuchPropertyException::ice_throw() const
{
    throw *this;
}

void
MyUtil::NoSuchPropertyException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::MyUtil::NoSuchPropertyException"), false);
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    MceException::__write(__os);
#else
    ::MyUtil::MceException::__write(__os);
#endif
}

void
MyUtil::NoSuchPropertyException::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    MceException::__read(__is, true);
#else
    ::MyUtil::MceException::__read(__is, true);
#endif
}

void
MyUtil::NoSuchPropertyException::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "exception MyUtil::NoSuchPropertyException was not generated with stream support";
    throw ex;
}

void
MyUtil::NoSuchPropertyException::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "exception MyUtil::NoSuchPropertyException was not generated with stream support";
    throw ex;
}

struct __F__MyUtil__NoSuchPropertyException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::MyUtil::NoSuchPropertyException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__MyUtil__NoSuchPropertyException__Ptr = new __F__MyUtil__NoSuchPropertyException;

const ::IceInternal::UserExceptionFactoryPtr&
MyUtil::NoSuchPropertyException::ice_factory()
{
    return __F__MyUtil__NoSuchPropertyException__Ptr;
}

class __F__MyUtil__NoSuchPropertyException__Init
{
public:

    __F__MyUtil__NoSuchPropertyException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::MyUtil::NoSuchPropertyException", ::MyUtil::NoSuchPropertyException::ice_factory());
    }

    ~__F__MyUtil__NoSuchPropertyException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::MyUtil::NoSuchPropertyException");
    }
};

static __F__MyUtil__NoSuchPropertyException__Init __F__MyUtil__NoSuchPropertyException__i;

#ifdef __APPLE__
extern "C" { void __F__MyUtil__NoSuchPropertyException__initializer() {} }
#endif

void
MyUtil::__writeIntSeqSeq(::IceInternal::BasicStream* __os, const ::MyUtil::IntSeq* begin, const ::MyUtil::IntSeq* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        if(begin[i].size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&begin[i][0], &begin[i][0] + begin[i].size());
        }
    }
}

void
MyUtil::__readIntSeqSeq(::IceInternal::BasicStream* __is, ::MyUtil::IntSeqSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(v[i]);
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
MyUtil::__writeInt2IntMap(::IceInternal::BasicStream* __os, const ::MyUtil::Int2IntMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::MyUtil::Int2IntMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
MyUtil::__readInt2IntMap(::IceInternal::BasicStream* __is, ::MyUtil::Int2IntMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Int, ::Ice::Int> pair;
        __is->read(const_cast< ::Ice::Int&>(pair.first));
        ::MyUtil::Int2IntMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
MyUtil::__writeInt2StrMap(::IceInternal::BasicStream* __os, const ::MyUtil::Int2StrMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::MyUtil::Int2StrMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
MyUtil::__readInt2StrMap(::IceInternal::BasicStream* __is, ::MyUtil::Int2StrMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Int, ::std::string> pair;
        __is->read(const_cast< ::Ice::Int&>(pair.first));
        ::MyUtil::Int2StrMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
MyUtil::__writeLong2IntMap(::IceInternal::BasicStream* __os, const ::MyUtil::Long2IntMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::MyUtil::Long2IntMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
MyUtil::__readLong2IntMap(::IceInternal::BasicStream* __is, ::MyUtil::Long2IntMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Long, ::Ice::Int> pair;
        __is->read(const_cast< ::Ice::Long&>(pair.first));
        ::MyUtil::Long2IntMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
MyUtil::__writeLong2LongMap(::IceInternal::BasicStream* __os, const ::MyUtil::Long2LongMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::MyUtil::Long2LongMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
MyUtil::__readLong2LongMap(::IceInternal::BasicStream* __is, ::MyUtil::Long2LongMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Long, ::Ice::Long> pair;
        __is->read(const_cast< ::Ice::Long&>(pair.first));
        ::MyUtil::Long2LongMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
MyUtil::__writeStr2IntMap(::IceInternal::BasicStream* __os, const ::MyUtil::Str2IntMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::MyUtil::Str2IntMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
MyUtil::__readStr2IntMap(::IceInternal::BasicStream* __is, ::MyUtil::Str2IntMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::Ice::Int> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::MyUtil::Str2IntMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
MyUtil::__writeStr2LongMap(::IceInternal::BasicStream* __os, const ::MyUtil::Str2LongMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::MyUtil::Str2LongMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
MyUtil::__readStr2LongMap(::IceInternal::BasicStream* __is, ::MyUtil::Str2LongMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::Ice::Long> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::MyUtil::Str2LongMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
MyUtil::__writeStr2StrMap(::IceInternal::BasicStream* __os, const ::MyUtil::Str2StrMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::MyUtil::Str2StrMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
MyUtil::__readStr2StrMap(::IceInternal::BasicStream* __is, ::MyUtil::Str2StrMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::MyUtil::Str2StrMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
MyUtil::__writePropertyMap(::IceInternal::BasicStream* __os, const ::MyUtil::PropertyMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::MyUtil::PropertyMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        __os->write(p->second);
    }
}

void
MyUtil::__readPropertyMap(::IceInternal::BasicStream* __is, ::MyUtil::PropertyMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::std::string> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::MyUtil::PropertyMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
MyUtil::__writeStr2StrMapSeq(::IceInternal::BasicStream* __os, const ::MyUtil::Str2StrMap* begin, const ::MyUtil::Str2StrMap* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        ::MyUtil::__writeStr2StrMap(__os, begin[i]);
    }
}

void
MyUtil::__readStr2StrMapSeq(::IceInternal::BasicStream* __is, ::MyUtil::Str2StrMapSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::MyUtil::__readStr2StrMap(__is, v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
MyUtil::__writeInt2IntMapSeq(::IceInternal::BasicStream* __os, const ::MyUtil::Int2IntMap* begin, const ::MyUtil::Int2IntMap* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        ::MyUtil::__writeInt2IntMap(__os, begin[i]);
    }
}

void
MyUtil::__readInt2IntMapSeq(::IceInternal::BasicStream* __is, ::MyUtil::Int2IntMapSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 1);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        ::MyUtil::__readInt2IntMap(__is, v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

void
MyUtil::__writeInt2IntSeqMap(::IceInternal::BasicStream* __os, const ::MyUtil::Int2IntSeqMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::MyUtil::Int2IntSeqMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        if(p->second.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&p->second[0], &p->second[0] + p->second.size());
        }
    }
}

void
MyUtil::__readInt2IntSeqMap(::IceInternal::BasicStream* __is, ::MyUtil::Int2IntSeqMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::Ice::Int, ::MyUtil::IntSeq> pair;
        __is->read(const_cast< ::Ice::Int&>(pair.first));
        ::MyUtil::Int2IntSeqMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
MyUtil::__writeStr2IntSeqMap(::IceInternal::BasicStream* __os, const ::MyUtil::Str2IntSeqMap& v)
{
    __os->writeSize(::Ice::Int(v.size()));
    ::MyUtil::Str2IntSeqMap::const_iterator p;
    for(p = v.begin(); p != v.end(); ++p)
    {
        __os->write(p->first);
        if(p->second.size() == 0)
        {
            __os->writeSize(0);
        }
        else
        {
            __os->write(&p->second[0], &p->second[0] + p->second.size());
        }
    }
}

void
MyUtil::__readStr2IntSeqMap(::IceInternal::BasicStream* __is, ::MyUtil::Str2IntSeqMap& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    while(sz--)
    {
        ::std::pair<const  ::std::string, ::MyUtil::IntSeq> pair;
        __is->read(const_cast< ::std::string&>(pair.first));
        ::MyUtil::Str2IntSeqMap::iterator __i = v.insert(v.end(), pair);
        __is->read(__i->second);
    }
}

void
MyUtil::__writeGlobalIdSeq(::IceInternal::BasicStream* __os, const ::MyUtil::GlobalIdPtr* begin, const ::MyUtil::GlobalIdPtr* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(begin[i].get())));
    }
}

void
MyUtil::__readGlobalIdSeq(::IceInternal::BasicStream* __is, ::MyUtil::GlobalIdSeq& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->startSeq(sz, 4);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        __is->read(::MyUtil::__patch__GlobalIdPtr, &v[i]);
        __is->checkSeq();
        __is->endElement();
    }
    __is->endSeq(sz);
}

const ::std::string&
IceProxy::MyUtil::GlobalId::ice_staticId()
{
    return ::MyUtil::GlobalId::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::MyUtil::GlobalId::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::MyUtil::GlobalId);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::MyUtil::GlobalId::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::MyUtil::GlobalId);
}

::IceProxy::Ice::Object*
IceProxy::MyUtil::GlobalId::__newInstance() const
{
    return new GlobalId;
}

MyUtil::GlobalId::GlobalId(::Ice::Int __ice_type, ::Ice::Long __ice_id) :
    type(__ice_type),
    id(__ice_id)
{
}

::Ice::ObjectPtr
MyUtil::GlobalId::ice_clone() const
{
    ::MyUtil::GlobalIdPtr __p = new ::MyUtil::GlobalId(*this);
    return __p;
}

static const ::std::string __MyUtil__GlobalId_ids[2] =
{
    "::Ice::Object",
    "::MyUtil::GlobalId"
};

bool
MyUtil::GlobalId::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__MyUtil__GlobalId_ids, __MyUtil__GlobalId_ids + 2, _s);
}

::std::vector< ::std::string>
MyUtil::GlobalId::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__MyUtil__GlobalId_ids[0], &__MyUtil__GlobalId_ids[2]);
}

const ::std::string&
MyUtil::GlobalId::ice_id(const ::Ice::Current&) const
{
    return __MyUtil__GlobalId_ids[1];
}

const ::std::string&
MyUtil::GlobalId::ice_staticId()
{
    return __MyUtil__GlobalId_ids[1];
}

void
MyUtil::GlobalId::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(type);
    __os->write(id);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
MyUtil::GlobalId::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(type);
    __is->read(id);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
MyUtil::GlobalId::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type MyUtil::GlobalId was not generated with stream support";
    throw ex;
}

void
MyUtil::GlobalId::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type MyUtil::GlobalId was not generated with stream support";
    throw ex;
}

class __F__MyUtil__GlobalId : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::MyUtil::GlobalId::ice_staticId());
        return new ::MyUtil::GlobalId;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__MyUtil__GlobalId_Ptr = new __F__MyUtil__GlobalId;

const ::Ice::ObjectFactoryPtr&
MyUtil::GlobalId::ice_factory()
{
    return __F__MyUtil__GlobalId_Ptr;
}

class __F__MyUtil__GlobalId__Init
{
public:

    __F__MyUtil__GlobalId__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::MyUtil::GlobalId::ice_staticId(), ::MyUtil::GlobalId::ice_factory());
    }

    ~__F__MyUtil__GlobalId__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::MyUtil::GlobalId::ice_staticId());
    }
};

static __F__MyUtil__GlobalId__Init __F__MyUtil__GlobalId__i;

#ifdef __APPLE__
extern "C" { void __F__MyUtil__GlobalId__initializer() {} }
#endif

void 
MyUtil::__patch__GlobalIdPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::MyUtil::GlobalIdPtr* p = static_cast< ::MyUtil::GlobalIdPtr*>(__addr);
    assert(p);
    *p = ::MyUtil::GlobalIdPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::MyUtil::GlobalId::ice_staticId(), v->ice_id());
    }
}

bool
MyUtil::operator==(const ::MyUtil::GlobalId& l, const ::MyUtil::GlobalId& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
MyUtil::operator<(const ::MyUtil::GlobalId& l, const ::MyUtil::GlobalId& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
