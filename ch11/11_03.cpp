#include "h_11_03.h"

void A::SetVar(const int proVar_A, const int priVar_A)
{
	this->proVar_A = proVar_A;
	this->priVar_A = priVar_A;
}

void A::ShowVar()
{
	cout << "proVar_A = " << proVar_A << endl;
	cout << "priVar_A = " << priVar_A << endl;
}

void B::Show()
{
	b = 30;	// this->b = 30;
	cout << "b = " << b << endl;
	proVar_A = 200;	// �Ļ� Ŭ�������� ���� ����
	cout << "proVar_A = " << proVar_A << endl;
}