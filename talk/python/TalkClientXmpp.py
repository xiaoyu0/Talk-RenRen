#!/usr/bin/python
import sys
import traceback
import Ice
from com.xiaonei.wap import talk

if len(sys.argv) != 4 :
	print 'usage:' + sys.argv[0] + ' userId sessionId message'
	exit();

userId = int(sys.argv[1])
sid = sys.argv[2]
message = sys.argv[3]

status = 0

ic = None
try :
	ic = Ice.initialize(sys.argv)
	base = ic.stringToProxy("TalkService:default -p 10001")
#	base = ic.stringToProxy("TalkPushService:default -p 10001")
	service = talk.TalkServicePrx.checkedCast(base)
	if not service :
		raise RuntimeError("Invalid proxy")
	
	xmpp = "<message to='" + str(userId) + "@talk.m.renren.com'"\
		+ " from='223024584@talk.m.renren.com' type='chat' xmlns='jabber:client'>"\
		+ "<body>" + message + "</body></message>"
	response = service.sendXMPP(sid, xmpp)
	print response
except :
	traceback.print_exc()
	status = 1

if ic :
	try :
		ic.destroy()
	except :
		traceback.print_exc()
		status = 1
sys.exit(status)

