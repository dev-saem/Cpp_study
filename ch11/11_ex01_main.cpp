#include "h_11_ex01.h"

int main()
{
	Triangle tri1("pink", 3.4, 5.1, 4.2);
	tri1.CalSquare();

	double s1, s2, s3;
	tri1.GetSide(&s1, &s2, &s3);

	cout << "»ï°¢ÇüÀÇ »ö : " << tri1.GetColor() << endl;
	cout << "»ï°¢Çü ¸é1 : " << s1 << endl;
	cout << "»ï°¢Çü ¸é2 : " << s2 << endl;
	cout << "»ï°¢Çü ¸é3 : " << s3 << endl;
	cout << "»ï°¢Çü ¸éÀû : " << tri1.GetSquare() << endl;

	return 0;
}