#!/usr/bin/python

import sys
import urllib
import httplib
import threading
import json
import McsTools
import Client


if len(sys.argv) < 2 :
	print 'usage : ' + sys.argv[0] + ' userStart userCount'
	exit()

userStart = int(sys.argv[1])
userCount = int(sys.argv[2])


threads=[]
for x in xrange(userStart, userStart + userCount) :
	client = Client.Client()
	client.test(x)
	client.start()
	threads.append(client)

for t in threads :
	t.join()
