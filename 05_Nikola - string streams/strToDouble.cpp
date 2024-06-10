#include <iostream>
#include <string>
#include <sstream>

using namespace std;

double strToDouble(const string &inp)
{
    istringstream in_strm;
    in_strm.str(inp);
    double result;
    in_strm >> result;

    return result;
}//strToDouble

int main()
{
    cout << "Floating-point number: ";
    string inp;
    cin >> inp;
    cout << strToDouble(inp) << endl;

    return 0;
}//main
