#pragma once
#include "Header.h"
int main()
{
	string s;
	cout << "Input string: ";
	getline(cin, s);
	if (is_palindrome(s))
		cout << "String is Palindromes\n";
	else cout << "String isn't Palindromes\n";
}