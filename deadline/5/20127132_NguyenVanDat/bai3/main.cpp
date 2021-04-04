#include "Header.h"
int main()
{
	int n, k;
	cout << "Nhap so luong so nguyen: ";
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
	cout << "Sau khi xoa so nguyen to: ";
	_delete_x(a, n);
	for (int i = 1; i <= n; i++)
		cout << *(a + i) << "\t";
}