#include "Header.h"
int main()
{
    cout << "---Tao danh sach lien ket---\n";
    head = input();

    cout
        << "Sum: " << sum(head);
    int x;
    cout << "\nTim x: ";
    cin >> x;
    if (find_x(head, x) == 1)
        cout << "x co trong danh sach\n";
    else
        cout << "x khong co trong danh sach\n";
    sort(head);
    output(head);
    return 0;
}