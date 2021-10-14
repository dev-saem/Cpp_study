#include "h_11_04.h"

GeometricFigure::GeometricFigure()
{
	this->color = "white";
}

void GeometricFigure::SetColor(const string color)
{
	this->color = color;
}

bool GeometricFigure::IsPaint()
{
	if (color != "white")
		return true;
	else
		return false;
}

string GeometricFigure::GetColor()
{
	return color;
}

Rectangle::Rectangle()
{
	height = 0;
	width = 0;
	area = 0;
}

void Rectangle::SetWidth(const double width)
{
	this->width = width;
}

void Rectangle::SetHeight(const double height)
{
	this->height = height;
}

double Rectangle::GetWidth()
{
	return width;
}

double Rectangle::GetHeight()
{
	return height;
}

void Rectangle::CalArea()
{
	area = width * height;
}

double Rectangle::GetArea()
{
	return area;
}

