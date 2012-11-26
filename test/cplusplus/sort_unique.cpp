#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>& vec);
int main(){
	int a[] = {1,3,4,4,6,3,2,5,6,2};
	vector<int> vec(a, a+10);
	vector<int>::iterator it;
	sort(vec.begin(), vec.end());
	print(vec);
	it = unique(vec.begin(), vec.end());
	vec.resize(it-vec.begin());
	print(vec);
}
void print(vector<int>& vec){
	for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
		cout << *it << "  ";
	}
	cout << endl;
}
