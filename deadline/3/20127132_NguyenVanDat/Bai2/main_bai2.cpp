#include "Header_bai2.h"
int main()
{
	cout << "Bai 2:\n";
	int n, m, a[1001], T[101][101] = { 0 };
	cout << "Nhap so luong hang: ";
	cin >> n;
	while (n <= 0)
	{
		cout << "Nhap sai !\nNhap lai: ";
		cin >> n;
	}
	cout << "Nhap khoi luong hang: \n";
	for (int i = 1; i <= n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
		while (a[i] < 0 && a[i] > 1000)
		{
			cout << "Nhap sai !\nNhap lai: ";
			cout << "a[" << i << "]: ";
			cin >> a[i];
		}
	}
	cout << "Nhap khoi luong balo: ";
	cin >> m;
	while (m <= 0)
	{
		cout << "Nhap sai !\nNhap lai: ";
		cin >> m;
	}
	THKTLT7_2(n, m, a, T);

	return 0;
}
