#include <iostream>

using namespace std;

void stripnl()
{
    char ch = cin.get();
    do
    {
        cout << (ch == '\n' ? ' ' : ch);
        ch = cin.get();
    }
    while (!cin.fail());
}//stripnl

int main()
{
    stripnl();

    return 0;
}//main
