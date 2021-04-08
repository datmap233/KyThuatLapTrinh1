#include "Header.h"
bool isPalindrome(int left, int right, char* s)
{
	if (s[left] != s[right])
		return false;
	else if (left > right)
		return true;
	else
		return isPalindrome(left + 1, right - 1, s);
}