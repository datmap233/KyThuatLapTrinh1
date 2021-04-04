#include "Header.h"
int m, n, a[10000], b[102], c[102];
int main()
{
	cout << "Bai 6:\n";
	cout << "Nhap so phan tu mang A: ";
	cin >> m;
	while (m <= 0)
	{
		cout << "Nhap sai !\nNhap lai: ";
		cin >> m;
	}
	cout << "Nhap mang A:\n";
	for (int i = 1; i <= m; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> a[i];
	}
	cout << "Nhap so phan tu mang B: "; cin >> n;
	cout << "Nhap mang B:\n";
	for (int i = 1; i <= n; i++)
	{
		cout << "B[" << i << "] = ";
		cin >> b[i];
	}
	THKTLT7_6(m, n, a, b, c);
}