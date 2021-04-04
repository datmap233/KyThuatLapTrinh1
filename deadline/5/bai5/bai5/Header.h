#pragma once
#include <iostream>
using namespace std;
typedef struct linkList
{
    int data;
    struct linkList* next;
};
typedef struct linkList* node;
node head = NULL;
node createNode(int x);
node addFirst(node head, int x);
node addLast(node head, int x);
int sum(node head);
int find_x(node head, int x);
void sort(node head);
node input();
void output(node head);