#include "Header.h"
node createNode(p data)
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
node addHead(node head, p data)
{
	node p = createNode(data);
	if (head == NULL)
		head = p;
	else
	{
		p->next = head;
		head = p;
	}
	return head;
}
node addAlt(node head, p data)
{
	node p = createNode(data);
	if (head == NULL)
		head = addHead(head, data);
	else
	{
		node h = head;
		while (h->next != NULL)
			h = h->next;
		h->next = p;
	}
	return head;
}

int valueX(node head, int x)
{
	node p = head;
	int value = 0;
	while (p != NULL)
	{
		value = value + p->data.a * pow(x, p->data.n);
		p = p->next;
	}
	return value;
}

void sum(node head, node sub, node &p3)
{
	node p1 = head;
	node p2 = sub;
	while (p1 != NULL || p2 != NULL)
	{
		if (p1->data.n == p2->data.n)
		{
			p1->data.a += p2->data.a;
			p3 = addAlt(p3, p1->data);
			p1 = p1->next;
			p2 = p2->next;
		}
		else if (p1->data.n > p2->data.n)
		{
			p3 = addAlt(p3, p1->data);
			p1 = p1->next;
		}
		else
		{
			p3 = addAlt(p3, p2->data);
			p2 = p2->next;
		}
	}
}

bool check_same(node p5, int n)
{
	node m = p5;
	while (m != NULL)
	{
		if (m->data.n == n)
			return 0;
		m = m->next;
	}
	return 1;
}
void sort(node head)
{
	node m, n;
	for (m = head; m!=NULL;m=m->next)
		for (n = m->next; n != NULL; n = n->next)
		{
			if (m->data.n < n->data.n)
			{
				p tmp;
				tmp = m->data;
				m->data = n->data;
				n->data = tmp;
			}
		}
}
void multiply(node head, node sub, node& p5)
{
	node p1 = head;
	node p2, p3 = NULL;
	p n;
	while (p1 != NULL)
	{
		p2 = sub;
		while (p2 != NULL)
		{
			n.a = p1->data.a * p2->data.a;
			n.n = p1->data.n + p2->data.n;
			p3 = addAlt(p3, n);
			p2 = p2->next;
		}
		p1 = p1->next;
	}
	node p4;;
	while (p3 != NULL)
	{
		p4 = p3->next;
		if (check_same(p5, p3->data.n))
		{
			while (p4 != NULL)
			{
				if (p3->data.n == p4->data.n)
					p3->data.a += p4->data.a;
				p4 = p4->next;
			}
			p5 = addAlt(p5, p3->data);
		}
		else {
			p3 = p3->next;
			continue;
		}
		p3 = p3->next;
	}
	sort(p5);
}
void printP(p x, int head)
{
	if (x.a != 0)
	{
		if (head != 1)
		{
			if (x.a > 0)
				cout << " + ";
			else
			{
				x.a = (-1) * x.a;
				cout << " - ";
			}
		}
		if (x.a!=1)
		cout << x.a;
		x.a = (-1) * x.a;
		if (x.n == 1)
			cout << "x";
		else if (x.n != 0)
		{
			cout << "x^";
			cout << x.n;
		}
		
	}
}

void printList(node head)
{
	node p = head;
	int m = 1;
	while (p != NULL)
	{
		printP(p->data, m);
		p = p->next;
		m++;
	}
}

node input()
{
	node head = init();
	int n;
	struct p x;
	cout << "Nhap so mu: ";
	cin >> n;
	int m = n;
	while (m>=0)
	{
		cout << "Nhap he so x^" << m << ": ";
		cin >> x.a;
		x.n = m;
		head = addAlt(head, x);
		m--;
	}
	return head;
}