#include<stdio.h>
int test(int a, int b, int c){
	a = -a;
	b=~b;
	printf("test => ~b = %d\n", b);
	int e = a + b;
	e  = a - b;
	e = a * b;
	int e4 = a & b;
	int e3 = a | b;
	int e2 = a ^ b;
	return e3;
}

int main(){
	int a=12;
	int b=222;
	int c=30;
	int t=test(a, b, c);
}
