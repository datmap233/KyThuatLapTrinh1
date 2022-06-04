#pragma once
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
node add_pos(node head, int x, int pos);
node input();
void printList(node head);
node append(node head, node sub);
int length(node head);
node delHead(node head);
node delLast(node head);
node del_pos(node head, int pos);
node destroy(node head);
int Search(node head, int x);
node reverse(node head);