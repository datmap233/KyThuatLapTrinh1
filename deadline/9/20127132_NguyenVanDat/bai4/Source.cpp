#include "Header.h"
bool checkPrime(int n, int i)
{
	if (n == 2 || i == 1)
		return 1;
	if (n % i == 0)
		return 0;
	checkPrime(n, i-1);
}
void print(vector<int> a)
{
	for (auto e : a)
		if (checkPrime(e, e - 1))
			cout << e << "\t";
}