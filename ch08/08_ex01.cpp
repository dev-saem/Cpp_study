#include "h_08_ex01.h"

void Circle::setRadius(const double r)
{
	radius = r;
}

double Circle::getArea()
{
	area = PI * radius * radius;
	return area;
}

double Circle::getRadius()
{
	return radius;
}