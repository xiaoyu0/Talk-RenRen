#include <stdio.h>
int wy(int n){
	int t;
	int* address = &t;
	switch (n){
		case 1 : t = 1; break;
		case 2 : t = 5; break;
		case 8 : t = 9; break;
		case 4 : t = 12; break; 
		case 5 : t = 16; break;
		default : t = 0;
	}
	printf("address = %p\n", address);
	return t;
}

int main(){
	int n;	
	return wy(n);
}
