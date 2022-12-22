#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle
{
private:
	char* brand;
	int passengerSeats;

	void CopyFrom(const Car& other);
	void Free();

public:
	Car();
	Car(const char* brand, int passengerSeats, unsigned int wheels, double weight);
	Car(const Car& other);
	Car& operator=(const Car& other);
	~Car();

	const char* getBrand() const;
	int getPassengerSeats() const;

	void setBrand(const char* brand);
	void setPassengerSeats(int passengerSeats);

	void Print();
};

#endif // !CAR_H

