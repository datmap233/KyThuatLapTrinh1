#pragma once
#include "Header.h"
int main()
{
	node head = input();
	printList(head);
	int choose;
	cout << "\n1. Them 1 phan tu o vi tri dau\n";
	cout << "2. Them 1 phan tu o vi tri cuoi\n";
	cout << "3. Them 1 phan tu o vi tri bat ki\n";
	cout << "4. Noi 2 danh sach\n";
	cout << "5. Xoa 1 phan tu o vi tri dau\n";
	cout << "6. Xoa 1 phan tu o vi tri cuoi\n";
	cout << "7. Xoa 1 phan tu o vi tri bat ki\n";
	cout << "8. Xoa tat cac phan tu\n";
	cout << "9. Tim phan tu x\n";
	cout << "10. Dao nguoc danh sach\n";
	cout << "11. Stop\n";
	while (1)
	{
		cout << "\nHay lua chon: ";
		cin >> choose;
		switch (choose)
		{
		case 1:
		{
			int x;
			cout << "Nhap phan tu can them: ";
			cin >> x;
			head = addHead(head, x);
			cout << "Danh sach sau khi them la: ";
			printList(head);
		}; break;
		case 2:
		{
			int x;
			cout << "Nhap phan tu can them: ";
			cin >> x;
			head = addLast(head, x);
			cout << "Danh sach sau khi them la: ";
			printList(head);
		}; break;
		case 3:
		{
			int x, pos;
			cout << "Nhap phan tu can them: ";
			cin >> x;
			cout << "Nhap vi tri can them: ";
			cin >> pos;
			cout << "Danh sach sau khi them la: ";
			head = add_pos(head, x, pos);
			printList(head);
		}; break;
		case 4:
		{
			node sub = input();
			head = append(head, sub);
			cout << "Danh sach sau khi noi la: ";
			printList(head);
		}
		case 5:
		{
			head = delHead(head);
			printList(head);
		}; break;
		case 6:
		{
			head = delLast(head);
			printList(head);
		}; break;
		case 7:
		{
			int pos;
			cout << "Nhap vi tri can xoa: ";
			cin >> pos;
			cout << "Danh sach sau khi xoa la: ";
			head = del_pos(head, pos);
			printList(head);
		}; break;
		case 8:
		{
			head = destroy(head);
			if (head == NULL)
				cout << "Khong con phan tu nao";
			else
				printList(head);
		}; break;
		case 9:
		{
			int x;
			cout << "Nhap phan tu x: ";
			cin >> x;
			cout << "Phan tu x o vi tri: " << Search(head, x);
		}; break;
		case 10:
		{
			head = reverse(head);
			cout << "Danh sach sau khi dao nguoc la: ";
			printList(head);
		}; break;
		case 11: return 0;
		default:
			break;
		}
	}
}