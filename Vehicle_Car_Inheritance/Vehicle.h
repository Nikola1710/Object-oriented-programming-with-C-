#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

class Vehicle 
{
private:
	unsigned int wheels;
	double weight;

public:
	Vehicle();
	Vehicle(unsigned int wheels, double weight);

	unsigned int getWheels() const;
	double getWeigh() const;

	void setWheels(unsigned int wheels);
	void setWeight(double weight);

	void Print();

};

#endif // !VEHICLE_H