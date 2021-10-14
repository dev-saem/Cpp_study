#include "h_07_10.h"

int TEST(const int a, int* b)
{
	cout << "1.TEST : " << a << endl;
	*b = 100;
	return 1;
}

int TEST(const int a)
{
	cout << "2.TEST : " << a << endl;
	return 1;
}

int main()
{
	int kor = 90, math = 80;

	cout << "* main : kor = " << kor << endl;
	cout << "* main : math = " << math << endl;
	cout << "************" << endl;
	TEST(kor, &math);
	cout << "************" << endl;
	TEST(math);
	cout << "************" << endl;
	TEST();

	return 0;
}