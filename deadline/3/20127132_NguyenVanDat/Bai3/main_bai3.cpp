#include "Header_bai3.h"
int main()
{
	cout << "Bai 3:\n";
	int n, m, a[101], c[101], T_a[101][101] = { 0 }, T_c[101][101] = { 0 };
	cout << "Nhap so luong hang: ";
	cin >> n;
	while (n <= 0)
	{
		cout << "Nhap sai !\nNhap lai: ";
		cin >> n;
	}
	cout << "Nhap khoi luong hang:\n";
	for (int i = 1; i <= n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
		while (a[i] < 0 && a[i] > 100)
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
	cout << "Nhap gia tri hang:\n";
	for (int i = 1; i <= n; i++)
	{
		cout << "c[" << i << "]: ";
		cin >> c[i];
		while (c[i] < 0 && c[i] > 100)
		{
			cout << "Nhap sai !\nNhap lai: ";
			cout << "c[" << i << "]: ";
			cin >> c[i];
		}
	}
	THKTLT7_3(n, m, a, c, T_a, T_c);
		return 0;
}
