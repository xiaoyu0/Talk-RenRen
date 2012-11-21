#!/usr/bin/python
import sys
import traceback
import Ice
import time
import xiaonei
import random
import TalkClient2

if len(sys.argv) < 2 :
	print 'usage : ' + sys.argv[0] + ' userStart userCount rate'
	exit()

MIN_USER_ID = int(sys.argv[1])
MAX_USER_ID = int(sys.argv[2])
MESSAGE_PER_SECOND = int(sys.argv[3])

MESSAGE = "Pressure Test Message "

sleepTime = 1.0/float(MESSAGE_PER_SECOND)
mid = 0
tp = TalkClient2.TalkPush()

while True :
	userId = random.randint(MIN_USER_ID, MAX_USER_ID)
	message = MESSAGE + str(mid)
	mid += 1
	tp.send(str(userId), message)
	time.sleep(sleepTime)
