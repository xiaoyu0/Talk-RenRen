//测试pipe, 这应该最简单的ipc 的模型了吧
#include<stdio.h>
#include<unistd.h>
int main(){
	const int max_line = 100;
	char line[max_line];
	char line2[2 * max_line];
	//fd[0]用于读，fd[1]用于写
	int fd[2];
	printf("fd[0]=%d  fd[1]=%d\n", fd[0], fd[1]);
	//生成管道
	pipe(fd);
	int result = fork();
	fork();
	if(result > 0){
		// sprintf是stdio.h中定义的函数，就是把一系列格式string化
		sprintf(line, "pid=%d is writting data :hello world\0", getpid()); //\0表示 null-terminated c_str 
		printf("pid = %d is writting data\n", getpid());
		close(fd[0]);
		write(fd[1], line, max_line);
//		read(fd[0], line2, max_line);
//		printf("parent : ---pid=%d --- read data :%s\n", getpid(), line2);
	
	}else if(result == 0){
		close(fd[1]);
		sleep(2);
		read(fd[0], line, max_line);
		printf("child : ppid=%d ---pid=%d --- read data :%s\n", getppid(), getpid(), line);
	}
	sleep(2);
}
