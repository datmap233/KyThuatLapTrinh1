#include "Header.h"
long double tinhX(int n)
{
	if (n == 0)
		return 1;
	else
		return tinhX(n - 1) + tinhY(n - 1);
}
long double tinhY(int n)
{
	if (n == 0)
		return 0;
	else
		return 3*tinhX(n - 1) + 2*tinhY(n - 1);
}