#ifndef SHAPE_H
#define SHAPE_H

#include "Point.h"

class Shape
{
private:
	Point* points;
	int pointsCount;

	void CopyFrom(const Shape& other);
	void Free();

public:
	Shape(int pointsCount);
	Shape(const Shape& other);
	Shape& operator=(const Shape& other);
	~Shape();

	virtual double getPerimeter() = 0;
	virtual double getArea() = 0;
	virtual Shape* clone() = 0;

	void setPoint(int x, int y, int ind);
	Point& getPoint(int ind);

};

#endif // !SHAPE_H

