#include "Header.h"
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