#include "h_08_ex01.h"

int main()
{
	Circle c1;
	c1.setRadius(10.2);

	cout << "반지름 : " << c1.getRadius() << endl;
	cout << "원 면적 : " << c1.getArea() << endl;

	Circle c2;
	double r;

	cout << "반지름 입력 : ";
	cin >> r;

	c2.setRadius(r);
	cout << "원 면적 : " << c2.getArea() << endl;

	return 0;
}