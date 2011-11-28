#include<stdio.h>
#include<errno.h>
int main()
{
	errno = 5;	
	perror("wy"); 
	errno++;
	perror("error again:");
	return 0;
}
