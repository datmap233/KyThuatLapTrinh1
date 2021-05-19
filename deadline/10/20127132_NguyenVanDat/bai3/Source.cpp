#include "Header.h"
bool is_palindrome(string s)
{
	stack<char> st;
	queue<char> qu;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != ' ')
		{
			st.push(s[i]);
			qu.push(s[i]);
		}
	}
	while (!st.empty())
	{
		if (st.top() != qu.front())
			return 0;
		st.pop();
		qu.pop();
	}
	return 1;
}