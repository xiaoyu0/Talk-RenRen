#include <iostream>
using namespace std;
class Base{
private :
	int i_;
	char ch_;
//	int n_;
//	int t_;
public :
	Base() {
		cout << "Base constructor" << endl;	
	}
	virtual ~Base(){
		cout << "Base destructor" << endl;
	}
//protected :
	virtual void process (){
		cout << "Base process " << endl;	
	}
	void print(){
		cout << "Base print " << endl;
	}
};

class Derived : public Base{
public :
	Derived(){
		cout << "Derived constructor" << endl;
	}
	virtual ~Derived(){
		cout << "Derived destructor" << endl;
	}
	void process(){
		cout << "Derived process =====" << endl;
	//	delete this;
	}
	void print(){
		cout << "Derived print" << endl;
	}
};

class Normal{
public :
	Normal(){
		cout << "normal constructor" << endl;	
	}
	void print(){
		cout << "normal print" << endl;
	}
private :
	int i_;
	char ch_;
	int n_;
	int t_;
};
int main(){
	{
		Derived derived;
		Base base;
		Normal normal;
		//base.print();
		derived.print();
		cout << "size of derived : " << sizeof(derived) << endl;
		cout << "size of base : " << sizeof(base) << endl;
		cout << "size of normal : " << sizeof(normal) << endl;
	}
	Base* objectPtr = new Derived();
	objectPtr->process();
	objectPtr->print();
	delete objectPtr;
}
