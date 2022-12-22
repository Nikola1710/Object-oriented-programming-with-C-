#pragma once
#include <iostream>
#include "GradesBook.h"
#include "Person.h"

class Student : public Person
{
private:
	int fn;
	GradesBook gb;

public:
	Student();

};
