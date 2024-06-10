#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
    public:
        class Point;

        Circle();
        ~Circle();
        void set(double x, double y, double rad);

    private:
        Point* ptr_cnt;
        double rad;
};

class Circle::Point
{
    public:
        Point();
        void set(double x, double y);

    private:
        double x;
        double y;
};

#endif
