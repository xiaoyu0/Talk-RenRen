#include<iostream>
using namespace std;
int main(){
	char ch[5] = {'a','b','c','d','e'};
	char ch2[5] = {'e','r','r','o','r'};
	int i = 0;
	while(true){
		cerr.write(ch2, 5);
		cout.write(ch, 5);
		cout.put(' ');
		sleep(1);
		if(i++ == 3){
			//cout.flush();
			cout.put('\n');
			i = 0;
		}
	}
}
