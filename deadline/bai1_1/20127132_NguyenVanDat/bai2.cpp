#include "Header.h"
long double bai2_cau12(int n, int x)
{
	if (x == 0)
		return x;
	else if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else if (n > 1)
		return bai2_cau12(n - 1, x) + pow(x, n);
}
long double bai2_cau13(int n, int x)
{
	if (x == 0)
		return x;
	else if (n == 0)
		return 1;
	else if (n == 1)
		return x*x;
	else if (n > 1)
		return bai2_cau13(n - 1, x) + pow(x, n * 2);
}
long double bai2_cau14(int n, int x)
{
	if (x == 0 || n == 0)
		return x;
	else if (n == 1)
		return x * x *x;
	else if (n > 1)
		return bai2_cau14(n - 1, x) + pow(x, n * 2 +1);
}
long double sum(int n)
{
	if (n == 1 || n == 0)
		return n;
	else if (n > 1)
		return sum(n-1) + n;
}
long double bai2_cau15(int n)
{
	if (n == 1)
		return 1;
	else if (n > 1)
		return bai2_cau15(n - 1) + 1.00 / sum(n);
}
long double bai2_cau16(int n, int x)
{
	if (n == 1 || x == 0)
		return x;
	else if (n > 1)
		return bai2_cau16(n - 1,x) + 1.00 * pow(x,n) / sum(n);
}
long double factorial(int n)
{
	if (n == 1)
		return n;
	return factorial(n - 1) * n;
}
long double bai2_cau17(int n, int x)
{
	if (n == 1 || x == 0)
		return x;
	else if (n > 1)
		return bai2_cau17(n - 1, x) + 1.00 * pow(x, n) / factorial(n);
}
long double bai2_cau18(int n, int x)
{
	if (x == 0)
		return x;
	else if (n == 0)
		return 1;
	else if (n > 0)
		return bai2_cau18(n - 1, x) + 1.00 * pow(x, 2*n) / factorial(2*n);
}
long double bai2_cau19(int n, int x)
{
	if (x == 0)
		return x;
	else if (n == -1)
		return 1;
	else if (n >= 0)
		return bai2_cau19(n - 1, x) + 1.00 * pow(x, 2 * n+1) / factorial(2 * n+1);
}