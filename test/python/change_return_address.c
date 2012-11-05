#include <stdio.h>
void foo(){
		int a, *p;
		p = (int*)((long)&a + 12); a++;
		*p += 20;
}
int main(){
		foo();
		printf("First printf call\n");
		printf("Second printf call\n");
		printf("third printf call\n");
		return 0;
}
