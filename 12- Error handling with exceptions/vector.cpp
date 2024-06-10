#include <iostream>
#include <stdexcept>

using namespace std;

#include "vector.h"

void Vector::init(int size)
{
    if (size < 0)
    {
        throw logic_error("Negative size.");
    }
    this->size = size;
    ptr_arr = new int[this->size];
    for (int i = 0; i < size; i++)
    {
        cout << "> ";
        cin >> ptr_arr[i];
        if (cin.fail())
        {
            throw runtime_error("Wrong input.");
        }
    }
}//init

Vector::Vector(int size)
{
    ptr_arr = nullptr;
    try
    {
        init(size);
    }
    catch(...) // prevent memory leak
    {
        if (ptr_arr)
        {
            delete[] ptr_arr;
            ptr_arr = nullptr;
        }
        throw;
    }
}//Vector

Vector::~Vector()
{
    if (ptr_arr)
    {
        delete[] ptr_arr;
        ptr_arr = nullptr;
    }
}//~Vector
