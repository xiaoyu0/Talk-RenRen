#!/usr/bin/python

import sys
import traceback
import Ice
import xiaonei

class OnlineStatusServiceI(xiaonei.talk.service.OnlineStatusService) :
	def online(self, userId, current=None) :
		print "######", userId, "Online ######"
	
	def offline(self, userId, current=None) :
		print "@@@@@@", userId, "Offline @@@@@@"

ic = None

try :
	ic = Ice.initialize(sys.argv)
	adapter = ic.createObjectAdapterWithEndpoints("TalkPushAdapter", "default -p 10002")
	service = OnlineStatusServiceI()
	adapter.add(service, ic.stringToIdentity("OnlineStatusService"))
	adapter.activate()
	ic.waitForShutdown()
except :
	traceback.print_exc()

if ic:
	try :
		ic.destroy()
	except :
		traceback.print_exc()

