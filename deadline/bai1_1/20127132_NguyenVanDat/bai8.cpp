#include "Header.h"

void NhapMang(int a[], int &n)
{
	char q[1000];//giá trị sẽ gán cho n
	cout << "\nNhap so luong cac so nguyen: ";
	cin.getline(q, 1000);
	while (check_number(q) == false)
	{
		cout << "Ban nhap sai gia tri !\nNhap lai so luong cac so nguyen: ";
		cin.getline(q, 1000);
	}
	n = convert(q);
	for (int i = 0; i < n; i++)
	{
		char l[100];
		cout << "Nhap a[" << i << "]: ";
		cin.getline(l, 1000);
		while (check_number_bai8(l) == false)
		{
			cout << "Ban nhap sai gia tri !\nNhap lai a[" << i << "]: ";
			cin.getline(l, 1000);
		}
		a[i] = convert(l);
	}
}
void XuatMang(int a[], int n)
{
	if (n == 0)
		return;
	XuatMang(a, n - 1);
	cout << " " << a[n - 1];
}
void XuatMangNguoc(int a[], int n)
{
	if (n == 0)
		return;
	cout << " " << a[n - 1];
	XuatMangNguoc(a, n - 1);
}
int TimMax(int a[], int n)
{
	if (n == 1)
		return a[0];
	int max = TimMax(a, n - 1);
	// max vs a[n-1]
	if (max > a[n - 1])
		return max;
	else
		return a[n - 1];
}
int TimMin(int a[], int n)
{
	if (n == 1)
		return a[0];
	int min = TimMin(a, n - 1);
	// min vs a[n-1]
	if (min < a[n - 1])
		return min;
	else
		return a[n - 1];
}
int sumPositive(int a[], int n)
{
	if (n == -1)
		return 0;
	if (a[n] > 0)
		return sumPositive(a, n - 1) + a[n];
	else
		return sumPositive(a, n - 1);
}
bool check_enven(int a[], int n)
{
	if (n-1 == -1)
		return true;
	if (a[n - 1] % 2 != 0)
		return false;
	else
		return check_enven(a, n - 1);
}