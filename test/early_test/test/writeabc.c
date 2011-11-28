#include"wy.h"

int main(int argc , char **argv)
{
	int i=0;
	int fileds=open(argv[1],O_RDWR,0777);
	const char *p="abcdefg by wy\n";
	for(;i<1000000;i++)
	{
		write(fileds,p,strlen(p));
	}
	exit(0);
}
