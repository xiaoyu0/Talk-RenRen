# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `IMStorm.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import Util_ice
import TalkCommon_ice
import TalkProxy_ice

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

# Start of module xce
_M_xce = Ice.openModule('xce')
__name__ = 'xce'

# Start of module xce.talk
_M_xce.talk = Ice.openModule('xce.talk')
__name__ = 'xce.talk'

if not _M_xce.talk.__dict__.has_key('Observer'):
    _M_xce.talk.Observer = Ice.createTempClass()
    class Observer(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_xce.talk.Observer:
                raise RuntimeError('xce.talk.Observer is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::xce::talk::Observer')

        def ice_id(self, current=None):
            return '::xce::talk::Observer'

        def ice_staticId():
            return '::xce::talk::Observer'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def update(self, context, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_xce.talk._t_Observer)

        __repr__ = __str__

    _M_xce.talk.ObserverPrx = Ice.createTempClass()
    class ObserverPrx(Ice.ObjectPrx):

        def update(self, context, _ctx=None):
            return _M_xce.talk.Observer._op_update.invoke(self, ((context, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_xce.talk.ObserverPrx.ice_checkedCast(proxy, '::xce::talk::Observer', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_xce.talk.ObserverPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_xce.talk._t_ObserverPrx = IcePy.defineProxy('::xce::talk::Observer', ObserverPrx)

    _M_xce.talk._t_Observer = IcePy.defineClass('::xce::talk::Observer', Observer, (), True, None, (), ())
    Observer.ice_type = _M_xce.talk._t_Observer

    Observer._op_update = IcePy.Operation('update', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), _M_MyUtil._t_Str2StrMap),), (), IcePy._t_bool, ())

    _M_xce.talk.Observer = Observer
    del Observer

    _M_xce.talk.ObserverPrx = ObserverPrx
    del ObserverPrx

if not _M_xce.talk.__dict__.has_key('_t_ObserverPool'):
    _M_xce.talk._t_ObserverPool = IcePy.defineSequence('::xce::talk::ObserverPool', (), _M_xce.talk._t_ObserverPrx)

if not _M_xce.talk.__dict__.has_key('_t_ObserverPoolMap'):
    _M_xce.talk._t_ObserverPoolMap = IcePy.defineDictionary('::xce::talk::ObserverPoolMap', (), IcePy._t_string, _M_xce.talk._t_ObserverPool)

if not _M_xce.talk.__dict__.has_key('IMStorm'):
    _M_xce.talk.IMStorm = Ice.createTempClass()
    class IMStorm(_M_com.xiaonei.talk.DeliverInterface):
        def __init__(self):
            if __builtin__.type(self) == _M_xce.talk.IMStorm:
                raise RuntimeError('xce.talk.IMStorm is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::com::xiaonei::talk::DeliverInterface', '::xce::talk::IMStorm')

        def ice_id(self, current=None):
            return '::xce::talk::IMStorm'

        def ice_staticId():
            return '::xce::talk::IMStorm'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def UserOnlineStatChange(self, userid, onlinestat, onlinetype, notifybuddys, current=None):
        # def notify(self, name, context, servercount, channel, current=None):
        # def subscribe(self, name, o, phoneservercount, phoneserverindex, current=None):
        # def unsubscribe(self, name, o, current=None):
        # def NotifyPhoneServerDisable(self, current=None):
        # def NotifyPhoneServerEnalbe(self, current=None):
        # def query(self, name, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_xce.talk._t_IMStorm)

        __repr__ = __str__

    _M_xce.talk.IMStormPrx = Ice.createTempClass()
    class IMStormPrx(_M_com.xiaonei.talk.DeliverInterfacePrx):

        def UserOnlineStatChange(self, userid, onlinestat, onlinetype, notifybuddys, _ctx=None):
            return _M_xce.talk.IMStorm._op_UserOnlineStatChange.invoke(self, ((userid, onlinestat, onlinetype, notifybuddys), _ctx))

        def notify(self, name, context, servercount, channel, _ctx=None):
            return _M_xce.talk.IMStorm._op_notify.invoke(self, ((name, context, servercount, channel), _ctx))

        def subscribe(self, name, o, phoneservercount, phoneserverindex, _ctx=None):
            return _M_xce.talk.IMStorm._op_subscribe.invoke(self, ((name, o, phoneservercount, phoneserverindex), _ctx))

        def unsubscribe(self, name, o, _ctx=None):
            return _M_xce.talk.IMStorm._op_unsubscribe.invoke(self, ((name, o), _ctx))

        def NotifyPhoneServerDisable(self, _ctx=None):
            return _M_xce.talk.IMStorm._op_NotifyPhoneServerDisable.invoke(self, ((), _ctx))

        def NotifyPhoneServerEnalbe(self, _ctx=None):
            return _M_xce.talk.IMStorm._op_NotifyPhoneServerEnalbe.invoke(self, ((), _ctx))

        def query(self, name, _ctx=None):
            return _M_xce.talk.IMStorm._op_query.invoke(self, ((name, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_xce.talk.IMStormPrx.ice_checkedCast(proxy, '::xce::talk::IMStorm', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_xce.talk.IMStormPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_xce.talk._t_IMStormPrx = IcePy.defineProxy('::xce::talk::IMStorm', IMStormPrx)

    _M_xce.talk._t_IMStorm = IcePy.defineClass('::xce::talk::IMStorm', IMStorm, (), True, None, (_M_com.xiaonei.talk._t_DeliverInterface,), ())
    IMStorm.ice_type = _M_xce.talk._t_IMStorm

    IMStorm._op_UserOnlineStatChange = IcePy.Operation('UserOnlineStatChange', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int), ((), IcePy._t_int), ((), IcePy._t_int), ((), _M_MyUtil._t_IntSeq)), (), None, ())
    IMStorm._op_notify = IcePy.Operation('notify', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string), ((), _M_MyUtil._t_Str2StrMap), ((), IcePy._t_int), ((), IcePy._t_int)), (), None, ())
    IMStorm._op_subscribe = IcePy.Operation('subscribe', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string), ((), _M_xce.talk._t_ObserverPrx), ((), IcePy._t_int), ((), IcePy._t_int)), (), None, ())
    IMStorm._op_unsubscribe = IcePy.Operation('unsubscribe', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string), ((), _M_xce.talk._t_ObserverPrx)), (), None, ())
    IMStorm._op_NotifyPhoneServerDisable = IcePy.Operation('NotifyPhoneServerDisable', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    IMStorm._op_NotifyPhoneServerEnalbe = IcePy.Operation('NotifyPhoneServerEnalbe', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (), (), None, ())
    IMStorm._op_query = IcePy.Operation('query', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_string),), (), _M_xce.talk._t_ObserverPoolMap, ())

    _M_xce.talk.IMStorm = IMStorm
    del IMStorm

    _M_xce.talk.IMStormPrx = IMStormPrx
    del IMStormPrx

if not _M_xce.talk.__dict__.has_key('TestStorm'):
    _M_xce.talk.TestStorm = Ice.createTempClass()
    class TestStorm(Ice.Object):
        def __init__(self):
            pass

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::xce::talk::TestStorm')

        def ice_id(self, current=None):
            return '::xce::talk::TestStorm'

        def ice_staticId():
            return '::xce::talk::TestStorm'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_xce.talk._t_TestStorm)

        __repr__ = __str__

    _M_xce.talk.TestStormPrx = Ice.createTempClass()
    class TestStormPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_xce.talk.TestStormPrx.ice_checkedCast(proxy, '::xce::talk::TestStorm', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_xce.talk.TestStormPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_xce.talk._t_TestStormPrx = IcePy.defineProxy('::xce::talk::TestStorm', TestStormPrx)

    _M_xce.talk._t_TestStorm = IcePy.defineClass('::xce::talk::TestStorm', TestStorm, (), False, None, (), ())
    TestStorm.ice_type = _M_xce.talk._t_TestStorm

    _M_xce.talk.TestStorm = TestStorm
    del TestStorm

    _M_xce.talk.TestStormPrx = TestStormPrx
    del TestStormPrx

# End of module xce.talk

__name__ = 'xce'

# End of module xce
