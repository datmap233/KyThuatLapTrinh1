#include "Header.h"
node delHead(node head)
{
	if (head == NULL)
		cout << "Khong co gi de xoa !";
	else
		head = head->next;
	return head;
}
node delLast(node head)
{
	if (head == NULL)
		head = delHead(head);
	else
	{
		node p = head;
		while (p->next->next != NULL)
			p = p->next;
		p->next = p->next->next;
	}
	return head;
}
node del_pos(node head, int pos)
{
	if (head == NULL || pos == 0 || head->next == NULL)
		head = delHead(head);
	else
	{
		int k = 0;
		node p = head;
		while (k != pos && p->next->next != NULL)
		{
			k++;
			p = p->next;
		}
		if (k != pos)
			head = delLast(head);
		else
			p->next = p->next->next;
		return head;
	}
}
node destroy(node head)
{
	node p = head;
	while (p != NULL)
		p = p->next;
	return p;
}