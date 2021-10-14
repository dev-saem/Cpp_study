#ifndef _h_11_01_h_
#define _h_11_01_h_

#include <iostream>
#include <string>
using namespace std;

class PFigure	// 기반 클래스
{
public:
	PFigure();
	void SetColor(const string color);
	string GetColor();

private:
	string color;
};

class Circle : public PFigure	// 파생클래스
{
public:
	Circle();
	void SetR(const double r);
	double GetArea();

private:
	double r, area;
};

#else
#endif