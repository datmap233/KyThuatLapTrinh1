#include "Header.h"
void parenBit(char a[], char b[], int n, int m, bool x)
{
	if (n >= strlen(a) || (a[n] == ')'))
	{
		b[0] = NULL;
		return;
	}
	else if (a[n] == '(')
		x = 1;
	else if (x == 1)
	{
		b[m] = a[n];
		m += 1;
	}
	return parenBit(a, b, n + 1, m, x);
}