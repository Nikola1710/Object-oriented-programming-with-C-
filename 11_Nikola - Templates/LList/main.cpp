#include <iostream>

using namespace std;

#include "LList.h"

int main()
{
    LList<int> llist;

    for (int i = 0; i < 10; i++)
    {
        llist.pushBack(i);
    }

    for (
        LList<int>::Iterator pos = llist.begin();
        pos != llist.end();
        pos.next()
        )
    {
        cout << pos.get() << " ";
    }
    cout << endl;

    return 0;
}//main
