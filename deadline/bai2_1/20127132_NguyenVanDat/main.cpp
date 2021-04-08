#include "Header.h"
int main()
{
	char choose;
	cout << "Ban chon 1 trong cac lua chon duoi day: ";
	cout << "\n1. Xuat noi dung trong ngoac don\n";
	cout << "2. Tim do dai chuoi dai nhat tu chuoi con nay den chuoi con kia\n";
	cout << "3. Tinh tong trong mang co bang mot so hay khong\n";
	cout << "4. Kiem tra mang co chia thanh 2 phan co gia tri bang nhau hay khong\n";
	cout << "5. Tim so thanh socola lon nhat co the an\n";
	choose = getchar();
	switch (choose)
	{
	case '1':
	{
		char a[1000], b[1000];
		b[0] = NULL;
		cout << "Nhap chuoi co chua ngoac don: ";
		cin.ignore();
		cin.get(a, 1000, '\n');
		cout << "Noi dung trong ngoac don la: ";
		parenBit(a, b, 0, 0, 0);
		cout << b << endl;
	}; break;
	case '2':
	{
		char a[1000], b[1000];
		cout << "Nhap chuoi: ";
		cin.ignore();
		cin.get(a, 1000, '\n');
		cout << "Nhap chuoi con (chuoi co chua cac ki tu lien tiep cua chuoi tren): ";
		cin.ignore();
		cin.get(b, 1000, '\n');
		if (count_string(a, b) == 1)
			cout << "Chuoi con khong lap lai !\n";
		else
			cout << "Chuoi dai nhat tu chuoi con nay den chuoi con kia la: " << count_string(a, b) << endl;
	}; break;
	case '3':
	{
		int nums[1000];
		cout << "Nhap so luong so nguyen trong mang: ";
		int size;
		cin >> size;
		for (int i = 0; i < size; i++)
		{
			cout << "Nhap so nguyen thu " << i + 1 << ": ";
			cin >> nums[i];
		}
		cout << "Nhap so nguyen de kiem tra trong mang co tong nay khong: ";
		int target;
		cin >> target;
		if (groupSum(0, 0, nums, target, size))
			cout << "So vua nhap co the co tong trong mang\n";
		else cout << "So vua nhap khong the co tong trong mang\n";
	}; break;
	case '4':
	{
		int nums[1000];
		cout << "Nhap so luong so nguyen trong mang: ";
		int size;
		cin >> size;
		for (int i = 0; i < size; i++)
		{
			cout << "Nhap so nguyen thu " << i + 1 << ": ";
			cin >> nums[i];
		}
		if (splitArray(0, size - 1, 0, 0, nums, 0, 0))
			cout << "Dung\n";
		else cout << "Sai\n";
	}; break;
	case '5':
	{
		int price, money, wrap;
		cout << "Nhap so tien dang co: ";
		cin >> money;
		cout << "Nhap gia tien moi thanh socola: ";
		cin >> price;
		cout << "Nhap gia tien 1 vo socola: ";
		cin >> wrap;
		int m = money / price;
		cout << "So tien socola lon nhat co the an la: " << helper_method(m, wrap) << endl;
	}; break;
	default:
	{
		cout << "Ban da nhap sai\n";
		break;
	}
	}

	return 0;
}