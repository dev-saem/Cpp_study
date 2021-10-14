#include <iostream>
#include <string>
using namespace std;

int main()
{
	// string str1 = "Computer", str2 = "Science"; //대입문으로 문자열 초기화
	string str1("Computer"), str2("Science");

	int i;

	for (i = 0; i < (int)str1.length(); i++)
		//cout << str1[i] << endl;
		cout << str1.at(i) << endl;

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;

	//str1 = str1 + "-" + str2; // append() 함수 대신에 연산자를 이용한 문자열 추가
	str1 = str1.append("-");
	str1.append(str2);

	cout << "***********************" << endl;
	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;

	if (str1 > str2)
		cout << str1 << endl;
	else
		cout << str2 << endl;

	return 0;
}
