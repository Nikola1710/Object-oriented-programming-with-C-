#include <iostream>
#include <cassert>

using namespace std;

#include "Point.h"
#include "Polygon.h"

Polygon::Polygon(int numb)
{
	assert(numb > 0);
	vrtc.resize(numb);
}//Polygon

void Polygon::read()
{
	for (int i = 0; i < vrtc.size(); i++)
	{
		cout << "Point " << i << ": " << endl;
		vrtc[i].read();
	}	
}//read

void Polygon::print() const
{
	for (int i = 0; i < vrtc.size(); i++)
	{
		vrtc[i].print();
		cout << " ";
	}
	cout << endl;
}//print
