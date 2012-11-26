#include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 void print(vector<int>& vec);
 template <class InputIterator>
 InputIterator unique_wy(InputIterator begin, InputIterator end){
	 typename iterator_traits<InputIterator>::value_type  value = *begin;
	 cout << "in unique_wy *begin = " << value << endl;
     InputIterator last = begin;
     while(++begin != end){
         if (*last != *begin){
             *++last = *begin;    
         }
     }
     return ++last;
 }
 int main(){
     int a[] = {1,1,2,2,4,6,7,7,4};
     vector<int> vec(a, a+9);
     print(vec);
 //    sort_wy(vec.begin(), vec.end());
 //    print(vec);
     vector<int>::iterator it = unique_wy(vec.begin(), vec.end());
     vec.resize(it-vec.begin());    
     print(vec);
     return 0;
 }



 void print(vector<int>& vec){
     for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
         cout << *it << "  ";
     }
     cout << endl;
 }
