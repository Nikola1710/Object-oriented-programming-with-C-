#include "Car.h"

void Car::Free()
{
	delete[] brand;
}

void Car::CopyFrom(const Car& other)
{
	int len = strlen(other.brand);
	this->brand = new char[len + 1];
	strcpy(this->brand, other.brand);

	passengerSeats = other.passengerSeats;
}

Car::Car()
{
	brand = nullptr;
	passengerSeats = 0;
}

Car::Car(const char* brand, int passengerSeats, unsigned int wheels, double weight) : Vehicle(wheels, weight)
{
	int len = strlen(brand);
	this->brand = new char[len + 1];
	strcpy(this->brand, brand);

	this->passengerSeats = passengerSeats;
}

Car::Car(const Car& other)
{
	CopyFrom(other);
}

Car& Car::operator=(const Car& other)
{
	if (this != &other)
	{
		Free();
		CopyFrom(other);
	}

	return *this;
}

Car::~Car()
{
	Free();
}

const char* Car::getBrand() const
{
	return brand;
}

int Car::getPassengerSeats() const
{
	return passengerSeats;
}

void Car::setBrand(const char* brand)
{
	int len = strlen(brand);
	this->brand = new char[len + 1];
	strcpy(this->brand, brand);
}

void Car::setPassengerSeats(int passengerSeats)
{
	this->passengerSeats = passengerSeats;
}

void Car::Print()
{
	std::cout << "Brand: " << brand << std::endl;
	std::cout << "passengerSeats: " << passengerSeats << std::endl;
	Vehicle::Print();
}


