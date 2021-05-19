#include "Header.h"
int main()
{
    cout << "\n==Tao 1 danh sach lien ket==\n";
    node head = input();
    Traverser(head);
    int choose;
    cout << "\n1. Bai 1\n";
    cout << "2. Bai 2\n";
    cout << "3. Bai 3\n";
    cout << "Nhap lua chon: ";
    cin >> choose;
    switch (choose)
    {
    case 1: cout << "Sum: " << sum(head); break;
    case 2:
    {
        int x;
        cout << "\nNhap x: ";
        cin >> x;
        cout << findX(head, x) << endl;
    }; break;
    case 3:
    {
        sort(head);
        Traverser(head);
    }; break;
    default:
        break;
    }
    


    


    
}