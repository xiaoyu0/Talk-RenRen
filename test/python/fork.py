import os, time
for i in range(0,2):
	result = os.fork()
	if result == 0:
		print "child process", "i:",i , "---ppid : ", os.getppid(), "pid : ", os.getpid()
		time.sleep(2)
	elif result > 0:
		print "parent process", "i:", i, "---ppid : ", os.getppid(), "pid : ", os.getpid()
		time.sleep(2)
