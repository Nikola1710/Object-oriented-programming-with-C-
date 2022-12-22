#include "PrimeNumber.h"


PrimeNumber::PrimeNumber() : PrimeNumber(2)
{
}

PrimeNumber::PrimeNumber(int num)
{
}

int PrimeNumber::getPrimeNumber() const
{
	return 0;
}

void PrimeNumber::setPrimeNumber(int PrimeNumber)
{
	this->num = num;

}

void PrimeNumber::Print()
{
	std::cout << "num" << num << std::endl;
}

