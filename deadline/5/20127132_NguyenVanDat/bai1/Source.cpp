#include "Header.h"
void _delete(int* a, int &n, int k)
{
	for (int i = k; i < n; i++)
		*(a + i) = *(a + i + 1);
	n--;
}