#include <iostream>
#include <string>
#include <sstream>

using namespace std;

inline int hexToDecChar(char hex_char)
{
    int result = 0;
    if (hex_char >= '0' && hex_char <= '9')
    {
        result = hex_char - '0';
    }
    else
    {
        result = 10 + hex_char - 'A';
    }
}//hexToDecChar

int hexToDec(const string &hex_str)
{
    const int RAD = 16;

    int result = hexToDecChar(hex_str[0]);
    for (int i = 1; i < hex_str.length(); i++)
    {
        result *= RAD;
        result += hexToDecChar(hex_str[i]);
    }

    return result;
}//hexToDec

string hexToRGB(const string &hex_col)
{
    ostringstream out_strm;
    out_strm << "(";
    for (int i = 0; i <= 2; i += 2)
    {
        string color = hex_col.substr(i, 2);
        out_strm << hexToDec(color) << ", ";
    }
    string color = hex_col.substr(4, 2);
    out_strm << hexToDec(color) << ")";

    return out_strm.str();
}//hexToRGB

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        cout << "Enter a hexadecimal color: ";
        string hex_col;
        cin >> hex_col;
        cout << hexToRGB(hex_col) << endl;
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            string hex_col(argv[i]);
            cout << hexToRGB(hex_col) << endl;
        }
    }

    return 0;
}//main
