#include <iostream>
using namespace std;
struct ListNode
{
	int value;
	struct ListNode* next;
};
typedef struct ListNode* node;
//extern ListNode* head;
node createNode(int x);
node init();
node addHead(node head, int x);
node input();
void traverses(node head);
node clearNode(node head);