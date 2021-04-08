#include "Header.h"
int count(int n)
{
	if (n % 10 == n)
		return 1;
	else
		return count(n / 10) + 1;
}
int sum_number(int n)//tổng tất cả các chữ số
{
	if (n % 10 == n)
		return n;
	else
		return sum_number(n / 10) + n % 10;
}
int tich_soLe(int n)//tich chu so le
{
	if (n == 0)
		return 1;
	else if ((n % 10) %2 != 0)
		return tich_soLe(n / 10) * (n % 10);
}
bool check_chan(int n)
{
	if (n == 0)
		return true;
	else if ((n % 10) % 2 != 0)
		return false;
	return check_chan(n / 10);
}
bool check_le(int n)
{
	if (n == 0)
		return true;
	else if ((n % 10) % 2 == 0)
		return false;
	return check_le(n / 10);
}