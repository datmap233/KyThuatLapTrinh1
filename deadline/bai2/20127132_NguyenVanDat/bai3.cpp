#include "Header.h"
int triangle(int n)
{
	if (n == 0)
		return 0;
	else if (n > 0)
		return triangle(n - 1) + n;
}