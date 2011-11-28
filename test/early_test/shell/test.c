//#include<stdio.h>
//#include<string.h>
#include"../wy.h"

int main()
{
	char c[] = "abc";
	int n=strlen(c);     //here the result is 3 , so strlen doesn't include the last '\0'
	printf("the length by strlen of \"abc\" is : %d \n" , n);  //attention here , the usage of " in the sentence
	exit(0);
}
