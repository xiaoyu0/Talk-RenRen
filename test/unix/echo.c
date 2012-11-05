//socket对外的接口都在这里面了, 它会去包含 bits/socket.h, 在 bits/socket.h中有说到， 不要直接使用 bits/socket.h而使用 sys/socket.h
#include <sys/socket.h> 
#include <unistd.h>

int main(){
	int listenfd, connfd;
	pid_t childpid;
	socklen_t clilen;   //unsign int , defined in  bits/types.h 和 bits/socket.h
	
	struct sockaddr_in cliaddr, servaddr;
	int socket_fd = socket(AF_INET, SOCK_STREAM, 0);
}
