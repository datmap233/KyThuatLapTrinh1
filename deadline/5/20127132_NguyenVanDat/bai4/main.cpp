#include "Header.h"
int main()
{
	int n, m;
	cout << "Nhap so luong so nguyen mang a: ";
	cin >> n;
	while (n <= 0)
	{
		cout << "Nhap lai: ";
		cin >> n;
	}
	int* a = new int[n];
	for (int i = 1; i <= n; i++)
	{
		cout << "a[" << i << "] :";
		cin >> *(a + i);
		while (*(a + i) <= 0)
		{
			cout << "Nhap lai: ";
			cout << "a[" << i << "] :";
			cin >> *(a + i);
		}
	}
	cout << "Nhap so luong so nguyen mang b: ";
	cin >> m;
	while (m <= 0)
	{
		cout << "Nhap lai: ";
		cin >> m;
	}
	
	int* b = new int[m];
	for (int i = 1; i <= m; i++)
	{
		cout << "b[" << i << "] :";
		cin >> *(b + i);
		while (*(b + i) <= 0)
		{
			cout << "Nhap lai: ";
			cout << "b[" << i << "] :";
			cin >> *(b + i);
		}
	}
	int* c = new int[n + m];
	group(a, b, c, n, m);
	for (int i = 1; i <= n + m; i++)
		cout << *(c + i) << "\t";
}