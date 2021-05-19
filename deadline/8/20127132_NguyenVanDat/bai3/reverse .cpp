#include "Header.h"
node reverse(node head)
{
	node p = head;
	node q = NULL;
	while (p != NULL)
	{
		q = addHead(q, p->data);
		p = p->next;
	}
	return q;
}