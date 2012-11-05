#include <iostream>
using namespace std;

enum Type {
		A = 0,
		B ,
		C = 6
};

class WY {
	public:  // private by default
		enum Love {
		SOCCER, 
		GIRL = 5,
		CODEING = 9
	};
};  // ; needed after class definition

int main (){
	cout<<"the size of enum Type:" << sizeof(Type) << endl
		<<"the size of int:" << sizeof(int) << endl;
	Type type = static_cast<Type>(5);
	enum Type type2 = Type(7);
//	cout << "Type::A = " << Type::A <<endl;     //error, Type is not a class or a namespace 
	cout << "A = " << A << endl;
	cout << "B = " << B << endl;
	cout << "C = " << C << endl;
	cout << "type = " << type << endl;
	cout << "type2 = " << type2 << endl;
//	A++;  //error
//	type++;  //error

	int t = C * 2; 
	cout << "t = " << t << endl;

	t = WY::GIRL;
	cout << "again t = " << t <<endl;
	return 0;
}
