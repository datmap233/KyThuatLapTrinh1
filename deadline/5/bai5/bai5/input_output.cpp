#include "Header.h"
node input()
{
    int n, x;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    while (n < 1)
    {
        cout << "Nhap lai: ";
        cin >> n;
    }
    cout << "Nhap gia tri can them: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        head = addLast(head, x);
    }
    return head;
}
void output(node head)
{
    for (node p = head; p != NULL; p = p->next)
        cout << p->data << "\t";
}