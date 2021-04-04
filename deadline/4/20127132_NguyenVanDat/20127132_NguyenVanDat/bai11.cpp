#include "Header.h"
void ascending(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				swap_by_ref(a[i], a[j]);
		}
}
void descending(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
				swap_by_ref(a[i], a[j]);
		}
}