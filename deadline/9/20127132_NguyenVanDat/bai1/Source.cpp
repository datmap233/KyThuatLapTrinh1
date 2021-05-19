#include "Header.h"

void _array(double numbers[])
{
	cout << "Array: ";
	double p = 1;
	for (int i = 0; i < 10; i++)
		numbers[i] = p++;
	for (int i = 0; i < 10; i++)
		cout << numbers[i] << "\t";
}
void vector_v1(vector<int> &v1)
{
	//vector<int> a;
	cout << "Vector v1: ";
	for (int i = 1; i <= 5; i++)
		v1.push_back(i * 10);
	for (auto e : v1)
		cout << e << "\t";
}
void vector_v2(vector<int> &v1, vector<int> &v2)
{
	cout << "Vector v2: ";
	copy(v1.begin(), v1.begin() + v1.size(), v2.begin());
	for (auto e : v2)
		cout << e << "\t";
}
void _insert(int x, vector<int>& v1)
{
	cout << "Vector: ";
	int m = v1.size();
	int n = v1.size() / 2;
	for (int i = m - 1; i > n; i--) // 1 2 3 4
	{
		if (i == m - 1)
			v1.push_back(v1[i]);
		else
			v1[i] = v1[i - 1];
	}
	v1[n] = x;
	for (auto e : v1)
		cout << e << "\t";
}
void _map(map<string, int> &food)
{
	int x, n;
	string y;
	cout << "Nhap so luong food muon them: ";
	cin >> n;
	while (n>0)
	{
		cout << "Nhap ten thuc pham: ";
		cin.ignore();
		getline(cin, y);
		cout << "Nhap gia tri: ";
		cin >> x;
		food[y] = x;
		if (n != 1) cout << endl;
		n--;
	}
	for (auto e : food)
		cout << endl << e.first << ": " << e.second;
}