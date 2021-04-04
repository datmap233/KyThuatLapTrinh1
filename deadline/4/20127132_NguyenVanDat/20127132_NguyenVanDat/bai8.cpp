#include "Header.h"
void swap_by_ptr(int *m, int *n)
{
	int tmp = *m;
	*m = *n;
	*n = tmp;
}
void swap_by_ref(int& m, int& n)
{
	int tmp;
	tmp = m;
	m = n;
	n = tmp;
}
void swap_ptr_by_ref(int*& m, int*& n)
{
	int tmp = *m;
	*m = *n;
	*n = tmp;
}