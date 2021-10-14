#include <iostream>
#include <string>	// 문자열 클래스 사용을 위해 포함
using namespace std;

int main()
{
	string s_name;	// 스트링 클래스의 객체 생성
	s_name = "문자열";	// 대입문으로 직접 문자열 할당 가능

	cout << s_name << endl;
	cout << "문자열 길이 : " << s_name.length() << endl;	// 6

	s_name = s_name + "클래스";	// 문자열 연산자 사용 가능
	// s_name.append("클래스");

	cout << s_name << endl;
	cout << "문자열 길이 : " << s_name.length() << endl;	// 12

	string str(s_name);	// 복사생성자, 동일한 멤버변수값을 가짐

	str.append("ComputerScience", 0, 8);
	cout << str << endl;	// 문자열클래스computer
	cout << str.length() << endl;	// 20
	cout << str.size() << endl;		// 20

	return 0;
}