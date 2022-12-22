#include "GradesBook.h"

void GradesBook::CopyFrom(const GradesBook& other)
{
	grades = new int[other.capacity];

	for (int i = 0; i < other.count; i++)
	{
		grades[i] = other.grades[i];
	}

	count = other.count;
	capacity = other.capacity;
}

void GradesBook::Free()
{
	delete[] grades;
}

void GradesBook::Resize()
{
	int* temp = new int[capacity * 2];

	for (int i = 0; i < count; i++)
	{
		temp[i] = grades[i];
	}

	delete[] grades;
	grades = temp;
	capacity = capacity * 2;
}

bool GradesBook::isFull()
{
	return (count == capacity);
}

bool GradesBook::isValidGrade(int grade)
{
	return (grade >= 2 && grade <= 6);
}

GradesBook::GradesBook()
{
	capacity = 4;
	count = 0;
	grades = new int[capacity];
}

GradesBook::GradesBook(const GradesBook& other)
{
	CopyFrom(other);
}

GradesBook& GradesBook::operator=(const GradesBook& other)
{
	if (this != &other)
	{
		Free();
		CopyFrom(other);
	}

	return *this;
}

GradesBook::~GradesBook()
{
	Free();
}

void GradesBook::AddGrade(int grade)
{
	if (!isValidGrade(grade))
	{
		std::cout << "Invalid grade" << std::endl;
		return;
	}

	if (isFull())
	{
		Resize();
	}

	grades[count] = grade;
	count++;
}

void GradesBook::RemoveLastGrade()
{
	count--;
}

void GradesBook::Print()
{
	std::cout << "Grades: ";
	for (int i = 0; i < count; i++)
	{
		std::cout << grades[i] << ' ';
	}
	std::cout << std::endl;
}