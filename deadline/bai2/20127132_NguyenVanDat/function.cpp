#include "Header.h"
void parenBit(char b[], char c[], int n, int m, bool x)
{
	if (b[n] == '(')
		x = 1;
	else if (x == 1)
	{
		m += 1;
		c[m] = b[n];
	}
	else if (b[n] == ')')
	{
		x = 0;
		c[m + 1] == NULL;
		cout << c;
		return;
	}
	else if (n >= strlen(b))
		return;
	return parenBit(b, c, n + 1, m, x);
}