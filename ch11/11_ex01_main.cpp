#include "h_11_ex01.h"

int main()
{
	Triangle tri1("pink", 3.4, 5.1, 4.2);
	tri1.CalSquare();

	double s1, s2, s3;
	tri1.GetSide(&s1, &s2, &s3);

	cout << "�ﰢ���� �� : " << tri1.GetColor() << endl;
	cout << "�ﰢ�� ��1 : " << s1 << endl;
	cout << "�ﰢ�� ��2 : " << s2 << endl;
	cout << "�ﰢ�� ��3 : " << s3 << endl;
	cout << "�ﰢ�� ���� : " << tri1.GetSquare() << endl;

	return 0;
}