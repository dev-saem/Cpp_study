#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1("ComputerScience");

	cout << "str1 : " << str1 << endl;
	cout << "substr : " << str1.substr(0, 8) << endl;

	string str2("Interesting!!!");

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;

	cout << "******************************" << endl;

	str1.swap(str2);
	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;


	return 0;
}