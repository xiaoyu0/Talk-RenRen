//#include <unistd.h>
#include <iostream>
#include <string>
#include <boost/thread.hpp>
using namespace std;
class Wy{
public :
	string operator()(string msg, int a, int b){
		for (int i=0; i<15; i++){
			cout << "thread2 : msg = " << msg << endl;
			cout << "a = " << a << "  b = " << b << endl;
			sleep(1);
		}
		return msg;
	}
	void operator()(){
		for (int i=0; i<10; i++){	
			cout << "thread1: msg in operator() " << endl;
			sleep(2);
		}
	}
};
int main(){
	Wy wy;
	boost::thread thread1(wy);
	boost::thread thread2(boost::bind<string>(wy, "test2", 5, 6));
	thread1.join();
	cout << "thread1 end " << endl;
	thread2.join();
	return 0;
}
