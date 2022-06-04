#include "Header.h"
node append(node head, node sub)
{
	node p1 = head, p2 = sub;
	while (p1->next != NULL)
		p1 = p1->next;
	p1->next = p2;
	return head;
}