#include "wy.h"

#define BUFFSIZE 4096 

int main(int argc, char **argv )
{
//	umask(0);
	int n=0;
	char buf[BUFFSIZE];
	int srcfd=open(argv[1],O_RDONLY,0666);
	int dstfd=open(argv[2],O_RDWR|O_CREAT,0777);
	while((n=read(srcfd,buf,BUFFSIZE))>0)   // attention here, how n is used
	{
					//		if(!strcmp(buf,"quit\n"))
					//		exit(0);
		if(write(dstfd,buf,n)<0)
			{ 
				printf("write error\n");
				exit(errno);
			}
	}
	close(srcfd);
	close(dstfd);
	exit(0);	
}
