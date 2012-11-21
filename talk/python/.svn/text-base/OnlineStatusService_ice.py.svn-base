# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `OnlineStatusService.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()

# Start of module xiaonei
_M_xiaonei = Ice.openModule('xiaonei')
__name__ = 'xiaonei'

# Start of module xiaonei.talk
_M_xiaonei.talk = Ice.openModule('xiaonei.talk')
__name__ = 'xiaonei.talk'

# Start of module xiaonei.talk.service
_M_xiaonei.talk.service = Ice.openModule('xiaonei.talk.service')
__name__ = 'xiaonei.talk.service'

if not _M_xiaonei.talk.service.__dict__.has_key('OnlineStatusService'):
    _M_xiaonei.talk.service.OnlineStatusService = Ice.createTempClass()
    class OnlineStatusService(Ice.Object):
        def __init__(self):
            if __builtin__.type(self) == _M_xiaonei.talk.service.OnlineStatusService:
                raise RuntimeError('xiaonei.talk.service.OnlineStatusService is an abstract class')

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::xiaonei::talk::service::OnlineStatusService')

        def ice_id(self, current=None):
            return '::xiaonei::talk::service::OnlineStatusService'

        def ice_staticId():
            return '::xiaonei::talk::service::OnlineStatusService'
        ice_staticId = staticmethod(ice_staticId)

        #
        # Operation signatures.
        #
        # def online(self, userId, current=None):
        # def offline(self, userId, current=None):

        def __str__(self):
            return IcePy.stringify(self, _M_xiaonei.talk.service._t_OnlineStatusService)

        __repr__ = __str__

    _M_xiaonei.talk.service.OnlineStatusServicePrx = Ice.createTempClass()
    class OnlineStatusServicePrx(Ice.ObjectPrx):

        def online(self, userId, _ctx=None):
            return _M_xiaonei.talk.service.OnlineStatusService._op_online.invoke(self, ((userId, ), _ctx))

        def offline(self, userId, _ctx=None):
            return _M_xiaonei.talk.service.OnlineStatusService._op_offline.invoke(self, ((userId, ), _ctx))

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_xiaonei.talk.service.OnlineStatusServicePrx.ice_checkedCast(proxy, '::xiaonei::talk::service::OnlineStatusService', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_xiaonei.talk.service.OnlineStatusServicePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_xiaonei.talk.service._t_OnlineStatusServicePrx = IcePy.defineProxy('::xiaonei::talk::service::OnlineStatusService', OnlineStatusServicePrx)

    _M_xiaonei.talk.service._t_OnlineStatusService = IcePy.defineClass('::xiaonei::talk::service::OnlineStatusService', OnlineStatusService, (), True, None, (), ())
    OnlineStatusService.ice_type = _M_xiaonei.talk.service._t_OnlineStatusService

    OnlineStatusService._op_online = IcePy.Operation('online', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), None, ())
    OnlineStatusService._op_offline = IcePy.Operation('offline', Ice.OperationMode.Normal, Ice.OperationMode.Normal, False, (), (((), IcePy._t_int),), (), None, ())

    _M_xiaonei.talk.service.OnlineStatusService = OnlineStatusService
    del OnlineStatusService

    _M_xiaonei.talk.service.OnlineStatusServicePrx = OnlineStatusServicePrx
    del OnlineStatusServicePrx

# End of module xiaonei.talk.service

__name__ = 'xiaonei.talk'

# End of module xiaonei.talk

__name__ = 'xiaonei'

# End of module xiaonei
