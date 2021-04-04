#include "Header.h"
void THKTLT7_5(int n, int m, int a[][100], int save_pos[])
{
	//bắt đầu từ giữa
	int i = 1, j = n;
	int sum = a[i][j];
	save_pos[i] = j;

	for (; i <= m;)
	{
		//max 1 trong 2 vi tri
		if (a[i + 1][j + 1] > a[i + 1][j - 1])
			j = j + 1;
		else
			j = j - 1;
		i = i + 1;
		save_pos[i] = j;
		sum += a[i][j];
	}
	cout << "Duong di: ";
	for (int f = 1; f <= n; f++)
		cout << "a[" << f << "][" << save_pos[f] << "]  ";
	cout << "co tong lon nhat la: " << sum << endl;
}