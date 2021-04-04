#include "Header.h"
void _insert_x (int* a, int& n, int k, int x)
{
	for (int i = n; i >= k; i--)
		*(a + i + 1) = *(a + i);
	n++;
	*(a + k) = x;
}