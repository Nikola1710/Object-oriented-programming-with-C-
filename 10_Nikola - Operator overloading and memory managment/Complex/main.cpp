#include <iostream>

using namespace std;

#include "Complex.h"

int main()
{
    Complex z_frst;
    cin >> z_frst;
    Complex z_scnd;
    cin >> z_scnd;
    Complex z_rslt;
    
    z_rslt = z_frst / z_scnd;

    cout << z_rslt << endl;

    return 0;
}//main
