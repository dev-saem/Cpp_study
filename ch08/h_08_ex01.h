#ifndef _h_08_ex01_h
#define _h_08_ex01_h
#define PI 3.1415192

#include <iostream>
using namespace std;

class Circle
{
public:
	void setRadius(const double r);
	double getRadius();
	double getArea();

private:
	double radius, area;
};

#else
#endif