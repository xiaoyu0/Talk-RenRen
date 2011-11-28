#include"../wy.h"

int main()
{
	printf("here we look from h:\n");
	char ch[100];
	scanf("%s",ch);
	printf("the output is : \n%s\n",strchr(ch,'h'));
	exit(0);
}
