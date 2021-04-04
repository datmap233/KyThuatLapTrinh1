#include "Header.h"
void bai2(double* a, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout.precision(1);
		cout << fixed << a[i] << "\t";
	}
}