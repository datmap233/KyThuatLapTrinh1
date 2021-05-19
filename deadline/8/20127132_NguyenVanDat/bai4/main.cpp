#include "Header.h"
int main()
{
	node head = input();
	printList(head);
	node p = head;
	while (p->next != NULL)
		p = p->next;
	p->next = head;
	if (check_loop(head))
		cout << "\nLoop found\n";
	else
		cout << "\nNo loop\n";
	return 0;
}