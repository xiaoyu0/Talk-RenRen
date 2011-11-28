#!/usr/bin/python

import os
import time
import subprocess
import sys
import socket
import threading
import commands

HOST = 'localhost'
PORT = 80
FAIL_COUNT = 3
PING_TIME = 30
PING_TIME = 1
FAIL_CHECK_TIME = 3 

class CheckThread(threading.Thread):
	def __init__(self, appProcess) :
		threading.Thread.__init__(self)
		self.appProcess = appProcess

	def run(self) :
		tryCount = 0
		while tryCount <= FAIL_COUNT :
			try :
				if self.appProcess.poll() != None :
					return
				sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
				sock.connect((HOST, PORT))
				sock.close()
				time.sleep(PING_TIME)
				continue
			except Exception, data:
				print PORT
				print 'wrapper : addr connection failure, err = ', Exception, data
				sock.close()
				tryCount += 1
				time.sleep(FAIL_CHECK_TIME)

		#appProcess is dead
		commands.getstatusoutput('kill -9 ' + str(self.appProcess.pid))
		return

if __name__ == '__main__' :
	print 'wrapper : argv = ', sys.argv
	hasAddr = False
	if len(sys.argv) >= 3 :
		addr = sys.argv[1]
		if addr.startswith('-addr=') :
			hasAddr = True
			sp = addr[6:].split(':')
			HOST = sp[0]
			PORT = int(sp[1])
	if hasAddr :
		app = sys.argv[2:]
	else :
		app = sys.argv[1:]
	print 'wrapper : app start (', app, ')'
	appProcess = subprocess.Popen(app)
	print 'wrapper : app pid =' + str(appProcess.pid)

	time.sleep(2)

	if appProcess.poll() != None :
		exit(0)

	checkThread = CheckThread(appProcess)

	checkThread.start()

	appProcess.wait()
		
