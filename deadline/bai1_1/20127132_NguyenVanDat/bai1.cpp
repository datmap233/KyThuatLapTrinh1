#include "Header.h"
//Bai 1
long double bai1_cau6(int n)
{
	if (n == 1)
		return 0.5;
	else if (n > 1)
		return bai1_cau6(n - 1) + 1.00 / (n*(n + 1));
}
long double bai1_cau7(int n)
{
	if (n == 1)
		return 0.5;
	else if (n > 1)
		return bai1_cau7(n - 1) + 1.00 *n / (n + 1);
}
long double bai1_cau8(int n)
{
	if (n == 0)
		return 0.5;
	else if (n > 0)
		return bai1_cau8(n - 1) + 1.00 *(2*n+1) / (2*n + 2);
}
long double bai1_cau9(int n)
{
	if (n == 1)
		return 1;
	else if (n > 1)
		return bai1_cau9(n - 1) * n;
}
long double bai1_cau11(int n)
{
	if (n == 1)
		return 1;
	else if (n > 1)
		return bai1_cau11 (n-1) + bai1_cau9(n);
}