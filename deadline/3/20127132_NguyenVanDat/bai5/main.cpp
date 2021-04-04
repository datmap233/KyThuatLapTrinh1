#include"Header.h"
int save_pos[100];
int row, a[100][100];

int main()
{
	cout << "Bai 5:\n";
	cout << "Nhap so dong: ";
	cin >> row;
	while (row <= 1 && row > 1000)
	{
		cout << "Nhap sai !\nNhap lai: ";
		cin >> row;
	}
	int j = row;
	int col = j;
	for (int i = 1; i <= row; i++)
	{
		for (int k = j, count = 1; count <= i; k += 2, count++)
		{
			cout << "a[" << i << "][" << i << "] : ";
			cin >> a[i][k];
			while (a[i][k] < 0 && a[i][k] >= 100)
			{
				cout << "Nhap sai !\nNhap lai: ";
				cout << "a[" << i << "][" << i << "] : ";
				cin >> a[i][k];
			}
		}
		j--;
	}
	THKTLT7_5(row, col, a, save_pos);
}