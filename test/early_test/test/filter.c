#include"wy.h"
//  这个程序有问题
int main()
{
	char line[MAXLINE];
	int n ,int1,int2;
	while(n=read(STDIN_FILENO,line, MAXLINE))
	{	
		line[n]=0;
		scanf(line,"%d%d",&int1,&int2);
		sprintf(line,"%d",int1+int2);
		n=strlen(line);
		write(STDOUT_FILENO,line,n);
	}
	exit(0);
		
}
