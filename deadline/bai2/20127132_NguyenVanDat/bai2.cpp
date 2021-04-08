#include "Header.h"
int countHi2(char a[])
{
	int count = 0;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == 'h' && a[i + 1] == 'i' && a[i - 1] != 'x')
			count++;
	}
	return count;
}