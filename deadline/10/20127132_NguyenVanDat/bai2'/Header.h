#pragma once
#include <iostream>
using namespace std;
struct Queue {
	static const int size = 1001;
	int arr[size];
	int front = 0;
	int bot = -1; //bottom
	bool isEmpty()
	{
		if (bot == -1 || front > bot)
			return 1;
		return 0;
	}
	bool isFull()
	{
		if (bot == size - 1)
			return 1;
		return 0;
	}
	void push(int x)
	{
		if (isFull())
		{
			cout << "\nArray is full\n";
			return;
		}
		arr[++bot] = x;
	}
	void pop()
	{
		if (isEmpty())
		{
			cout << "\nArray is empty\n";
			return;
		}
		arr[front++] = 0;
	}
	int _front()
	{
		return arr[front];
	}
	int _back()
	{
		return arr[bot];
	}
};