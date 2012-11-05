#include <iostream>
#include <vector>
#include <string>

typedef int UINT4;
using namespace std;
class Hack
{
		friend ostream& operator<<(ostream& os, const Hack& hack);
		friend istream& operator>>(istream& is, Hack& hack){}
public :
		Hack(string name) :name_(name){
			cout << "Hack constructor : name = " << name_ << endl;	
		}
		string name(){
			return name_;
		}
		Hack& operator< (Hack& a){
			cout << name_ << "小于" << a.name() << "(memeber version)" << endl;
			return *this;
		}
		Hack& operator> (Hack& a){
			cout << name_ << "大于" << a.name() << "(memeber version)" << endl;
			return *this;
		}
		void operator->(void){

		}
		int operator[](string str){

		}
		void operator=(float f){

		}
private :
		string name_;
};
ostream& operator<<(ostream& os, const Hack& hack){
}
namespace wy{
Hack& operator< (Hack &a , Hack &b)
{
		std::cout << a.name() << "小于" << b.name() << endl;
		return a;
}

void operator> (Hack &a, Hack &b)
{
		std::cout << a.name() <<  "大于" << b.name() << endl;
//		return a;
}
}
int main(int argc, char ** argv)
{
		Hack vector("vector");
		Hack UINT4("UINT4");
		Hack foo("foo");

		vector<UINT4> foo;
		using namespace wy;
		operator>(operator<(vector, UINT4), foo);
		vector.operator<(UINT4).operator>(foo);
		return(0);
}
