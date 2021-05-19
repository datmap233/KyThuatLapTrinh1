#include "Header.h"
int main()
{
	node head = input();
	int choose;
	cout << "\nBan hay lua chon:\n";
	cout << "1. Xuat gia tri trong danh sach\n";
	cout << "2. Xoa tat ca cac phan tu\n";
	cout << "Nhap lua chon: ";
	cin >> choose;
	switch (choose)
	{
	case 1: traverses(head); break;
	case 2:
	{
		head = clearNode(head);
		if (head == NULL)
			cout << "Danh sach khong con gia tri nao";
		else traverses(head);
	}; break;
	default:
		break;
	}
}