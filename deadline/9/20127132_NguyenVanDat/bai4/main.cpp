#include "Header.h"
int main()
{
	int n;
	cout << "Nhap so nguyen duong: ";
	cin >> n;
	while (n < 1)
	{
		cout << "Nhap lai: ";
		cin >> n;
	}
	vector<int> a;
	for (int i = 2; i <= n; i++)
		a.push_back(i);
	print(a);
}