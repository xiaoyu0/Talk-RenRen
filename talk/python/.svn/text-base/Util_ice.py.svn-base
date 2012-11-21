# **********************************************************************
#
# Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
#
# This copy of Ice is licensed to you under the terms described in the
# ICE_LICENSE file included in this distribution.
#
# **********************************************************************

# Ice version 3.3.1
# Generated from file `Util.ice'

import Ice, IcePy, __builtin__

if not Ice.__dict__.has_key("_struct_marker"):
    Ice._struct_marker = object()

# Start of module MyUtil
_M_MyUtil = Ice.openModule('MyUtil')
__name__ = 'MyUtil'

if not _M_MyUtil.__dict__.has_key('MceException'):
    _M_MyUtil.MceException = Ice.createTempClass()
    class MceException(Ice.UserException):
        def __init__(self, message=''):
            self.message = message

        def ice_name(self):
            return 'MyUtil::MceException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_MyUtil._t_MceException = IcePy.defineException('::MyUtil::MceException', MceException, (), None, (('message', (), IcePy._t_string),))
    MceException.ice_type = _M_MyUtil._t_MceException

    _M_MyUtil.MceException = MceException
    del MceException

if not _M_MyUtil.__dict__.has_key('NoSuchObjectException'):
    _M_MyUtil.NoSuchObjectException = Ice.createTempClass()
    class NoSuchObjectException(_M_MyUtil.MceException):
        def __init__(self, message=''):
            _M_MyUtil.MceException.__init__(self, message)

        def ice_name(self):
            return 'MyUtil::NoSuchObjectException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_MyUtil._t_NoSuchObjectException = IcePy.defineException('::MyUtil::NoSuchObjectException', NoSuchObjectException, (), _M_MyUtil._t_MceException, ())
    NoSuchObjectException.ice_type = _M_MyUtil._t_NoSuchObjectException

    _M_MyUtil.NoSuchObjectException = NoSuchObjectException
    del NoSuchObjectException

if not _M_MyUtil.__dict__.has_key('NoSuchPropertyException'):
    _M_MyUtil.NoSuchPropertyException = Ice.createTempClass()
    class NoSuchPropertyException(_M_MyUtil.MceException):
        def __init__(self, message=''):
            _M_MyUtil.MceException.__init__(self, message)

        def ice_name(self):
            return 'MyUtil::NoSuchPropertyException'

        def __str__(self):
            return IcePy.stringifyException(self)

        __repr__ = __str__

    _M_MyUtil._t_NoSuchPropertyException = IcePy.defineException('::MyUtil::NoSuchPropertyException', NoSuchPropertyException, (), _M_MyUtil._t_MceException, ())
    NoSuchPropertyException.ice_type = _M_MyUtil._t_NoSuchPropertyException

    _M_MyUtil.NoSuchPropertyException = NoSuchPropertyException
    del NoSuchPropertyException

if not _M_MyUtil.__dict__.has_key('_t_ByteSeq'):
    _M_MyUtil._t_ByteSeq = IcePy.defineSequence('::MyUtil::ByteSeq', (), IcePy._t_byte)

if not _M_MyUtil.__dict__.has_key('_t_IntSeq'):
    _M_MyUtil._t_IntSeq = IcePy.defineSequence('::MyUtil::IntSeq', (), IcePy._t_int)

if not _M_MyUtil.__dict__.has_key('_t_IntList'):
    _M_MyUtil._t_IntList = IcePy.defineSequence('::MyUtil::IntList', (), IcePy._t_int)

if not _M_MyUtil.__dict__.has_key('_t_IntSeqSeq'):
    _M_MyUtil._t_IntSeqSeq = IcePy.defineSequence('::MyUtil::IntSeqSeq', (), _M_MyUtil._t_IntSeq)

if not _M_MyUtil.__dict__.has_key('_t_IntArray'):
    _M_MyUtil._t_IntArray = IcePy.defineSequence('::MyUtil::IntArray', (), IcePy._t_int)

if not _M_MyUtil.__dict__.has_key('_t_LongSeq'):
    _M_MyUtil._t_LongSeq = IcePy.defineSequence('::MyUtil::LongSeq', (), IcePy._t_long)

if not _M_MyUtil.__dict__.has_key('_t_LongArray'):
    _M_MyUtil._t_LongArray = IcePy.defineSequence('::MyUtil::LongArray', (), IcePy._t_long)

if not _M_MyUtil.__dict__.has_key('_t_StrSeq'):
    _M_MyUtil._t_StrSeq = IcePy.defineSequence('::MyUtil::StrSeq', (), IcePy._t_string)

if not _M_MyUtil.__dict__.has_key('_t_StringArray'):
    _M_MyUtil._t_StringArray = IcePy.defineSequence('::MyUtil::StringArray', (), IcePy._t_string)

if not _M_MyUtil.__dict__.has_key('_t_StrList'):
    _M_MyUtil._t_StrList = IcePy.defineSequence('::MyUtil::StrList', (), IcePy._t_string)

if not _M_MyUtil.__dict__.has_key('_t_Int2IntMap'):
    _M_MyUtil._t_Int2IntMap = IcePy.defineDictionary('::MyUtil::Int2IntMap', (), IcePy._t_int, IcePy._t_int)

if not _M_MyUtil.__dict__.has_key('_t_Int2StrMap'):
    _M_MyUtil._t_Int2StrMap = IcePy.defineDictionary('::MyUtil::Int2StrMap', (), IcePy._t_int, IcePy._t_string)

if not _M_MyUtil.__dict__.has_key('_t_Long2IntMap'):
    _M_MyUtil._t_Long2IntMap = IcePy.defineDictionary('::MyUtil::Long2IntMap', (), IcePy._t_long, IcePy._t_int)

if not _M_MyUtil.__dict__.has_key('_t_Long2LongMap'):
    _M_MyUtil._t_Long2LongMap = IcePy.defineDictionary('::MyUtil::Long2LongMap', (), IcePy._t_long, IcePy._t_long)

if not _M_MyUtil.__dict__.has_key('_t_Str2IntMap'):
    _M_MyUtil._t_Str2IntMap = IcePy.defineDictionary('::MyUtil::Str2IntMap', (), IcePy._t_string, IcePy._t_int)

if not _M_MyUtil.__dict__.has_key('_t_Str2LongMap'):
    _M_MyUtil._t_Str2LongMap = IcePy.defineDictionary('::MyUtil::Str2LongMap', (), IcePy._t_string, IcePy._t_long)

if not _M_MyUtil.__dict__.has_key('_t_Str2StrMap'):
    _M_MyUtil._t_Str2StrMap = IcePy.defineDictionary('::MyUtil::Str2StrMap', (), IcePy._t_string, IcePy._t_string)

if not _M_MyUtil.__dict__.has_key('_t_PropertyMap'):
    _M_MyUtil._t_PropertyMap = IcePy.defineDictionary('::MyUtil::PropertyMap', (), IcePy._t_string, IcePy._t_string)

if not _M_MyUtil.__dict__.has_key('_t_Str2StrMapSeq'):
    _M_MyUtil._t_Str2StrMapSeq = IcePy.defineSequence('::MyUtil::Str2StrMapSeq', (), _M_MyUtil._t_Str2StrMap)

if not _M_MyUtil.__dict__.has_key('_t_Int2IntMapSeq'):
    _M_MyUtil._t_Int2IntMapSeq = IcePy.defineSequence('::MyUtil::Int2IntMapSeq', (), _M_MyUtil._t_Int2IntMap)

if not _M_MyUtil.__dict__.has_key('_t_Int2IntSeqMap'):
    _M_MyUtil._t_Int2IntSeqMap = IcePy.defineDictionary('::MyUtil::Int2IntSeqMap', (), IcePy._t_int, _M_MyUtil._t_IntSeq)

if not _M_MyUtil.__dict__.has_key('_t_Str2IntSeqMap'):
    _M_MyUtil._t_Str2IntSeqMap = IcePy.defineDictionary('::MyUtil::Str2IntSeqMap', (), IcePy._t_string, _M_MyUtil._t_IntSeq)

if not _M_MyUtil.__dict__.has_key('GlobalId'):
    _M_MyUtil.GlobalId = Ice.createTempClass()
    class GlobalId(Ice.Object):
        def __init__(self, type=0, id=0):
            self.type = type
            self.id = id

        def ice_ids(self, current=None):
            return ('::Ice::Object', '::MyUtil::GlobalId')

        def ice_id(self, current=None):
            return '::MyUtil::GlobalId'

        def ice_staticId():
            return '::MyUtil::GlobalId'
        ice_staticId = staticmethod(ice_staticId)

        def __str__(self):
            return IcePy.stringify(self, _M_MyUtil._t_GlobalId)

        __repr__ = __str__

    _M_MyUtil.GlobalIdPrx = Ice.createTempClass()
    class GlobalIdPrx(Ice.ObjectPrx):

        def checkedCast(proxy, facetOrCtx=None, _ctx=None):
            return _M_MyUtil.GlobalIdPrx.ice_checkedCast(proxy, '::MyUtil::GlobalId', facetOrCtx, _ctx)
        checkedCast = staticmethod(checkedCast)

        def uncheckedCast(proxy, facet=None):
            return _M_MyUtil.GlobalIdPrx.ice_uncheckedCast(proxy, facet)
        uncheckedCast = staticmethod(uncheckedCast)

    _M_MyUtil._t_GlobalIdPrx = IcePy.defineProxy('::MyUtil::GlobalId', GlobalIdPrx)

    _M_MyUtil._t_GlobalId = IcePy.defineClass('::MyUtil::GlobalId', GlobalId, (), False, None, (), (
        ('type', (), IcePy._t_int),
        ('id', (), IcePy._t_long)
    ))
    GlobalId.ice_type = _M_MyUtil._t_GlobalId

    _M_MyUtil.GlobalId = GlobalId
    del GlobalId

    _M_MyUtil.GlobalIdPrx = GlobalIdPrx
    del GlobalIdPrx

if not _M_MyUtil.__dict__.has_key('_t_GlobalIdSeq'):
    _M_MyUtil._t_GlobalIdSeq = IcePy.defineSequence('::MyUtil::GlobalIdSeq', (), _M_MyUtil._t_GlobalId)

# End of module MyUtil
