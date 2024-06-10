#include <iostream>

using namespace std;

int trinag(unsigned int n)
{
    cout << "n = " << n << endl;
    return n > 1 ? n + trinag(n - 1) : 1;
}//trinag

int main()
{
    cout << "n = ";
    unsigned int n;
    cin >> n;

    cout << "trinag(" << n << ") = " << trinag(n) 
        << endl;

    return 0;
}//main
