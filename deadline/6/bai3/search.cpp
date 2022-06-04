#include "Header.h"
int Search(node head, int x)
{
    int pos = 0;
    for (node p = head; p != NULL; p = p->next)
    {
        if (p->data == x)
            return pos;
        pos++;
    }
    return -1;
}