#include<stdio.h>

#include"wy.h"
extern char **environ;//  这个变量应该在库中或头文件中实现好了,但这里必须要声明一下
int n[100];  // increase the number in the bss section (using size)
int main()
{
	printf("hello world\n");
	for(int i=0;environ[i]!=NULL;i++)
		printf("%d : %s\n",i+1,environ[i]);	
	int n[88];
	int t;
	//printf("another instruction\n"); // increase the length of the text section
	return 0;
}
