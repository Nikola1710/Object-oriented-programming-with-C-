#include <iostream>

using namespace std;

#include "Pair.h"

int main()
{
    Pair<int, double> pair(42, 3.14);

    cout << pair.getFrst() << " " << pair.getScnd() << endl;

    return 0;
}//main
