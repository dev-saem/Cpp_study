#include "h_11_02.h"

int main()
{
	StringCharArray one;	// 객체 생성
	char t_str[50];

	one.assign("sample");	// one에 값을 추가
	one.toCharArray(t_str);

	cout << one << endl;
	cout << t_str << endl;

	return 0;
}