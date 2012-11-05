#!/usr/bin/python
#encoding=utf-8

#
# echo程序客户端，服务端把每条消息打上时间戳后返回
#

from socket import *
import sys
import thread

BUFSIZE = 1024
serverAddr = ('localhost', 2012)
clientSock = socket(AF_INET, SOCK_STREAM)

try:
	clientSock.connect(serverAddr) #若要连接的服务端没有启动，这里会抛出异常
except Exception as e: #不知道这里捕获什么具体的异常了，就用的一个比较基层的类Exception
	print 'exception catched : ' ,e
	sys.exit()

#def recv_thread_func():
#		print 'before new_thread recv'
#		data = clientSock.recv(BUFSIZE)
#		print 'after new_thread recv'
#		if not data:
#			clientSock.close()
#			print 'after new_thread socket close'
#			sys.exit()

while True:
#	thread.start_new_thread(recv_thread_func, ())

	data = raw_input('input data :')
	if not data:  # 直接回车就没有输入内容,退出
		print 'client quit'
		break	
	clientSock.send(data)
	recvData = clientSock.recv(BUFSIZE)
	if not recvData:
		print 'server quit, so I quit'
		break
	print 'recieve : ', recvData 

clientSock.close() # 要close一下
