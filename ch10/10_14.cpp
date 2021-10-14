#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	int a = 1234;

	cout << "a = " << a << endl;
	cout << "a = " << setw(5) << a << endl;	// 5자리를 기준으로 출력
	cout << "a = " << hex << setw(5) << a << endl;	// 16진수 형태로 출력
	cout << "a = " << dec << setw(5) << a << endl;	// 10진수 형태로 출력

	double b = 45.8769;
	cout << "b = " << b << endl;
	cout << "b = " << fixed << b << endl;	// 소숫점 이하 정해진 자리수 모두 출력
	cout << "b = " << setprecision(2) << b << endl;

	double c = 123;
	cout << "c = " << c << endl;
	cout << "c = " << setprecision(0) << c << endl;
	cout << "c = " << showpoint << c << endl;	// 소수점을 반드시 표시함
	cout << 987.0 << endl;

	return 0;
}