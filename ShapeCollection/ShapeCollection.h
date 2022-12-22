#ifndef SHAPECOLLECTION_H
#define SHAPECOLLECTION_H

#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"

class ShapeCollection
{
private:
	Shape** data;
	int count;
	int capacity;

	void CopyFrom(const ShapeCollection& other);
	void Free();
	void Resize(int size);

public:
	ShapeCollection();
	ShapeCollection(const ShapeCollection& other);
	ShapeCollection& operator=(const ShapeCollection& other);
	~ShapeCollection();

	void AddShape(Shape* currentShape);
	void AddTriangle(int x1, int y1, int x2, int y2, int x3, int y3);
	void AddCircle(int x, int y, int r);
	void AddRectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);

	void PrintAllPerimeters();
	void PrintAllAreas();

};

#endif // !SHAPECOLLECTION_H

