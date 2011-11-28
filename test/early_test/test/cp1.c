// this little tool intends to  implement the basic funciton of the cp tool
// just cp a file

#include "wy.h"
#define BUFFSIZE 4096

void alarm_proc(int);
int i=0;	

int main(int argc, char **argv)
{	
	//char command[100]=strcat("cp ",argv[0]+" "+argv[1]);
        //system(command);
	int t=alarm(5);
	printf("the process would terminate after 5 seconds\n");
	signal(SIGALRM,alarm_proc);  //这里虽然调用了这个函数,但程序并没有阻塞在这里, main 函数还是继续在向下执行
	while(1)
	{
		printf("tying the command you want:  ");
		char command[100];
		scanf("%s",command);
		system(command);
	}	
	exit(0);	
}

void alarm_proc (int n)
{
	printf("the SIGALRM signal has been processed %d time(s)\n", i+1);
	if(i==0)
 	{	
		++i;
	//	pause();
		raise(SIGALRM);  //这里没懂,为啥这个signal没被处理		
	}
		
		//这里, 自己对进程的信号机制还不了解, 虽然 raise(SIGALRM), 但是程序还是执行到下一行,把进程退出了, 而没有处理这个signal
		//	printf("i is %d \n", i);
	exit(0);
}
