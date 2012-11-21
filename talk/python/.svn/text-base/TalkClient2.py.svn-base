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


	def send(self, userId, message) :
		context = {	'message':"<msgList><message from='1234567@talk.m.renren.com' fname='python' to='" + userId + "@talk.m.renren.com' type='chat'><body>" + message + "</body></message></msgList>"
					}
		i = int(userId) % 5
		self.service[i].notify('message', context, 1, 0);

	def destroy(self) :
		if ic :
			try :
				ic.destroy()
			except :
				traceback.print_exc()


if __name__ == '__main__' :
	if len(sys.argv) != 3 :
		print 'usage:' + sys.argv[0] + ' userId message'
		exit();

	userId = sys.argv[1]
	message = sys.argv[2]
	tp = TalkPush()
	tp.send(userId, message)


