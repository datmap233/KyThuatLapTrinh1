#include "Header.h"
node createNode(int data)
{
	node p = new LinkedList;
	p->data = data;
	p->next = NULL;
	return p;
}
node init()
{
	node head;
	head = NULL;
	return head;
}
node addHead(node head, int data)
{
	node tmp = createNode(data);
	if (head == NULL)
		head = tmp;
	else
	{
		tmp->next = head;
		head = tmp;
	}
	return head;
}

int sum(node head)
{
	int count = 0;
	for (node p = head; p != NULL; p = p->next)
		count += p->data;
	return count;
}

bool findX(node head, int x)
{
	for (node p = head; p != NULL; p = p->next)
		if (p->data == x)
			return 1;
	return 0;
}

void sort(node head)
{
	node m, n;
	for (m=head;m!=NULL;m=m->next)
		for (n=m->next;n!=NULL; n=n->next)
			if (m->data > n->data)
			{
				int tmp = m->data;
				m->data = n->data;
				n->data = tmp;
			}
}

void Traverser(node head)
{
	for (node p = head; p != NULL; p = p->next)
		cout << p->data << "\t";
}
node input()
{
	node head = init();
	int data, n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	while (n--)
	{
		cin >> data;
		head = addHead(head, data);
	}
	return head;
}