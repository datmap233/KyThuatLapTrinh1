#include "Header.h"
int main()
{
	Queue a;
	for (int i = 0; i <= 1000; ++i) {
		a.push(i);
	}
	while (!a.isEmpty()) {
		cout << a._front() << " ";
		a.pop();
	}
	a.pop();
	return 0;
}