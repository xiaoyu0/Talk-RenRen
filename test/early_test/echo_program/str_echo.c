#include"wy.h"
void str_echo(int sockfd)
{
	int n;
	char buf[MAXLINE];
	while(n=read(sockfd,buf,MAXLINE)>0)
		write(sockfd,buf,n);  //here we must use n, not MAXLINE,  also why we define n  
}
