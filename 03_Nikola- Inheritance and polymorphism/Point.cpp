#include <iostream>

using namespace std;

#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}//Point

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}//Point

void Point::setX(double x)
{
	this->x = x;
}//setX

double Point::getX() const
{
	return x;
}//getX

void Point::setY(double y)
{
	this->y = y;
}//setY

double Point::getY() const
{
	return y;
}//getY

void Point::read()
{
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
}//read

void Point::print() const
{
	cout << "(" << x << ", " << y << ")";
}//print
