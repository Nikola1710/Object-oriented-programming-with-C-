#include <iostream>
#include <string>

using namespace std;

/*
void swapval(int &frst, int &scnd)
{
    int tmp = frst;
    frst = scnd;
    scnd = tmp;
}//swapval

void swapval(char &frst, char &scnd)
{
    char tmp = frst;
    frst = scnd;
    scnd = tmp;
}//swapval

void swapval(double &frst, double &scnd)
{
    double tmp = frst;
    frst = scnd;
    scnd = tmp;
}//swapval

void swapval(string &frst, string &scnd)
{
    string tmp = frst;
    frst = scnd;
    scnd = tmp;
}//swapval
*/

template <typename T>
void swapval(T &frst, T &scnd)
{
    T tmp = frst;
    frst = scnd;
    scnd = tmp;
}//swapval

int main()
{
    int frst_i = 0;
    int scnd_i = 1;
    swapval(frst_i, scnd_i);
    cout << frst_i << " " << scnd_i << endl;

    char frst_c = 'a';
    char scnd_c = 'b';
    swapval(frst_c, scnd_c);
    cout << frst_c << " " << scnd_c << endl;

    double frst_d = 3.14;
    double scnd_d = 2.71;
    swapval(frst_d, scnd_d);
    cout << frst_d << " " << scnd_d << endl;

    string frst_s = "first";
    string scnd_s = "second";
    swapval(frst_s, scnd_s);
    cout << frst_s << " " << scnd_s << endl;

    return 0;
}//main
