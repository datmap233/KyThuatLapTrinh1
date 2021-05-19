#pragma once
#include <iostream>
using namespace std;
struct Stack {
	static const int size = 1001;
	char arr[size];
	int top = -1;
	bool isEmpty()
	{
		if (top == -1)
			return 1;
		return 0;
	}
	bool isFull()
	{
		if (top == size - 1)
			return 1;
		return 0;
	}
	void push(char x)
	{
		if (isFull())
		{
			cout << "\nArray is full\n";
			return;
		}
		arr[++top] = x;
	}
	void pop()
	{
		if (isEmpty())
		{
			cout << "\nArray is empty\n";
			return;
		}
		arr[top--] = '\0';
	}
	char _top()
	{
		return arr[top];
	}
};