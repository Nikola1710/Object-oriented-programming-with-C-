#include <iostream>

using namespace std;

#include "Polygon.h"
#include "Triangle.h"

Triangle::Triangle() : Polygon(NUMB_VRTC)
{
}//Triangle

void Triangle::read()
{
	Polygon::read();
}//read

void Triangle::print() const
{
	for (int i = 0; i < NUMB_VRTC; i++)
	{
		cout << "Vertex " << i << ": ";
		vrtc[i].print();
      	cout << endl;
	}
}//print
