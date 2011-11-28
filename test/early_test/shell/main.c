#include"shell.h"

#define PROMPT "wy :"
int main(int argc, char ** argv)
{
	pid_t  pid;	
	TOKEN term = T_NL;
	while (true)
	{
		if( T_NL == term)
			printf(PROMPT);
		term = command(&pid , false , NULL);
	}
}
