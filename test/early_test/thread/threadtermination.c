#include"../wy.h"
#include<pthread.h>

void * thr_fn1(void * arg)
{
	printf("thread 1 is exiting \n");
	pthread_exit((void *)1);
}

void * thr_fn2(void * arg)
{
	printf("thread 2 is exiting \n");
	pthread_exit((void *)2);
}

int main()
{
	int err=0;
	pthread_t tid1=0,tid2=0;
	void * tret;
	err = pthread_create(&tid1,NULL,thr_fn1,NULL);
	pthread_create(&tid2,NULL,thr_fn2,NULL);
	pthread_join(tid1,&tret);
	printf("thread 1 exit code %d \n",(int)tret);
	pthread_join(tid2,&tret);
	printf("thread 2 exit code %d \n",(int)tret);
	exit(0);
}

