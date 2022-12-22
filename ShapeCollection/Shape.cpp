#include "Shape.h"

void Shape::CopyFrom(const Shape& other)
{
	points = new Point[other.pointsCount];

	for (int i = 0; i < other.pointsCount; i++)
	{
		points[i] = other.points[i];
	}

	pointsCount = other.pointsCount;
}

void Shape::Free()
{
	delete[] points;
}

Shape::Shape(int pointsCount)
{
	points = new Point[pointsCount];
	this->pointsCount = pointsCount;
}

Shape::Shape(const Shape& other)
{
	CopyFrom(other);
}

Shape& Shape::operator=(const Shape& other)
{
	if (this != &other)
	{
		Free();
		CopyFrom(other);
	}
	return *this;
}

Shape::~Shape()
{
	Free();
}

void Shape::setPoint(int x, int y, int ind)
{
	Point currentPoint(x, y);
	points[ind] = currentPoint;
}

Point& Shape::getPoint(int ind)
{
	return points[ind];
}
