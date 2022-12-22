#pragma once

#include <iostream>

class Athlete {

private:
	char* name;
	int annualSalary;

	void CopyFrom(const Athlete& other);
	void Free();

public:
	Athlete();
	Athlete(const char* name, int annualSalary);
	Athlete(const Athlete& other);
	Athlete& operator=(const Athlete& other);
	~Athlete();

	const char* getName();
	int getAnnualSalary();
	void setName(const char* name);
	void setAnnualSalary(int annualSalary);

	void Print();

};