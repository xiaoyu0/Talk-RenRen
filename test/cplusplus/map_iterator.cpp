#include <iostream>
#include <map>

using namespace std;

struct W{
	bool b;
	int a;
	W(): b(false), a(10){}
};

int main ()
{
	W w;
	map<int, W> wy;
	wy.insert(pair<int, W>(1,w));
	wy.insert(pair<int, W>(2,w));
	wy.insert(pair<int, W>(3,w));
	wy.insert(pair<int, W>(4,w));

	map<int, W>::iterator it = wy.begin();
	it = wy.find(2);
	W& ww = it->second;
	cout <<"before wy[2] = " << wy[2].a << endl;
	ww.a = 22;
	cout <<"after wy[2] = " << wy[2].a << endl;
}
