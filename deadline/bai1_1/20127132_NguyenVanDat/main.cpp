#include "Header.h"
int main()
{
	char n[1000], x[1000];
	cout << "Nhap n: ";
	cin.getline(n, 1000);
	while(check_number(n) == false)
	{
		cout << "Ban nhap sai gia tri !\nNhap lai: ";
		cin.getline(n, 1000);
	}
	int so_n = convert(n);
	//bai 1
	if (so_n != 0)
	{
		cout << "Ket qua Bai 1 Cau 6 la: " << bai1_cau6(so_n);
		cout << "\nKet qua Bai 1 Cau 7 la: " << bai1_cau7(so_n);
		cout << "\nKet qua Bai 1 Cau 8 la: " << bai1_cau8(so_n);
		cout << "\nKet qua Bai 1 Cau 9 la: " << bai1_cau9(so_n);
		cout << "\nKet qua Bai 1 Cau 11 la: " << bai1_cau11(so_n);
	}
	else
	{
		cout << "Ket qua Bai 1 Cau 6: Loi ket qua";
		cout << "\nKet qua Bai 1 Cau 7: Loi ket qua";
		cout << "\nKet qua Bai 1 Cau 8 la: " << bai1_cau8(so_n);
		cout << "\nKet qua Bai 1 Cau 9: Loi ket qua";
		cout << "\nKet qua Bai 1 Cau 11: Loi ket qua";
	}

	//bai 2
	cout << "\n-----------------------------\n";
	cout << "\nNhap x: ";
	cin.getline(x, 1000);
	while (check_number(x) == false)
	{
		cout << "\nBan nhap sai gia tri !\nNhap lai: ";
		cin.getline(x, 1000);
	}
	int so_x = convert(x);

	cout << "n = " << so_n;
	cout << "\nKet qua Bai 2 Cau 12 la: " << bai2_cau12(so_n, so_x);
	cout << "\nKet qua Bai 2 Cau 13 la: " << bai2_cau13(so_n, so_x);
	cout << "\nKet qua Bai 2 Cau 14 la: " << bai2_cau14(so_n, so_x);
	if (so_n != 0)
	{
		cout << "\nKet qua Bai 2 Cau 15 la: " << bai2_cau15(so_n);
		cout << "\nKet qua Bai 2 Cau 16 la: " << bai2_cau16(so_n, so_x);
		cout << "\nKet qua Bai 2 Cau 17 la: " << bai2_cau17(so_n, so_x);
	}
	else
	{
		cout << "\nKet qua Bai 2 Cau 15 : Loi ket qua";
		cout << "\nKet qua Bai 2 Cau 16 : Loi ket qua";
		cout << "\nKet qua Bai 2 Cau 17 : Loi ket qua";
	}
	cout << "\nKet qua Bai 2 Cau 18 la: " << bai2_cau18(so_n, so_x);
	cout << "\nKet qua Bai 2 Cau 19 la: " << bai2_cau19(so_n, so_x);

	//bai 3
	cout << "\n-----------------------------\n";
	if (so_n == 0)
		cout << "\nKhong co so Fibonacci cua n";
	else if (so_n > 0)
	{
		cout << "\nSo Fibonacci cua n la: ";
		for (int i = 0; i < so_n; i++)
			cout << Fibonacci(i) << " ";
	}
	
	//bai 4
	cout << "\n-----------------------------\n";
	cout << "\nx(n) = " << tinhX(so_n);
	cout << "\ny(n) = " << tinhY(so_n);

	// bai 5
	cout << "\n-----------------------------\n";
	char k[1000];
	cout << "\nNhap k: ";
	cin.getline(k, 1000);
	while (k[0] == 0 || check_number(k) == false)
	{
		cout << "Ban nhap sai gia tri !\nNhap lai: ";
		cin.getline(k, 1000);
	}
	int so_k = convert(k);
	cout << "C(n,k) = " << tinhC(so_n, so_k);

	// bai 6
	cout << "\n-----------------------------\n";
	char s[1000];
	cout << "\nNhap chuoi: ";
	cin.getline(s,1000);
	while (s[0] == NULL)
	{
		cout << "Ban da nhap sai\nNhap lai: ";
		cin.getline(s, 30);
	}
	int m = strlen(s)-1;
	if (isPalindrome(0, m, s) == true)
		cout << "Day la chuoi doi xung";
	else
		cout << "Day khong la chuoi doi xung";

	//bai 7
	cout << "\n-----------------------------\n";
	char t[1000]; //số nguyên sử dụng tính toán
	cout << "\nNhap mot so nguyen: ";
	cin.getline(t, 1000);
	while (check_number(t) == false)
	{
		cout << "Ban nhap sai gia tri !\nNhap lai: ";
		cin.getline(t, 1000);
	}
	int so_t = convert(t);
	cout << "So nguyen co " << count(so_t) << " chu so";
	cout << "\nTong tat ca cac chu so la: " << sum_number(so_t);
	if (tich_soLe(so_t) == 0)
		cout << "So nguyen khong co chu so le";
	else
		cout << "\nTich chu so le la: " << tich_soLe(so_t);
	if (check_chan(so_t))
		cout << "\nDay la so co tat ca chu so la chan";
	else
		cout << "\nDay khong la so co tat ca chu so la chan";
	if (check_le(so_t))
		cout << "\nDay la so co tat ca chu so la le";
	else
		cout << "\nDay khong la so co tat ca chu so la le";

	//bai 8
	cout << "\n-----------------------------\n";
	int a[1000], size;
	NhapMang(a, size);
	cout << "Xuat mang (0->n-1): ";
	XuatMang(a, size);
	cout << "\nXuat mang nguoc (n-1->0): ";
	XuatMangNguoc(a, size);
	cout << "\nSo lon nhat trong mang la: " << TimMax(a, size);
	cout << "\nSo nho nhat trong mang la: " << TimMin(a, size);
	cout << "\nTong cac so duong trong mang la: " << sumPositive(a, size);
	if (check_enven(a, size) == true)
		cout << "\nDay la mang toan so chan ";
	else
		cout << "\nDay khong la mang toan so chan";
	return 0;
}