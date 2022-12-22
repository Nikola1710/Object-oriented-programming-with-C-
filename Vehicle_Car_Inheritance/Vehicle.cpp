#include "Vehicle.h"

Vehicle::Vehicle() : wheels(0), weight(0)
{
}

Vehicle::Vehicle(unsigned int wheels, double weight)
{
	this->wheels = wheels;
	this->weight = weight;
}

unsigned int Vehicle::getWheels() const
{
	return wheels;
}

double Vehicle::getWeigh() const
{
	return weight;
}

void Vehicle::setWheels(unsigned int wheels)
{
	this->wheels = wheels;
}

void Vehicle::setWeight(double weight)
{
	this->weight = weight;
}

void Vehicle::Print()
{
	std::cout << "Wheels: " << wheels << std::endl;
	std::cout << "Weight: " << weight << std::endl;
}


