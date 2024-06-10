#include <iostream>
#include <string>
#include <fstream>

using namespace std;

long int filelen(const string& in_fname)
{
    long int file_len = 0;
    fstream in_strm;
    in_strm.open(in_fname.c_str());
    if (!in_strm.fail())
    {
        in_strm.seekg(0, ios::end);
        file_len = in_strm.tellg();
    }
    else
    {
        cerr << "Cannot open file " << in_fname << endl;
    }

    return file_len;
}//filelen

int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        cout << "Input filename: ";
        string in_fname;
        cin >> in_fname;
        cout << filelen(in_fname) << endl;
    }
    else if (argc == 2)
    {
        string in_fname(argv[1]);
        cout << filelen(in_fname) << endl;
    }
    else
    {
        cerr << "Unsupported number of arguments." << endl;
    }

    return 0;   
}//main
