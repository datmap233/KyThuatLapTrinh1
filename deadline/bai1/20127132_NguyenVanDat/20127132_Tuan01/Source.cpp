#include "Header.h"
double sum(float n)//b�i 1
{
	if (n == 1)
		return 1;
	else if (n > 1)
		return sum(n-1)+n;
}
double sumsqr(float n)//b�i 2
{
	if (n == 1)
		return 1;
	else if (n > 1)
		return sumsqr(n - 1) + n*n;
}
float sumPS(float n)//b�i 3
{
	if (n == 1)
		return 1;
	else if (n > 1)
		return sumPS(n - 1) + 1.00/n;
}
float sumPS_start2(float n)//b�i 4
{
	if (n == 1)
		return 0.5;
	else if (n > 1)
		return sumPS_start2(n - 1) + 1.00 / (2 * n);
}
double sumPS_start3(float n)//b�i 5
{
	if (n == 0)
		return 1;
	else if (n > 0)
		return sumPS_start3(n - 1) + 1.00 / (2*n+1);
}