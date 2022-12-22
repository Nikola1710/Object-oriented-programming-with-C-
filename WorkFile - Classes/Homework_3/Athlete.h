#pragma once
#ifndef Athlete_H
#define Athlete_H

class Athlete
{

private:
	double salary;
	char* name;
	char* ranking;

public:
	Athlete();
	Athlete(const char* name, double salary , const char* ranking);
	~Athlete();

	char* getName() const;
	double getSalary() const;
	char* getRank() const;

	void setName(const char* name);
	void setSalary(int salary);
	char* SetRank() const;

	void Print();


};


#endif //!Athlete_H