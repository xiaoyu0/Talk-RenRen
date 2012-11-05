#include <iostream>
#include <boost/shared_ptr.hpp>

using namespace std;
using namespace boost;

class WY{
public :
		bool w(){
			cout << "bool w_ = " << w_ << endl;
			return w_;
		}
private :
		bool w_;
};

int main (){
	for (int i = 0; i<100; i++){
		shared_ptr<WY> pw(new(WY));
		pw->w();
	}
	return 0;
}
