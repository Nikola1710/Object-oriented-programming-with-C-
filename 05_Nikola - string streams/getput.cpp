#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void getput(const string &in_fname)
{
    fstream in_strm;
    in_strm.open(in_fname.c_str(), fstream::app);
    if (!in_strm.fail())
    {
        long int get = in_strm.tellg();
        cout << "Get position: " << get << endl;
        long int put = in_strm.tellp();
        cout << "Put position: " << put << endl;

        in_strm.close();
    }
    else
    {
        cerr << "Cannot open " << in_fname << endl;
    }

}//getput

int main()
{
    cout << "Input filename: ";
    string in_fname;
    cin >> in_fname;
    getput(in_fname);

    return 0;
}//main
