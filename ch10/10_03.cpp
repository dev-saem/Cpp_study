#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "Computer";

	cout << "str : " << str << endl;
	str.append(" Science");
	cout << "str : " << str << endl;
	str.append(str, 0, 8);
	cout << "str : " << str << endl;
	str.append(5, '!');
	cout << "str : " << str << endl;

	return 0;
}
