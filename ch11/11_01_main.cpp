#include "h_11_01.h"

int main()
{
	PFigure cir1;
	cout << cir1.GetColor() << endl;

	cir1.SetColor("red");
	cout << cir1.GetColor() << endl;

	Circle cir2;	// ��ӹ��� Circle ��ü ����, 
	// ���Ŭ���� ���� ����(public, private�� ����)
	cout << cir2.GetArea() << endl;
	
	return 0;
}