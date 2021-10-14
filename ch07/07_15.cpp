#include <iostream>
using namespace std;

void TEST(const int a, int b);

int main()
{
	int a = 100, b = 200;

	TEST(a, b);
	a = 999;

	cout << "main a : " << a << endl;
	cout << "main b : " << b << endl;
	return 0;
}

void TEST(const int a, int b)
{
	//a = 999;	// const는 변환 불가능
	b = 800;
	cout << "TEST a : " << a << endl;
	cout << "TEST b : " << b << endl;
}