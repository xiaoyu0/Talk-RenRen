#include"shell.h"

#define MAXARG 50    //max args in command
#define MAXFNAME 500 //max chars in file name
#define MAXWORD 500  //max chars in arg

extern pid_t invoke(int argc , char *argv[] , int srcfd , const char * srcfile,
		int dstfd, const char * dstfile , bool append , bool bckgrnd , int closefd); //closefd ?
 TOKEN command(pid_t * wpid , bool makepipe , int * pipefdp)
{
	TOKEN token , term; //defines two tokens, term is the token that terminates the pipeline, and is used to return 
	int argc , srcfd , dstfd , pid ,pfd[2] ={-1,-1}; //
	char *argv[MAXARG], srcfile[MAXFNAME]="", dstfile[MAXFNAME]="";
	char word[MAXWORD];
	bool append;

	argc = 0;   // the current accepted number of args , initialized as 0
	srcfd = STDIN_FILENO;
	dstfd = STDOUT_FILENO;
                 //after a series of definition and initialization, now come the loop to get tokens
	while (true)
	{
		switch (token = gettoken(word , sizeof(word)))
		{
			case T_WORD:  //attention,  the command(may including its path),is the first argument  arg[0]
				if (argc >=MAXARG - 1)
				{
					fprintf(stderr , "too many args\n"); //here , stderr and fprintf both belong to  stdio.h,stderr (FILE *) 
					continue;  // ??
				}
				if((argv[argc]=(char *)malloc(strlen(word)+1))==NULL) //malloc   from stdlib.h
				{
					fprintf(stderr,"out of arg memory\n");
					continue;
				}
				strcpy(argv[argc],word);
				argc++;
				continue;
			case T_LT:
				if (makepipe)
				{
					fprintf(stderr, "extra <\n");
					break;
				}
				if (gettoken(srcfile ,sizeof(srcfile)) != T_WORD)
				{
					fprintf(stderr,"illegal <\n");
					break;
				}
				srcfd = -1;
				continue;
			case T_GT:
			case T_GTGT:
				if (dstfd != STDOUT_FILENO)
				{
					fprintf(stderr , "extra > or >> \n");
					break;
				}
				if (gettoken(dstfile, sizeof(dstfile))!=T_WORD)
				{
					fprintf(stderr , "illegal > or >> \n");
					break;
				}
				dstfd = -1;
				append=true; // already got >> and checked its validation,so..
				continue;
			case T_BAR:
			case T_AMP:
			case T_SEMI:
			case T_NL:
				argv[argc]=NULL;   //in which place is NULL defined as '\0'?
				if(token==T_BAR) //this is the situation where command is recursively called
				{
					if(dstfd!=STDOUT_FILENO) // all these if.. are error handlings
					{
						fprintf(stderr, "> or >> conflicts with | \n"); // remember a command call hands a simple command, and for a simple command , there is an input, an output
						break; // break means quit the whole  while loop
					}
					term = command(wpid , true , &dstfd); //wpid is passed over,&dstfd is passed as argument
					if(term == T_ERROR)
						return T_ERROR;
				}
				else
					term = token;
				if(makepipe)// from the second calls of command , the makepipe is set to true
				{
					pipe(pfd);
					*pipefdp = pfd[1];//here, record the  
					srcfd = pfd[0];//think later?? notice that here fork() has been called yet,so the pipe is made for this  simple command
				}
				pid = invoke(argc , argv , srcfd , srcfile , dstfd , dstfile , append , term == T_AMP , pfd[1]);
					//
				if (token != T_BAR)
					*wpid = pid; // wpid is used for what?
				while(--argc>=0)//??empty argv for the next use
					free(argv[argc]);
				return term;
			case T_ERROR:
				return T_ERROR;
		}
		
	}
}
//in this file , the mistake I made include not using a {} after a switch,did't wirte a head file, so many functions are not declared    when they are used, and in gcc , maybe this in illegal:  argv[argc]= malloc(strlen(word)+1)
//must like this :   argv[argc]=(char *)malloc(strlen(word)+1)
