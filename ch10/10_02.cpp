#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1;
	string str2("Test2 String");

	char name[80] = "Computer Science";
	string str3(name);
	string str4(10, 'A');

	str1 = "Test1 String";

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << "str3 : " << str3 << endl;
	cout << "str4 : " << str4 << endl;

	return 0;
}
