#include "Header.h"
int length(node head)
{
	int count = 0;
	for (node p = head; p != NULL; p = p->next)
		count++;
	return count;
}
node add_pos(node head, int x, int pos)
{
	node p = head;
	int k = 1;
	if (pos == 0)
		head = addHead(head, x);
	else
	{
		while (k != pos && p != NULL)
		{
			p = p->next;
			k++;
		}
		if (pos != k)
			head = addLast(head, x);
		else
		{
			node tmp = createNode(x);
			tmp->next = p->next;
			p->next = tmp;
		}
	}
	return head;
}