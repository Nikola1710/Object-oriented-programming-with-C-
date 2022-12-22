#include <iostream>
#include "Person.h"
#include "GradesBook.h"
using namespace std;

//class A
//{
//private:
//    int a;
//
//public:
//    A(int newA)
//    {
//        a = newA;
//        cout << "Constructor A(" << a << ")" << endl;
//    }
//
//    A(const A& other) //Copy Constructor
//    {
//        a = other.a;
//        cout << "Copy Constructor A(" << a << ")" << endl;
//    }
//};
//
//class B
//{
//private:
//    int b;
//    A objA;
//
//public:
//    B(int newB, int newA) : objA(newA)
//    {
//        b = newB;
//        cout << "Constructor B(" << b << ")" << endl;
//    }
//
//    B(const B& other) : objA(other.objA)
//    {
//        b = other.b;
//        cout << "Copy Contrucor B(" << b << ")" << endl;
//    }
//};

int main()
{
    /*A obj1(20);
    A obj2(obj1);
    
    B obj3(15, 24);
    B obj4(obj3);*/



    /*int a = 5;
    while (a < 6)
    {
        Person p3("Ivan", 20);
        a++;
    }


    Person p1("Pesho", 20);
    p1.Print();

    Person p2(p1);
    p2.Print();
   
    p1 = p2;
    p1.operator=(p2);*/


    GradesBook gb;
    gb.AddGrade(5);
    gb.AddGrade(4);
    gb.AddGrade(5);
    gb.AddGrade(6);
    gb.AddGrade(6);
    gb.AddGrade(6);

    gb.Print();

    gb.RemoveLastGrade();

    gb.Print();



    return 0;
}

