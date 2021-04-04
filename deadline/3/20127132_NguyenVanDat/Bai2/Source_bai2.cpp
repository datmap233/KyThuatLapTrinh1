#include"Header_bai2.h"
int check_0_cong (int n, int m, int T[][101])
{
	for (int i = n; i >= 2; i--)
	{
		if (T[i][m] == T[i - 1][m])
			return i;
	}
	return -1;
}
void THKTLT7_2(int n, int m, int a[], int T[][101])
{
	int max_w = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (a[i] > j)
				T[i][j] = T[i - 1][j];
			else
			{
				int f = T[i - 1][j] + a[i];
				if (f <= m && T[i - 1][j] != -1)
					T[i][j] = f;
				else
					T[i][j] = -1;
			}
			if (T[i][j] > max_w && T[i][j] <= m)
				max_w = T[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (T[i][j] == max_w)
			{
				for (int k = 1; k <= i; k++)
				{
					if (k == check_0_cong(i, j, T))
						continue;
					cout << k << "  ";
				}
				cout << endl;
				break;
			}
		}
	}
};