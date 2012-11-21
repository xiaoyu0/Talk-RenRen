#!/usr/bin/python

import os
import time
import subprocess
import sys
import socket
import threading

HOST = 'localhost'
PORT = 80
FAIL_COUNT = 3
PINT_TIME = 30
FAIL_CHECK_TIME = 5

class CheckThread(threading.Thread):
	def __init__(self, appProcess) :
		self.appProcess = appProcess

	def run(self) :
		tryCount = 0
		while tryCount >= FAIL_COUNT :
			try :
				if self.appProcess.poll() != None :
					return
				sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
				sock.connect((HOST, PORT))
				sock.close()
				time.sleep(PING_TIME)
				continue
			except Exception, data:
				sock.close()
				tryCount += 1
				time.sleep(FAIL_CHECK_TIME)

		#appProcess is dead
		self.appProcess.kill()
		return

if __name__ == '__main__' :
	appProcess = subprocess.Popen(sys.args[2:])

	time.sleep(2)

	if appProcess.poll() != None :
		exit(0)

	checkThread = CheckThread(appProcess)

	checkThread.start()

	p.wait()
		
