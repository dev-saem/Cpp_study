#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "CAB", str2 = "CAB";
	cout << "CAB �� CAB �� ==> " << str1.compare(str2) << endl;

	string str3 = "CAB", str4 = "DBC";
	cout << "CAB �� DBC �� ==> " << str3.compare(str4) << endl;

	string str5 = "DBC", str6 = "CAB";
	cout << "DBC �� CAB �� ==> " << str5.compare(str6) << endl;

	str5 = "AACAB";

	cout << "AACAB�� 2��° 3���� ���ڿ� CAB => " << str5.compare(2, 3, str6) << endl;
	cout << "AACAB�� 0��° 3���� ���ڿ� CAB => " << str5.compare(0, 3, str6) << endl;

	str1 = "AAAA";
	str2 = "BBBB";

	cout << "str1 : " << str1 << endl;
	str1.insert(0, str2);
	cout << "str1 : " << str1 << endl;

	str1.insert(4, 3, 'C');
	cout << "str1 : " << str1 << endl;

	return 0;
}


