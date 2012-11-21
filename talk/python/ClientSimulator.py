#!/usr/bin/python

import sys
import urllib
import httplib
import hashlib
import threading
import random
from xml.dom import minidom
import McsTools
import pdb

ServerHost = '10.3.19.200'
HostName = 'talk.m.renren.com'
ServerPort = 1234
URI = '/talk'
secretKey = ''
keepAlive = True

class ClientSimulator(threading.Thread):
	def __init__(self, uid, secretKey, sid = 0, keepAlive = True) :
		threading.Thread.__init__(self)
		self.uid = uid
		self.keepAlive = keepAlive
		self.sid = sid
		self.secretKey = secretKey
		self.requestStr = ''
		self.rid = random.randint(100000, 200000)

	def __process(self, response) :
		print 'response :', response
		doc = minidom.parseString(response)
		body = doc.firstChild

#		pdb.set_trace()
		if body.hasAttribute('sid') :
			#session create response
			self.sid = body.attributes['sid'].value
			print 'session Create sid = ', self.sid

		if body.hasChildNodes() :
			msgList = body.getElementsByTagName('message')
			if msgList :
				for msg in msgList :
					fromJid = msg.attributes['from'].value
					msgBodyList = msg.getElementsByTagName('body')
					if msgBodyList :
						for msgBody in msgBodyList :
							print fromJid, msgBody.firstChild.toxml()
			
			presences = body.getElementsByTagName('presence')
			if presences :
				for presence in presences :
					print presence.toxml()
			
			auth = body.getElementsByTagName('auth')
			if auth :
				prefix = auth[0].firstChild.nodeValue
				sourceStr = prefix + secretKey
				sig = hashlib.md5(sourceStr).hexdigest()
				response = '<response>' + sig + '</response>'
				return response
			
			success = body.getElementsByTagName('success')
			if success :
				print 'auth check success'
				return ''
			failure = body.getElementsByTagName('failure')
			if failure :
				print 'auth check failure'
				return ''

	def runKeepAlive(self) :
		headers = {"Connection":"Keep-Alive"}
		while True :
			try :
				conn = httplib.HTTPConnection(ServerHost, ServerPort)
				while True :
					if self.sid == 0 :
						body = "<body content='text/xml;charset=utf-8' from='"\
						+ str(self.uid) + "@" + HostName + "' hold='1' rid='" + str(self.rid)\
						+ "' to='" + HostName + "' wait='60' ack='1' xml:lang='en'"\
						+ " xmlns='http://jabber.org/protocol/httpbind'/>"
					else :
						self.rid += 1
						body = "<body rid='" + str(self.rid)\
						+ "' sid='" + str(self.sid) + "' xmlns='http://jabber.org/protocol/httpbind'>"
						if self.requestStr :
							body = body + self.requestStr
							self.requestStr = ''
						body = body + '</body>'
					
					print 'send body : ', body
					print 'send encode body : ', urllib.quote(body)
					conn.request('POST', URI, body=urllib.quote(body), headers=headers)
					response = conn.getresponse()
					if response.status != 200 :
						print 'get error code :', response.status
						response.read()
						continue
					
					reStr = response.read()
					result = self.__process(reStr)
					if result :
						self.requestStr = result
			except httplib.BadStatusLine :
				print 'remote host close socket'

	def runUnKeepAlive(self) :
		while True :
			try :
				conn = httplib.HTTPConnection(ServerHost, ServerPort)
				if self.sid == None :
					body = "<body content='text/xml;charset=utf-8' from='"\
					+ str(self.uid) + "@" + HostName + "' hold='1' rid='" + str(self.rid)\
					+ "' to='" + HostName + "' wait='60' ack='1' xml:lang='en'"\
					+ " xmlns='http://jabber.org/protocol/httpbind'/>"
				else :
					self.rid += 1
					body = "<body rid='" + str(self.rid)\
					+ "' sid='" + str(self.sid) + "' xmlns='http://jabber.org/protocol/httpbind'/>"
				
				conn.request('POST', URI, body=urllib.quote(body), headers=headers)
				response = conn.getresponse()
				if response.status != 200 :
					print 'get error code :', response.status
					response.read()
					continue
				
				reStr = response.read()
				self.__process(reStr)
			except httplib.BadStatusLine :
				print 'remote host close socket'

	def run(self) :
		if self.keepAlive :
			self.runKeepAlive()
		else :
			self.runUnKeepAlive()

if __name__ == '__main__' :
	if len(sys.argv) < 3 :
		print 'usage : ' + sys.argv[0] + ' uid secretKey'
		exit()
	
	uid = int(sys.argv[1])
	secretKey = sys.argv[2]

	cs = ClientSimulator(uid, secretKey, keepAlive = keepAlive)
	cs.run()
