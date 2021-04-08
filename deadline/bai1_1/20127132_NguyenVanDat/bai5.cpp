#include "Header.h"
long double tinhC(int n, int k)
{
	if (k == 1)
		return n;
	else if (n = k)
		return 1;
	else if (k > 1 && k < n)
		return tinhC(n - 1, k) + tinhC(n - 1, k - 1);
}