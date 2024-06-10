#include <iostream>

using namespace std;

#include "Point.h"
#include "Polygon.h"
#include "Triangle.h"

int main()
{
	cout << "Polygon test." << endl;

	Triangle tr;
	tr.read();
	//tr.print();

	Polygon* ptr_plgn = &tr;
	ptr_plgn->print();

	return 0;
}//main
