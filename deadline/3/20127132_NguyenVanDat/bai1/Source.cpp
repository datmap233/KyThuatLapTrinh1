#include "Header.h"
void THKTLT7_1(int a[], int b[], int n)
{
	int lmax;
	for (int i = 1; i < n; i++)
	{
		lmax = 0;
		for (int j = i - 1; j >= 0; j--)
		{
			if (a[i] >= a[j])
			{
				if (b[j] > lmax)
					lmax = b[j];
			}
		}
		b[i] = lmax + 1;
	}
	int count = 1;
	for (int i = 0; i < n; i++)
	{
		if (b[i] == b[i + 1])
			continue;
		else if (b[i] == count)
		{
			cout << a[i] << "\t";
			count++;
		}
	}
	cout << endl;
}