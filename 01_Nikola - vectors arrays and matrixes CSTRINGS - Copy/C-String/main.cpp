#include <iostream>

using namespace std;

int main()
{
	int b = 3;
	int& c = b;
	int* ptr = &b;
	cout << c;
	cout << ptr;
	cout << *ptr;

	return 0;
}