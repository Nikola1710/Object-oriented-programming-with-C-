#include <iostream>

using namespace std;

int fib(int n)
{
    return n <= 2 ? 1 : fib(n - 1) + fib(n - 2);
}//fib

int main()
{
    cout << "n = ";
    int n;
    cin >> n;

    cout << "F(" << n << ") = " << fib(n) << endl;

    return 0;
}//main
