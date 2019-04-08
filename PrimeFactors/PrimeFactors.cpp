#include "PrimeFactors.h"

vector<int> PrimeFactors(int n)
{
	vector<int> factors;
	int divisor = 2;
	while (n > 1)
	{
		while (n % divisor == 0)
		{
			factors.push_back(divisor);
			n /= divisor;
		}
		divisor++;
	}
	//if (n > 1)
	//	factors.push_back(n);
		
	return factors;
}