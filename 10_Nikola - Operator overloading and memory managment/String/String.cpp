#include <iostream>

using namespace std;

#include "String.h"

String::String()
{
    arr = nullptr;
    len = 0;
}//String

String::String(const String &str)
{
    len = str.len;
    arr = new char[len + 1];
    for (int i = 0; i < len; i++)
    {
        arr[i] = str.arr[i];
    }
    arr[len] = '\0';
}//String

String::~String()
{
    //cout << "Destructor." << endl;
    if (arr)
    {
        delete[] arr;
        arr = nullptr;
    }
}//~String

String &String::operator =(const String &str)
{
    if (this != &str)
    {
        if (arr)
        {
            delete[] arr;
            arr = nullptr;
        }
        len = str.len;
        arr = new char[len + 1];
        for (int i = 0; i < len; i++)
        {
            arr[i] = str.arr[i];
        }
        arr[len] = '\0';
    }

    return *this;
}//operator =

istream &operator >>(istream &in, String &str)
{
    const int MAX = 256;
    char buff[MAX];
    in >> buff;
    int buff_len = 0;
    while (buff[++buff_len]);

    if (str.arr)
    {
        delete[] str.arr;
        str.arr = nullptr;
    }
    str.len = buff_len;
    str.arr = new char[str.len + 1];
    for (int i = 0; i < str.len; i++)
    {
        str.arr[i] = buff[i];
    }
    str.arr[str.len] = '\0';
    
    return in;
}//operator >>

ostream &operator <<(ostream &out, const String &str)
{
    out << str.arr;

    return out;
}//operator <<
