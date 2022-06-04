#include "Header.h"
node createNode(int data)
{
	node tmp = new linkedList;
	tmp->data = data;
	return tmp;
}
int length(node head)
{
	node tmp = head;
	int count = 1;
	if (head == NULL)
		return 0;
	else
	{
		tmp = tmp->next;
		while (tmp != head)
		{
			count++;
			tmp = tmp->next;
		}
	}
	return count;
}
node addHead(node head, int data)
{
	node tmp = createNode(data);
	if (head == NULL)
	{
		head = tmp;
		head->next = head;
	}
	else
	{
		tmp->next = head->next;
		head->next = tmp;
	}
	return head;
}
node addLast(node head, int data)
{
	node tmp = createNode(data);
	if (head == NULL)
		head = addHead(head, data);
	else
	{
		tmp->next = head->next;
		head->next = tmp;
		head = tmp;
	}
	return head;
}
node add_pos(node head, int data, int pos)
{
	int size = length(head);
	int k = 1;
	if (pos <1 || pos>size + 1)
		cout << "Khong co gi de xoa";
	else
	{
		if (head == NULL)
			return addHead(head, data);
		node tmp = createNode(data);
		node p = head;
		while (k != pos)
		{
			p = p->next;
			k++;
		}
		tmp->next = p->next;
		p->next = tmp;
		if (pos == size + 1)
			head = tmp;
	}
	return head;
}
node del_val(node head, int data)
{
	node curr = head, prev;
	if (head == NULL)
		return head;
	else if (head == head->next)
	{
		if (head->data == data)
		{
			head = NULL;
			free(curr);
		}
		return head;
	}
	do
	{
		prev = curr;
		curr = curr->next;
		if (curr->data == data)
		{
			prev->next = curr->next;
			if (curr == head)
				head = prev;
			free(curr);
			curr = prev->next;
		}
	} 	while (curr != head);
	return head;
}
node del_pos(node head, int pos)
{
	node p, prev = head;
	int size = length(head);
	int k = 1;
	if (pos < 1 || pos > size)
		cout << "\nKhong co gi de xoa\n";
	else if (size == 1)
	{
		head = NULL;
		free(head);
	}
	else
	{
		p = head->next;
		while (k != pos)
		{
			prev = p;
			p = p->next;
			k++;
		}
		prev->next = p->next;
		if (p == head)
			head = prev;
		free(p);
	}
	return head;
}
void printList(node head) {
	if (head == NULL)
	{
		cout << "Khong co phan tu nao trong danh sach !";
		return;
	}
	node p = head;
	while (1)
	{
		p = p->next;
		cout << p->data << " -> ";
		if (p == head)
			break;
	}
}