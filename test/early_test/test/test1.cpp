#include<iostream>
using namespace std;
class Test
{
public:
	Test(int i=0);
	~Test();
private:
	int _i;
};

Test::Test(int i)
{
	_i = i;
	cout<<"Test constructor called  "<<i<<endl;
}

Test::~Test()
{
	cout<<"Test destructor called  "<<_i<<endl;
}

int main()
{
//	{
		Test  test1(1);
//	}
	Test * ptest = new Test;
	delete ptest;
	return 0;
}
