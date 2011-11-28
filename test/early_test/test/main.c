//test !5 and !!5
#include<stdio.h>

int main()
{
	int a = !5;
	int b = !a;	
	printf("!5 == %d\n!!5 == %d\n", a, b);
	return;
}
