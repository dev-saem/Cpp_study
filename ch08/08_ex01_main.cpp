#include "h_08_ex01.h"

int main()
{
	Circle c1;
	c1.setRadius(10.2);

	cout << "������ : " << c1.getRadius() << endl;
	cout << "�� ���� : " << c1.getArea() << endl;

	Circle c2;
	double r;

	cout << "������ �Է� : ";
	cin >> r;

	c2.setRadius(r);
	cout << "�� ���� : " << c2.getArea() << endl;

	return 0;
}