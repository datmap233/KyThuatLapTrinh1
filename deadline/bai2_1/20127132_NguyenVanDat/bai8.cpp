#include "Header.h"
int helper_method(int chocolate, int wrap)
{
	int n = chocolate / wrap;
	if (chocolate == 0)
		return 0;
	if (chocolate - wrap < wrap)
		if ((n + chocolate - wrap) % wrap == 0)
			return chocolate + (n + chocolate) / wrap;
	return helper_method(n, wrap) + chocolate;
}