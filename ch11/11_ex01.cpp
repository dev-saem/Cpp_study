#include "h_11_ex01.h"

GeometricFigure::GeometricFigure()
{
	color = "white";
}

GeometricFigure::GeometricFigure(const string color)
{
	this->color = color;
}

void GeometricFigure::SetColor(const string color)
{
	this->color = color;
}

bool GeometricFigure::IsPaint()
{
	if (color == "white")
		return false;
	return true;
}

string GeometricFigure::GetColor()
{
	return color;
}


Triangle::Triangle()
{
	a = 0;
	b = 0;
	c = 0;
}

Triangle::Triangle(const string color, const double a, const double b, const double c)
	:GeometricFigure(color)
{
	this->a = a;
	this->b = b;
	this->c = c;

}

void Triangle::SetSide(const double a, const double b, const double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

int Triangle::GetSide(double *a, double *b, double *c)
{
	if (this->a == 0 && this->b == 0 && this->c == 0)
		return 0;

	*a = this->a;
	*b = this->b;
	*c = this->c;


	return 1;
}


int Triangle::CalSquare()
{
	if (this->a == 0 && this->b == 0 && this->c == 0)
		return 0;

	double s;
	s = (a + b + c) / 2;
	square = sqrt(s * (s - a) * (s - b) * (s - c));

	return 1;
}

double Triangle::GetSquare()
{
	return square;
}