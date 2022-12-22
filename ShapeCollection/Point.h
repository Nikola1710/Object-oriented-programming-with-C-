#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <math.h>

class Point
{
private:
	int x;
	int y;

public:
	Point();
	Point(int x, int y);
	double getDist(const Point& other);

};

#endif // !POINT_H

