#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

const double PI = 3.14;

class Circle : public Shape
{
private:
	double radius;

public:
	Circle(int x, int y, double r);

	double getPerimeter();
	double getArea();
	Shape* clone();

};

#endif // !CIRCLE_H

