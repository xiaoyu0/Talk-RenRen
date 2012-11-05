#include<stdio.h>
int sum(int* p, int size){
	int sum = 0;
	for (int i = 0; i < size; i++){
		sum += *(p+i);
	}
	return sum;
}
int sum1(int* p, int size){
	int sum = 0;
	int i = 0;
	do{
		sum += *(p+i);
		i++;
	}while(i < size);
	return sum;
}
int sum2(int* p, int size){
	int sum = 0;
	int i = 0;
	while(i < size){
		sum += *(p+i);
		i++;
	}
	return sum;
}
int sum3(int* p, int size){
	int sum = 0;
	int i = 0;
	while(i++ < size){
		sum += *(p+i-1);
	}
	return sum;
}
int main(){
	int a[] = {1,2,3,4,5};
	int t = sum(a, 5);
	int t1 = sum1(a, 5);
	int t2 = sum2(a, 5);
	int t3 = sum3(a, 5);
	printf("t = %d\nt1 = %d\nt2 = %d\nt3 = %d\n", t, t1, t2, t3);
	return t;
}
