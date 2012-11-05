#include<iostream>
#include<stdio.h>
using namespace std;

class Base2{
public :
	virtual ~Base2(){}
	virtual void f(){
		cout << "Base2::f" << endl;
	}
	void checkVt(){
		typedef void (*Funp)();
		void * vtAddr = (long*)*(long*)this;
		printf("Derived::checkVt => funp = %p\n", vtAddr);
		
		for(int i=0; i<6; i++){
			Funp funp = (Funp)(*(((long*)*(long*)this) + i)); //前一个long如果像上面用成void就编不过
			printf("Point::callVtFuncs => address of this fun : %p\n", funp);
			if(i < 2 || i == 4){
				continue;	
			}
			funp();
		}
	}
	virtual void g(){
		cout << "Base2::g" << endl;
	}
};
class Base1{
public :
	virtual ~Base1(){}	
	virtual void f(){
		cout << "Base1::f" << endl;
	}
	virtual void g(){
		cout << "Base1::g" << endl;
	}
};
class Base3{
public :
	virtual ~Base3(){}
	virtual void f(){
		cout << "Base3::f" << endl;
	}
	virtual void g(){
		cout << "Base3::g" << endl;
	}
};
class Derived : public Base1, public Base2, public Base3{
public :
	~Derived(){}
	virtual void f(){
		cout << "Derived::f" << endl;
	}
	virtual void g1(){
		cout << "Derived:g1" << endl;	
	}
	void checkVt(){
		typedef void (*Funp)();
		void * vtAddr = (long*)*(long*)this;
		printf("Derived::checkVt => funp = %p\n", vtAddr);

		for(int i=0; i<4; i++){
			Funp funp = (Funp)(*(((long*)*(long*)this) + i)); //前一个long如果像上面用成void就编不过
			printf("Point::callVtFuncs => address of this fun : %p\n", funp);
			if(i < 2){
				continue;	
			}
			funp();
		}
	}
};
int main(){
	Derived d;
	d.checkVt();
//	Base2 * p = new Derived();
//	p->checkVt();
//	p->f();
}
