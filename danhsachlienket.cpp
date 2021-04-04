#include <iostream>
using namespace std;
typedef struct linkList
{
    int data;
    struct linkList *next;
};
typedef struct linkList *node;
node head = NULL;
node createNode(int x)
{
    node tmp = new linkList;
    tmp->next = NULL;
    tmp->data = x;
    return tmp;
}
node addFirst(node head, int x)
{
    node tmp = createNode(x);
    if (head == NULL)
        head = tmp;
    else
    {
        tmp->next = head;
        head = tmp;
    }
    return head;
}
node addLast(node head, int x)
{
    node tmp = createNode(x);
    node p = head;
    if (head == NULL)
        head = addFirst(head, x);
    else
    {
        while (p->next != NULL)
            p = p->next;
        p->next = tmp;
    }
    return head;
}
int sum(node head)
{
    node p = head;
    int sum = 0;
    while (p != NULL)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}
int find_x(node head, int x)
{
    node p = head;
    while (p != NULL)
    {
        if (p->data == x)
            return 1;
        p = p->next;
    }
    return 0;
}
void sort(node head)
{
    node pHead = head;
    
    while (pHead->next != NULL)
    {
        node pNext = pHead->next;
        while (pNext != NULL)
        {
            if (pHead->data > pNext->data)
            {
                int tmp = pHead->data;
                pHead->data = pNext->data;
                pNext->data = tmp;
            }
            pNext = pNext->next;
        }
        pHead = pHead->next;
    }
}
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