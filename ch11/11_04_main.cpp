#include "h_11_04.h"

int main()
{
	GeometricFigure obj1;

	cout << "obj�� �� : " << obj1.GetColor() << endl;
	obj1.SetColor("green");
	cout << "obj�� �� : " << obj1.GetColor() << endl;

	Rectangle rect1;
	rect1.SetWidth(3.2);
	rect1.SetHeight(4.3);
	rect1.CalArea();
	rect1.SetColor("blue");

	cout << "���簢�� ����" << endl;
	cout << "���� : " << rect1.GetWidth() << endl;
	cout << "���� : " << rect1.GetHeight() << endl;
	cout << "���� : " << rect1.GetArea() << endl;

	if (rect1.IsPaint())
		cout << "������ : " << rect1.GetColor() << endl;

	return 0;
}