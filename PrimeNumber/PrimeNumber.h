#ifndef PRIME_H
#define PRIME_H

#include <iostream>
using namespace std;

class PrimeNumber {

private:
	int num;

public:
	PrimeNumber();
	PrimeNumber(int num);

	int getPrimeNumber()const;

	void setPrimeNumber(int num);

	void Print();

	void myMethod() {
		int num, x, count = 0;
		cout << "Please enter the number to check if it's prime or not : " << endl;
		cin >> num;
		if (num == 0)
		{
			cout << "\n" << num << " This number is not prime";
			exit(1);
		}
		else {
			for (x = 2; x < num; x++)
				if (num % x == 0)
					count++;
		}
		if (count > 1)
			cout << "\n" << num << " This number is not prime.";
		else
			for (int m = 2; m < num; m++)      //implementing for loop to find out prime numbers
				for (int n = 2; n * n <= m; n++)
				{
					if (m % n == 0)
						break;
					else if (n + 1 > sqrt(m)) {
						cout << m << endl;
					}
					cout << num;
				}
	};
};

#endif // !PRIME_H
