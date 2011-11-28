#include"wy.h"
#define SA struct sockaddr  // 这个很关键,而且必须有struct

extern void str_echo(int sockfd);

int main(int argc , char ** argv)
{
	int  listenfd, connfd;// usually, server creates two sockets,one for listen , one for connect
	pid_t childpid;
	socklen_t clilen;
	struct sockaddr_in cliaddr, servaddr;//define two ip address structs
	
	listenfd = socket(AF_INET, SOCK_STREAM , 0);
	
	bzero(&servaddr,sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY); // 注意, 这里是要把地址填进 struct sockaddr_in 中, 必须要用network byte order,
	servaddr.sin_port = htons(SERV_PORT);//SERV_PORT  is defined as  9877 in my own head file  "wy.h"
	
	bind(listenfd,(SA *) &servaddr , sizeof(servaddr));
	listen(listenfd,10);// the book uesed LISTENQ as the backlog,attention the second argu..,an int it represents the max number of connections waiting for
	for( ; ; )
	{
		clilen=sizeof(cliaddr);
		connfd=accept(listenfd,(SA *)&cliaddr, &clilen); // !accpet,bind,connect have three same types of arguments!!,a socket number and the address of its address struct and the lenth. accept returns a new socket number that has established connection
			printf("the connect socket descriptor is : %d \n", connfd);
		if((childpid=fork())==0)
		{
			close(listenfd);//attention!!这里关掉的是child process 中的 listenfd, the listenfd in the parent process is stillthere
			str_echo(connfd);
			exit(0);  //child process exits
		}
		close(connfd);  // parent process closes the connect socket, after the child process exits
	}
	
	
	
}
 #include"wy.h"
 void str_echo(int sockfd) {  
           int n;
           char buf[MAXLINE];
           while((n=read(sockfd,buf,MAXLINE))>0) //here I made a terrible mistake, > is higher than = in priority, n=.., must be in ()
                {
			printf("test from server ,%d letters : %s\ntest end",n,buf);
				   write(sockfd,buf,n);  //here we must use n, not MAXLINE,  also why we define n  
		}
   }                            
