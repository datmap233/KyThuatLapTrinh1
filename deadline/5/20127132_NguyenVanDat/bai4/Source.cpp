#include "Header.h"
void group(int a[], int b[], int c[], int n, int m)
{
	for (int i = 1, j = 1; i <= n; i++, j++)
		*(c + i) = *(a + j);
	for (int i = n + 1, j = 1; i <= n + m; i++, j++)
		*(c + i) = *(b + j);
}