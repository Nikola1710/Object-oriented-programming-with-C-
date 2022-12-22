#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person
{
private:
	char* name;
	int age;

	void CopyFrom(const Person& other);
	void Free();

public:
	Person(const char* newName, int newAge); //Constructor with parametes

	//Big 4
	Person(); //Defolt Constructor
	Person(const Person& other);  //Copy Constructor
	Person& operator=(const Person& other); //operator=
	~Person();  //Destructor


	void Print();
};


#endif // !PERSON_H

