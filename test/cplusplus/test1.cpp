using namespace std;
#include<iostream>
class Base
{
//using namespace std;
public:
	void print () {doprint();}
private:
	virtual void doprint () {cout << "Base::doprint"<<endl;}
};

class Derived : public Base
{
private:
	virtual void doprint () {std::cout << "Derived::doprint"<<std::endl;}
};

int main ()
{
	Base b;
	b.print();

	Derived d;
	d.print();

	return 0;
}
	
