#include "Header.h"
int bunnyEars(int n)
{
	if (n == 0)
		return 0;
	else if (n % 2 != 0)
		return bunnyEars(n - 1) + 2;
	else if (n % 2 == 0)
		return bunnyEars(n - 1) + 3;
}