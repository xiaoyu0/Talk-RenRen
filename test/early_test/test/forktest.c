#include<stdio.h>
#include<unistd.h>

int main()
{
	int pid1,pid2;
	printf("start of test\n");
	pid1=fork();
	pid2=fork();
	printf("returned %d,,,%d\n",pid1,pid2);
	return 0;
}
