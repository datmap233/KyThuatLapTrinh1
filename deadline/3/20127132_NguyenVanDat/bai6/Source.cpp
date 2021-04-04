#include "Header.h"
void _delete (int i, int b[], int &m)
{
	for (int j = i + 1; j <= m; j++)
		b[j - 1] = b[j];
	m--;
}
int check_trung(int a, int c[], int m)
{
	for (int j = 1; j <= m; j++)
		if (a == c[j])
			return j;
	return 0;
}
void THKTLT7_6(int m, int n, int a[], int b[], int c[])
{
	int k = 0;
	for (int i = 1; i <= m; i++)
	{
		if (check_trung(a[i], b, n) != 0)
		{
			k++;
			c[k] = a[i];
			_delete(i, a, m);
			_delete(check_trung(a[i], b, n), b, n);
			i--;
		}
	}
	if (k == 0)
		cout << "A va B khong co con chung !\n";
	else
	{
		cout << "Con chung A va B la: ";
		for (int i = 1; i <= k; i++)
			cout << c[i] << "  ";
	}
	cout << endl;
}