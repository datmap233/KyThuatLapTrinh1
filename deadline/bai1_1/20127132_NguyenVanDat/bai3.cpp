#include "Header.h"
long double Fibonacci(int n)
{
	if (n < 0)
		return 0;
	else if (n == 1 || n == 0)
		return n;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}