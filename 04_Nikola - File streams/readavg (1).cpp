#include <iostream>
#include <fstream>
#include <string>

using namespace std;

double readAvg(const string &in_filename)
{
    ifstream in_strm;
    in_strm.open(in_filename.c_str());
    double result = 0;
    double sum = 0;
    int numb = 0;
    if (!in_strm.fail())
    {
        double curr;
        in_strm >> curr;
        do 
        {
            sum += curr;
            numb++;            
            in_strm >> curr;
            strm.close();
        }
        while (!in_strm.eof());
        result = sum / numb;
    }

    return result;
}//readAvg

int main()
{
    cout << "Input filename: ";
    string in_filename;
    cin >> in_filename;

    cout << "Average is: " << readAvg(in_filename) << endl;

    return 0;
}//main
