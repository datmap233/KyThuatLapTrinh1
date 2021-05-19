#include <iostream>
using namespace std;
struct linkedList
{
	int data;
	linkedList* next;
};
typedef struct linkedList* node;

node createNode(int data);
node init();
node addHead(node head, int x);
node addLast(node head, int x);
node input();
void printList(node head);
bool check_loop(node head);