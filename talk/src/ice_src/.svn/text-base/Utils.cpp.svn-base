// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `Utils.ice'

#include <Utils.h>
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

bool
com::xiaonei::wap::talk::Result::operator==(const Result& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(code != __rhs.code)
    {
        return false;
    }
    if(msg != __rhs.msg)
    {
        return false;
    }
    return true;
}

bool
com::xiaonei::wap::talk::Result::operator<(const Result& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(code < __rhs.code)
    {
        return true;
    }
    else if(__rhs.code < code)
    {
        return false;
    }
    if(msg < __rhs.msg)
    {
        return true;
    }
    else if(__rhs.msg < msg)
    {
        return false;
    }
    return false;
}

void
com::xiaonei::wap::talk::Result::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(code);
    __os->write(msg);
}

void
com::xiaonei::wap::talk::Result::__read(::IceInternal::BasicStream* __is)
{
    __is->read(code);
    __is->read(msg);
}
