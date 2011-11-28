#include"wy.h"

int main()
{
	for(int i=0;i<15;++i)
	{
		int n=dup(0);
		printf("%d   ",n);
	}
	printf("\n");
	printf("a socket descriptor:  %d\n", socket(AF_INET , SOCK_STREAM , 0) );	
	exit(0);
}
