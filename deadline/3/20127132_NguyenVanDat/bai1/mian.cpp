#include "Header.h"
int main()
{
	cout << "Bai 1:\n";
	int n, a[1001], b[1001];
	b[0] = 1;
	cout << "Nhap so luong so: ";
	cin >> n;
	while (n < 0 && n > 1000)
	{
		cout << "Nhap sai !\nNhap lai: ";
		cin >> n;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i + 1 << "]: ";
		cin >> a[i];
		while (a[i] < -10000 && a[i] > 10000)
		{
			cout << "Nhap sai !\nNhap lai: ";
			cout << "a[" << i + 1 << "]: ";
			cin >> a[i];
		}
	}
	THKTLT7_1(a, b, n);
	return 0;
}