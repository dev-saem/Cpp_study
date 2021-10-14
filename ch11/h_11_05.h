#ifndef _h_11_05_h_
#define _h_11_05_h_

#include <iostream>
using namespace std;

class CON1
{
public:
	CON1();
	CON1(const int c);
	~CON1();

protected:
	int c;	// 멤버 변수 추가
};

class CON2 :public CON1
{
public:
	CON2();
	~CON2();
};

#else
#endif