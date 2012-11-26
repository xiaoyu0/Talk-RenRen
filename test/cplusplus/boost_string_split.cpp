#include <boost/algorithm/string.hpp>
#include <iostream>
#include <string>
#include <vector>

using namespace boost::algorithm;
using namespace std;

int main(){
	string str("miss,you.just.call_to,say,I~love~you");
	vector<string> strVec;
	split(strVec, str, is_any_of(",."));
	vector<string>::iterator it = strVec.begin();
	for (; it!=strVec.end(); it++){
		cout << *it << endl;
	}

	str = "     abc     ";
	cout << "before trim str = " << str << endl;
	trim(str);
	cout << "after trim  str = " << str << endl;

	str = "12324342231436576abc34abc43455465767678878";
	cout << "before trim str = " << str << endl;
	str = trim_copy_if(str, is_any_of("1234567890"));
	cout << "after trim  str = " << str << endl;
	return 0;
}
