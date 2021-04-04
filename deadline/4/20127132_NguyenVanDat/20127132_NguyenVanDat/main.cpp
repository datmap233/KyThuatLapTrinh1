#include "Header.h"
int main()
{
	int choose;
	cout << "Chon 1 trong cac lua chon sau:\n";
	cout << "1. Bai 2:\n";
	cout << "2. Bai 3:\n";
	cout << "3. Bai 6:\n";
	cout << "4. Bai 7:\n";
	cout << "5. Bai 8:\n";
	cout << "6. Bai 10: \n";
	cout << "7. Bai 11: \n";
	cout << "8. Bai 13: \n";
	cin >> choose;
	switch (choose)
	{
	case 1:
	{
		int n = 10;
		double* a;
		a = new double[n] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		bai2(a, n);
	}; break;
	case 2:
	{
		int n, * a;
		cout << "Nhap so luong so nguyen: ";
		cin >> n;
		a = new int[n];
		cout << "Nhap cac so nguyen:\n";
		for (int i = 0; i < n; i++)
		{
			cout << "a[" << i << "] = ";
			cin >> *(a + i);
		}
		cout << "Max: " << bai3(a, n);
	}; break;
	case 3:
	{
		int n, * a;
		cout << "Nhap so luong so nguyen: ";
		cin >> n;
		a = new int[n];
		cout << "Nhap cac so nguyen:\n";
		for (int i = 0; i < n; i++)
		{
			cout << "a[" << i << "] = ";
			cin >> *(a + i);
		}
		bai6(a, n);
	}; break;
	case 4:
	{
		char ch[1000], *str;
		cout << "Nhap mot chuoi: ";
		cin.ignore();
		cin.getline(ch, 1000);
		str = ch;
		cout << "Ki tu dau tien sau khoang trong la: ";
		bai7(str);
	}; break;
	case 5:
	{
		int a, b, c;
		cout << "Nhap 2 so nguyen: ";
		cin >> a;
		cin >> b;
		int* pa = &a;
		int* pb = &b;
		cout << "1. Swap by pointer ";
		cout << "\n2. Swap by reference ";
		cout << "\n3. Swap pointer by reference \n";
		cin >> c;
		switch (c)
		{
		case 1: swap_by_ptr(&a, &b); break;
		case 2: swap_by_ref(a, b); break;
		case 3: swap_ptr_by_ref(pa, pb); break;
		default:
			break;
		}
		cout << "a = " << a << ", b = " << b;

	}; break;
	case 6:
	{
		hoten Sinhvien;
		input_output();
	}; break;
	case 7:
	{
		int* a, n, choose;
		cout << "Nhap so luong so nguyen: ";
		cin >> n;
		a = new int[n];
		for (int i = 0; i < n; i++)
			cin >> *(a + i);
		cout << "Nhap yeu cau:\n1. Ascending\n2. Descending\n";
		cin >> choose;
		while (choose < 1 && choose > 2)
		{
			cout << "Nhap lai: ";
			cin >> choose;
		}
		if (choose == 1)
			ascending(a, n);
		else
			descending(a, n);
		for (int i = 0; i < n; i++)
			cout << *(a + i) << "\t";
	}; break;
	case 8:
	{
		challenge();
	}; break;
	default:
		break;
	}
}