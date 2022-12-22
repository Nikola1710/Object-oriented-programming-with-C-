#include "ShapeCollection.h"

void ShapeCollection::CopyFrom(const ShapeCollection& other)
{
	data = new Shape * [other.capacity];

	for (int i = 0; i < other.count; i++)
	{
		data[i] = other.data[i]->clone();
	}

	count = other.count;
	capacity = other.capacity;
}

void ShapeCollection::Free()
{
	for (int i = 0; i < count; i++)
		delete data[i];

	delete[] data;
}

void ShapeCollection::Resize(int size)
{
	Shape** temp = new Shape * [size];

	for (int i = 0; i < count; i++)
		temp[i] = data[i];

	delete[] data;
	data = temp;

	capacity *= 2;
}

ShapeCollection::ShapeCollection()
{
	count = 0;
	capacity = 4;
	data = new Shape * [capacity];
}

ShapeCollection::ShapeCollection(const ShapeCollection& other)
{
	CopyFrom(other);
}

ShapeCollection& ShapeCollection::operator=(const ShapeCollection& other)
{
	if (this != &other)
	{
		Free();
		CopyFrom(other);
	}

	return *this;
}

ShapeCollection::~ShapeCollection()
{
	Free();
}

void ShapeCollection::AddShape(Shape* currentShape)
{
	if (count == capacity)
		Resize(capacity * 2);

	data[count] = currentShape;
	count++;
}

void ShapeCollection::AddTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
	Triangle* newTriangle = new Triangle(x1, y1, x2, y2, x3, y3);
	AddShape(newTriangle);
}

void ShapeCollection::AddCircle(int x, int y, int r)
{
	Circle* newCircle = new Circle(x, y, r);
	AddShape(newCircle);
}

void ShapeCollection::AddRectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	Rectangle* newRectangle = new Rectangle(x1, y1, x2, y2, x3, y3, x4, y4);
	AddShape(newRectangle);
}

void ShapeCollection::PrintAllPerimeters()
{
	std::cout << "Printing all perimeters: \n";

	for (int i = 0; i < count; i++)
		std::cout << data[i]->getPerimeter() << std::endl;


	std::cout << std::endl;
}

void ShapeCollection::PrintAllAreas()
{
	std::cout << "Printing all areas: \n";

	for (int i = 0; i < count; i++)
		std::cout << data[i]->getArea() << std::endl;

	std::cout << std::endl;
}

