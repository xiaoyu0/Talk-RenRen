#include <stdio.h>
#include <unistd.h>
int main()  
{
		int i = 0;
		while(1)
		{
				fprintf(stdout,"hello-std-out");
				fprintf(stderr,"hello-std-err\n");
				sleep(1);
				if(i++ == 5){
					i = 0;
					fflush(stdout);
				}
		}
		return 0;
}
