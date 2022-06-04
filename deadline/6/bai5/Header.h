#pragma once
#include <iostream>
#include <stdio.h>
using namespace std;
struct linkedList
{
	int data;
	linkedList* next;
};
typedef struct linkedList* node;

node createNode(int data);
int length(node head);
node addHead(node head, int data);
node addLast(node head, int data);
node add_pos(node head, int data, int pos);
node del_val(node head, int data);
node del_pos(node head, int pos);
void printList(node head);