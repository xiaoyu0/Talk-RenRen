#include"../wy.h"
#include<pthread.h>
// when use <pthread.h>, gcc must be used this way :        gcc -lpthread ...

pthread_t tid1, tid2 ;

void printids(const char * s)
{
	pid_t pid;
	pthread_t tid;
	pid = getpid();
	tid = pthread_self(); // !!
	printf("%s  pid  %u tid  %u (0x%x)\n",s, (unsigned int)pid,(unsigned int)tid,(unsigned int)tid);//why unsigned int must be used(pid_t is unsigned int)
}
static void *  thread1_fun(void * arg)
{
	printids("new thread1:");
	return 	NULL ;
}

static void *  thread2_fun(void * arg)
{

	printids("new thread2:");
	return NULL;
}

int main()
{
        pid_t  pid;

        int err=pthread_create(&tid1 , NULL , thread1_fun , NULL);
      	if( err!=0)
		printf("can't create thead \n");
	 err=pthread_create(&tid2 , NULL , thread2_fun , NULL);
      	printids("main thread");
	 sleep(1);
        return 0;
}
