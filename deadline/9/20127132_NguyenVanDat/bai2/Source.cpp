#include "Header.h"
int lambda(int a, int b)
{
	return a * b;
}
void  multiply(int a, int b, int (*lambda)(int a, int b))
{
	int product = lambda(a, b);
	cout << product << endl;
	return;
}