#ifndef GENERAL_H
#define GENERAL_H

#include "Soldier.h"

class General : public Soldier
{
private:
	int count;

public:
	General(int count, const char* name, int age, double salary, char combatSkills);

	int getCount() const;
	void setCount(int count);

	void Print();

};

#endif // !GENERAL_H

