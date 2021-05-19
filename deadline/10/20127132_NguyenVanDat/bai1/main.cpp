#include "Header.h"
int main()
{
	int i = 0;
	Stack a;
	for (char x = 33; x <= 126; x++)
	{
		a.push(x);
		if (i == a.size)
			break;
		if (x == 126)
			x = 33;
		i++;
	}
	while (!a.isEmpty())
	{
		cout << a._top() << "\t";
		a.pop();
	}
	a.pop();
	return 0;
}