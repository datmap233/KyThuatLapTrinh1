#include "Header.h" 

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