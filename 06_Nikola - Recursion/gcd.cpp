#include <iostream>

using namespace std;

unsigned int gcd(unsigned int a, unsigned int b)
{
    return b ? gcd(b, a % b) : a;
}//gcd

unsigned int gcdi(unsigned int a, unsigned int b)
{
    while (b)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }

    return a;
}//gcdi

int main()
{
    cout << "a = ";
    unsigned int a;
    cin >> a;
    cout << "b = ";
    unsigned int b;
    cin >> b;

    cout << gcd(a, b) << endl;

    return 0;
}//main
