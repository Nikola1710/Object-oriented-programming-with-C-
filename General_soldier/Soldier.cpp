#include "Soldier.h"

void Soldier::CopyFrom(const Soldier& other)
{
	int len = strlen(other.name);
	this->name = new char[len + 1];
	strcpy(this->name, other.name);

	this->age = other.age;
	this->salary = other.salary;
	this->combatSkills = other.combatSkills;
}

void Soldier::Free()
{
	delete[] name;
}

Soldier::Soldier() : name(nullptr), age(0), salary(0), combatSkills('A')
{
}

Soldier::Soldier(const char* name, int age, double salary, char combatSkills)
{
	if (name == nullptr)
		this->name = nullptr;
	else
	{
		int len = strlen(name);
		this->name = new char[len + 1];
		strcpy(this->name, name);
	}

	this->age = age;
	this->salary = salary;
	this->combatSkills = combatSkills;
}

Soldier::Soldier(const Soldier& other)
{
	CopyFrom(other);
}

Soldier& Soldier::operator=(const Soldier& other)
{
	if (this != &other)
	{
		Free();
		CopyFrom(other);
	}

	return *this;
}

Soldier::~Soldier()
{
	Free();
}

char* Soldier::getName() const { return name; }
int Soldier::getAge() const { return age; }
double Soldier::getSalary() const { return salary; }
char Soldier::getCombatSkills() const { return combatSkills; }

void Soldier::setName(const char* name)
{
	if (name == nullptr)
		this->name = nullptr;
	else
	{
		delete[] this->name;
		int len = strlen(name);
		this->name = new char[len + 1];
		strcpy(this->name, name);
	}
}

void Soldier::setAge(int age)
{
	this->age = age;
}

void Soldier::setSalary(int salary)
{
	this->salary = salary;
}

void Soldier::setCombatSkills(char combatSkills)
{
	this->combatSkills = combatSkills;
}

void Soldier::Print()
{
	std::cout << "name: " << name << std::endl;
	std::cout << "age: " << age << std::endl;
	std::cout << "salary: " << salary << std::endl;
	std::cout << "combatSkills: " << combatSkills << std::endl;
	std::cout << std::endl;
}