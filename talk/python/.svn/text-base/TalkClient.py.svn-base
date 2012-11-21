#!/usr/bin/python
import sys
import urllib
import httplib
import traceback

ServerHost = '10.3.19.200'
HostName = 'talk.m.renren.com'
ServerPort = 1234
URI = '/send'

if len(sys.argv) != 5 :
	print 'usage:' + sys.argv[0] + ' fromId toId message sessionId'
	exit();

fromId = sys.argv[1]
toId = sys.argv[2]
message = sys.argv[3]
sessionId = sys.argv[4]

requestStr = "<body sid='" + sessionId + "'><message from='"\
	+ fromId + "@" + HostName + "' to='" + toId + "@" + HostName + "'"\
	+ " type='chat'><body>" + message + "</body></message></body>"

conn = httplib.HTTPConnection(ServerHost, ServerPort)
conn.request('POST', URI, body=urllib.quote(requestStr))
response = conn.getresponse()
if response.status != 200 :
	print 'error : code = ', response.status
responseStr = response.read()
print responseStr


