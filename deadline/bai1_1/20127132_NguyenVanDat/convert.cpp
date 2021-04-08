#include "Header.h"
bool check_number(char a[])// kiem tra so vua nhap co phai so nguyen hay khong
{
	if (a[0] == NULL)
		return false;
	for (int i = 0; i < strlen(a); i++)
	{
		if (int(a[i]) < 48 || int(a[i]) > 57)
			return false;
	}
	return true;
}
bool check_number_bai8(char a[])// kiem tra so vua nhap co phai so nguyen hay khong
{
	if (a[0] == NULL)
		return false;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[0] == '-')
			continue;
		else if (int(a[i]) < 48 || int(a[i]) > 57)
			return false;
	}
	return true;
}
int convert(char a [])//chuyển char thành int
{
	int number = 0;
	for (int i = strlen(a)-1; i >= 0 ; i--)
	{
		if (a[i] == '-')
			continue;
		number = number * 10 + int(a[i] - '0');
	}
	if (a[0] == '-')
		number *= -1;
	return number;
}