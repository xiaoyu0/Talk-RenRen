#include<stdio.h>
typedef unsigned char *  bytePointer;
void show_bytes(bytePointer start, int size){
	printf("start address : %p\nsize : %d\n", start, size);
	for (int i = 0; i < size; i++){
		printf("address : %p, value: %.2x\n", start+i, start[i]);
	}
	printf("\n");
}
void show_int(int n){
	printf("int n = (0x)%x\n", n);
	show_bytes((bytePointer)&n, sizeof(int));
}
void show_pointer(void * p){
	printf("pointer value : %p\n", p);
	show_bytes((bytePointer)&p, sizeof(void *));
}
/*void show_float(float f){
	printf("float value : %f\n", f);
	show_bytes((bytePointer)&f, sizeof(float));
}*/
int main(){
	int n = 0x11223344;
	show_int(n);
	show_pointer(&n);
//	show_float(float(n));
	show_int(n);
	return 0;
}
