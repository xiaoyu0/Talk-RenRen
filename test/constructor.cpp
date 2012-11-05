//测试constructor的member initialization的那种简写的形式，实际上就是用那个参数去匹配类的构造函数
//又添了一些代码，此处证明了一个类在对其 class member做初始化的时候， 完全是依照声明的顺序去的，当然按照声明只有调用 default constructor, 
//在按明的顺序时同时会去参考 constructor的  member initialization list 来确定调用哪样的 constructor
//在这里还发现了一个奇怪的情况， Test有3个 Wy 类型 的 member , 其初始化的顺序完全是按照声明的顺序来的，
// wy2_(wy_), wy3_(wy_) , wy2_(wy_)的调用是在wy_被初始化前， 但是运行并未出错，只是wy2_.i_的值是任意值（刚才的测试是个很大的数)，但是加上  
// string name_ 的初始化就会报错   segmentation fault(和另一个string的错), 这个原因应该是 stack, heap的原因吧， 我还没细究， 后面再细究清楚
/*
   把wy_放中间就报下面的错， 放最后报 segmentation fault
  termnate called after throwing an instance of 'std::length_error'
  what():  basic_string::_S_create
  Aborted
*/

#include<iostream>
#include<string>

using namespace std;

class Wy{
public :
	Wy(std::string str):i_(6), name_(str){
		cout << "constructor Wy(std::string str)" << endl;
	}

	Wy():name_("Wy()"){
		std::cout<<"default constructor";
		i_ = 8;
		cout << "     i_:" << i_ << endl;
	}
	
	Wy(const Wy& wy):i_(wy.i_)
		,name_(wy.name_)
	{
		cout << "assignment constructor" <<  "    i_:" << i_ << endl;
		cout << "the i in the wy :" << wy.i() << endl;
	}

	~Wy(){
		std::cout<<"i_:"<<i_<<std::endl;	
	}

	int i() const{return i_;}  //此处证明了 use const where ever possible,不用这个 const 还报了一个错 discards qualifiers 
	string name(){return name_;}

private :
	int i_;
	string name_;
};

class Test{
public :
	Test(std::string str): wy2_(wy_), wy3_(wy_), str_(str){
		cout << "Test constructor" << endl;
	}
	~Test(){
		std::cout<<"wy2_::i_ :"<<wy2_.i()<<std::endl<<"wy2_::name :"<<wy2_.name()<<endl;	
	}
private :
	Wy wy2_;
	Wy wy3_;
	Wy wy_;	
	std::string str_;
};

int main ()
{
	Wy("Wy");	
	Test("test");
}
