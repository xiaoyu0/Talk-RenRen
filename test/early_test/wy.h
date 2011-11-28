#ifndef _WY_H
#define _WY_H

#define SA struct sockaddr //attention, struct must be used like this
#define MAXLINE 100
#define PERM_FILE  (S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH)

#include<fcntl.h> // O_APPEND .. ard defined here

#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include<string.h>
#include<unistd.h>
#include<signal.h>

#include<sys/types.h>
#include<sys/stat.h>
#include<sys/termios.h>

#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<sys/un.h>

#include<setjmp.h>

#include<sys/times.h>

#include<bits/signum.h>

#include<pthread.h>

#include<errno.h>   //define error constants and ..

#define SERV_PORT  9877
#define SERV_PORT_STR  "9877"

#ifndef TIOCGWINSZ

#include<sys/ioctl.h>
#endif  



#endif // _WY_H
