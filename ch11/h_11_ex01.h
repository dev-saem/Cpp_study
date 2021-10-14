#ifndef _h_11_ex01_h_
#define _h_11_ex01_h_

#include <iostream>
#include <cmath>
using namespace std;

class GeometricFigure
{
public:
	GeometricFigure();
	GeometricFigure(const string color);
	void SetColor(const string color);
	bool IsPaint();
	string GetColor();

protected:
	string color;
};

class Triangle : public GeometricFigure
{
public:
	Triangle();
	Triangle(const string color, const double a, const double b, const double c);
	void SetSide(const double a, const double b, const double c);
	int GetSide(double *a, double *b, double *c);
	int CalSquare();
	double GetSquare();
private:
	double a, b, c, square;

};

#else
#endif