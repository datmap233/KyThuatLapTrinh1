#include "Header.h"
int main()
{
    cout << "\n==Tao 1 danh sach lien ket==\n";
    cout << "Nhap da thuc 1\n";
    node head = input();
    
    cout << "\n1. Bai 1: Xuat da thuc\n";
    cout << "2. Bai 2: Tinh gia tri bieu thuc\n";
    cout << "3. Bai 3: Cong 2 da thuc\n";
    cout << "4. Bai 4: Nhan 2 da thuc\n";

    int choose;
    cout << "Nhap lua chon: ";
    cin >> choose;

    switch (choose)
    {
    case 1: printList(head); break;
    case 2:
    {
        int x;
        cout << "Nhap x: ";
        cin >> x;
        cout << "Gia tri da thuc tai x la: " << valueX(head, x);
    }; break;
    case 3:
    {
        cout << "Nhap da thuc 2\n";
        node sub = input();
        node p3 = NULL;
        sum(head, sub, p3);
        printList(p3);
    }; break;
    case 4:
    {
        cout << "Nhap da thuc 2\n";
        node sub = input();
        node p3 = NULL;
        multiply(head, sub, p3);
        printList(p3);
    }; break;
    default:
        break;
    }
    
}