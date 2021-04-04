#include "Header.h"
bool check_nguyento(int n)
{
	if (n < 2)
		return 0;
	else if (n == 2)
		return 1;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
void _delete_x(int* a, int& n)
{
	for (int i = 1; i < n; i++)
	{
		if (check_nguyento(*(a + i)) == 1)
		{
			for (int j = i; j < n ; j++)
				*(a + j) = *(a + j + 1);
			n--;
		}
	}
}