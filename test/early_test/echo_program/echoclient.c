#include"wy.h"

void str_cli(FILE * fp , int sockfd);
int main(int argc, char ** argv)
{
	printf("usage:  echo  <IP address>\n");
	int sockfd;
	struct sockaddr_in servaddr;
	sockfd=socket(AF_INET , SOCK_STREAM , 0);
	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family=AF_INET;
	servaddr.sin_port = htons(SERV_PORT);
	inet_pton(AF_INET, argv[1],&servaddr.sin_addr); // attention the usage here!!
	
	connect(sockfd, (SA *)&servaddr , sizeof(servaddr));
	
	str_cli(stdin,sockfd);
	
	exit(0);
			
	
}

void str_cli(FILE * fp , int sockfd) //attention, it's FILE * ,  FILE is a struct
{
	char  sendline[MAXLINE], recvline[MAXLINE];
	while(fgets(sendline, MAXLINE , fp)!=NULL)
	{
		printf("the is test : %s \n", sendline);
		write(sockfd, sendline , strlen(sendline)); // the difference beween strlen and sizeof  ??
		int n=read(sockfd, recvline , MAXLINE);
		//fputs(recvline, stdout);
		printf("%d letters:%s\n",n,recvline);
	}
}
