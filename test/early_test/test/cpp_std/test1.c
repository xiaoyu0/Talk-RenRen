//for cpp programs,the head files are in /usr/include/c++/... , and it can be just included as below,and the head files in /bits have the complete implementation of STL
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	vector<int>  vint(10);
	vector<int>::iterator iter=vint.begin();
	int i=0;
	for( ; iter!=vint.end();iter++)
	{
		*iter = i++;
	//	t=*iter;
		cout<<*iter<<" ";//I used >> in the first place!!!
	}
	cout<<endl;
	return 0;
}
