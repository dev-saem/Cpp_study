#include "h_11_05.h"

CON1::CON1()
{
	cout << "*** CON1의 생성자 ***" << endl;
}

CON1::CON1(const int c)
	:c(200)
{
	this->c = c;
	cout << "*** CON1의 생성자 ***" << endl;
	cout << "c = " << c << endl;
}

CON1::~CON1()
{
	cout << "*** CON1의 소멸자 ***" << endl;
}

CON2::CON2()
	:CON1(300)
{
	cout << "*** CON2의 생성자 ***" << endl;
	cout << "c = " << c << endl;
}

CON2::~CON2()
{
	cout << "*** CON2의 소멸자 ***" << endl;
}