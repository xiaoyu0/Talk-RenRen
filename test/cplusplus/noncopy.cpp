#include <iostream>

using namespace std;

class noncopyable {
protected :
	noncopyable () {}
	~noncopyable () {}
private :
	noncopyable (noncopyable&);
	noncopyable& operator= (noncopyable&);

};

class WY : public noncopyable {
public :
	WY (){}
	~WY(){}
private :
	int i_;
};

int main () {
	WY wy, wy1;
	wy1 = wy;
	
}
