#include "wy.h"

#include<unistd.h>
#define MAXLINE 100
int main()
{
	int n;
	int fd[2];
	pid_t  pid;
	char  line[MAXLINE];

	pipe(fd);// return : 0 if OK , -1 on error,in a PIPE,  1 is used to write ,  0 is used to read
	printf("after pipe, fd[0] is %d  , fd[1] is %d \n",fd[0],fd[1]);//we can see that fd[] was allocated its number as usual fd..
	if(fork()>0) //remember that fd[0],fd[1] are just two file descriptors(they are unsigned numbers)
	{
		close(fd[0]);
		write(fd[1],"hello world!\n",13);		
	}
	else
	{
		close(fd[1]);
		n=read(fd[0],line,MAXLINE);
		write(STDOUT_FILENO,line, n);
	}
	exit(0);
} //here, there is a question, after fork(), will pipe also be duplicated that parent and child will both have,but the book says pipes are copied
