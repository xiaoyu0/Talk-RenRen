//from here,learn how to write a head file for a project(for a software)
#ifndef _SHELL_H
#define _SHELL_H
#include"../wy.h"

typedef enum {T_WORD, T_BAR, T_AMP, T_SEMI, T_GT, T_GTGT, T_LT, T_NL, T_EOF, T_ERROR} TOKEN;
extern  TOKEN gettoken (char *word,int maxword);
extern void redirect(int srcfd, const char * srcfile, int dstfd , const char * dstfile, bool append, bool bckgrnd);
extern  TOKEN command (pid_t *wpid , bool makepipe , int *pipeline);
extern pid_t invoke(int argc , char *argv[] , int srcfd , const char * srcfile,
                   int dstfd, const char * dstfile , bool append , bool bckgrnd , int closefd); //closefd ?


#endif // _SHELL_H
