#ifndef SOLDIER_H
#define SOLDIER_H

#include <iostream>

class Soldier
{
private:
	char* name;
	int age;
	double salary;
	char combatSkills;

	void CopyFrom(const Soldier& other);
	void Free();

public:
	Soldier();
	Soldier(const char* name, int age, double salary, char combatSkills);
	Soldier(const Soldier& other);
	Soldier& operator=(const Soldier& other);
	~Soldier();

	char* getName() const;
	int getAge() const;
	double getSalary() const;
	char getCombatSkills() const;

	void setName(const char* name);
	void setAge(int age);
	void setSalary(int salary);
	void setCombatSkills(char combatSkills);

	void Print();

};

#endif // !SOLDIER_H

