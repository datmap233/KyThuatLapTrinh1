#include "Header.h"
void bai7(char* a)
{
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == ' ')
		{
			cout << a[i + 1];
			break;
		}
	}
}