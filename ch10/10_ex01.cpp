#include <iostream>
#include <string>
using namespace std;

int main()
{
	string course = "Computer!!!";
	int i;
	char ch;

	cout << "문자열 : " << course << endl;
	cout << "길이 : " << course.length() << endl;

	for (i = 0; i < course.length(); i++)
	{
		ch = course.at(i);	// at() : 지정된 번째에 문자열을 이루는 문자를 반환
		if (ch >= 'a' && ch <= 'z')	// 소문자
			ch = ch - ('a' - 'A');	// 소문자 -> 대문자
		else if (ch >= 'A' && ch <= 'Z')	// 대문자
			ch = ch + ('a' - 'A');	// 대문자 -> 소문자
		else
			;
		cout << ch;
	}
	cout << endl;
	return 0;
}