#include <iostream>
using namespace std;
#define PI 3.14

int main()
{
	int age = 18;
	double height;

	cout << "Ű �Է� : ";
	cin >> height;

	int radius;
	double area;

	cout << "������ �Է� : ";
	cin >> radius;
	area = radius*2*PI;

	cout << "���� : " << age << endl;
	cout << "Ű : " << height << endl;
	cout << "�� ������ : " << radius << endl;
	cout << "�� ���� : " << area << endl;

	return 0;
}