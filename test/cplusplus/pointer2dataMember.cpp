#include<cstdio>
#include<iostream>
using namespace std;
class Point{
public :
	Point(){
		std::cout << "Point constructor" << std::endl;
	}
	virtual ~Point(){
		std::cout << "Point destructor" << std::endl;
		//printf("the address of ~Point: %p\n", &Point::~Point);
	}
	virtual void func_hs(){
		std::cout << "Point::func_hs" << std::endl;
		printf("the address of this virtual func - func_hs : %p\n", &Point::func_hs);
	}
	virtual void func_zzy(){
		std::cout << "Point::func_zzy" << std::endl;
		printf("the address of this virtual func - func_zzy : %p\n", &Point::func_zzy);
	}
	//virtual 函数在虚表中的顺序完全和声明的顺序一样
	static void print(){
		printf("&Point::x = %p\n&Point::y = %p\n&Point::z = %p\n", &Point::x, &Point::y, &Point::z); // float Point::* 	
	}
	void printThis(){
		printf("&this->x = %p\n&this->y = %p\n&this->z = %p\n", &this->x, &this->y, &this->z);	// float *
	}
	void printVt(){
		printf("the address of object,this:%p\nthe address of vt :%p\n", this, (void*)*(long*)this);
	}
	void callVtFuncs(int num=2){
		typedef void (*Funp)(void);
		for(int i=0; i<num; i++){
			Funp funp = (Funp)(*(((long*)*(long*)this) + i)); //前一个long如果像上面用成void就编不过
			printf("Point::callVtFuncs => address of this fun : %p\n", funp);
			if(i < 2){
				continue;	
			}
			funp();
		}
	}
	void printVirtualFuncAddress(){
		printf("func_hs : %p\nfunc_zzy : %p\n", &Point::func_hs, &Point::func_zzy);
	}
protected :
	float x,y,z;
};
class Point2 : public Point{
public :
	Point2(){
		std::cout << "Point2 constructor" << std::endl;
	}
	~Point2(){
		std::cout << "Point2 destructor" << std::endl;
	}
	void func_hs(){
		std::cout << "Point2::func_hs" << std::endl;
	}
	void printVirtualFuncAddress(){
		printf("func_hs : %p\nfunc_zzy : %p\nfunc_ss : %p\n", &Point2::func_hs, &Point::func_zzy, &Point2::func_ss);
	}
	void printThis(){
		printf("&this->x = %p\n&this->y = %p\n&this->z = %p\n&this->a = %p\n", &this->x, &this->y, &this->z, &this->a);	// float *
	}
private : 
	virtual void func_ss(){
		cout << "Point2::func_ss" << endl;
	}
	long a;	
};
int main(){
	Point point;
	Point::print();
	point.printThis();
	point.printVt();
	point.callVtFuncs(4);
	point.printVirtualFuncAddress();
	
	Point2 point2;
	point2.printThis();
	point2.printVt();
	point2.callVtFuncs(5);
	point2.printVirtualFuncAddress();
}
