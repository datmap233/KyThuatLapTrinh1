#include"Header_bai3.h"
int check_0_cong(int n, int m, int T[][101])
{
	for (int i = n; i >= 2; i--)
	{
		if (T[i][m] == T[i - 1][m])
			return i - 1;
	}
	return -1;
}
void THKTLT7_3(int n, int m, int a[], int c[], int T_a[][101], int T_c[][101])
{
	int max = 0;
	//tạo bảng khối lượng để có điều kiện xét tổng c
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (a[i] > j)
			{
				T_a[i][j] = T_a[i - 1][j];
				T_c[i][j] = T_c[i - 1][j];
			}
			else
			{
				int f = T_a[i - 1][j] + a[i];
				if (f <= m && T_a[i - 1][j] != -1)
					T_a[i][j] = f;
				else
				{
					T_a[i][j] = -1;
					T_c[i][j] = -1;
				}
			}
			//giá trị
			if (T_a[i][j] > 0 && T_a[i][j] != T_a[i-1][j])
			{
				T_c[i][j] = T_c[i - 1][j] + c[i];
				if (T_c[i][j] > max)
					max = T_c[i][j];
			}
		}
	}
	cout << "Nhung mon hang co the bo vao balo co gia tri lon nhat la: " << max << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (T_c[i][j] == max)
			{
				for (int k = 1; k <= i; k++)
				{
					if (k == 1 && T_a[k][j] != 0)
					{
						cout << k << "  ";
						continue;
					}
					else if (T_a[k][j] == T_a[k + 1][j] || T_a[k][j] == 0)
						continue;
					else if (T_a[k][j] == T_a[k - 1][j] && k == i)
						continue;
					cout << k << "  ";
				}
				cout << endl;
				break;
			}
		}
	}
}