#include "Header.h"
node createNode(int data)
{
	node tmp = new linkedList;
	tmp->data = data;
	tmp->next = NULL;
	return tmp;
}
node init()
{
	node head;
	head = NULL;
	return head;
}
node addHead(node head, int x)
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
	node p;
	if (head == NULL)
		head = addHead(head, x);
	else
	{
		p = head;
		while (p->next != NULL)
			p = p->next;
		p->next = tmp;
	}
	return head;
}
node input()
{
	int x, n;
	node head = init();
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	cout << "Nhap day cac so: ";
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		head = addLast(head, x);
	}
	return head;
}
void printList(node head)
{
	for (node p = head; p != NULL; p = p->next)
		cout << p->data << "\t";
}
bool check_loop(node head)
{
	if (head == NULL)
		return 0;
	node p, q;
	p = head;
	q = head;
	while (1)
	{
		p = p->next;
		if (q->next != NULL)
			q = q->next->next;
		else return 0;
		if (q == NULL || p == NULL)
			return 0;
		if (q == p)
			return 1;
	}
}