//测试stringstream使用 ,如果line那一行注释掉的话，str2 = 123321
#include<string>
#include<iostream>
#include<sstream>

using namespace std;

int main ()
{
	stringstream ss;
	int i1 = 123;
	ss << i1;
	string str1 = ss.str();
	// line
	ss.str("");
	int i2 = 6589;
	ss << i2;
	ss << "thea";
	string str2 = ss.str();

	cout << "str1 :" << str1 << endl
	     << "str2 :" << str2 << endl;
	string str3;
	int i3=0;
	
	ss.ignore(3);
	char ch[3];
	ss.read(ch, 3);
	cout.write(ch, 3);
	cout << endl;
	ss >> str3;
	ss >> i3;
	cout << "str3 :" << str3 << endl;
	cout << "i3 :" << i3 << endl;
	
	//ss.str("");
	stringstream ss1;
	ss1 << "abcdefg";
	ss1.flush();
	string str4 = ss1.str();
//	string str4;	
	ss1 >> str4;
	cout << "str4 : "<< str4 << endl;
	ss1.seekg(2, ios::end);
	ss1.ignore(1);
	ss1.seekg(0, ios::beg);
	cout << "str5 : " << ss1.str() << endl;
	return 0;
}
