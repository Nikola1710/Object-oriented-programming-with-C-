#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);

	double getPerimeter();
	double getArea();
	Shape* clone();

};

#endif // !RECTANGLE_H

