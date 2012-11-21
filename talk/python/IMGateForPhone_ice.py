# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IMGateForPhone.ice'

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

# Start of module com.xiaonei.talk.gate
_M_com.xiaonei.talk.gate = Ice.openModule('com.xiaonei.talk.gate')
__name__ = 'com.xiaonei.talk.gate'

if not _M_com.xiaonei.talk.gate.__dict__.has_key('IMGateForPhoneManager'):
    _M_com.xiaonei.talk.gate.IMGateForPhoneManager = Ice.createTempClass()
    class IMGateForPhoneManager(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_com.xiaonei.talk.gate.IMGateForPhoneManager:
                raise RuntimeError('com.xiaonei.talk.gate.IMGateForPhoneManager is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::com::xiaonei::talk::gate::IMGateForPhoneManager')

        def ice_id(self, current=None):
            return '::com::xiaonei::talk::gate::IMGateForPhoneManager'

        def ice_staticId():
            return '::com::xiaonei::talk::gate::IMGateForPhoneManager'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def SendMessage(self, phoneuserid, touserid, message, current=None):
        # def PhoneUserOnline(self, phoneuserid, current=None):
        # def PhoneUserOffline(self, phoneuserid, current=None):
        # def ServerDisable(self, current=None):
        # def ServerEnable(self, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_com.xiaonei.talk.gate._t_IMGateForPhoneManager)

        __repr__ = __str__

    _M_com.xiaonei.talk.gate.IMGateForPhoneManagerPrx = Ice.createTempClass()
    class IMGateForPhoneManagerPrx(Ice.ObjectPrx):

        def SendMessage(self, phoneuserid, touserid, message, _ctx=None):
            return _M_com.xiaonei.talk.gate.IMGateForPhoneManager._op_SendMessage.invoke(self, ((phoneuserid, touserid, message), _ctx))

        def PhoneUserOnline(self, phoneuserid, _ctx=None):
            return _M_com.xiaonei.talk.gate.IMGateForPhoneManager._op_PhoneUserOnline.invoke(self, ((phoneuserid, ), _ctx))

        def PhoneUserOffline(self, phoneuserid, _ctx=None):
            return _M_com.xiaonei.talk.gate.IMGateForPhoneManager._op_PhoneUserOffline.invoke(self, ((phoneuserid, ), _ctx))

        def ServerDisable(self, _ctx=None):
            return _M_com.xiaonei.talk.gate.IMGateForPhoneManager._op_ServerDisable.invoke(self, ((), _ctx))

        def ServerEnable(self, _ctx=None):
            return _M_com.xiaonei.talk.gate.IMGateForPhoneManager._op_ServerEnable.invoke(self, ((), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_com.xiaonei.talk.gate.IMGateForPhoneManagerPrx.ice_checkedCast(proxy, '::com::xiaonei::talk::gate::IMGateForPhoneManager', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_com.xiaonei.talk.gate.IMGateForPhoneManagerPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_com.xiaonei.talk.gate._t_IMGateForPhoneManagerPrx = IcePy.defineProxy('::com::xiaonei::talk::gate::IMGateForPhoneManager', IMGateForPhoneManagerPrx)

    _M_com.xiaonei.talk.gate._t_IMGateForPhoneManager = IcePy.defineClass('::com::xiaonei::talk::gate::IMGateForPhoneManager', IMGateForPhoneManager, (), True, None, (), ())
    IMGateForPhoneManager.ice_type = _M_com.xiaonei.talk.gate._t_IMGateForPhoneManager

    IMGateForPhoneManager._op_SendMessage = IcePy.Operation('SendMessage', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_string)), (), None, ())
    IMGateForPhoneManager._op_PhoneUserOnline = IcePy.Operation('PhoneUserOnline', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), None, ())
    IMGateForPhoneManager._op_PhoneUserOffline = IcePy.Operation('PhoneUserOffline', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), None, ())
    IMGateForPhoneManager._op_ServerDisable = IcePy.Operation('ServerDisable', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    IMGateForPhoneManager._op_ServerEnable = IcePy.Operation('ServerEnable', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())

    _M_com.xiaonei.talk.gate.IMGateForPhoneManager = IMGateForPhoneManager
    del IMGateForPhoneManager

    _M_com.xiaonei.talk.gate.IMGateForPhoneManagerPrx = IMGateForPhoneManagerPrx
    del IMGateForPhoneManagerPrx

# End of module com.xiaonei.talk.gate

__name__ = 'com.xiaonei.talk'

# End of module com.xiaonei.talk

__name__ = 'com.xiaonei'

# End of module com.xiaonei

__name__ = 'com'

# End of module com
