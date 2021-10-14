#include <iostream>
using namespace std;
#define PI 3.14

int main()
{
	int age = 18;
	double height;

	cout << "키 입력 : ";
	cin >> height;

	int radius;
	double area;

	cout << "반지름 입력 : ";
	cin >> radius;
	area = radius*2*PI;

	cout << "나이 : " << age << endl;
	cout << "키 : " << height << endl;
	cout << "원 반지름 : " << radius << endl;
	cout << "원 면적 : " << area << endl;

	return 0;
}