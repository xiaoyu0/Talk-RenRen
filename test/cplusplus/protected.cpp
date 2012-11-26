#include<iostream>

using namespace std;

class Base {
public :
	Base () {
		cout << "Base constructor" << endl;
	}

	void destroy(){
		cout << "Base destroy" << endl;
//		~Base();
		delete this;
	}
protected:
	~Base() {
		cout << "Base destructor" << endl;
	}

};

int main(){
//	Base base;
	Base * pbase = new Base();	
	//delete pbase;
	pbase->destroy();
	return 0;
}
