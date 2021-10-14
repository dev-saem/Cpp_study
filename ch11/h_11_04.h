#ifndef _h_11_04_h_
#define _h_11_04_h_

#include <iostream>
#include <string>
using namespace std;

class GeometricFigure
{
public:
	GeometricFigure();
	void SetColor(const string color);
	bool IsPaint();
	string GetColor();

protected:
	string color;
};

class Rectangle :public GeometricFigure
{
public:
	Rectangle();
	void SetWidth(const double width);
	void SetHeight(const double height);
	void CalArea();
	double GetWidth();
	double GetHeight();
	double GetArea();

private:
	double width, height, area;
};

#else
#endif