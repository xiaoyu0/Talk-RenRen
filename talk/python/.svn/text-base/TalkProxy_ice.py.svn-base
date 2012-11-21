# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `TalkProxy.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import TalkCommon_ice

# Included module MyUtil
_M_MyUtil = Ice.openModule('MyUtil')

# Included module com
_M_com = Ice.openModule('com')

# Included module com.xiaonei
_M_com.xiaonei = Ice.openModule('com.xiaonei')

# Included module com.xiaonei.talk
_M_com.xiaonei.talk = Ice.openModule('com.xiaonei.talk')

# Included module com.xiaonei.talk.common
_M_com.xiaonei.talk.common = Ice.openModule('com.xiaonei.talk.common')

# Start of module com
__name__ = 'com'

# Start of module com.xiaonei
__name__ = 'com.xiaonei'

# Start of module com.xiaonei.talk
__name__ = 'com.xiaonei.talk'

if not _M_com.xiaonei.talk.__dict__.has_key('DeliverInterface'):
    _M_com.xiaonei.talk.DeliverInterface = Ice.createTempClass()
    class DeliverInterface(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_com.xiaonei.talk.DeliverInterface:
                raise RuntimeError('com.xiaonei.talk.DeliverInterface is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::com::xiaonei::talk::DeliverInterface')

        def ice_id(self, current=None):
            return '::com::xiaonei::talk::DeliverInterface'

        def ice_staticId():
            return '::com::xiaonei::talk::DeliverInterface'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def express(self, jid, msg, current=None):
        # def deliver(self, msgs, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_com.xiaonei.talk._t_DeliverInterface)

        __repr__ = __str__

    _M_com.xiaonei.talk.DeliverInterfacePrx = Ice.createTempClass()
    class DeliverInterfacePrx(Ice.ObjectPrx):

        def express(self, jid, msg, _ctx=None):
            return _M_com.xiaonei.talk.DeliverInterface._op_express.invoke(self, ((jid, msg), _ctx))

        def deliver(self, msgs, _ctx=None):
            return _M_com.xiaonei.talk.DeliverInterface._op_deliver.invoke(self, ((msgs, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_com.xiaonei.talk.DeliverInterfacePrx.ice_checkedCast(proxy, '::com::xiaonei::talk::DeliverInterface', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_com.xiaonei.talk.DeliverInterfacePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_com.xiaonei.talk._t_DeliverInterfacePrx = IcePy.defineProxy('::com::xiaonei::talk::DeliverInterface', DeliverInterfacePrx)

    _M_com.xiaonei.talk._t_DeliverInterface = IcePy.defineClass('::com::xiaonei::talk::DeliverInterface', DeliverInterface, (), True, None, (), ())
    DeliverInterface.ice_type = _M_com.xiaonei.talk._t_DeliverInterface

    DeliverInterface._op_express = IcePy.Operation('express', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_com.xiaonei.talk.common._t_Jid), ((), IcePy._t_string)), (), None, ())
    DeliverInterface._op_deliver = IcePy.Operation('deliver', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_com.xiaonei.talk.common._t_MessageSeq),), (), None, ())

    _M_com.xiaonei.talk.DeliverInterface = DeliverInterface
    del DeliverInterface

    _M_com.xiaonei.talk.DeliverInterfacePrx = DeliverInterfacePrx
    del DeliverInterfacePrx

if not _M_com.xiaonei.talk.__dict__.has_key('ProxyManager'):
    _M_com.xiaonei.talk.ProxyManager = Ice.createTempClass()
    class ProxyManager(_M_com.xiaonei.talk.DeliverInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_com.xiaonei.talk.ProxyManager:
                raise RuntimeError('com.xiaonei.talk.ProxyManager is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::com::xiaonei::talk::DeliverInterface', '::com::xiaonei::talk::ProxyManager')

        def ice_id(self, current=None):
            return '::com::xiaonei::talk::ProxyManager'

        def ice_staticId():
            return '::com::xiaonei::talk::ProxyManager'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def indexExist(self, index, current=None):
        # def checkTicket(self, jid, ticket, current=None):
        # def verify(self, jid, ticket, current=None):
        # def GetTicket(self, jid, current=None):
        # def leave(self, jid, current=None):
        # def relogin(self, current=None):
        # def broadcast(self, xmlMsg, current=None):
        # def kick(self, jid, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_com.xiaonei.talk._t_ProxyManager)

        __repr__ = __str__

    _M_com.xiaonei.talk.ProxyManagerPrx = Ice.createTempClass()
    class ProxyManagerPrx(_M_com.xiaonei.talk.DeliverInterfacePrx):

        def indexExist(self, index, _ctx=None):
            return _M_com.xiaonei.talk.ProxyManager._op_indexExist.invoke(self, ((index, ), _ctx))

        def checkTicket(self, jid, ticket, _ctx=None):
            return _M_com.xiaonei.talk.ProxyManager._op_checkTicket.invoke(self, ((jid, ticket), _ctx))

        def verify(self, jid, ticket, _ctx=None):
            return _M_com.xiaonei.talk.ProxyManager._op_verify.invoke(self, ((jid, ticket), _ctx))

        def GetTicket(self, jid, _ctx=None):
            return _M_com.xiaonei.talk.ProxyManager._op_GetTicket.invoke(self, ((jid, ), _ctx))

        def leave(self, jid, _ctx=None):
            return _M_com.xiaonei.talk.ProxyManager._op_leave.invoke(self, ((jid, ), _ctx))

        def relogin(self, _ctx=None):
            return _M_com.xiaonei.talk.ProxyManager._op_relogin.invoke(self, ((), _ctx))

        def broadcast(self, xmlMsg, _ctx=None):
            return _M_com.xiaonei.talk.ProxyManager._op_broadcast.invoke(self, ((xmlMsg, ), _ctx))

        def kick(self, jid, _ctx=None):
            return _M_com.xiaonei.talk.ProxyManager._op_kick.invoke(self, ((jid, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_com.xiaonei.talk.ProxyManagerPrx.ice_checkedCast(proxy, '::com::xiaonei::talk::ProxyManager', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_com.xiaonei.talk.ProxyManagerPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_com.xiaonei.talk._t_ProxyManagerPrx = IcePy.defineProxy('::com::xiaonei::talk::ProxyManager', ProxyManagerPrx)

    _M_com.xiaonei.talk._t_ProxyManager = IcePy.defineClass('::com::xiaonei::talk::ProxyManager', ProxyManager, (), True, None, (_M_com.xiaonei.talk._t_DeliverInterface,), ())
    ProxyManager.ice_type = _M_com.xiaonei.talk._t_ProxyManager

    ProxyManager._op_indexExist = IcePy.Operation('indexExist', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_long),), (), IcePy._t_bool, ())
    ProxyManager._op_checkTicket = IcePy.Operation('checkTicket', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_com.xiaonei.talk.common._t_Jid), ((), IcePy._t_string)), (), IcePy._t_bool, ())
    ProxyManager._op_verify = IcePy.Operation('verify', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_com.xiaonei.talk.common._t_Jid), ((), IcePy._t_string)), (), IcePy._t_bool, ())
    ProxyManager._op_GetTicket = IcePy.Operation('GetTicket', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_com.xiaonei.talk.common._t_Jid),), (), IcePy._t_string, ())
    ProxyManager._op_leave = IcePy.Operation('leave', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_com.xiaonei.talk.common._t_Jid),), (), None, ())
    ProxyManager._op_relogin = IcePy.Operation('relogin', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    ProxyManager._op_broadcast = IcePy.Operation('broadcast', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string),), (), None, ())
    ProxyManager._op_kick = IcePy.Operation('kick', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_com.xiaonei.talk.common._t_Jid),), (), None, ())

    _M_com.xiaonei.talk.ProxyManager = ProxyManager
    del ProxyManager

    _M_com.xiaonei.talk.ProxyManagerPrx = ProxyManagerPrx
    del ProxyManagerPrx

# End of module com.xiaonei.talk

__name__ = 'com.xiaonei'

# End of module com.xiaonei

__name__ = 'com'

# End of module com
