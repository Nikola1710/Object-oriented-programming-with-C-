#ifndef GRADESBOOK_H
#define GRADESBOOK_H

#include <iostream>

class GradesBook
{
private:
	int* grades;
	int count;
	int capacity;

	void CopyFrom(const GradesBook& other);
	void Free();
	void Resize();
	bool isFull();
	bool isValidGrade(int grade);

public:
	//Big4
	GradesBook();
	GradesBook(const GradesBook& other);
	GradesBook& operator=(const GradesBook& other);
	~GradesBook();

	void AddGrade(int grade);
	void RemoveLastGrade();
	void Print();

};

#endif // !GRADESBOOK_H

