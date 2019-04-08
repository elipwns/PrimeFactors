#include "PrimeFactors.h"
//#include "../Tests/stdafx.h"
#include <iostream>
#include <vector>
using std::cout;
using std::cin;

int main()
{
	int number;
	cout << "Enter a number to find the prime factors: ";
	cin >> number;
	vector<int> factors = PrimeFactors(number);
	int size = static_cast<int>(factors.size());
	cout << "Prime factors of " << number << " are: ";
	for(int i = 0; i < size; i++)
		cout << PrimeFactors(number)[i] << ", ";
	system("PAUSE");
	return 0;
}

