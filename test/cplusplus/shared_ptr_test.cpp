#include <shared_ptr.hpp>
#include <enable_shared_from_this.hpp>
#include <iostream>

using namespace std;
using namespace boost;

class WY : public enable_shared_from_this<WY>{
public:
	WY (int i):i_(i) { cout << "WY's constructor" << endl; }

	int i (){return i_;}
	
	shared_ptr<WY> get_shared_ptr (){
		return shared_from_this();
	}
private :
	int i_;
};


int main ()
{
	WY wy(6);
	cout << "main begin" << endl;
	shared_ptr<WY> ptr(new WY(5));
	shared_ptr<WY> p = wy.shared_from_this();
	cout << "p->i() : " << endl;
}
