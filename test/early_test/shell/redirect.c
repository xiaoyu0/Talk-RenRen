//invoke calls (redirect) to redirect I/O and to ensure that the source and destination are duped to be STDIN_FILENO and STDOUT_FILENO
#include"shell.h"


void redirect(int srcfd, const char * srcfile, int dstfd, const char * dstfile, bool append, bool bckgrnd)
{
	int flags;
	if (srcfd == STDIN_FILENO && bckgrnd)
	{
		srcfile = "/dev/null";
		srcfd = -1;
	}
	if (srcfile[0] != '\0')
		srcfd = open(srcfile , O_RDONLY, 0);
	dup2(srcfd, STDIN_FILENO);// STDIN_FILENO is a constant ?
	if  (srcfd != STDIN_FILENO)
		close(srcfd); 	
	if (dstfile[0] != '\0')
	{
		flags = O_WRONLY | O_CREAT;
		if (append)
			flags |= O_APPEND;
		else
			flags |= O_TRUNC;
		dstfd = open(dstfile, flags, PERM_FILE);
	}
	dup2(dstfd, STDOUT_FILENO);
	if (dstfd != STDOUT_FILENO)
		close(dstfd);
	return;
	
}
