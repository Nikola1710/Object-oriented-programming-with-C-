#include <iostream>
#include "Car.h"

int main()
{
	
	Car c1("audi", 4, 4, 13445);
	c1.Print();

	std::cout << c1.getWeigh();
	std::cout << c1.getWheels();
	

	return 0;
}
