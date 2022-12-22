#include <istream>

#include "ShapeCollection.h"

int main()
{
	/*Triangle t(1, 1, 2, 3, 3, 1);
	std::cout << t.getPerimeter() << std::endl;
	std::cout << t.getArea() << std::endl;*/
	

	ShapeCollection sh;
	sh.AddTriangle(1, 1, 2, 3, 3, 1);
	sh.AddCircle(5, 5, 2); 
	sh.AddRectangle(1, 4, 1, 1, 5, 1, 5, 4);

	sh.PrintAllPerimeters();
	sh.PrintAllAreas();

	return 0;
}