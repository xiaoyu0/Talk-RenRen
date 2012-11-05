#!/usr/bin/python
#encoding=utf-8

#
# echo server, 对每一个请求都单独fork出一个进程来处理
#

from socket import *  #low-level networking interface
import time  # Time access and conversions
import os  # for  os.fork()
import sys # for sys.exit()

def func(tcpCliSock, addr):  # python中没有单独的声明，函数必须在使用前定义
	try:	
		while True:
			data = tcpCliSock.recv(BUFSIZE) # BUFSIZE表示一次返回的最大的接收数据量，这个接口和unix中的recv
			if not data:
				print 'connection end with : ', addr
				break
			print ' request from ', addr , 'data :', data
			tcpCliSock.send('[%s] %s' % (time.ctime(), data))

		tcpCliSock.close()
	except KeyboardInterrupt: #从输出可以看出若父进程的ctl-c异常会先在子进程中捕获,再在父进程中捕获
		print ' Ctl-c caught in chlid Process'
		tcpCliSock.send('')
		tcpCliSock.close()
		sys.exit()

HOST = 'localhost'
PORT = 2012 # port是integer
BUFSIZE = 1024
ADDR = (HOST, PORT)

tcpServerSock = socket(AF_INET, SOCK_STREAM)  #这里soket函数，以及括号里的参数都是 socket module里的提拱的函数(全局), 而返回的是一个Socket Object, 是socket module里定义的一个class
tcpServerSock.bind(ADDR)
tcpServerSock.listen(10) #10表accept的等待队列最大数

try:
	while True:
		print 'waiting for connection ...'
		tcpCliSock, addr = tcpServerSock.accept() #accept返回的是一个pair,(conn, address), 其中conn是一个Socket Object, address是另一端发起连接的端口地址，地址也是一个pair, (ip, port)
		print 'connected from :', addr, '  local:', tcpCliSock.getsockname(), '------remote:', tcpCliSock.getpeername()
		
		# fork出一个子进程来处理单独的请求
		pid = os.fork()

		if pid > 0:
			print 'fork child process pid = ', pid, 'to process ', addr
#			os.waitpid(pid, os.WNOHANG)  #还是没有起到回收的作用
			tcpCliSock.close()  #这个close很重要

		if pid == 0 :
			tcpServerSock.close() #在子进程中关掉 tcpServerSock
			func(tcpCliSock, addr) #子进程中运行func
			sys.exit() #可以简单理解为退出子进程
	
	tcpServerSock.close()

except  KeyboardInterrupt:	# 截获Ctr-c 异常，来关掉Server
	print ' Ctl-C stop server'
	tcpServerSock.close()
	sys.exit()
