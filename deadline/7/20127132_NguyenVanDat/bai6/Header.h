#pragma once
#include <iostream>
using namespace std;
struct p
{
	int a;
	int n;
};
struct linkedList
{
	p data;
	linkedList* next;
};
typedef struct linkedList* node;

node createNode(p data);
node init();
node addHead(node head, p data);
void Traverser(node head);
node input();
void printList(node head);
void sum(node head, node sub, node& p3);
int valueX(node head, int x);
void multiply(node head, node sub, node& p5);