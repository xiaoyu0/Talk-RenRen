#include <iostream>
#include "singleton.hpp"
#define MY_INSTANCE(ClassName) boost::details::pool::singleton_default<ClassName>::instance()
using namespace std;
class Wy;
class Base{
public :
	Base(){
		cout << "Base constructor" << endl;
	}
	virtual ~Base(){
		cout << "Base destructor" << endl;
	}
	virtual void print() = 0;
};
class Derived1 : public Base{
public :
	Derived1(){
		cout << "Derived1 constructor" << endl;
	}
	~Derived1(){
		cout << "Derived1 destructor" << endl;
	}
	void print(){
		cout << "Derived1::print" << endl;
		MY_INSTANCE(Wy);
	}
};
class Derived2 : public Base{
public :
	Derived2(){
		cout << "Derived2 constructor" << endl;
	}
	~Derived2(){
		cout << "Derived2 destructor" << endl;
	}
	void print(){
		cout << "Derived2::print" << endl;
	}
};
class Wy{
public :
	Wy(){
		cout << "Wy constructor" << endl;
	}
	private:
		Derived1 d1;
		Derived2 d2;
};
int main(){
	//MY_INSTANCE(Wy);
	Derived1 d1;
	d1.print();
	return 0;
}
