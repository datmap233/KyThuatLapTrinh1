#pragma once
#include <iostream>
using namespace std;
struct LinkedList
{
	int data;
	LinkedList* next;
};
typedef struct LinkedList* node;
node createNode(int data);
node init();
node addHead(node head, int data);
int sum(node head);
bool findX(node head, int x);
void sort(node head);
void Traverser(node head);
node input();