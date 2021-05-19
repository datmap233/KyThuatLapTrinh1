#include "Header.h"
void openFile(set<char> &a)
{
	ifstream fi;
	fi.open("text.txt");
	char n;
	while (fi >> n)
	{
		if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
			a.insert(n);
	}
	fi.close();
}
void print(set<char> a)
{
	cout << "List:\n";
	int i = 1;
	for (auto e : a)
	{
		cout << i << ". " << e << endl;
		i++;
	}
	return;
}