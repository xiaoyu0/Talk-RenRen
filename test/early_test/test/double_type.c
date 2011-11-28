//test the size of double and float
#include<stdio.h>

int main()
{
	int size = sizeof (double);
	int size_float = sizeof (float);
	int size_long = sizeof (long);
	int size_long_long = sizeof(long long);
		//这里怎么使用转义字符使可以在 printf的 " " 中夹入回车呢,做么了,但怎么更好对齐呢,在代码中且在输出中
	printf("the size of double on 32-bit : %d\n\
		the size of float on 32-bit : %d\n\
		the size of long on 32-bit  : %d\n\
		the size of long long       : %d\n" , size , size_float, size_long, size_long_long);	
	char  all_one[8] ;
	memset (all_one , 1 , 8);
	unsigned long long * tem = (unsigned long long)all_one ; //这里我本来是想看8字节的doulbe最大能表示多少(traceroute)试验中让我疑惑的地方,但是我想错了,浮点数的表示方示是不一样的,能表示比这大得多得多的数
	printf("the largest number represented by unsigned long long (8 bytes) : %llu\n" , *tem);
	return ;
}
