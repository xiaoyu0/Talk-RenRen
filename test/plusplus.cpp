#include<iostream>

using namespace std;

int main(){

	int i = 4;
	if ((i++) == 5){
		cout << "plus plus done in if" << endl;
	}

	cout << "i = " << i << endl;

	return 0;
}
