#include "Triangle.h"

Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3) : Shape(3)
{
	setPoint(x1, y1, 0);
	setPoint(x2, y2, 1);
	setPoint(x3, y3, 2);
}

double Triangle::getPerimeter()
{
	double sideA = getPoint(1).getDist(getPoint(2));
	double sideB = getPoint(0).getDist(getPoint(2));
	double sideC = getPoint(0).getDist(getPoint(1));

	return sideA + sideB + sideC;
}

double Triangle::getArea()
{
	double sideA = getPoint(1).getDist(getPoint(2));
	double sideB = getPoint(0).getDist(getPoint(2));
	double sideC = getPoint(0).getDist(getPoint(1));

	double halfPerimeter = getPerimeter() / 2;

	return sqrt(halfPerimeter * (halfPerimeter - sideA) * (halfPerimeter - sideB) * (halfPerimeter - sideC));
}

Shape* Triangle::clone()
{
	Triangle* newTriangle = new Triangle(*this);
	return newTriangle;
}


