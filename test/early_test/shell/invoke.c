#include"shell.h"

pid_t invoke(int argc, char *argv[], int srcfd, const char * srcfile,
	int dstfd, const char * dstfile, bool append, bool bckgrnd, int closefd)
{
	pid_t pid;
	char * cmdname, *cmdpath;//must be written like this,learn why from compilation later 
	//if(argc==0 || builtin(argc,argv,srcfd,dstfd))
	//	return 0;
	switch(pid = fork())
	{
	case -1:
		fprintf(stderr, "Can't create new process\n");
		return 0; 
	case 0:
		//there are 4 sentences of error handling which I didn't write now
		redirect(srcfd, srcfile, dstfd, dstfile, append, bckgrnd);
		//cmdname = strchr(argv[0],'/');
		cmdname = argv[0];
		cmdpath = argv[0];//the code in the book is not like this, but i don't understand
		execvp(cmdpath,argv);
		//?
		exit(0);			
	}
	
	return pid; //parent
}
