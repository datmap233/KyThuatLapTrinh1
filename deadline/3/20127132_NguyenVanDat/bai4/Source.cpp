#include "Header.h"
void THKTLT7_4(int n, int m, int a[][101], int save_pos[][101], int save_sum[], int max)
{
	for (int k = 1; k <= n; k++)
	{
		int i = k, j = m, sum = a[i][j];
		int p = 2;
		save_pos[k][1] = i;
		for (j; j >= 1;)
		{
			j = j - 1;
			if (j == 0)
				break;
			//max 1 trong 3 vi tri
			if (i == 1)
			{
				if (a[i + 1][j] > a[i - 1][j] && a[i + 1][j] > a[i][j])
					i = i + 1;
			}
			else if (i == n)
			{
				if (a[i - 1][j] > a[i][j] && a[i - 1][j] > a[i + 1][j])
					i = i - 1;
			}
			else
			{
				if (a[i - 1][j] > a[i][j] && a[i - 1][j] > a[i + 1][j])
					i = i - 1;
				else if (a[i + 1][j] > a[i - 1][j] && a[i + 1][j] > a[i][j])
					i = i + 1;
			}
			save_pos[k][p] = i;
			sum += a[i][j];
			p++;
		}
		save_sum[k] = sum;
		if (sum > max)
			max = sum;
	}

	cout << "Tong lon nhat la : " << max << endl;
	// tìm pos của max trong sum
	for (int i = n; i >=1; i--)
	{
		if (save_sum[i] == max)
		{
			for (int j = 1, k = n; j <= m && k >= 1; j++, k--)
				cout << "A[" << k << "][" << save_pos[i][j] << "]   ";
		}
	}
}