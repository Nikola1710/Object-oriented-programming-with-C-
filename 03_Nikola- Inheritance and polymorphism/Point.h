#ifndef POINT_H
#define POINT_H

class Point
{
	public:
		Point();
		Point(double x, double y);
		void setX(double x);
		double getX() const;
		void setY(double y);
		double getY() const;
		void read();
		void print() const;

	private:
		double x;
		double y;
};

#endif
