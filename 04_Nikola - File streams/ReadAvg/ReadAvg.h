#ifndef READAVG_H
#define READAVG_H

#include <string>
#include <fstream>

using namespace std;

class ReadAvg
{
    public:
        ReadAvg(const string &in_filename);
        ~ReadAvg();
        double calcAvg();

    private:
        ifstream in_strm;
        bool fail;
};

#endif
