# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `TalkService.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()

# Start of module com
_M_com = Ice.openModule('com')
__name__ = 'com'

# Start of module com.xiaonei
_M_com.xiaonei = Ice.openModule('com.xiaonei')
__name__ = 'com.xiaonei'

# Start of module com.xiaonei.wap
_M_com.xiaonei.wap = Ice.openModule('com.xiaonei.wap')
__name__ = 'com.xiaonei.wap'

# Start of module com.xiaonei.wap.talk
_M_com.xiaonei.wap.talk = Ice.openModule('com.xiaonei.wap.talk')
__name__ = 'com.xiaonei.wap.talk'

if not _M_com.xiaonei.wap.talk.__dict__.has_key('Result'):
    _M_com.xiaonei.wap.talk.Result = Ice.createTempClass()
    class Result(object):
        def __init__(self, code=0, msg=''):
            self.code = code
            self.msg = msg

        def __hash__(self):
            _h = 0
            _h = 5 * _h + __builtin__.hash(self.code)
            _h = 5 * _h + __builtin__.hash(self.msg)
            return _h % 0x7fffffff

        def __cmp__(self, other):
            if other == None:
                return 1
            if self.code < other.code:
                return -1
            elif self.code > other.code:
                return 1
            if self.msg < other.msg:
                return -1
            elif self.msg > other.msg:
                return 1
            return 0

        def __str__(self):
            return IcePy.stringify(self, _M_com.xiaonei.wap.talk._t_Result)

        __repr__ = __str__

    _M_com.xiaonei.wap.talk._t_Result = IcePy.defineStruct('::com::xiaonei::wap::talk::Result', Result, (), (
        ('code', (), IcePy._t_int),
        ('msg', (), IcePy._t_string)
    ))

    _M_com.xiaonei.wap.talk.Result = Result
    del Result

if not _M_com.xiaonei.wap.talk.__dict__.has_key('TalkService'):
    _M_com.xiaonei.wap.talk.TalkService = Ice.createTempClass()
    class TalkService(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_com.xiaonei.wap.talk.TalkService:
                raise RuntimeError('com.xiaonei.wap.talk.TalkService is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::com::xiaonei::wap::talk::TalkService')

        def ice_id(self, current=None):
            return '::com::xiaonei::wap::talk::TalkService'

        def ice_staticId():
            return '::com::xiaonei::wap::talk::TalkService'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def push(self, fromId, toId, msg, current=None):
        # def sendXMPP(self, sessionId, msg, current=None):
        # def remoteStop(self, current=None):
        # def remoteStart(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_com.xiaonei.wap.talk._t_TalkService)

        __repr__ = __str__

    _M_com.xiaonei.wap.talk.TalkServicePrx = Ice.createTempClass()
    class TalkServicePrx(Ice.ObjectPrx):

        def push(self, fromId, toId, msg, _ctx=None):
            return _M_com.xiaonei.wap.talk.TalkService._op_push.invoke(self, ((fromId, toId, msg), _ctx))

        def sendXMPP(self, sessionId, msg, _ctx=None):
            return _M_com.xiaonei.wap.talk.TalkService._op_sendXMPP.invoke(self, ((sessionId, msg), _ctx))

        def remoteStop(self, _ctx=None):
            return _M_com.xiaonei.wap.talk.TalkService._op_remoteStop.invoke(self, ((), _ctx))

        def remoteStart(self, _ctx=None):
            return _M_com.xiaonei.wap.talk.TalkService._op_remoteStart.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_com.xiaonei.wap.talk.TalkServicePrx.ice_checkedCast(proxy, '::com::xiaonei::wap::talk::TalkService', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_com.xiaonei.wap.talk.TalkServicePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_com.xiaonei.wap.talk._t_TalkServicePrx = IcePy.defineProxy('::com::xiaonei::wap::talk::TalkService', TalkServicePrx)

    _M_com.xiaonei.wap.talk._t_TalkService = IcePy.defineClass('::com::xiaonei::wap::talk::TalkService', TalkService, (), True, None, (), ())
    TalkService.ice_type = _M_com.xiaonei.wap.talk._t_TalkService

    TalkService._op_push = IcePy.Operation('push', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_string)), (), IcePy._t_bool, ())
    TalkService._op_sendXMPP = IcePy.Operation('sendXMPP', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string), ((), IcePy._t_string)), (), _M_com.xiaonei.wap.talk._t_Result, ())
    TalkService._op_remoteStop = IcePy.Operation('remoteStop', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    TalkService._op_remoteStart = IcePy.Operation('remoteStart', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())

    _M_com.xiaonei.wap.talk.TalkService = TalkService
    del TalkService

    _M_com.xiaonei.wap.talk.TalkServicePrx = TalkServicePrx
    del TalkServicePrx

# End of module com.xiaonei.wap.talk

__name__ = 'com.xiaonei.wap'

# End of module com.xiaonei.wap

__name__ = 'com.xiaonei'

# End of module com.xiaonei

__name__ = 'com'

# End of module com
