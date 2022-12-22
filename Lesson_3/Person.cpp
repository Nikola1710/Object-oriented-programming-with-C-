#include "Person.h"

void Person::CopyFrom(const Person& other)
{
	int len = strlen(other.name);
	name = new char[len + 1];
	strcpy(name, other.name);
	age = other.age;
}

void Person::Free()
{
	delete[] name;
}

Person::Person()
{
	name = nullptr;
	age = 0;
}

Person::Person(const char* newName, int newAge)
{
	int len = strlen(newName);
	name = new char[len + 1];
	strcpy(name, newName);
	age = newAge;
}

Person::Person(const Person& other)
{
	CopyFrom(other);
}

Person& Person::operator=(const Person& other)
{
	if (this != &other)
	{
		Free();
		CopyFrom(other);
	}

	return *this;
}

Person::~Person()
{
	Free();
}

void Person::Print()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
}
