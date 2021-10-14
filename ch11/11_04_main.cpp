#include "h_11_04.h"

int main()
{
	GeometricFigure obj1;

	cout << "obj의 색 : " << obj1.GetColor() << endl;
	obj1.SetColor("green");
	cout << "obj의 색 : " << obj1.GetColor() << endl;

	Rectangle rect1;
	rect1.SetWidth(3.2);
	rect1.SetHeight(4.3);
	rect1.CalArea();
	rect1.SetColor("blue");

	cout << "직사각형 정보" << endl;
	cout << "가로 : " << rect1.GetWidth() << endl;
	cout << "세로 : " << rect1.GetHeight() << endl;
	cout << "면적 : " << rect1.GetArea() << endl;

	if (rect1.IsPaint())
		cout << "색정보 : " << rect1.GetColor() << endl;

	return 0;
}