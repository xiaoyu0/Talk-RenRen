#include <iostream>

using namespace std;

template<class T>
class Singleton{
public :
		typedef T object_type;
private :
		Singleton (){}
		static object_type  obj;
public :
		static object_type & instance (){
			return obj;
		}

};
template<class T>
typename Singleton<T>::object_type Singleton::obj;

int main() {
	cout << "main started" << endl;	
	return 0;	

}
