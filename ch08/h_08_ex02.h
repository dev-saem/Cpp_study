#ifndef _h_08_ex02_h_
#define _h_08_ex02_h_

#include <iostream>
using namespace std;

class Triangle
{
public:
	void setSide1(const double s);
	void setSide2(const double s);
	void setSide3(const double s);
	double getSide1();
	double getSide2();
	double getSide3();
	double getArea();
	int CalArea();

private:
	double side1, side2, side3, area;
};

#else
#endif