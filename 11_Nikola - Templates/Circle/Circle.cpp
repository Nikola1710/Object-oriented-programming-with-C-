#include "Circle.h"

Circle::Point::Point()
{
    x = 0;
    y = 0;
}//Point

void Circle::Point::set(double x, double y)
{
    this->x = x;
    this->y = y;
}//set

Circle::Circle()
{
    ptr_cnt = new Point();
    rad = 0;
}//Circle

Circle::~Circle()
{
    if (ptr_cnt)
    {
        delete ptr_cnt;
        ptr_cnt = nullptr;
    }
}//~Circle

void Circle::set(double x, double y, double rad)
{
    ptr_cnt->set(x, y);
    this->rad = rad;
}//set
