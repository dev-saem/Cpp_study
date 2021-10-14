#include "h_11_01.h"

int main()
{
	PFigure cir1;
	cout << cir1.GetColor() << endl;

	cir1.SetColor("red");
	cout << cir1.GetColor() << endl;

	Circle cir2;	// 상속받은 Circle 객체 생성, 
	// 기반클래스 참조 가능(public, private만 가능)
	cout << cir2.GetArea() << endl;
	
	return 0;
}