#include <unistd.h>
#include <iostream>
#include <functional>
#include <algorithm>
#include <set>
using namespace std;
int main(){
	int a[] = {1,6,2,3,4,5};
	set<int> ints(a, a+6);
//	int pos = find_if(ints.begin(), ints.end(), equal_to<int>);
//	cout << "pos = " << pos << endl;
	return 0;
}
