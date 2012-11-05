#include <unistd.h>
#include <string>
#include <cstring>
using namespace std;
int main(int argc, char* argv[]){
	string arg;
	string cmd;
	bool iscmd = true;
	for(int i=0; i<argc; i++){
		if(iscmd){
			cmd = argv[i];
			iscmd = false;
		}
		// args
		arg.append(argv[i]);
		arg.append(" ");
		if(!strcmp(argv[i], "|")){
			execvp(cmd.c_str(), arg.c_str());
			iscmd = true;
			continue;
		}
	}
}
