#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>

using namespace std;

class GeometricErr : public logic_error
{
    public:
        GeometricErr(const string &msg);
};

GeometricErr::GeometricErr(const string &msg) : logic_error(msg)
{
}//GeometricErr

inline double squareSide(double area)
{
    if (area < 0)
    {
        GeometricErr excpt("Negative area.");
        throw excpt;
    }

    return sqrt(area);
}//squareSide 

int main()
{
    cout << "Square area: ";
    double area;
    cin >> area;

    try
    {
        cout << "Side: " << squareSide(area) << endl;
    }
    catch (GeometricErr &excpt)
    {
        cout << "Geometric error: ";
        cout << excpt.what() << endl;
    }
    catch (logic_error &excpt)
    {
        cout << "Logic error: ";
        cout << excpt.what() << endl;
    }

    return 0;
}//main
