#include <iostream>

using namespace std;

/*
long long fact(unsigned int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}//fact
*/

long long fact(unsigned int n)
{
    return n > 1 ? n * fact(n - 1) : 1;
}//fact

int main()
{
    cout << "n = ";
    unsigned int n;
    cin >> n;

    cout << n << "! = " << fact(n) << endl;

    for (int i = 1; fact(i) > 0; i++)
    {
        cout << i << ", ";
    }

    cout << endl;

    return 0;
}//main
