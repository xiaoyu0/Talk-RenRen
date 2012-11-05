//这个可以和缓冲区一起总结
#include<stdio.h>
#include<unistd.h>
int main(){
	for(int i=0; i<2; i++){
		int result = fork();
		printf("ppid : %d\n", getppid());
		printf("& %d  ", getpid());
		/*if(result == 0){
			printf("child process -----");
		}else if(result > 0){
			printf("parent process: child id = %d---------", result);	
		}
		printf("ppid : %d---pid : %d---i=%d\n", getppid(), getpid(), i);*/
	}
	printf("\n");
	sleep(20);
}
