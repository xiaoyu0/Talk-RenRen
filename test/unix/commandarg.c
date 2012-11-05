#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
extern char ** environ;
void show_env();
int main(int argc, char *argv[]){
	/*for(int i = 0; i < argc; i++){
		printf("arg%d : %s\n", i, argv[i]);
	}*/
	if(fork() > 0){
	//	show_env();
		char *path_value = malloc(200);
		path_value = getenv("PATH");
		printf("in parent : PATH=%s\n", path_value);
	}else{
		setenv("PATH", "wy", 1);
		putenv("wangyu=wangyu");
		char *path_value = malloc(200);
		path_value = getenv("PATH");
		printf("in child : PATH=%s\n", path_value);

	//	show_env();
	}
	
	printf("environment table address : %p\n", environ);

	sleep(20);
	return 0;
}
void show_env(){
	char ** env = environ;
	/*for(cp = *environ; true; cp++){
		printf("environment varible :\n");
		printf("%s\n", cp);
	}*/
	int i = 0;
	while(*env){
		printf("index : %d\nenv address : %p\nenv value address : %p\n%s\n", i++, env, *env, *env);
		env++;
	}
}
