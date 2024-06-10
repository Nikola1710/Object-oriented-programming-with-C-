#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#include "ReadAvg.h"

ReadAvg::ReadAvg(const string &in_filename)
{
    in_strm.open(in_filename.c_str());
    if (in_strm.fail())
    {
        fail = true;
        cerr << "Error in class ReadAvg: file not found." << endl; 
    }  
}//ReadAvg

ReadAvg::~ReadAvg()
{
    if (!fail)
    {
        in_strm.close();
    }
}//~ReadAvg

double ReadAvg::calcAvg()
{
    double result = 0;
    double sum = 0;
    int numb = 0;
    if (!fail)                          // if the file exists
    {
        double curr;                    // current floating-point
        in_strm >> curr;                // read
        do 
        {
            sum += curr;
            numb++;            
            in_strm >> curr;            // read
        }
        while (!in_strm.eof());         // until the end of the file 
        result = sum / numb;
    }
    return result;
}//calcAvg
