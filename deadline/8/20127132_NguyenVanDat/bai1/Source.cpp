#include "Header.h"
node createNode(int x)
{
	node tmp = new ListNode;
	tmp->value = x;
	tmp->next = NULL;
	return tmp;
}
node init()
{
	node p = NULL;
	return p;
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
node clearNode(node head)
{
	node p = head;
	while (p != NULL)
		p = p->next;
	return p;
}
node input()
{
	node p = init();
	int n, x;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	cout << "Nhap cac phan tu: ";
	while (n--)
	{
		cin >> x;
		p = addHead(p, x);
	}
	return p;
}
void traverses(node head)
{
	cout << endl;
	for (node p = head; p != NULL; p = p->next)
		cout << p->value << "\t";
}