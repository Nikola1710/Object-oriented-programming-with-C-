#include <iostream>
#include <stdexcept>

using namespace std;

#include "vector.h"

int main()
{
    try
    {
        //Vector v1(-4);
        Vector v2(3);
    }
    catch (logic_error &excpt)
    {
        cout << excpt.what() << endl;
    }
    catch (runtime_error &excpt)
    {
        cout << excpt.what() << endl;
    }

    return 0;
}//main
