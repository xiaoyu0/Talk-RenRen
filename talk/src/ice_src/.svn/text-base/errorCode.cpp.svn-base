// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `errorCode.ice'

#include <errorCode.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
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

void
com::renren::sixin::account::__write(::IceInternal::BasicStream* __os, ::com::renren::sixin::account::AccountErrorCodeEnum v)
{
    __os->write(static_cast< ::Ice::Byte>(v), 38);
}

void
com::renren::sixin::account::__read(::IceInternal::BasicStream* __is, ::com::renren::sixin::account::AccountErrorCodeEnum& v)
{
    ::Ice::Byte val;
    __is->read(val, 38);
    v = static_cast< ::com::renren::sixin::account::AccountErrorCodeEnum>(val);
}
