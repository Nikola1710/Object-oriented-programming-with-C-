#include <iostream>
#include "Athlete.h"

Athlete::Athlete(const char* name, double salary)
{
	if (name == nullptr)
		this->name = nullptr;
	else
	{
		int len = strlen(name);
		this->name = new char[len + 1];
		strcpy(this->name, name);
	}

	this->salary = salary;
	

char* Athlete::getName() const { return name; }
double Athlete::getSalary() const { return salary; }



void Athlete::setName(const char* name)
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


void Athlete::setSalary(int salary)
{
	this->salary = salary;
}

void Athlete::setRank(const char* ranking)
{
	if (ranking == nullptr)
		this->ranking = nullptr;
	else
	{
		delete[] this->ranking;
		int len = strlen(ranking);
		this->ranking = new char[len + 1];
		strcpy(this->ranking , ranking);
	}
	
}


void Athlete::Print()
{
	cout << "name: " << name << endl;
	cout << "salary: " << salary << endl;
	cout << "ranking" << rank << endl;
	cout << endl;
}