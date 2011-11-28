// gettoken is used to return the next token , if it's a file name ar an argument , or a quoted string, also the sting will be stored in // word[]
#include"../wy.h"

typedef enum {T_WORD , T_BAR , T_AMP , T_SEMI , T_GT , T_GTGT , T_LT , T_NL , // T_NL means a new line
	T_EOF , T_ERROR} TOKEN ;   // T_EOF is a special token specifying the end of a file has been reached , If the standard input is                                   // a terminal , the user has typed an EOT(Ctrl-d) , in ascii code, on number represents EOF ??
//bool store_char(char * word , int maxword , int c , int * np);

static TOKEN gettoken(char *word , int maxword)
{
	enum { NEUTRAL , GTGT , INQUOTE , INWORD} state = NEUTRAL ;
	int c;
	int wordn=0;
	
	while((c=getchar())!=EOF)
	{
		switch (state)
		{
			case NEUTRAL :
				switch (c) //in any switch , we have to handle all situations of the variable (of coures we have default)
				{
					case ';': //after each case , there must be a : ,   and we can't use {} after a case
						return T_SEMI;
					case '&':
						return T_AMP;
					case '|':
						return T_BAR;
					case '<': 
						return T_LT;
					case '\n':
						return T_NL;
					case ' ':
					case '\t':
						continue;
					case '>':
						state = GTGT;
						continue;
					case '"':             //turn to this state when encounter this ' " '
						state = INQUOTE;
						continue;
					default :
						state = INWORD;
						store_char(word , maxword , c , &wordn);
						continue;
				}
			case GTGT :
				if (c=='>')
					return T_GTGT;
				ungetc(c,stdin);//extern int ungetc (int __c, FILE *__stream); <stdio.h>
				return T_GT;
			case INQUOTE :
				switch (c)
				{
					case '\\' :
						if((c=getchar()) == EOF)
							c = '\\';
						store_char(word , maxword , c ,&wordn);
						continue;
					case '"' :
						store_char(word , maxword , '\0' , &wordn);
						return T_WORD;
					default:
						store_char(word , maxword , c ,&wordn);
						continue;
				}
			case INWORD:
				switch (c)
				{
					case ';':
					case '&':
					case '|':
					case '<':
					case '>':
					case '\n':
					case ' ':
					case '\t':
						ungetc(c,stdin);
						store_char(word , maxword ,'\0', &wordn);
						return T_WORD;
					default :
						store_char(word , maxword ,c , &wordn);
						continue;
				}
		}
	}
return T_EOF;

} 
// this function stores a char into an array and count the number through a pointer to np
int store_char(char * word, int maxword , int c , int * np)  //don't know why i can not compile successfully here
{
	word[(*np)++] = c;
	return 0;
} //when generating object file, it reports error :  gettoken.c:88: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘store//_char’

