#include "Header.h"
int find_first(char a[], char b[], int n, int m, int k)
{
	if (n > strlen(a) - 1)
		return 0;
	else if (a[n] == b[m])
	{
		if (k < strlen(b) - 1)
		{
			k += 1;
			return find_first(a, b, n + 1, m + 1, k);
		}
		else return n - strlen(b) + 1;
	}
	else if (a[n] != b[m])
		k = 0;
	return find_first(a, b, n + 1, 0, k);
}
int find_last(char a[], char b[], int n, int m, int k)
{
	if (a[n] < 0)
		return 0;
	else if (a[n] == b[m])
	{
		if (k < strlen(b) - 1)
		{
			k += 1;
			return find_last(a, b, n - 1, m - 1, k);
		}
		else return n + strlen(b) - 1;
	}
	else if (a[n] != b[m])
		k = 0;
	return find_last(a, b, n - 1, strlen(b) - 1, k);
}

int count_string(char a[], char b[])
{
	int count = find_last(a, b, strlen(a) - 1, strlen(b) - 1, 0) - find_first(a, b, 0, 0, 0) + 1;
	return count;
}