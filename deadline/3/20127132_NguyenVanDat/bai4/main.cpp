#include "Header.h"
int n, m, a[101][101];
int save_pos[101][101];
int save_sum[101];
int _max = 0;
int main()
{
	cout << "Bai 4:\n";
	cout << "Nhap so cot: ";
	cin >> m;
	while (m < 1)
	{
		cout << "Nhap sai !\nNhap lai: ";
		cin >> m;
	}
	cout << "Nhap so hang: ";
	cin >> n;
	while (n < 1)
	{
		cout << "Nhap sai !\nNhap lai: ";
		cin >> n;
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			cout << "A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	THKTLT7_4(n, m, a, save_pos, save_sum, _max);
}