#include "Circle.h"

Circle::Circle(int x, int y, double r) : Shape(1)
{
	setPoint(x, y, 0);
	radius = r;
}

double Circle::getPerimeter()
{
	return 2 * PI * radius;
}

double Circle::getArea()
{
	return PI * radius * radius;
}

Shape* Circle::clone()
{
	Circle* newCircle = new Circle(*this);
	return newCircle;
}

