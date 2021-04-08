#include "Header.h"
int main()
{
	char choose;
	cout << "Ban chon 1 trong cac lua chon duoi day: ";
	cout << "\n1. Dem so luong tai tho";
	cout << "\n2. Dem so luong 'hi' xuat hien trong chuoi khong co 'x' truoc do";
	cout << "\n3. Dem so luong blocks cua tam giac" << endl;
	choose = getchar();
	switch (choose)
	{
	case '1':
	{
		int n;
		cout << "Nhap so luong tho: ";
		cin >> n;
		while (n < 0)
		{
			cout << "Nhap da nhap sai\nNhap lai: ";
			cin >> n;
		}
		cout << "So luong tai tho la: " << bunnyEars(n) << endl;
	}; break;
	case '2':
	{
		char a[1000];
		cout << "Nhap chuoi co chua 'hi': ";
		cin.ignore();
		cin.get(a, 1000, '\n');
		cout << "So luong 'hi' xuat hien trong chuoi khong co 'x' truoc do la: " << countHi2(a);
	}; break;
	case '3':
	{
		int m;
		cout << "Nhap so luong blocks: ";
		cin >> m;
		cout << "Tong so luong blocks cua tam giac la: " << triangle(m) << endl;
	}; break;
	default:
	{
		cout << "Ban da nhap sai\n";
		break;
	}
	}

	return 0;
}