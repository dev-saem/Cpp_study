#include "h_08_ex02.h"

int main()
{
	Triangle t1;
	double a, b, c;

	cout << "�ﰢ���� ���� �Է� : ";
	cin >> a >> b >> c;

	t1.setSide1(a);
	t1.setSide2(b);
	t1.setSide3(c);

	t1.CalArea();

	cout << "�ﰢ���� �� �� : " << t1.getSide1() << ", " << t1.getSide2() << ", " << t1.getSide3() << endl;
	cout << "�ﰢ�� ���� : " << t1.getArea() << endl;

	return 0;
}