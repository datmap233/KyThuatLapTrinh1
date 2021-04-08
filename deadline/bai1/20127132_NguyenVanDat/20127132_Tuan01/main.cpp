#include "Header.h"
int main()
{
	float n;
	cout << "Nhap n: ";
	cin >> n;
	if (n < 0 || n-(int)n != 0)
	{
		cout << "Ban nhap sai gia tri ! \n";
		return 0;
	}
	
	if (n == 0)
	{
		cout << "Tong cua cac so tu 1 den n : LOI BIEN SO \n";
		cout << "Tong binh phuong cua cac so tu 1 den n : LOI BIEN SO \n";
		cout << "Tong cua cac so tu 1 den 1/n : LOI BIEN SO \n";
		cout << "Tong cua cac so tu 1 den 1/2n : LOI BIEN SO \n";
		cout << "Tong cua cac so tu 1 den 1/(2n+1) la: " << sumPS_start3(n) << endl;
	}
	else
	{
		cout << "Tong cua cac so tu 1 den n la: " << sum(n) << endl;//bài 1
		cout << "Tong binh phuong cua cac so tu 1 den n la: " << sumsqr(n) << endl;//bài 2
		cout << "Tong cua cac so tu 1 den 1/n la: " << sumPS(n) << endl;//bài 3
		cout << "Tong cua cac so tu 1 den 1/2n la: " << sumPS_start2(n) << endl;//bài 4
		cout << "Tong cua cac so tu 1 den 1/(2n+1) la: " << sumPS_start3(n) << endl;//bài 5
	}
	return 0;
}