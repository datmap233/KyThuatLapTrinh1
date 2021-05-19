#include "Header.h"

int main()
{
	vector<int> v1;
	vector_v1(v1);
	map<string, int> food;
	cout << "\nHay lua chon :\n";
	cout << "1. Nhap xuat mang\n";
	cout << "2. Sao chep vector\n";
	cout << "3. Chen vao giua vector\n";
	cout << "4. Nhap du lieu cho food (map)\n";
	cout << "5. Exit\n";
	int choose;
	while (1)
	{
		cout << "\nNhap lua chon: ";
		cin >> choose;
		switch (choose)
		{
		case 1:
		{
			double numbers[10];
			_array(numbers);
			cout << endl;
		}; break;
		case 2:
		{
			vector<int> v2(v1.size());
			vector_v2(v1, v2);
			cout << endl;
		}; break;
		case 3:
		{
			int x;
			cout << "Nhap gia tri muon them vao giua: ";
			cin >> x;
			_insert(x, v1);
			cout << endl;
		}; break;
		case 4:
		{
			_map(food);
			cout << endl;
		}
		case 5: return 0;
		default:
			break;
		}
	}
	return 0;
}