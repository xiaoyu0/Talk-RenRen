#!/usr/bin/python
import sys
import traceback
import Ice
import xce

class TalkPush :
	def __init__(self) :
		self.ic = None
		self.service = []
		try :
			prop = Ice.createProperties()
			prop.setProperty('Ice.Override.ConnectTimeout','300')
			prop.setProperty('IceGrid.InstanceName','XiaoNei')
			prop.setProperty('Ice.ThreadPool.Client.StackSize','65535')
			prop.setProperty('Ice.ThreadPool.Server.StackSize','65535')
			prop.setProperty('Ice.Default.Host','')
			prop.setProperty('Ice.Default.Locator','XNTalk/Locator:default -h XNTalkRegistry -p 12000')
			id = Ice.InitializationData()
			id.properties = prop
			ic = Ice.initialize(id)
			for i in range(0,5) :
				base = ic.stringToProxy('M@PIMStorm' + str(i)).ice_oneway()
				self.service.append(xce.talk.IMStormPrx.uncheckedCast(base))
				if not self.service[i] :
					raise RuntimeError("Invalid proxy")
		except :
			traceback.print_exc()


	def start(self) :
		self.service[0].NotifyPhoneServerEnalbe()

	def stop(self) :
		self.service[0].NotifyPhoneServerDisable()

	def destroy(self) :
		if ic :
			try :
				ic.destroy()
			except :
				traceback.print_exc()


if __name__ == '__main__' :
	if len(sys.argv) != 2 :
		print 'Usage : ' + sys.argv[0] + ' {start|stop}'
		exit()
	action = sys.argv[1]
	tp = TalkPush()
	if action == 'start' :
		tp.start()
	elif action == 'stop' :
		tp.stop()
	else :
		print "unknow action : " + action


