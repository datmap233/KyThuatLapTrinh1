#include "Header.h"
int main()
{
	int n, k, x;
	cout << "Nhap so luong so nguyen: ";
	cin >> n;
	while (n <= 0)
	{
		cout << "Nhap lai: ";
		cin >> n;
	}
	int* a = new int[n + 1];
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
	cout << "Nhap vi tri muon chen: ";
	cin >> k;
	cout << "Nhap so muon chen: ";
	cin >> x;
	_insert_x(a, n, k, x);
	for (int i = 1; i <= n; i++)
		cout << *(a + i) << "\t";
}