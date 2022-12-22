#include "General.h"

General::General(int count, const char* name, int age, double salary, char combatSkills) : Soldier(name, age, salary, combatSkills)
{
	this->count = count;
}

int General::getCount() const
{
	return count;
}

void General::setCount(int count)
{
	this->count = count;
}

void General::Print()
{
	Soldier::Print();
	std::cout << "count: " << count << std::endl;
}