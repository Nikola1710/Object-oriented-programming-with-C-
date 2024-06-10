#include <iostream>

using namespace std;

#include "SieveEra.h"

int main()
{
    SieveEra sieve("prime.txt");

    cout << "> ";
    int n;
    cin >> n;

    sieve.generate(n);
    
    return 0;
}//main
