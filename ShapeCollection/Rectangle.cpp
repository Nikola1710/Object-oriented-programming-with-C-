#include "Rectangle.h"

Rectangle::Rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) : Shape(4)
{
	setPoint(x1, y1, 0);
	setPoint(x2, y2, 1);
	setPoint(x3, y3, 2);
	setPoint(x4, y4, 3);
}

double Rectangle::getPerimeter()
{
	return (2 * getPoint(0).getDist(getPoint(1)) + 2 * getPoint(1).getDist(getPoint(2)));
}

double Rectangle::getArea()
{
	return getPoint(0).getDist(getPoint(1)) * getPoint(1).getDist(getPoint(2));
}

Shape* Rectangle::clone()
{
	Rectangle* newRectangle = new Rectangle(*this);
	return newRectangle;
}

