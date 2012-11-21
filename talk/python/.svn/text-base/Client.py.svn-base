#!/usr/local/bin/python2.7
#coding=utf-8

import urllib
import httplib
import hashlib
import threading
import random
import sys
from xml.dom import minidom
import pdb
import json
import time
import types
import McsTools as tools

ServerHost = 'talk.m.renren.com'
#ServerHost = '10.3.24.21'
#ServerHost = 'localhost'
#ServerHost = 'talk.apis.tk'
HostName = 'talk.m.renren.com'
#ServerPort = 1234
ServerPort = 80
TalkUri = '/talk'
SendUri = '/send'

#print log, True/False
LOG = True

class Client(threading.Thread):
	def __init__(self) :
		threading.Thread.__init__(self)
		self.rid = random.randint(100000, 200000)
		self.secretKey = ''
		self.go = True

	def __apiLogin(self, accound, password) :
		param = {'check':0, 
			'user':accound, 
			'password':hashlib.md5(password).hexdigest(),
			'call_id':int(time.time()*1000),
			'version':'1.0',
			'login_info':json.dumps({'cellid':'8888'})}
		
		response = tools.mcsClient('client.login', dict(tools.base_param.items()+param.items()))
		if response[0] != 200 :
			print 'api login failure'
			return False
		else :
			resObj = json.loads(response[1])
			self.uid = int(resObj['uid'])
			self.userName = resObj['user_name']
			self.secretKey = resObj['secret_key']
			self.sessionKey = resObj['session_key']
			print 'api login success :\nuser id =', self.uid, '\nuser name =', self.userName, '\nsecretKey =', self.secretKey
			return True

	def __talkVoiceUpload(self, toid, seqid, mode):
		vid = 'thisisvid'
		data = 'data'
		param = {'call_id':int(time.time()*1000),
				'fromid':self.uid,
				'toid':toid,
				'seqid':seqid,
				'session_key':self.sessionKey,
				'vid':vid,
				'mode':mode,
				'login_info':json.dumps({'cellid':'8888'})}
		method = 'talk.voiceUploadBin'
		param['method'] = method
		param = dict(tools.base_param.items() + param.items())
		for key in param.keys() :
			if type(param[key]) is not types.StringType :
				param[key] = str(param[key])
		print param
		param = tools.buildParam(param, self.secretKey)
		files = [('data', './voiceFile')]
		response = tools.post_multipart('/api', param.items(), files)
		status = response.status
		if status != 200:
			print status
			print 'voice upload failed'
			return False
		else :
			resObj = response.read()
			print resObj
			resObj = json.loads(resObj)
			if int(resObj['result']) == 1 :
				print 'voice upload succeed'
		return True

	def login(self, accound, password) :
		self.accound = accound
		self.password = password
		self.type = 'login'

		if not self.__apiLogin(accound, password) :
			return False
		bodyStr = "<body content='text/xml;charset=utf-8' from='"\
			+ str(self.uid) + "@" + HostName + "' hold='1' rid='" + str(self.rid)\
			+ "' to='" + HostName + "' wait='60' v='4' ack='1' xml:lang='en'"\
			+ " xmlns='http://jabber.org/protocol/httpbind'/>"
		
		responseStr = self.__talkOnceSend(TalkUri, bodyStr)
		if responseStr :
			print 'create session success'
		else :
			print 'create session failure'
			return False
		
		doc = minidom.parseString(responseStr)
		body = doc.firstChild
		self.sid = body.attributes['sid'].value.encode('utf-8')
		print 'session create success, sid =', self.sid

		auth = body.getElementsByTagName('auth')[0]
		prefix = auth.firstChild.nodeValue
		return self.__authCheck(prefix)

	def test(self, userId) :
		self.uid = userId
		self.type = 'test'
		bodyStr = "<body content='text/xml;charset=utf-8' from='"\
			+ str(self.uid) + "@" + HostName + "' hold='1' rid='" + str(self.rid)\
			+ "' to='" + HostName + "' wait='60' ack='1' xml:lang='en'"\
			+ " xmlns='http://jabber.org/protocol/httpbind'/>"
		
		responseStr = self.__talkOnceSend(TalkUri, bodyStr)
		if responseStr :
			print 'create session success'
		else :
			print 'create session failure'
			return False
		doc = minidom.parseString(responseStr)
		body = doc.firstChild
		self.sid = body.attributes['sid'].value.encode('utf-8')
		print 'session create success, uid =', self.uid, 'sid =', self.sid

	def relogin(self) :
		return self.login(self.accound, self.password)

	def __authCheck(self, prefix) :
		sourceStr = prefix + self.secretKey
		sig = hashlib.md5(sourceStr).hexdigest()
		print 'secretKey :', self.secretKey
		print 'prefix :', prefix
		bodyStr = self.__buildMsg("<response>" + sig + "</response>")
		responseStr = self.__talkOnceSend(TalkUri, bodyStr)
		doc = minidom.parseString(responseStr)
		body = doc.firstChild
		result = body.firstChild
		print 'auth check result :', result.nodeName
		return result.nodeName == 'success'

	def __buildMsg(self, msg=None) :
		self.rid += 1
		bodyStr = "<body rid='" + str(self.rid) + "' sid='"\
			+ str(self.sid) + "' xmlns='http://jabber.org/protocol/httpbind'>"
		if msg :
			bodyStr += msg + "</body>"
		else :
			bodyStr += "</body>"

		return bodyStr

	def __talkOnceSend(self, uri, body) :
		if LOG :
			print 'client :', body
		conn = httplib.HTTPConnection(ServerHost, ServerPort)
#		conn.request('POST', uri, body=urllib.quote(body))
		conn.request('POST', uri, body=body)
		response = conn.getresponse()
		if response.status != 200 :
			print 'request error : code =', response.status
			print 'error response :', response.read()
			return ''
		else :
			responseStr = response.read()
			if LOG :
				print 'server :', responseStr
			return responseStr

	def __holding(self) :
		headers = {"Connection":"Keep-Alive"}
		while self.go :
			try :
				self.conn = httplib.HTTPConnection(ServerHost, ServerPort)
				while self.go :
					bodyStr = self.__buildMsg()
					if LOG :
						print 'client :', bodyStr
					self.conn.request('POST', TalkUri, body=bodyStr, headers=headers)
#					self.conn.request('POST', TalkUri, body=urllib.quote(bodyStr), headers=headers)
					response = self.conn.getresponse()
					if response.status != 200 :
						print 'request error code :', response.status
						response.read()
						time.sleep(2)
						continue
					responseStr = response.read()
					if LOG :
						print 'server :', responseStr
					code = self.__process(responseStr)
					if code < 0 :
						if self.type == 'login' :
							while not self.relogin() :
								time.sleep(5)
						else :
							self.test(self.uid)
							time.sleep(1)
					time.sleep(1)

			except httplib.BadStatusLine :
				print 'remote host close socket'
				self.rid -= 1
	
	def __process(self, response) :
		doc = minidom.parseString(response)
		body = doc.firstChild
		if 'type' in body.attributes.keys() :
			if 'terminate' == body.attributes['type'].value :
				print 'server close session.'
				return -1
		for node in body.childNodes :
			if node.nodeName == 'message' :
				fromJid = node.attributes['from'].value
				fromId = fromJid.split('@')[0]
				msgBody = node.getElementsByTagName('body')
				msgType = msgBody[0].attributes['type'].value
				if msgType == 'text' :
					fromName = node.attributes['fname'].value
					textBody = msgBody[0].getElementsByTagName('text')
					print '[' + time.strftime('%H:%M:%S') + '] ' + fromName + '(' + fromId + ') :', textBody[0].firstChild.nodeValue
				elif msgType == 'multimedia' :
					fromName = node.attributes['fname'].value
					print '[' + time.strftime('%H:%M:%S') + '] ' + fromName + '(' + fromId + ') : multimedia'
					for msgNode in msgBody[0].childNodes :
						print msgNode.toxml()
				elif msgType == 'voice' :
					fromName = node.attributes['fname'].value
					audioBody =  msgBody[0].getElementsByTagName('audio')[0]
					print '[' + time.strftime('%H:%M:%S') + '] ' + fromName + '(' + fromId + ') : voice =>', audioBody.toxml()
				elif msgType == 'action' :
					action =  msgBody[0].attributes['action'].value
					#print '[' + time.strftime('%H:%M:%S') + '] ' + fromName + '(' + fromId + ') is ' + action
					print '[' + time.strftime('%H:%M:%S') + '] ' + '(' + fromId + ') is ' + action
				continue
			elif node.nodeName == 'presence' :
				fromJid = node.attributes['from'].value
				if node.hasAttribute('type') :
					print '[' + time.strftime('%H:%M:%S') + '] ' + fromJid, 'offline'
				else :
					onlineType = node.getElementsByTagName('type')[0]
					print '[' + time.strftime('%H:%M:%S') + '] ' + fromJid, 'online type =', onlineType.firstChild.nodeValue
				continue
			else :
				print 'recive a unknow node :', node.toxml()
				return 1
		return 0

	def logout(self) :
		self.go = False
		bodyStr = "<body sid='" + self.sid + "' type='terminate'><presence type='unavailable' /></body>"
		responseStr = self.__talkOnceSend(SendUri, bodyStr)
		print 'offline : response', responseStr

	def sendVoice(self, toId):
		self.__talkVoiceUpload(toId, "1", "end")

	def sendMsg(self, userId, message, type = 'text') :
		bodyStr = "<body sid='" + self.sid + "'><message fname='" + self.userName.encode('utf-8') + "' from='"\
		+ str(self.uid) + "@" + HostName + "' to='" + str(userId) + "@" + HostName + "'"\
		+ " type='chat'><body type='" + type + "'><text>" + message + "</text></body></message></body>"

		responseStr = self.__talkOnceSend(SendUri, bodyStr)
		if 'success' in responseStr :
			print 'send message success'
		else :
			print 'send message failure : response =', responseStr

	def sendAction(self, userId, type) :
		if type == 1 :
			action = 'typing'
		elif type == 2 :
			action = 'speeking'
		elif type == 3 :
			action = 'canceled'
		else :
			print 'action type (' + str(type) + ') is not support'
			return

		bodyStr = "<body sid='" + self.sid + "'><message fname='" + self.userName.encode('utf-8') + "' from='"\
		+ str(self.uid) + "@" + HostName + "' to='" + str(userId) + "@" + HostName + "'"\
		+ " type='chat'><body type='action' action='" + action + "'/></message></body>"

		responseStr = self.__talkOnceSend(SendUri, bodyStr)
		if 'success' in responseStr :
			print 'send action (' + action + ') success'
		else :
			print 'send action (' + action + ') failure : response =', responseStr

	def setMsgType(self, types) :
		bodyStr = "<body sid='" + self.sid + "'><iq from='" + str(self.uid) + "@" + HostName\
		+ "' type='set'>"
		for type in types :
			bodyStr += '<msgType>' + type + '</msgType>'
		bodyStr += "</body>"
		responseStr = self.__talkOnceSend(SendUri, bodyStr)
		if 'success' in responseStr :
			print 'send message success'
		else :
			print 'send message failure : response =', responseStr

	def run(self) :
		self.__holding()

if __name__ == '__main__' :
	accound = ''
	password = ''
	if len(sys.argv) > 1 :
		accound = sys.argv[1]
	if len(sys.argv) > 2 :
		password = sys.argv[2]

	if not accound :
		accound = raw_input("Enter login accound :")
	if not password :
		password = raw_input("Enter login password :")

	client = Client()
	if not client.login(accound, password):
		print 'login failure'
		exit()
	
	client.start()
	time.sleep(2)
	print '********************************\nhelp :\na : send action\ns : send message\nm : send multimedia message\nv : send voice message\nq : quit\nh : print this help'
	try :
		while True :
			act = raw_input("$")
			if not act :
				continue
			if act == 'a' :
				to = raw_input("toId :")
				print 'action type:\n1 : typing\n2 : speeking\n3 : speek cancel'
				type = raw_input("type :")
				client.sendAction(int(to), int(type))
			if act == 's' :
				to = raw_input("toId :")
				msg = raw_input("msg :")
				client.sendMsg(int(to), msg)
			if act == 'm' :
				to = raw_input("toId :")
				msg = raw_input("msg :")
				client.sendMsg(int(to), msg, 'multimedia')
			if act == 'v' :
				to = raw_input("toId :")
				client.sendVoice(to)
			if act == 'q' :
				client.logout()
				break
			if act == 't' :
				typeStr = raw_input("new types(split with ';') :")
				types = typeStr.split(';')
				client.setMsgType(types)
			if act == 'h' :
				print '********************************\nhelp :\ns : send message\nm : send multimedia message\nq : quit\nh : print this help'
	except Exception,data :
		print Exception, ':', data
		client.logout()
