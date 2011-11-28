//  there is something wrong I need to think about later
#include<stdio.h>
#include<unistd.h>
#include"../wy.h"
int main()
{
	printf("this is the last executed program of shell,it will exist at 222\n");
	printf("before this program exits,the value of ? is:\n");
	system("echo $?");
	exit(222);
}
