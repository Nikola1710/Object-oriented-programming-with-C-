#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string convert(char opr)
{
    string result;
    switch (opr)
    {
        case '+':
            result = "sum";
            break;
        case '-':
            result = "subtraction";
            break;
        case '*':
            result = "multiplication";
            break;
        case '/':
            result = "division";
            break;
        default:
            result = "unknown operation";
    }

    return result;
}//convert

string parse(const string &expr)
{
    istringstream in_strm(expr);
    int lft;
    in_strm >> lft;
    char opr;
    in_strm >> opr;

    return convert(opr);
}//parse

int main()
{
    cout << "Expression: ";
    string expr;
    cin >> expr;
    cout << parse(expr) << endl;

    return 0;
}//main
