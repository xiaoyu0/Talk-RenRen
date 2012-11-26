#include <iostream> //#include <exception>

using namespace std;

class Base{
public :
		Base(){
			cout << "Base default constructor" << endl;
			throw int(2);
		}
		Base(int i){
			cout << "Base constructor" << endl;	
//			throw i;
		}
		~Base(){
			cout << "Base destructor" << endl;
		}

};
class Derived : public Base{
public :
		Derived(int i) try:  Base(i){
			cout << "Derived constructor" << endl;
		} catch (int e){
			cout << "exception caught in Derived e = "  << e << endl;
		} catch (...){
			cout << "unknown exception caught in Derived" << endl;
		}

private :
		Base base;
};

int main ()try{
	try{
		Derived  derivced(6);
	} catch (int e){
		cout << "catch after derivedi e = " << e << endl;
	}
	
	try {
		throw 5;
	} catch (...){
		cout << "catch exception" << endl;
//		throw char('c'+1);
	}
	cout << "after try,catch" << endl;
	return 0;
}catch (long e){
	cout << "catch for main" << " e = " << e << endl;
}catch (char e){
	cout << "catch for main ,any exception type" << " e = " << e << endl;
}catch (...){
	cout << "catch exception for main , unknown type" << endl;
}
