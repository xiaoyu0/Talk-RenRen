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

#ifndef __src_ice_src__Utils_h__
#define __src_ice_src__Utils_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
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

namespace com
{

namespace xiaonei
{

namespace wap
{

namespace talk
{

struct Result
{
    ::Ice::Int code;
    ::std::string msg;

    bool operator==(const Result&) const;
    bool operator<(const Result&) const;
    bool operator!=(const Result& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const Result& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const Result& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const Result& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

}

}

}

}

#endif
