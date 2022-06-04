#include "Header.h"
int main()
{
	node head = NULL;
	int data, pos;
	cout << "Hay lua chon:\n";
	cout << "1. Them 1 phan tu o dau\n";
	cout << "2. Them 1 phan tu o cuoi\n";
	cout << "3. Them 1 phan tu o vi tri bat ky\n";
	cout << "4. Xoa 1 phan tu o vi tri bat ky\n";
	cout << "5. Xoa 1 phan tu co gia tri bat ky\n";
	cout << "6. Thoat";
	while (1)
	{
		int choose;
		cout << "\n\nNhap lua chon: ";
		cin >> choose;
		switch (choose)
		{
		case 1:
		{
			cout << "Nhap gia tri: ";
			cin >> data;
			head = addHead(head, data);
			printList(head);
		}; break;
		case 2:
		{
			cout << "Nhap gia tri: ";
			cin >> data;
			head = addLast(head, data);
			printList(head);
		}; break;
		case 3:
		{
			cout << "Nhap gia tri can them: ";
			cin >> data;
			cout << "Nhap vi tri: ";
			cin >> pos;
			head = add_pos(head, data, pos);
			printList(head);
		}; break;
		case 4:
		{
			cout << "Nhap vi tri can xoa: ";
			cin >> pos;
			head = del_pos(head, pos);
			printList(head);
		}; break;
		case 5:
		{
			cout << "Nhap gia tri can xoa: ";
			cin >> data;
			head = del_val(head, data);
			printList(head);
		}; break;
		case 6: return 0;
		default:
			break;
		}
	}
	return 0;
}