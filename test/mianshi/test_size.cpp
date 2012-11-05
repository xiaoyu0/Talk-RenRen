#include<iostream>
#include<cstdlib>
class A
{};

class B
{
	B();
	~B();
};

class C
{
	C();
	virtual ~C();
};

int main()
{
	std::cout<<sizeof(A)<<sizeof(B)<<sizeof(C)<<std::endl;
	return 0;
}
