#ifndef _h_11_03_h_
#define _h_11_03_h_

#include <iostream>
using namespace std;

class A
{
public:
	void SetVar(const int proVar_A, const int priVar_A);
	void ShowVar();

protected:
	int proVar_A;

private:
	int priVar_A;
};

class B :public A
{
public:
	void Show();
	int b;
};

#else
#endif