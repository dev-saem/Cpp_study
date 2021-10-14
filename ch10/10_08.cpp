#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "CAB", str2 = "CAB";
	cout << "CAB 와 CAB 비교 ==> " << str1.compare(str2) << endl;

	string str3 = "CAB", str4 = "DBC";
	cout << "CAB 와 DBC 비교 ==> " << str3.compare(str4) << endl;

	string str5 = "DBC", str6 = "CAB";
	cout << "DBC 와 CAB 비교 ==> " << str5.compare(str6) << endl;

	str5 = "AACAB";

	cout << "AACAB의 2번째 3개의 문자와 CAB => " << str5.compare(2, 3, str6) << endl;
	cout << "AACAB의 0번째 3개의 문자와 CAB => " << str5.compare(0, 3, str6) << endl;

	str1 = "AAAA";
	str2 = "BBBB";

	cout << "str1 : " << str1 << endl;
	str1.insert(0, str2);
	cout << "str1 : " << str1 << endl;

	str1.insert(4, 3, 'C');
	cout << "str1 : " << str1 << endl;

	return 0;
}


