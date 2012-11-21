# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `TalkCommon.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()
import Util_ice

# Included module MyUtil
_M_MyUtil = Ice.openModule('MyUtil')

# Start of module com
_M_com = Ice.openModule('com')
__name__ = 'com'

# Start of module com.xiaonei
_M_com.xiaonei = Ice.openModule('com.xiaonei')
__name__ = 'com.xiaonei'

# Start of module com.xiaonei.talk
_M_com.xiaonei.talk = Ice.openModule('com.xiaonei.talk')
__name__ = 'com.xiaonei.talk'

# Start of module com.xiaonei.talk.common
_M_com.xiaonei.talk.common = Ice.openModule('com.xiaonei.talk.common')
__name__ = 'com.xiaonei.talk.common'

_M_com.xiaonei.talk.common.TALKDOMAIN = "talk.xiaonei.com"

if not _M_com.xiaonei.talk.common.__dict__.has_key('Passport'):
    _M_com.xiaonei.talk.common.Passport = Ice.createTempClass()
    class Passport(Ice.Object):
        def __init__(self, userId=0, result=0):
            self.userId = userId
            self.result = result

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::com::xiaonei::talk::common::Passport')

        def ice_id(self, current=None):
            return '::com::xiaonei::talk::common::Passport'

        def ice_staticId():
            return '::com::xiaonei::talk::common::Passport'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_com.xiaonei.talk.common._t_Passport)

        __repr__ = __str__

    _M_com.xiaonei.talk.common.PassportPrx = Ice.createTempClass()
    class PassportPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_com.xiaonei.talk.common.PassportPrx.ice_checkedCast(proxy, '::com::xiaonei::talk::common::Passport', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_com.xiaonei.talk.common.PassportPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_com.xiaonei.talk.common._t_PassportPrx = IcePy.defineProxy('::com::xiaonei::talk::common::Passport', PassportPrx)

    _M_com.xiaonei.talk.common._t_Passport = IcePy.defineClass('::com::xiaonei::talk::common::Passport', Passport, (), False, None, (), (
        ('userId', (), IcePy._t_int),
        ('result', (), IcePy._t_int)
    ))
    Passport.ice_type = _M_com.xiaonei.talk.common._t_Passport

    _M_com.xiaonei.talk.common.Passport = Passport
    del Passport

    _M_com.xiaonei.talk.common.PassportPrx = PassportPrx
    del PassportPrx

if not _M_com.xiaonei.talk.common.__dict__.has_key('Jid'):
    _M_com.xiaonei.talk.common.Jid = Ice.createTempClass()
    class Jid(Ice.Object):
        def __init__(self, userId=0, endpoint='', index=0):
            self.userId = userId
            self.endpoint = endpoint
            self.index = index

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::com::xiaonei::talk::common::Jid')

        def ice_id(self, current=None):
            return '::com::xiaonei::talk::common::Jid'

        def ice_staticId():
            return '::com::xiaonei::talk::common::Jid'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_com.xiaonei.talk.common._t_Jid)

        __repr__ = __str__

    _M_com.xiaonei.talk.common.JidPrx = Ice.createTempClass()
    class JidPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_com.xiaonei.talk.common.JidPrx.ice_checkedCast(proxy, '::com::xiaonei::talk::common::Jid', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_com.xiaonei.talk.common.JidPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_com.xiaonei.talk.common._t_JidPrx = IcePy.defineProxy('::com::xiaonei::talk::common::Jid', JidPrx)

    _M_com.xiaonei.talk.common._t_Jid = IcePy.defineClass('::com::xiaonei::talk::common::Jid', Jid, (), False, None, (), (
        ('userId', (), IcePy._t_int),
        ('endpoint', (), IcePy._t_string),
        ('index', (), IcePy._t_long)
    ))
    Jid.ice_type = _M_com.xiaonei.talk.common._t_Jid

    _M_com.xiaonei.talk.common.Jid = Jid
    del Jid

    _M_com.xiaonei.talk.common.JidPrx = JidPrx
    del JidPrx

if not _M_com.xiaonei.talk.common.__dict__.has_key('_t_JidSeq'):
    _M_com.xiaonei.talk.common._t_JidSeq = IcePy.defineSequence('::com::xiaonei::talk::common::JidSeq', (), _M_com.xiaonei.talk.common._t_Jid)

if not _M_com.xiaonei.talk.common.__dict__.has_key('_t_JidMap'):
    _M_com.xiaonei.talk.common._t_JidMap = IcePy.defineDictionary('::com::xiaonei::talk::common::JidMap', (), IcePy._t_int, _M_com.xiaonei.talk.common._t_Jid)

if not _M_com.xiaonei.talk.common.__dict__.has_key('_t_JidSeqMap'):
    _M_com.xiaonei.talk.common._t_JidSeqMap = IcePy.defineDictionary('::com::xiaonei::talk::common::JidSeqMap', (), IcePy._t_int, _M_com.xiaonei.talk.common._t_JidSeq)

if not _M_com.xiaonei.talk.common.__dict__.has_key('SysJid'):
    _M_com.xiaonei.talk.common.SysJid = Ice.createTempClass()
    class SysJid(Ice.Object):
        def __init__(self, node='', category=''):
            self.node = node
            self.category = category

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::com::xiaonei::talk::common::SysJid')

        def ice_id(self, current=None):
            return '::com::xiaonei::talk::common::SysJid'

        def ice_staticId():
            return '::com::xiaonei::talk::common::SysJid'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_com.xiaonei.talk.common._t_SysJid)

        __repr__ = __str__

    _M_com.xiaonei.talk.common.SysJidPrx = Ice.createTempClass()
    class SysJidPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_com.xiaonei.talk.common.SysJidPrx.ice_checkedCast(proxy, '::com::xiaonei::talk::common::SysJid', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_com.xiaonei.talk.common.SysJidPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_com.xiaonei.talk.common._t_SysJidPrx = IcePy.defineProxy('::com::xiaonei::talk::common::SysJid', SysJidPrx)

    _M_com.xiaonei.talk.common._t_SysJid = IcePy.defineClass('::com::xiaonei::talk::common::SysJid', SysJid, (), False, None, (), (
        ('node', (), IcePy._t_string),
        ('category', (), IcePy._t_string)
    ))
    SysJid.ice_type = _M_com.xiaonei.talk.common._t_SysJid

    _M_com.xiaonei.talk.common.SysJid = SysJid
    del SysJid

    _M_com.xiaonei.talk.common.SysJidPrx = SysJidPrx
    del SysJidPrx

if not _M_com.xiaonei.talk.common.__dict__.has_key('OnlineStat'):
    _M_com.xiaonei.talk.common.OnlineStat = Ice.createTempClass()
    class OnlineStat(object):

        def __init__(self, val):
            assert(val >= 0 and val < 6)
            self.value = val

        def __str__(self):
            if self.value == 0:
                return 'OFFLINE'
            elif self.value == 1:
                return 'INVISIABLE'
            elif self.value == 2:
                return 'NOTAVAILABLE'
            elif self.value == 3:
                return 'BUSY'
            elif self.value == 4:
                return 'AWAY'
            elif self.value == 5:
                return 'ONLINE'
            return None

        __repr__ = __str__

        def __hash__(self):
            return self.value

        def __cmp__(self, other):
            return cmp(self.value, other.value)

    OnlineStat.OFFLINE = OnlineStat(0)
    OnlineStat.INVISIABLE = OnlineStat(1)
    OnlineStat.NOTAVAILABLE = OnlineStat(2)
    OnlineStat.BUSY = OnlineStat(3)
    OnlineStat.AWAY = OnlineStat(4)
    OnlineStat.ONLINE = OnlineStat(5)

    _M_com.xiaonei.talk.common._t_OnlineStat = IcePy.defineEnum('::com::xiaonei::talk::common::OnlineStat', OnlineStat, (), (OnlineStat.OFFLINE, OnlineStat.INVISIABLE, OnlineStat.NOTAVAILABLE, OnlineStat.BUSY, OnlineStat.AWAY, OnlineStat.ONLINE))

    _M_com.xiaonei.talk.common.OnlineStat = OnlineStat
    del OnlineStat

if not _M_com.xiaonei.talk.common.__dict__.has_key('Avatar'):
    _M_com.xiaonei.talk.common.Avatar = Ice.createTempClass()
    class Avatar(Ice.Object):
        def __init__(self, jid=None, stat=_M_com.xiaonei.talk.common.OnlineStat.OFFLINE, ver='', ext='', stamp=0):
            self.jid = jid
            self.stat = stat
            self.ver = ver
            self.ext = ext
            self.stamp = stamp

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::com::xiaonei::talk::common::Avatar')

        def ice_id(self, current=None):
            return '::com::xiaonei::talk::common::Avatar'

        def ice_staticId():
            return '::com::xiaonei::talk::common::Avatar'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_com.xiaonei.talk.common._t_Avatar)

        __repr__ = __str__

    _M_com.xiaonei.talk.common.AvatarPrx = Ice.createTempClass()
    class AvatarPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_com.xiaonei.talk.common.AvatarPrx.ice_checkedCast(proxy, '::com::xiaonei::talk::common::Avatar', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_com.xiaonei.talk.common.AvatarPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_com.xiaonei.talk.common._t_AvatarPrx = IcePy.defineProxy('::com::xiaonei::talk::common::Avatar', AvatarPrx)

    _M_com.xiaonei.talk.common._t_Avatar = IcePy.declareClass('::com::xiaonei::talk::common::Avatar')

    _M_com.xiaonei.talk.common._t_Avatar = IcePy.defineClass('::com::xiaonei::talk::common::Avatar', Avatar, (), False, None, (), (
        ('jid', (), _M_com.xiaonei.talk.common._t_Jid),
        ('stat', (), _M_com.xiaonei.talk.common._t_OnlineStat),
        ('ver', (), IcePy._t_string),
        ('ext', (), IcePy._t_string),
        ('stamp', (), IcePy._t_int)
    ))
    Avatar.ice_type = _M_com.xiaonei.talk.common._t_Avatar

    _M_com.xiaonei.talk.common.Avatar = Avatar
    del Avatar

    _M_com.xiaonei.talk.common.AvatarPrx = AvatarPrx
    del AvatarPrx

if not _M_com.xiaonei.talk.common.__dict__.has_key('_t_AvatarSeq'):
    _M_com.xiaonei.talk.common._t_AvatarSeq = IcePy.defineSequence('::com::xiaonei::talk::common::AvatarSeq', (), _M_com.xiaonei.talk.common._t_Avatar)

if not _M_com.xiaonei.talk.common.__dict__.has_key('_t_AvatarMap'):
    _M_com.xiaonei.talk.common._t_AvatarMap = IcePy.defineDictionary('::com::xiaonei::talk::common::AvatarMap', (), IcePy._t_int, _M_com.xiaonei.talk.common._t_AvatarSeq)

if not _M_com.xiaonei.talk.common.__dict__.has_key('OnlineInfo'):
    _M_com.xiaonei.talk.common.OnlineInfo = Ice.createTempClass()
    class OnlineInfo(Ice.Object):
        def __init__(self, userId=0, endpoint='', index=0, show='', ver='', ext='', stamp=0):
            self.userId = userId
            self.endpoint = endpoint
            self.index = index
            self.show = show
            self.ver = ver
            self.ext = ext
            self.stamp = stamp

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::com::xiaonei::talk::common::OnlineInfo')

        def ice_id(self, current=None):
            return '::com::xiaonei::talk::common::OnlineInfo'

        def ice_staticId():
            return '::com::xiaonei::talk::common::OnlineInfo'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_com.xiaonei.talk.common._t_OnlineInfo)

        __repr__ = __str__

    _M_com.xiaonei.talk.common.OnlineInfoPrx = Ice.createTempClass()
    class OnlineInfoPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_com.xiaonei.talk.common.OnlineInfoPrx.ice_checkedCast(proxy, '::com::xiaonei::talk::common::OnlineInfo', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_com.xiaonei.talk.common.OnlineInfoPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_com.xiaonei.talk.common._t_OnlineInfoPrx = IcePy.defineProxy('::com::xiaonei::talk::common::OnlineInfo', OnlineInfoPrx)

    _M_com.xiaonei.talk.common._t_OnlineInfo = IcePy.defineClass('::com::xiaonei::talk::common::OnlineInfo', OnlineInfo, (), False, None, (), (
        ('userId', (), IcePy._t_int),
        ('endpoint', (), IcePy._t_string),
        ('index', (), IcePy._t_long),
        ('show', (), IcePy._t_string),
        ('ver', (), IcePy._t_string),
        ('ext', (), IcePy._t_string),
        ('stamp', (), IcePy._t_int)
    ))
    OnlineInfo.ice_type = _M_com.xiaonei.talk.common._t_OnlineInfo

    _M_com.xiaonei.talk.common.OnlineInfo = OnlineInfo
    del OnlineInfo

    _M_com.xiaonei.talk.common.OnlineInfoPrx = OnlineInfoPrx
    del OnlineInfoPrx

if not _M_com.xiaonei.talk.common.__dict__.has_key('_t_OnlineInfoSeq'):
    _M_com.xiaonei.talk.common._t_OnlineInfoSeq = IcePy.defineSequence('::com::xiaonei::talk::common::OnlineInfoSeq', (), _M_com.xiaonei.talk.common._t_OnlineInfo)

if not _M_com.xiaonei.talk.common.__dict__.has_key('_t_OnlineInfoMap'):
    _M_com.xiaonei.talk.common._t_OnlineInfoMap = IcePy.defineDictionary('::com::xiaonei::talk::common::OnlineInfoMap', (), IcePy._t_int, _M_com.xiaonei.talk.common._t_OnlineInfoSeq)

if not _M_com.xiaonei.talk.common.__dict__.has_key('Message'):
    _M_com.xiaonei.talk.common.Message = Ice.createTempClass()
    class Message(Ice.Object):
        def __init__(self, _from=None, to=None, msg='', type=0, msgKey=0):
            self._from = _from
            self.to = to
            self.msg = msg
            self.type = type
            self.msgKey = msgKey

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::com::xiaonei::talk::common::Message')

        def ice_id(self, current=None):
            return '::com::xiaonei::talk::common::Message'

        def ice_staticId():
            return '::com::xiaonei::talk::common::Message'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_com.xiaonei.talk.common._t_Message)

        __repr__ = __str__

    _M_com.xiaonei.talk.common.MessagePrx = Ice.createTempClass()
    class MessagePrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_com.xiaonei.talk.common.MessagePrx.ice_checkedCast(proxy, '::com::xiaonei::talk::common::Message', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_com.xiaonei.talk.common.MessagePrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_com.xiaonei.talk.common._t_MessagePrx = IcePy.defineProxy('::com::xiaonei::talk::common::Message', MessagePrx)

    _M_com.xiaonei.talk.common._t_Message = IcePy.declareClass('::com::xiaonei::talk::common::Message')

    _M_com.xiaonei.talk.common._t_Message = IcePy.defineClass('::com::xiaonei::talk::common::Message', Message, (), False, None, (), (
        ('_from', (), _M_com.xiaonei.talk.common._t_Jid),
        ('to', (), _M_com.xiaonei.talk.common._t_Jid),
        ('msg', (), IcePy._t_string),
        ('type', (), IcePy._t_int),
        ('msgKey', (), IcePy._t_long)
    ))
    Message.ice_type = _M_com.xiaonei.talk.common._t_Message

    _M_com.xiaonei.talk.common.Message = Message
    del Message

    _M_com.xiaonei.talk.common.MessagePrx = MessagePrx
    del MessagePrx

if not _M_com.xiaonei.talk.common.__dict__.has_key('_t_MessageSeq'):
    _M_com.xiaonei.talk.common._t_MessageSeq = IcePy.defineSequence('::com::xiaonei::talk::common::MessageSeq', (), _M_com.xiaonei.talk.common._t_Message)

if not _M_com.xiaonei.talk.common.__dict__.has_key('_t_MessageMap'):
    _M_com.xiaonei.talk.common._t_MessageMap = IcePy.defineDictionary('::com::xiaonei::talk::common::MessageMap', (), IcePy._t_long, _M_com.xiaonei.talk.common._t_Message)

# End of module com.xiaonei.talk.common

__name__ = 'com.xiaonei.talk'

# End of module com.xiaonei.talk

__name__ = 'com.xiaonei'

# End of module com.xiaonei

__name__ = 'com'

# End of module com
